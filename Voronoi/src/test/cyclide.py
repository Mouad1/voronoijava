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

def cyclide2(r0,r1,rc,nbc,nbd):
 me=bpy.data.meshes.new('cyclide')
 coords=[[0,0,0] for i in range(nbc*nbd)]
 faces=[]
 b2=rc*rc-r1*r1
 for k in range(nbc):
  theta=2*pi*k/nbc
  cost=cos(theta)
  sint=sin(theta)
  for j in range(nbd):
   alpha=2*pi*j/nbd
   cosa=cos(alpha)
   sina=sin(alpha)
   denom=rc-r1*cost*cosa
   mx=(r0*(r1-rc*cost*cosa)+b2*cost)/denom
   my=sqrt(b2)*sint*(rc-r0*cosa)/denom
   mz=sqrt(b2)*sina*(r1*cost-r0)/denom
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


#fonction creant une cyclide de Dupin
#pour le moment, seulement un sac a main, on verifiera par la suite
# r0+r1 et r0-r1 sont les deux rayons des cercles associes
# r0>r1
# rc rayon du cercle central
# nombre de cercles : nbc
# nombre de division sur un cercle : nbd

def cyclide2(r0,r1,rc,nbc,nbd):
 b2=sqrt(rc*rc-r1*r1)    
 me=bpy.data.meshes.new('cyclide')
 coords=[[0,0,0] for i in range(nbc*nbd)]
 faces=[]
 for k in range(nbc):
  theta=2*pi*k/nbc
  cosinus=cos(theta)
  sinus=sin(theta)
  for j in range(nbd):
   alpha=2*pi*j/nbd   
   denom=rc-r1*cos(theta)*cos(alpha)
   mx=(r0*(r1-rc*cos(theta)*cos(alpha))+b2*b2*cos(theta))/denom
   my=(b2*sin(theta)*(rc-r0*cos(alpha)))/denom
   mz=(b2*sin(alpha)*(r1*cos(theta)-r0))/denom
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
   
   
def cyclide(r0,r1,rc,nbc,nbd):
 me=bpy.data.meshes.new('cyclide')
 coords=[[0,0,0] for i in range(nbc*nbd)]
 faces=[]
 for k in range(nbc):
  theta=2*pi*k/nbc
  cosinus=cos(theta)
  sinus=sin(theta)
  for j in range(nbd):
   alpha=2*pi*j/nbd
   rayon=r0+r1*cosinus
   
   coords[k*nbd+j]=[(rc+rayon*cos(alpha))*cosinus,(rc+rayon*cos(alpha))*sinus,rayon*sin(alpha)] 
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
 

 
#test
print("debut/n")

scn=bpy.context.scene

first=1
numero=0


nbc=100

nbd=50
r0=1.5
r1=0.75
rc=5
myMesh=cyclide2(r0,r1,rc,nbc,nbd)

ob = bpy.data.objects.new('Dupin'+str(numero), myMesh)
bpy.context.scene.objects.link(ob) 
 
bpy.context.scene.objects.active = ob


"""
#declare theta=0;
#declare nbSteps=10; 
#declare incT=2*pi/nbSteps; 
#declare index=0; 
#while(index<nbSteps)
#declare rad1X=2*(r1*cos(theta)-r0)*(rCercle*rCercle-r1*r1)*cos(theta)/(rCercle*rCercle-r1*r1*cos(theta)*cos(theta)); 
#declare rad1Y=2*rCercle*sqrt(rCercle*rCercle-r1*r1)*sin(theta)*(r1*cos(theta)-r0)/(rCercle*rCercle-r1*r1*cos(theta)*cos(theta)); 
#declare rad1=0.5*sqrt(rad1X*rad1X+rad1Y*rad1Y); 

#declare slide1X=rCercle*(r0*r1*sin(theta)*sin(theta)+(rCercle*rCercle-r1*r1)*cos(theta))/(rCercle*rCercle-r1*r1*cos(theta)*cos(theta)); 
#declare slide1Y=sqrt(rCercle*rCercle-r1*r1)*sin(theta)*(rCercle*rCercle-r0*r1*cos(theta))/(rCercle*rCercle-r1*r1*cos(theta)*cos(theta)); 

//#declare rad1=0.5*2*sqrt(rCercle*rCercle-r1*r1)*(r1*cos(theta)-r0)/sqrt(rCercle*rCercle-r1*r1*cos(theta)*cos(theta)); 


torus{rad1,rado texture{pigment{color Green}} 
rotate 90*x
rotate -180/pi*theta*y
translate <slide1X,0,slide1Y>
}

//torus{rad2,rado texture{pigment{color Green}} translate -rCercle*x}

/*
rotate 90*x
rotate 180/pi*theta*y
translate -r0*r1/rCercle*x
*/

#declare theta=theta+incT; 
#declare index=index+1; 
#end
"""
# la meme cyclide avec eles premiers cercles en tore
p1=(-r0*r1/rC,0,0)
trans=mathutils.Matrix.Translation(p1)
for i in range(10):
   theta=2*i*pi/10
   denom=rc*rc-r1*r1*cos(theta)
   rad1X=2*(r1*cos(theta)-r0)*(rc*rc-r1*r1)*cos(theta)/denom
   rad1Y=2*rc*sqrt(rc*rc-r1*r1)*sin(theta)*(r1*cos(theta)-r0)/denom
   rad1=0.5*sqrt(rad1X*rad1X+rad1Y*rad1Y)
   slide1X=rc*(r0*r1*sin(theta)*sin(theta)+(rc*rc-r1*r1)*cos(theta))/denom
   slide1Y=sqrt(rc*rc-r1*r1)*sin(theta)*(rc*rc-r0*r1*cos(theta))/denom
   
   myMesh=tore(rad1,0.3,200,20)
   rotata=mathutils.Matrix.Rotation(pi/2, 4, 'X') 
   myMesh.transform(rotata)
   rotata=mathutils.Matrix.Rotation(theta, 4, 'Z') 
   myMesh.transform(rotata)
   me.transform(trans)
   localOb=bpy.data.objects.new('tore'+i,myMesh)
   scn.objects.link(localOb)
   
   
     
  
 
