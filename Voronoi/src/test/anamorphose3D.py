# Mauvaise version : les cylindres ne sont pas jointifs...
# on essaie de corriger ça dans ce fichier
#un probleme au depart des 'cylindres' (makeContinuous2.py est le meilleur pour le moment)
#ok, c'est mieux, mais ce n'est pas manifold
#on essaie de rajouter des capuchons au bout des cylindres
#!BPY
 
__doc__ = """
SimplePlottingExample.py
 
Example demonstrating the following techniques in Blender 2.48 to
generate a plot of x-y data:
1) Joining meshes
2) Use of the transform matrix
3) Use of material properties to control how objects are rendered
4) Delete (unlink) of objects in a scene
5) Use of cross products to generate a basis for the transform matrix
6) Using python to render an image
7) Using python to save the rendered image to disk
8) Use of Blender Vector and Matrix classes
9) Defining a function in Python
10) Using Python to parse a file
 
This script is executed at the command line by:
> >blender -P OrientationExample.py
"""
__author__ = "edt"
__version__ = "1.0 2009/06/22"
__url__="Website, dataOrigami.blogspot.com"
 
 
##############################################################
# load the modules used in the script
import Blender
import bpy
import BPyAddMesh
from Blender import *
from Blender.Scene import Render
from Blender import Text
from Blender import Mathutils
from Blender.Mathutils import *

import math
from math import pi,cos,sin
##############################################################
# define function(s)






def translate(p,r):
 me=Mesh.Primitives.UVsphere(14,14,r)
 dir=Vector(p)
 A = Matrix(
    [1,0,0,0],
    [0,1,0,0],
    [0,0,1,0],
    [dir[0],dir[1],dir[2],1])
 
 # apply the transform to the sphere
 me.transform(A,True)
 return me










def troncDeCone(h,d1,d2,nbFaces,coneType):
 #coneType : 0->ouvert aux deux bouts, 1->ouvert en P1 seulement, 2-> ouvert en P2 seulement, 3->ferme
 me=NMesh.GetRaw()
 #vertices
 for i in range(0,nbFaces,1):
  vertex=NMesh.Vert(d1*cos(2*i*pi/nbFaces),d1*sin(2*i*pi/nbFaces),0)
  me.verts.append(vertex)
 for i in range(0,nbFaces,1):
  vertex=NMesh.Vert(d2*cos(2*i*pi/nbFaces),d2*sin(2*i*pi/nbFaces),h)
  me.verts.append(vertex)
 vertex=NMesh.Vert(0,0,0)
 me.verts.append(vertex)
 vertex=NMesh.Vert(0,0,h)
 me.verts.append(vertex) 
 #faces
 for i in range(0,nbFaces):
  face=NMesh.Face()
  face.append(me.verts[i])
  face.append(me.verts[(i+1)%nbFaces])
  face.append(me.verts[(1+i)%nbFaces+nbFaces])  
  face.append(me.verts[i+nbFaces])
  me.faces.append(face)

 
 if (coneType>1): 
  #ferme en p1
 
  for i in range(0,nbFaces):
   face=NMesh.Face()
   face.append(me.verts[i])
   face.append(me.verts[(i+1)%nbFaces])
   face.append(me.verts[2*nbFaces])
   me.faces.append(face)
 
 if(coneType==1)|(coneType==3): 
  #ferme en p2
 
  for i in range(0,nbFaces):
   face=NMesh.Face()
   face.append(me.verts[nbFaces+i])
   face.append(me.verts[(i+1)%nbFaces+nbFaces])
   face.append(me.verts[2*nbFaces+1])
   me.faces.append(face)
  
 
 return me 

# une couronne
def couronne(d1,nbFaces,l):
 #coneType : 0->ouvert aux deux bouts, 1->ouvert en P1 seulement, 2-> ouvert en P2 seulement, 3->ferme
 me=NMesh.GetRaw()

 #vertices
 #vertex 0 : centre de la face du bas
 #vertex 2nbFaces : centre de la face du haut
 vertex=NMesh.Vert(0,0,0)
 me.verts.append(vertex)

 for i in range(0,nbFaces,1):
  vertex=NMesh.Vert(d1*cos(2*i*pi/nbFaces),d1*sin(2*i*pi/nbFaces),0)
  me.verts.append(vertex)
 for i in range(0,nbFaces,1):
  vertex=NMesh.Vert(d1*cos(2*i*pi/nbFaces),d1*sin(2*i*pi/nbFaces),l)
  me.verts.append(vertex)
 vertex=NMesh.Vert(0,0,l)
 me.verts.append(vertex) 

 #faces
 for i in range(0,nbFaces):
  face=NMesh.Face()
  face.append(me.verts[i])
  face.append(me.verts[(i+1)%nbFaces])
  face.append(me.verts[(1+i)%nbFaces+nbFaces])  
  face.append(me.verts[i+nbFaces])
  me.faces.append(face)
 
# on n'a besoin que des sommets d'un cote : on retourne une tranche de la liste des vertices
#on n'a besoin que des vertices. 
 return me







 

def lineSegMe(p1,p2,d1,nbFaces):
 
 # use the class constructors from Blender to form vectors for p1 and p2
 p1 = Vector(p1)
 p2 = Vector(p2)
  
 # form a vector that points in the direction from p1 to p2
 dir = p2-p1            

    
  
 # get the length of the line we want that goes from p1 to p2
 length = dir.length
 

 me=couronne(d1,nbFaces,length)

 dir.normalize()
 u = dir
 uu = Vector([0,0,1.0])
 if abs(AngleBetweenVecs(u,uu))>1e-6:

  v = CrossVecs(u,uu)
  w = CrossVecs(u,v)
  v.normalize()
  w.normalize()

  

  A = Matrix(
    [w[0],w[1],w[2],0],
    [v[0],v[1],v[2],0],
    [u[0],u[1],u[2],0],
    #[dir[0]/2.0*length+p1[0],dir[1]/2.0*length+p1[1],dir[2]/2.0*length+p1[2],1])
    [p1[0],p1[1],p1[2],1])
  
 else:
  
  A = Matrix(
    [1,0,0,0],
    [0,1,0,0],
    [0,0,1,0],
    #[dir[0]/2.0*length+p1[0],dir[1]/2.0*length+p1[1],dir[2]/2.0*length+p1[2],1])
    [p1[0],p1[1],p1[2],1])
   

 # apply the transform to the cylinder  
 
 me.transform(A,True)
 
 return me,me.verts[0:nbFaces+1],me.verts[1:nbFaces+1],me.verts[1+nbFaces:1+1+2*nbFaces]

 
def rotate(an):
 me=taurus(10,2,200,60)
 A=Matrix(
 [1,0,0,0],
 [0,cos(an),-sin(an),0],
 [0,sin(an),cos(an),0],
 [0,0,0,1])
 me.transform(A,True)
 return me



def meshify(meche,nbFaces):
 nbtranches=(len(meche.verts)-1)/nbFaces
 for j in range(0,nbtranches-1):
  print j," ",len(meche.verts)
  dmin=50	
  kcandidat=1
  x1=Vector(meche.verts[1+j*nbFaces])
  for k in range(0,nbFaces,1):
   x2=Vector(meche.verts[1+k+(j+1)*nbFaces])
   x3=x2-x1
   candidat=x3.length
   if(candidat<dmin):
    dmin=candidat
    kcandidat=k

  for i in range(0,nbFaces):
# c'est ici qu'il va falloir changer des trucs
# prendre 1+j*nbFaces et (i+k)%nbFAces+(j+1)*nbFaces
# pour k variant entre 0 et nbFaces-1
#garder le k qui minimise la distance entre les deux sommets
   face=NMesh.Face()
   face.append(meche.verts[1+i+j*nbFaces])
   face.append(meche.verts[1+j*nbFaces+((i+1)%nbFaces)])
   #face.append(meche.verts[1+(j+1)*nbFaces+((1+i)%nbFaces)])  
   #face.append(meche.verts[1+(j+1)*nbFaces+i])
   face.append(meche.verts[1+(j+1)*nbFaces+((1+i+kcandidat)%nbFaces)])  
   face.append(meche.verts[1+(j+1)*nbFaces+(i+kcandidat)%nbFaces])
   meche.faces.append(face)
 #face du depart
  for i in range(0,nbFaces):
   face=NMesh.Face()
   face.append(meche.verts[1+i])
   face.append(meche.verts[1+(i+1)%nbFaces])
   face.append(meche.verts[0])
   meche.faces.append(face)

 #face d'arrivee
  taille=len(meche.verts)
  for i in range(0,nbFaces):
   face=NMesh.Face()
   face.append(meche.verts[taille-nbFaces-1+i])
   face.append(meche.verts[taille-nbFaces-1+(i+1)%nbFaces])
   face.append(meche.verts[taille-1])
   meche.faces.append(face)

 return meche


##############################################################
# Get rid of the lamp and cube from the default scene
scene = Scene.GetCurrent()

for ob in scene.objects:
   if (cmp(ob.getName(),'Cube')==0):
    scene.objects.unlink(ob)

nbf=12
diam=0.05
rati=0.3

#execfile('C:\Users\decomite\Pictures\povray\output povray\spline.py')

#Pour les slides together
#execfile('C:/users/decomite/pictures/povray/t4b.txt')
#Pour les anamorphoses
#execfile('C:/users/decomite/pictures/povray/spline.py')
#Pour les cadres en couleur*
# Portable
#execfile('C:/users/decomite/pictures/povray/color.txt')
#Maison	
execfile('F:\Povray\jp.txt')

"""
#######################################
# render the image and save the image
#

context = scene.getRenderingContext()
# enable seperate window for rendering
Render.EnableDispWin()
context.imageType = Render.JPEG
# draw the image
context.render()
# save the image to disk
# to the location specified by RenderPath
# by default this will be a jpg file
context.saveRenderedImage('PlotExampleQND.jpg')
"""
Window.RedrawAll()
#
########################################