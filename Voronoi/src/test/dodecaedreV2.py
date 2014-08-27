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

# Listes des couleurs
colorIndice=[5,1,3,4,1,3,2,3,1,5,4,2,4,5,3,2,5,2,1,4,5,2,1,3,4,1,4,2,5,3]

rouge=[-255,0,1,0,1,  1]
vert=[-255, 0,1,1,0.5,0]
bleu=[-255, 1,0,0,0,  0] 



# les transformations
# Parametres
# me : le solide a transformer
# vectrans : la translation depuis le centre (a multiplier par une constante pour faire grossir la sphere)
# angalp et angbet : les deux angles de rotation (en degres)
# autoangle : rotation sur lui-meme (en degres)
# dist : rayon de lasphere, en gros
def transfo(me,vectrans,angalp,angbet,autoangle,dist):
  #Normalement c'est 35
  transly=mathutils.Matrix.Translation(dist*Vector(vectrans))
  rotax=mathutils.Matrix.Rotation(pi/2,4,'X')
  me.transform(rotax)
  rotawa=mathutils.Matrix.Rotation(autoangle/180*pi,4,'Z')
  me.transform(rotawa)
  rotaz=mathutils.Matrix.Rotation(-angalp/180*pi,4,'Y')
  rotay=mathutils.Matrix.Rotation(-angbet/180*pi,4,'Z')
  victor=Vector((0,1,0))
  victor.rotate(rotay)
  victor.rotate(rotaz)
  hector=Vector((0,0,1))
  hector.rotate(rotay)
  hector.rotate(rotaz)
  provy=hector.angle(vectrans)
  if vectrans[1]>0:
      provy=-provy
  rota3=mathutils.Matrix.Rotation(provy,4,victor)
  me.transform(rotay)
  me.transform(rotaz)
  me.transform(rota3)
  me.transform(transly)
  return  



#fonction creant un polygone 
# R : rayon du cercle circonscrit
# e1 : epaisseur du polygone
# e2 : hauteur du polygone
# n : nombre de faces du polygone

def polygone(R,e1,e2,n):
 me=bpy.data.meshes.new('polygone')
 coords=[]
 faces=[]
 for i in range(4*n):
  coords.append([0,0,0])
 # definition des sommets
 for i in range(n):
  coords[i]=[R*cos(2*i*pi/n),e2/2,R*sin(2*i*pi/n)]
  coords[i+n]=[(R-e1)*cos(2*i*pi/n),e2/2,(R-e1)*sin(2*i*pi/n)]
  coords[i+2*n]=[R*cos(2*i*pi/n),-e2/2,R*sin(2*i*pi/n)]
  coords[i+3*n]=[(R-e1)*cos(2*i*pi/n),-e2/2,(R-e1)*sin(2*i*pi/n)]
 # definition des faces
 # face superieure
 for i in range(n):
  faces.append([(i+1)%n,i,n+(i+1)%n])
  faces.append([i,n+i,n+(i+1)%n])
 # face  inferieure
 for i in range(n):
  faces.append([2*n+i,2*n+(i+1)%n,3*n+(i+1)%n])
  faces.append([3*n+i,2*n+i,3*n+(i+1)%n])
 # face verticale exterieure
 for i in range(n):
  faces.append([i,(i+1)%n,2*n+(i+1)%n])
  faces.append([2*n+i,i,2*n+(i+1)%n])
 # face verticale interieure
 for i in range(n):
  faces.append([n+(i+1)%n,n+i,3*n+i%n])
  faces.append([n+(i+1)%n,3*n+i,3*n+(i+1)%n])
 me.from_pydata(coords,[],faces)  
 me.update(calc_edges=True) 
 return me
#fin de la fonction

def color(me,col):
 # Create a single Material that respect Vertex Color
 mat = bpy.data.materials.new('VertexMat')
 mat.use_vertex_color_paint = True
 mat.use_vertex_color_light = True

 
    
 # Create new 'Col' Vertex Color Layer
 me.vertex_colors.new()
    
 # Vertex colour data
 vertexColor = me.vertex_colors[0].data
 faces = me.polygons
    
 # Assign colours to verts (loop every faces)
 # Script Snippet from Blender Artist
 #Fixer la couleur de tous les sommets d'une meme lunule
 i = 0
 for face in faces:
  for idx in face.loop_indices:
   vertexColor[i].color = col
   i += 1

 return

#test
print("debut/n")
scn=bpy.context.scene

# On lit les informations concernant les transformations dans un fichier (valeurs calculees dans un autre programme)
fichier=open('/tmp/donnees.txt')	

# Premiere ligne du ficher : nombre de transformations (nombre de polygones)
premiereLigne=fichier.readline().split(" ");
nbPoly=int(premiereLigne[0]); 
print(nbPoly)

# Deux tableaux pour ranger les angles lus dans le fichier
alpha=[0 for i in range(nbPoly)]
beta=[0 for i in range(nbPoly)]

# Un tableau pour ranger les translations lues dans le fichier
translat=[[0,0,0] for i in range(nbPoly)]

# Lire le fichier et remplir les tableaux
for i in range(nbPoly):
    ligne1=fichier.readline().split(" ") # coefficients de la translation
    ligne2=fichier.readline().split(" ")   # angles alpha et beta
    translat[i]=[float(ligne1[0]),float(ligne1[1]),float(ligne1[2])]
    alpha[i]=float(ligne2[0])
    beta[i]=float(ligne2[1])
    
    

# Construction de l'objet
first=1
for ind in range(nbPoly):
 # Creer un polygone    
 R=25
 nombre=3
 dist=35
 catena="TTtriangle"
 rayon=R*cos(pi/nombre)
 decale=2
 myMesh=polygone(rayon,0.85,0.85,nombre)
 # Tourner et deplacer le polygone
 transfo(myMesh,translat[ind],alpha[ind],beta[ind],1*360/(2*nombre),dist)
 # colorer le polygone
 color(myMesh,[rouge[colorIndice[(ind+decale)%nbPoly]],vert[colorIndice[(ind+decale)%nbPoly]],bleu[colorIndice[(ind+decale)%nbPoly]]])

 if(first==1):
  ob = bpy.data.objects.new(catena+str(ind), myMesh) 
  bpy.context.scene.objects.link(ob) 
  bpy.context.scene.objects.active = ob
  first=0
 else:
  localOb = bpy.data.objects.new(catena+str(ind), myMesh)
  scn.objects.link(localOb)

bpy.ops.object.select_pattern(extend=False, pattern=catena+"*", case_sensitive=False)
bpy.ops.object.join()











