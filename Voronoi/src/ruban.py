#!BPY
 

__author__ = "edt"
__version__ = "1.0 2009/06/22"
__url__="Website, dataOrigami.blogspot.com"
 
 
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
##############################################################

#function creating a rubber
def ruban(r,e,h,n):
 me=bpy.data.meshes.new('myMesh')
 coords=[]
 faces=[]
 for i in range(n):
  coord[4*i]=[(r-e)*cos(2*pi*i/(4*n)),(r-e)*sin(2*pi*i/(4*n)),-h/2]
  coord[4*i+1]=[r*cos(2*pi*i/(4*n)),r*sin(2*pi*i/(4*n)),-h/2]
  coord[4*i+2]=[r*cos(2*pi*i/(4*n)),r*sin(2*pi*i/(4*n)),h/2]
  coord[4*i]+3=[(r-e)*cos(2*pi*i/(4*n)),(r-e)*sin(2*pi*i/(4*n)),h/2]
  #les faces
 for i in range(n):
  faces.append([4*i,4*i+1,(4*i+5)%(4*n),(4*i+4)%(4*n)])
  faces.append([4*i+1,4*i+2,(4*i+6)%(4*n),(4*i+5)%(4*n)])
  faces.append([4*i+2,4*i+3,(4*i+7)%(4*n),(4*i+6)%(4*n)])
  faces.append([4*i+3,4*i,(4*i+4)%(4*n),(4*i+7)%(4*n)])
		
  me.verts.extend(coords)          
  me.faces.extend(faces)  
 return me
		

 

 
##############################################################
# Get rid of the lamp and cube from the default scene
#scene = Scene.GetCurrent()

myMesh=ruban(1,0.3,0.3,10)	
scn = bpy.data.scenes.active     # link object to current scene
ob = scn.objects.new(myMesh, 'myObj')
 


Window.RedrawAll()
#
########################################