#!BPY
 
#
__author__ = "francesco de comite"
__version__ = "1.0 2014/04/29"
__url__="Website, www.lifl.fr/decomite"
 
 
##############################################################
# load the modules used in the script
import bpy
import math
import mathutils
import random
from mathutils import *
from math import *
##############################################################
#Creation d'un icosaedre avec des aretes de longueur 2
def icosaedre():
    me=bpy.data.meshes.new('icosaedre')
    coords=[]
    faces=[]
    phi=(1+sqrt(5))/2
    coords=[[0,0,0] for i in range(12)]
    coords[0]=[-phi,0,1]
    coords[1]=[phi,0,1] 
    coords[2]=[-phi,0,-1]
    coords[3]=[phi,0,-1]
    coords[4]=[0,1,phi]
    coords[5]=[0,1,-phi]
    coords[6]=[0,-1,phi]
    coords[7]=[0,-1,-phi]
    coords[8]=[1,phi,0]
    coords[9]=[-1,phi,0]
    coords[10]=[1,-phi,0]
    coords[11]=[-1,-phi,0]
  
    faces.append([4,8,1]) 
    faces.append([10,6,1]) 
    faces.append([4,6,0]) 
    faces.append([6,4,1]) 
    faces.append([8,3,1]) 
    faces.append([3,10,1]) 
    faces.append([4,9,8]) 
    faces.append([2,9,0])
    faces.append([9,4,0 ])
    faces.append([11,6,10 ])
    faces.append([11,2,0])
    faces.append([6,11,0])
    faces.append([5,3,8])
    faces.append([9,5,8])
    faces.append([5,9,2])
    faces.append([3,7,10])
    faces.append([7,11,10])
    faces.append([11,7,2])
    faces.append([7,5,2])
    faces.append([5,7,3])
    
    me.from_pydata(coords,[],faces)   # edges or faces should be [], or you ask for problems
    me.update(calc_edges=True) 
    return me

 
#test
print("debut/n")
scn=bpy.context.scene
myMesh=icosaedre()  

# Le coloriage des faces 
# A chaque face correspond une couleur parmi 5
rgbIndex=[1,3,2,0,4,2,3,0,4,4,3,1,0,2,1,1,0,2,4,3]
# Liste des couleurs
rgbs=[[1,0,0],[0,1,0],[0,0,1],[1,1,0],[0,1,1]]

# Create a single Material that respect Vertex Color
mat = bpy.data.materials.new('VertexMat')
mat.use_vertex_color_paint = True
mat.use_vertex_color_light = True

 
    
# Create new 'Col' Vertex Color Layer
myMesh.vertex_colors.new()
    
 # Vertex colour data
vertexColor = myMesh.vertex_colors[0].data
faces = myMesh.polygons
    
 # Assign colours to verts (loop every faces)
 # Script Snippet from Blender Artist
 #Fixer la couleur de chaque face en fixant la meme couleur pour toutes ses aretes
i=0
ii=0
for face in faces:
  for idx in face.loop_indices:
   print("--"+str(idx)+" "+str(i))      
   vertexColor[ii].color = rgbs[rgbIndex[i]]
   ii+=1
  i += 1

ob = bpy.data.objects.new('icoz', myMesh)
bpy.context.scene.objects.link(ob) 



 