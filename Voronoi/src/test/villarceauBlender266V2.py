#!BPY
 
# Version corrigee, un seul mesh a la fin
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



#fonction creant une lunule
# R : rayon des cercles
# l : distance entre les centres
# ep : epaisseur de la lunule
# nb : nombre de sections de la lunule
# Nombre de sommets : 4nb+4
# nombre de faces : 8nb+4 
def lunule(R,l,ep,nb):
 me=bpy.data.meshes.new('lunule')
 coords=[[0,0,0] for i in range(4*nb+4)]
 faces=[]
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


 me.from_pydata(coords,[],faces)   # edges or faces should be [], or you ask for problems
 me.update(calc_edges=True) 
 return me
#fin de la fonction
 
#test
print("debut/n")

scn=bpy.context.scene

first=1
numero=0


# Les parametres utilisateur
# Nombre de couples de lunules
nombre=50

# Epaisseur d'une lunule (au final : 3 mm)
epaisseur=0.7

#Angle des lunules avec la verticale
angle=45/180.0*pi

# Rayon des cercles generateurs des lunules
rayon=30

# Distance entre les centres des cercles generateurs
distance=5

# Nombre de segments composant chaque lunule
segments=100

# Couleur de la premiere lunule
rgb1=[1,0,0]

# Couleur de la deuxieme lunule
rgb2=[0,0,1]



rotata1=mathutils.Matrix.Rotation( angle, 4, 'X') # Pour placer les lunules dans le bon angle par rapport a la verticale
rotasym=mathutils.Matrix.Rotation( pi, 4, 'Y') # Rotation pour copier une lunule dans sa symetrique
for i in range(nombre):
 rotata=mathutils.Matrix.Rotation( 2*pi*i/(nombre+0.0), 4, 'Z') # Rotation de la lunule pour la mettre en position	
 myMesh=lunule(rayon,distance,epaisseur,segments)  #Creation
 myMesh.transform(rotata1)	#orientation
 myMesh.transform(rotata)   #orientation (suite et fin)

 
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
 #Fixer la couleur de tous les sommets d'une meme lunule
 ii = 0
 rgb=[cos((i+0.0)/nombre*pi-pi/2),sin((i+0.0)/nombre*pi),1-(4*((i+0.0)/nombre)*(1-((i+0.0)/nombre)))]
 print(i," ",nombre," ",rgb)
 for face in faces:
  #rgb = rgb1
  for idx in face.loop_indices:
   vertexColor[idx].color = rgb
   ii += 1

 if(first==1):
  ob = bpy.data.objects.new('lunule'+str(numero), myMesh)
  bpy.context.scene.objects.link(ob) 
  # La premiere lunule creee est active, les autres seront selectionnees a la fin, puis jointes (deux dernieres instructions du programme)
  bpy.context.scene.objects.active = ob
  numero+=1
  first=0
 else:
  localOb = bpy.data.objects.new('lunule'+str(numero), myMesh)
  numero+=1
  scn.objects.link(localOb)

 # Lalunule symetrique
 myMesh2=lunule(rayon,distance,epaisseur,segments)
 myMesh2.transform(rotasym)
 myMesh2.transform(rotata1)
 myMesh2.transform(rotata)
 
 

 # Create a single Material that respect Vertex Color
 mat = bpy.data.materials.new('VertexMat')
 mat.use_vertex_color_paint = True
 mat.use_vertex_color_light = True

 # Create new 'Col' Vertex Color Layer
 myMesh2.vertex_colors.new()
    
 # Vertex colour data
 vertexColor = myMesh2.vertex_colors[0].data
 faces = myMesh2.polygons
    
 # Assign colours to verts (loop every faces)
 # Script Snippet from Blender Artist
 ii = 0
 rgb=[1-(4*((i+0.0)/nombre)*(1-((i+0.0)/nombre))),sin((i+0.0)/nombre*pi),cos((i+0.0)/nombre*pi-pi/2)]
 for face in faces:
  #rgb = rgb2
  for idx in face.loop_indices:
   vertexColor[idx].color = rgb
   ii += 1
 
 localOb = bpy.data.objects.new('lunuleInverse'+str(numero), myMesh2)
 numero+=1
 scn.objects.link(localOb)

# fin de la boucle de creation de l'objet

#Joindre toutes les lunules a la premiere creee, afin de n'avoir qu'un objet a manipuler

bpy.ops.object.select_pattern(extend=False, pattern="lunule*", case_sensitive=False)
bpy.ops.object.join()   

 
