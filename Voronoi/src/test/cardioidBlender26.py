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


#function creating a torus
# R : grand rayon
# r : petit rayon
# n : nombre de troncons selon le grand rayon
# p : nombre de sections sur la tranche
def myTorus(R,r,n,p):
 me=bpy.ops.mesh.primitive_torus_add(major_segments=n,minor_segments=p,major_radius=R,minor_radius=r)
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
            faces.append([depart+j,depart+(j+1)%p,arrivee+j])
            faces.append([depart+(j+1)%p,arrivee+(j+1)%p,arrivee+j])
            
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
      
     
    



scn=bpy.context.scene
R=150
r=2
#bpy.ops.mesh.primitive_torus_add(major_segments=120,minor_segments=100,major_radius=R,minor_radius=r)
#bpy.ops.mesh.primitive_torus_add(major_segments=120,minor_segments=100,major_radius=R,minor_radius=r,rotation=(pi/2,0,0))

nbSteps=500
k1=2
k2=3
first=1
fil=0
numero=0
for i in range(nbSteps):
    p1=Vector([R*cos(2*k1*i*pi/nbSteps),R*sin(2*k1*i*pi/nbSteps),0])
    p2=Vector([R*cos(2*k2*i*pi/nbSteps),0,R*sin(2*k2*i*pi/nbSteps)])
   
    dd=p2-p1
    if (dd.length!=0):
        myMesh=cylindreOriente(p1,p2,0.8,20)

        if(first==1):
            ob=bpy.data.objects.new('fil'+str(numero),myMesh)
            bpy.context.scene.objects.link(ob) 
            bpy.context.scene.objects.active = ob
            numero+=1
            first=0
        else:
            localOb=bpy.data.objects.new('fil'+str(numero),myMesh)
            numero+=1
            scn.objects.link(localOb)


myMesh=tore(R,r,50,10)
localOb=bpy.data.objects.new('filtour1',myMesh)
scn.objects.link(localOb)
myMesh=tore(R,r,50,10)
rotata=mathutils.Matrix.Rotation(pi/2, 4, 'X') 
myMesh.transform(rotata)
localOb=bpy.data.objects.new('filtour2',myMesh)
scn.objects.link(localOb)

bpy.ops.object.select_pattern(extend=False, pattern="fil*", case_sensitive=False)
bpy.ops.object.join()   