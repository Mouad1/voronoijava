#!BPY
 
# Une cyclide de Dupin, sous forme de Mesh
__author__ = "francesco de comite"
__version__ = "1.0 2014/04/29"
__url__="Website, www.lifl.fr/decomite"
 
 
##############################################################
# load the modules used in the script
import bpy
import math
import mathutils
from mathutils import *

from math import *
##############################################################
#un tore
# R : grand rayon
# r : petit rayon
# n : nombre de sections
# p : nombre de points sur une section
def tore(R,r,n,p):
    me=bpy.data.meshes.new('tore')
    coords=[[0,0,0] for i in range(n*p)]
    faces=[]
    for i in range(n): 
        for j in range(p):
                coords[i*p+j]=[(R+r*cos(2*j*pi/p))*cos(2*i*pi/n),(R+r*cos(2*j*pi/p))*sin(2*i*pi/n),r*sin(2*j*pi/p)]
    for i in range(n):
        #relier la couronne numero i a la couronne (i+1)%n
        depart=i*p
        arrivee=((i+1)*p)%(n*p)
        for j in range(p):
            faces.append([depart+j,arrivee+j,depart+(j+1)%p])
            faces.append([depart+(j+1)%p,arrivee+j,arrivee+(j+1)%p])
            
    me.from_pydata(coords,[],faces)   
    me.update(calc_edges=True) 
    return me          

def cyclide2(mu,c,a,nbc,nbd):
 b=sqrt(a*a-c*c)
 omega=(a*mu+b*sqrt(mu*mu-c*c))/c
 den=(a-c)*(mu-c)+b*sqrt(mu*mu-c*c)
 krap=1/den
 r=krap*c*c*(mu-c)/(den*((a+c)*(mu-c)+b*sqrt(mu*mu-c*c)))
 R=krap*c*c*(a-c)/(den*((a-c)*(mu+c)+b*sqrt(mu*mu-c*c)))
 xOmega=omega-krap*b*b*(omega-c)/(((a-c)*(mu+omega)-b*b)*((a+c)*(omega-c)+b*b))
 me=bpy.data.meshes.new('cyclide')
 coords=[[0,0,0] for i in range(nbc*nbd)]
 faces=[]
 b2=a*a-c*c
 for k in range(nbc):
  theta=2*pi*k/nbc
  cost=cos(theta)
  sint=sin(theta)
  for j in range(nbd):
   alpha=2*pi*j/nbd
   cosa=cos(alpha)
   sina=sin(alpha)
   denom=a-c*cost*cosa
   mx=(mu*(c-a*cost*cosa)+b2*cost)/denom
   my=sqrt(b2)*sint*(a-mu*cosa)/denom
   mz=sqrt(b2)*sina*(c*cost-mu)/denom
   coords[k*nbd+j]=[mx,my,mz] 
 # les faces
 for k in range(nbc):
  for j in range(nbd):
   #faire deux faces a partir de i (je me comprends)
   coinA=k*nbd+j; 
   coinB=k*nbd+(j+1)%nbd
   coinC=((k+1)%nbc)*nbd+j
   coinD=((k+1)%nbc)*nbd+(j+1)%nbd	
   faces.append([coinA,coinD,coinB])
   faces.append([coinA,coinC,coinD])


 me.from_pydata(coords,[],faces)   # edges or faces should be [], or you ask for problems
 me.update(calc_edges=True) 
 return me
#fin de la fonction

#Les parametres de la cyclide
b=0
omega=0
den=0
krap=0
r=0
R=0
xOmega=0

def den1(t,theta,epsilon):
    auxi=xomega-sqrt(R*r-r*r)*cos(theta)*sin(t)-epsilon*(r+R*cos(t)*sin(theta)-omega)
    return auxi*auxi

def den2(t,theta,epsilon):
    auxi=-sqrt(R*R-r*r)*sin(theta)*sin(t)+epsilon*(r+R*cos(t))*cos(theta)
    return auxi*auxi

def numx(t,theta,epsilon):
    return -sqrt(R*R-r*r)*cos(theta)*sin(t)-epsilon*(r+R*cos(t))*sin(theta)

def valX(t,theta,epsilon):
    numer=krap*(xOmega-omega+numx(t,theta,epsilon))
    denim=den1(t,theta,epsilon)+den2(t,theta,epsilon)+r*r*sin(t)*sin(t)
    return omega+numer/denim

def valY(t,theta,epsilon):
    denim=den1(t,theta,epsilon)+den2(t,theta,epsilon)+r*r*sin(t)*sin(t)
    numer=krap*(-sqrt(R*R-r*r)*sin(theta)*sin(t)+epsilon*(r+R*cos(t))*cos(theta))
    return numer/denim

def valZ(t,theta,epsilon):
    denim=den1(t,theta,epsilon)+den2(t,theta,epsilon)+r*r*sin(t)*sin(t)
    return krap*r*sin(t)/denim


    

#Construire un tore sur un cercle de Villarcceau pour la cyclide de parametre a,mu,c
def villarceau(a,mu,c,theta,epsilon):
   # trois points du cercle
   point1=(valX(0,theta,epsilon),valY(0,theta,epsilon),valZ(0,theta,epsilon))
   point2=(valX(pi/3,theta,epsilon),valY(pi/3,theta,epsilon),valZ(pi/3,theta,epsilon))
   point3=(valX(2*pi/3,theta,epsilon),valY(2*pi/3,theta,epsilon),valZ(2*pi/3,theta,epsilon))
   vec12=point2-point1
   vec13=point3-point1
   planeNormal=vec12.cross(vec13)
   #passage de la bissectrice 1 2
   milieu12=(point1+point2)/2
   #vecteur directeur de la bissectrice 1 2
   dir12=vec12.cross(planeNormal)
   dir12.normalize()
   milieu13=(point1+point3)/2
   #vecteur directeur de la bissectrice 1 2
   dir13=vec13.cross(planeNormal)
   dir13.normalize()
   dirAux=milieu12-milieu13
   c1=dir13.cross(dirAux)
   c2=dir12.cross(dir13)
   nA=c1.dot(c2)
   d=c2.dot(c2)
   # Ouf, on a trouve le centre
   center=milieu12+nA/d*dir12
   radio=center-point1
   rayon=sqrt(radio.dot(radio))
   return center,rayon,planeNormal
   
   
      
    
    
 
#test
print("debut/n")

scn=bpy.context.scene

first=1
numero=0


nbc=100

nbd=150
r0=1.5
r1=0.75
rc=5

# renommage des parametres de la cyclide pour etre en accord avec Garnier
a=5
mu=r0
c=r1

myMesh=cyclide2(mu,c,a,nbc,nbd)

ob = bpy.data.objects.new('Dupin'+str(numero), myMesh)
bpy.context.scene.objects.link(ob) 
 
bpy.context.scene.objects.active = ob



# la meme cyclide avec les premiers cercles en tore

nbtore=30
for i in range(nbtore):
   theta=2*i*pi/nbtore
   denom=rc*rc-r1*r1*cos(theta)*cos(theta)
   rad1X=2*(r1*cos(theta)-r0)*(rc*rc-r1*r1)*cos(theta)/denom
   rad1Y=2*rc*sqrt(rc*rc-r1*r1)*sin(theta)*(r1*cos(theta)-r0)/denom
   rad1=0.5*sqrt(rad1X*rad1X+rad1Y*rad1Y)
   slide1X=rc*(r0*r1*sin(theta)*sin(theta)+(rc*rc-r1*r1)*cos(theta))/denom
   slide1Y=sqrt(rc*rc-r1*r1)*sin(theta)*(rc*rc-r0*r1*cos(theta))/denom
   p1=Vector([slide1X,slide1Y,0])
   trans=mathutils.Matrix.Translation(p1)
   myMesh=tore(rad1,0.05,200,20)
   rotata=mathutils.Matrix.Rotation(pi/2, 4, 'X') 
   myMesh.transform(rotata)
   rotata=mathutils.Matrix.Rotation(theta, 4, 'Z') 
   myMesh.transform(rotata)
   myMesh.transform(trans)
   localOb=bpy.data.objects.new('tore',myMesh)
   scn.objects.link(localOb)
   
   
     
vilain=villarceau(a,mu,c,pi/3,1)
 
