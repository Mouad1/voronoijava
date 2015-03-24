#!BPY
 
#
__author__ = "francesco de comite"
__version__ = "1.0 2014/04/29"
__url__="Website, www.lifl.fr/decomite"
 
 
##############################################################
# load the modules used in the script
import Blender
import bpy
from Blender import *
from Blender.Scene import Render
from Blender import Text
from Blender import Mathutils
from Blender.Mathutils import *
import math
from Blender import Mesh
from math import *
##############################################################


def mySphere(p,r):
 me=Mesh.Primitives.UVsphere(12,12,r)
 dir=Vector(p)
 A = Matrix(
    [1,0,0,0],
    [0,1,0,0],
    [0,0,1,0],
    [dir[0],dir[1],dir[2],1])
 
 # apply the transform to the sphere
 me.transform(A,True)
 return me



#fonction creant une lunule
# R : rayon des cercles
# l : distance entre les centres
# ep : epaisseur de la lunule
# nb : nombre de sections de la lunule
# Nombre de sommets : 4nb+4
# nombre de faces : 8nb+4 
def lunule(R,l,ep,nb):
 me=bpy.data.meshes.new('lunule')
 coords=[]
 faces=[]
 for i in range(4*nb+4):
  coords.append([0,0,0])
 # Face superieure 
 #premiere pointe de la lunule
 #coords.insert(0,[0,ep/2,sqrt(R*R-l*l/4)])
 coords[0]=[0,ep/2,sqrt(R*R-l*l/4)]
 #coords.insert(2*nb+2,[0,-ep/2,sqrt(R*R-l*l/4)])
 coords[2*nb+2]=[0,-ep/2,sqrt(R*R-l*l/4)]
 #deuxieme pointe de la lunule
 #coords.insert(2*nb+1,[0,ep/2,-sqrt(R*R-l*l/4)])
 coords[2*nb+1]=[0,ep/2,-sqrt(R*R-l*l/4)]
 #coords.insert(2*nb+1+2*nb+2,[0,-ep/2,-sqrt(R*R-l*l/4)])
 coords[2*nb+1+2*nb+2]=[0,-ep/2,-sqrt(R*R-l*l/4)]
 #Les points 
 for index in range(1,nb+1):
  ti=tan(pi/2-index*pi/(nb+1))
  delta=sqrt(4*R*R*(1+ti*ti)-ti*ti*l*l)
  vx=(-l+delta)/(2*(1+ti*ti))
  #interieur (superieur puis inferieur)	
  #coords.insert(2*index,[vx,ep/2,ti*vx])
  coords[2*index]=[vx,ep/2,ti*vx]
  #coords.insert(2*index+2*nb+2,[vx,-ep/2,ti*vx])
  coords[2*index+2*nb+2]=[vx,-ep/2,ti*vx] 
  vx=(l+delta)/(2*(1+ti*ti))
  #coords.insert(2*index-1,[vx,ep/2,ti*vx])
  coords[2*index-1]=[vx,ep/2,ti*vx]
  #coords.insert(2*index-1+2*nb+2,[vx,-ep/2,ti*vx])
  coords[2*index-1+2*nb+2]=[vx,-ep/2,ti*vx]
 # fin de la boucle pour les points
 #Definition des faces
 #face superieure
 faces.append([0,1,2])
 print 0,"*",0,1,2
 #faces.append([2*nb-1,2*nb,2*nb+1])
 faces.append([2*nb-1,2*nb+1,2*nb])
 print 2*nb-1,"*",2*nb-1,2*nb,2*nb+1
 #face inferieure
 faces.append([0+2*nb+2,1+2*nb+2,2+2*nb+2])
 print 	0+2*nb,"*   ",0+2*nb+2,1+2*nb+2,2+2*nb+2
 faces.append([2*nb-1+2*nb+2,2*nb+2*nb+2,2*nb+1+2*nb+2])
 print 2*nb-1+2*nb,"*    ",2*nb-1+2*nb+2,2*nb+2*nb+2,2*nb+1+2*nb+2
 #triangles des faces superieure et inferieure
 for index in range(1,nb):	
  #face superieure	
  faces.append([2*index-1,2*index,2*index+2])
  print 2*index-1,"*    ",2*index-1,2*index,2*index+2
  faces.append([2*index-1,2*index+2,2*index+1])
  print 2*index,"*    ",2*index-1,2*index+2,2*index+1
  #face inferieure
  faces.append([2*index-1+2*nb+2,2*index+2*nb+2,2*index+2+2*nb+2])
  #faces.append([2*index-1+2*nb+2,2*index+2+2*nb+2,2*index+2*nb+2])
  print 2*index-1+2*nb,"*    ",2*index-1+2*nb+2,2*index+2*nb+2,2*index+2+2*nb+2
  faces.append([2*index-1+2*nb+2,2*index+2+2*nb+2,2*index+1+2*nb+2])
  #faces.append([2*index-1+2*nb+2,2*index+1+2*nb+2,2*index+2+2*nb+2])
  print 2*index+2*nb,"*    ",2*index-1+2*nb+2,2*index+2+2*nb+2,2*index+1+2*nb+2
 #fin boucle for
 #les faces laterales
 #face laterale exterieure
 faces.append([0,2*nb+2,2*nb+3])
 print 4*nb,"*    ",0,2*nb+2,2*nb+3
 faces.append([0,1,2*nb+3])
 print 4*nb+1,"*    ",0,1,2*nb+3
 for index in range(4*nb+2,6*nb,2):
  base=index-4*nb-1
  faces.append([base,base+2*nb+2,base+2*nb+4])
  print index,"*    ",base,base+2*nb+2,base+2*nb+4
  faces.append([base,base+2,base+2*nb+4])
  print index+1,"*    ",base,base+2,base+2*nb+4
 #fin boucle
 faces.append([2*nb-1,2*nb-1+2*nb+2,2*nb+1+2*nb+2])
 print 6*nb,"*    ",2*nb-1,2*nb-1+2*nb+2,2*nb+1+2*nb+2
 faces.append([2*nb-1,2*nb+1,2*nb+1+2*nb+2])
 print 6*nb+1,"*    ",2*nb-1,2*nb+1,2*nb+1+2*nb+2
 #Face interieure 
 faces.append([0,2*nb+2,2*nb+4])
 print 6*nb+2,"*    ",0,2*nb+2,2*nb+4
 faces.append([0,2,2*nb+4])
 print 6*nb+3,"*    ",0,2,2*nb+4
 faces.append([2*nb,2*nb+2*nb+2,2*nb+1+2*nb+2])
 print 8*nb+2,"*    ",2*nb,2*nb+2*nb+2,2*nb+1+2*nb+2
 faces.append([2*nb,2*nb+1,2*nb+1+2*nb+2])
 print 8*nb+3,"*    ",2*nb,2*nb+1,2*nb+1+2*nb+2
 for index in range(6*nb+4,8*nb+1,2):
  base=index-6*nb-2
  faces.append([base,base+2*nb+2,base+2*nb+4])
  print index,"*    ",base,base+2*nb+2,base+2*nb+4
  faces.append([base,base+2,base+2*nb+4])
  print index+1,"*    ",base,base+2,base+2*nb+4
 #fin de la boucle

 me.verts.extend(coords)
 me.faces.extend(faces)
 return me
#fin de la fonction
 
#test
scn = Scene.GetCurrent()
print "debut"
first=1
numero=0
nombre=2
epaisseur=1
angle=45
rayon=20
distance=25
segments=100

obi=[]
rotata1=RotationMatrix(angle,4,"x")	
for i in range(nombre):
 rotata=RotationMatrix(360*i/(nombre+0.0),4,"z")		
 myMesh=lunule(rayon,distance,epaisseur,segments)  
 myMesh.transform(rotata1)	
 myMesh.transform(rotata)


 myMesh.vertexColors=1
 faxes=myMesh.faces
 for f in faxes:
  for i2,d in enumerate(f.col):
   d.b=255
   d.r=0
   d.g=0
    		
 if(first==1):
  ob=scn.objects.new(myMesh,'lunule'+`numero`)
  numero+=1
  first=0
 else:
  localOb=scn.objects.new(myMesh,'lunule'+`numero`)
  numero+=1
  ob.join([localOb])
  scn.objects.unlink(localOb)

 myMesh2=lunule(rayon,distance,epaisseur,segments)
 A=Matrix([-1,0,0,0],[0,1,0,0],[0,0,1,0],[0,0,0,1])
 
 myMesh2.transform(A,True)
 myMesh2.transform(rotata1)
 myMesh2.transform(rotata)
 
 myMesh2.vertexColors=1
 faxes=myMesh2.faces
 for f in faxes:
  for i2,d in enumerate(f.col):
   d.b=0
   d.r=255
   d.g=255


 localOb=scn.objects.new(myMesh2,'lunuleInverse'+`numero`)
 numero+=1
 ob.join([localOb])
 scn.objects.unlink(localOb)

Window.RedrawAll()

 