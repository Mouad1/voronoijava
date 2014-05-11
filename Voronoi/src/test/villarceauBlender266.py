<<<<<<< .mine
#!BPY
 
#
__author__ = "francesco de comite"
__version__ = "1.0 2014/04/29"
__url__="Website, www.lifl.fr/decomite"
 
 
##############################################################
# load the modules used in the script
#import Blender
import bpy
#from Blender import *
#from Blender.Scene import Render
#from Blender import Text
#from Blender import Mathutils
#from Blender.Mathutils import *
import math
import mathutils
from mathutils import *
#from Blender import Mesh
from math import *
##############################################################



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

 coords[0]=[0,ep/2,sqrt(R*R-l*l/4)]
 coords[2*nb+2]=[0,-ep/2,sqrt(R*R-l*l/4)]

 #deuxieme pointe de la lunule
 coords[2*nb+1]=[0,ep/2,-sqrt(R*R-l*l/4)]
 coords[2*nb+1+2*nb+2]=[0,-ep/2,-sqrt(R*R-l*l/4)]

 #Les points 
 for index in range(1,nb+1):
  ti=tan(pi/2-index*pi/(nb+1))
  delta=sqrt(4*R*R*(1+ti*ti)-ti*ti*l*l)
  vx=(-l+delta)/(2*(1+ti*ti))
  #interieur (superieur puis inferieur)	
 
  coords[2*index]=[vx,ep/2,ti*vx]
  coords[2*index+2*nb+2]=[vx,-ep/2,ti*vx] 

  vx=(l+delta)/(2*(1+ti*ti))
  coords[2*index-1]=[vx,ep/2,ti*vx]
  coords[2*index-1+2*nb+2]=[vx,-ep/2,ti*vx]
 # fin de la boucle pour les points

 #Definition des faces
 #face superieure
 #Pointes de la lunule
 faces.append([0,1,2]) #original
 faces.append([2*nb,2*nb-1,2*nb+1])

 #face inferieure
 faces.append([1+2*nb+2,0+2*nb+2,2+2*nb+2]) #ok pas touche
 faces.append([2*nb-1+2*nb+2,2*nb+2*nb+2,2*nb+1+2*nb+2]) 

 #triangles des faces superieure et inferieure
 for index in range(1,nb):	
  #face superieure	

  faces.append([2*index,2*index-1,2*index+2])
  faces.append([2*index+2,2*index-1,2*index+1])
 
  #face inferieure

  faces.append([2*index-1+2*nb+2,2*index+2*nb+2,2*index+2+2*nb+2]) #3
  faces.append([2*index-1+2*nb+2,2*index+2+2*nb+2,2*index+1+2*nb+2]) #4
 
 #fin boucle for

 #les faces laterales

 #face laterale exterieure

 faces.append([0,2*nb+2,2*nb+3]) 

 faces.append([1,0,2*nb+3])

 for index in range(4*nb+2,6*nb,2):
  base=index-4*nb-1
  faces.append([base,base+2*nb+2,base+2*nb+4]) #original
 
  faces.append([base+2,base,base+2*nb+4])
 #fin boucle

 faces.append([2*nb-1,2*nb-1+2*nb+2,2*nb+1+2*nb+2])
 faces.append([2*nb+1,2*nb-1,2*nb+1+2*nb+2])


 #Face interieure 
 faces.append([2*nb+2,0,2*nb+4])  #ok

 faces.append([0,2,2*nb+4]) #original ok
 faces.append([2*nb+2*nb+2,2*nb,2*nb+1+2*nb+2])

 faces.append([2*nb,2*nb+1,2*nb+1+2*nb+2])

 for index in range(6*nb+4,8*nb+1,2):
  base=index-6*nb-2
  faces.append([base+2*nb+2,base,base+2*nb+4])  #bonne version
  faces.append([base,base+2,base+2*nb+4]) #original ok
 #fin de la boucle

 #me.verts.extend(coords)
 #me.faces.extend(faces)
 
 me.from_pydata(coords,[],faces)   # edges or faces should be [], or you ask for problems
 me.update(calc_edges=True) 
 return me
#fin de la fonction
 
#test
print("debut/n")
#scn = Scene.GetCurrent()
scn=bpy.context.scene

first=1
numero=0
nombre=10
epaisseur=0.5
angle=45/180.0*pi
rayon=20
distance=15
segments=100


#rotata1=RotationMatrix(angle,4,"x")	
rotata1=mathutils.Matrix.Rotation( angle, 4, 'X')
#rotasym=RotationMatrix(180,4,"y")	
rotasym=mathutils.Matrix.Rotation( pi, 4, 'Y')
for i in range(nombre):
 #rotata=RotationMatrix(2*pi*i/(nombre+0.0),4,"z")	
 rotata=mathutils.Matrix.Rotation( 2*pi*i/(nombre+0.0), 4, 'Z')	
 myMesh=lunule(rayon,distance,epaisseur,segments)  
 myMesh.transform(rotata1)	
 myMesh.transform(rotata)

 #debut de l'insertion brutale

 # Create a single Material that respect Vertex Color
 mat = bpy.data.materials.new('VertexMat')
 mat.use_vertex_color_paint = True
 mat.use_vertex_color_light = True

 #object.data.materials.append(mat) # ??
    
 # Create new 'Col' Vertex Color Layer
 myMesh.vertex_colors.new()
    
 # Vertex colour data
 vertexColor = myMesh.vertex_colors[0].data
 faces = myMesh.polygons
    
 # Assign colours to verts (loop every faces)
 # Script Snippet from Blender Artist
 i = 0
 for face in faces:
  rgb = [255,0,0]
  for idx in face.loop_indices:
   vertexColor[i].color = rgb
   i += 1
        

 #fin de l'insertion brutale

 #myMesh.vertexColors=1
 #faxes=myMesh.faces
 #for f in faxes:
  #for i2,d in enumerate(f.col):
   #d.b=255
   #d.r=0
   #d.g=0
    		
 if(first==1):
  #ob=scn.objects.new(myMesh,'lunule')
  ob = bpy.data.objects.new('lunule', myMesh)
  bpy.context.scene.objects.link(ob) 
  ob.select=True
  numero+=1
  first=0
 else:
  #localOb=scn.objects.new(myMesh,'lunule')
  localOb = bpy.data.objects.new('lunule'+str(numero), myMesh)
  numero+=1
  #ob.join([localOb]) 
  scn.objects.link(localOb)

 myMesh2=lunule(rayon,distance,epaisseur,segments)
 myMesh2.transform(rotasym)
 myMesh2.transform(rotata1)
 myMesh2.transform(rotata)
 
 #debut de l'insertion brutale

 # Create a single Material that respect Vertex Color
 mat = bpy.data.materials.new('VertexMat')
 mat.use_vertex_color_paint = True
 mat.use_vertex_color_light = True

 #object.data.materials.append(mat) # ??
    
 # Create new 'Col' Vertex Color Layer
 myMesh2.vertex_colors.new()
    
 # Vertex colour data
 vertexColor = myMesh2.vertex_colors[0].data
 faces = myMesh2.polygons
    
 # Assign colours to verts (loop every faces)
 # Script Snippet from Blender Artist
 i = 0
 for face in faces:
  rgb = [0,255,255]
  for idx in face.loop_indices:
   vertexColor[i].color = rgb
   i += 1
        

 #fin de l'insertion brutale
 
 #myMesh2.vertexColors=1
 #faxes=myMesh2.faces
 #for f in faxes:
  #for i2,d in enumerate(f.col):
   #d.b=0
   #d.r=255
   #d.g=255


 #localOb=scn.objects.new(myMesh2,'lunuleInverse')
 localOb = bpy.data.objects.new('lunuleInverse'+str(numero), myMesh2)
 numero+=1
 #ob.join([localOb])
 #bpy.context.scene.objects.link(localOb) ## dans le brouillard
 scn.objects.link(localOb)


bpy.ops.object.select_pattern(extend=True, pattern="lunule*", case_sensitive=False)
bpy.ops.object.join()   