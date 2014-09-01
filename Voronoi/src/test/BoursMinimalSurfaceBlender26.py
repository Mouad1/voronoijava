#!BPY
 
# Cardioides entierement en Blender
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
# une sphere
# R : rayon
# n : nombre de méridiens
# p : nombre de paralleles

def sphere(R,n,p):
    me=bpy.data.meshes.new('sphere')
    coords=[[0,0,0] for i in range(n*p+2)]
    faces=[]    
    
    # Les points
    for i in range(p): #les points sur un parallele
        zc=pi/2-(i+1)*pi/(p+1)
        for j in range(n):
            coords[j+i*n]=[R*cos(2*j*pi/n)*cos(zc),R*sin(2*j*pi/n)*cos(zc),R*sin(zc)]
    coords[n*p]=[0,0,R]
    coords[n*p+1]=[0,0,-R]
    
    #les faces
    # Calottes
    for i in range(n):
        faces.append([i,(i+1)%n,n*p])
        faces.append([i+(p-1)*n,n*p+1,(i+1)%n+(p-1)*n])
    
    # relier un parallele au suivant
    for i in range(p-1):
        for j in range(n):
            faces.append([(j+1)%n+n*i,j+n*i,j+n*(i+1)])
            faces.append([(j+1)%n+n*i,j+n*(i+1),(j+1)%n+n*(i+1)])
            
    me.from_pydata(coords,[],faces)   
    me.update(calc_edges=True) 
    return me          
           
    


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
            
# un cylindre
def cylindre(r,nbFaces,l):
 
 me=bpy.data.meshes.new('cylindre')
 coords=[[0,0,0] for i in range(2*nbFaces+2)]
 faces=[]

 coords[2*nbFaces]=[0,0,0]
 coords[2*nbFaces+1]=[0,l,0]
 
 for i in range(0,nbFaces):
     coords[i]=[r*cos(2*i*pi/nbFaces),0,r*sin(2*i*pi/nbFaces)]
     coords[i+nbFaces]=[r*cos(2*i*pi/nbFaces),l,r*sin(2*i*pi/nbFaces)]
    
 for i in range(0,nbFaces):
     faces.append([i,(i+1)%nbFaces,2*nbFaces])  
     faces.append([i+nbFaces,2*nbFaces+1,nbFaces+(i+1)%nbFaces])
     faces.append([(i+1)%nbFaces,i,i+nbFaces])
     faces.append([i+nbFaces,nbFaces+(i+1)%nbFaces,(i+1)%nbFaces])
    
 me.from_pydata(coords,[],faces)   # edges or faces should be [], or you ask for problems
 me.update(calc_edges=True) 
 return me
     
# construit une liste de points (la couronne) et l'oriente dans l'espace
def cylindreOriente(p1,p2,rayon,nbFaces):
 
 # use the class constructors from Blender to form vectors for p1 and p2
 p1 = Vector(p1)
 p2 = Vector(p2)
 # form a vector that points in the direction from p1 to p2
 dir = p2-p1             
 # get the length of the line we want that goes from p1 to p2
 length = dir.length
 me=cylindre(rayon,nbFaces,length)
 dir.normalize()
 u = dir
 uu = Vector([0,1.0,0])
 if abs(u.angle(uu))>1e-6:
  v=u.cross(uu)
  A=Matrix.Rotation(-u.angle(uu),4,v)
 else:
  A = Matrix((
    (1,0,0,0),
    (0,1,0,0),
    (0,0,1,0),
    (0,0,0,1)))
  
 # apply the transform to the cylinder  
 
 me.transform(A)
 trans=mathutils.Matrix.Translation(p1)
 me.transform(trans)
 return me
      
       
# un cylindre
def cylindre(r,nbFaces,l):
 
 me=bpy.data.meshes.new('cylindre')
 coords=[[0,0,0] for i in range(2*nbFaces+2)]
 faces=[]

 coords[2*nbFaces]=[0,0,0]
 coords[2*nbFaces+1]=[0,l,0]
 
 for i in range(0,nbFaces):
     coords[i]=[r*cos(2*i*pi/nbFaces),0,r*sin(2*i*pi/nbFaces)]
     coords[i+nbFaces]=[r*cos(2*i*pi/nbFaces),l,r*sin(2*i*pi/nbFaces)]
    
 for i in range(0,nbFaces):
     faces.append([i,(i+1)%nbFaces,2*nbFaces])  
     faces.append([i+nbFaces,2*nbFaces+1,nbFaces+(i+1)%nbFaces])
     faces.append([(i+1)%nbFaces,i,i+nbFaces])
     faces.append([i+nbFaces,nbFaces+(i+1)%nbFaces,(i+1)%nbFaces])
    
 me.from_pydata(coords,[],faces)   # edges or faces should be [], or you ask for problems
 me.update(calc_edges=True) 
 return me
     
# construit une liste de points (la couronne) et l'oriente dans l'espace
def cylindreOriente(p1,p2,rayon,nbFaces):
 
 # use the class constructors from Blender to form vectors for p1 and p2
 p1 = Vector(p1)
 p2 = Vector(p2)
 # form a vector that points in the direction from p1 to p2
 dir = p2-p1             
 # get the length of the line we want that goes from p1 to p2
 length = dir.length
 me=cylindre(rayon,nbFaces,length)
 dir.normalize()
 u = dir
 uu = Vector([0,1.0,0])
 if abs(u.angle(uu))>1e-6:
  v=u.cross(uu)
  A=Matrix.Rotation(-u.angle(uu),4,v)
 else:
  A = Matrix((
    (1,0,0,0),
    (0,1,0,0),
    (0,0,1,0),
    (0,0,0,1)))
  
 # apply the transform to the cylinder  
 
 me.transform(A)
 trans=mathutils.Matrix.Translation(p1)
 me.transform(trans)
 return me


k1=1.5
k2=8
k3=0.5
      
def calculPoint(r,t):
	point=Vector((r*cos(t)-0.5*r*r*cos(k1*t),-r*sin(t)-0.5*r*r*sin(k1*t),k3*r*sqrt(r)*cos(k2*t)))
	return 50*point     


scn=bpy.context.scene

catenaName='un'



first=1
numero=0
radio=0.5

rmax=1
thetamax=6*pi
stepr=1/6.0
steptheta=pi/50
rcur=stepr

while(rcur<rmax):
    thetacur=0
    while(thetacur<=thetamax):
        point=calculPoint(rcur,thetacur)
        ps=calculPoint(rcur,thetacur-steptheta)
        ppred=calculPoint(rcur-stepr,thetacur)
       
          
        mySphere=sphere(radio,10,10)
        A=mathutils.Matrix.Translation(point)
        mySphere.transform(A)

        if(first==1):
            ob=bpy.data.objects.new(catenaName+str(numero),mySphere)
            bpy.context.scene.objects.link(ob) 
            bpy.context.scene.objects.active = ob
            numero+=1
            first=0
        else:
            localOb=bpy.data.objects.new(catenaName+str(numero),mySphere)
            numero+=1
            scn.objects.link(localOb)
        if((ppred-point).length>1e-6):    
            myCylindre=cylindreOriente(point,ppred,radio,12)    
            localOb=bpy.data.objects.new(catenaName+str(numero),myCylindre)
            numero+=1
            scn.objects.link(localOb)    
      
        myCylindrebis=cylindreOriente(point,ps,radio,12)    
        localOb=bpy.data.objects.new(catenaName+str(numero),myCylindrebis)
        numero+=1
        scn.objects.link(localOb)   
        thetacur=thetacur+steptheta 
        
    rcur=rcur+stepr
    

            
bpy.ops.object.select_pattern(extend=False, pattern=catenaName+'*', case_sensitive=False)
bpy.ops.object.join()   
