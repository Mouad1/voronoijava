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

c1=[0,0,1] # bleu
c2=[1,165/255,0] #orange
c3=[0,1,0] # vert
c4=[1,1,0] # jaune
c5=[0.5,0,0] # marron

colors=[c1,c2,c3,c4,c5]

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

# fonction creant une alveole
# h : hauteur
# x : taille de la pointe // Normalement, inutile
# r : rayon exterieur de l'alveole
# ep : epaisseur
# a priori, j'ai besoin de 24 points
def alveole(h,x,r,ep): 
 me=bpy.data.meshes.new('polygone')
 coord=[]
 face=[]
 for i in range(26):
  coord.append([0,0,0])
 
 for i in range(6):
     coord[i]=[r*cos(2*i*pi/6),r*sin(2*i*pi/6),0]
 for i in range(6):
    coord[i+6]=[(r-ep)*cos(2*i*pi/6),(r-ep)*sin(2*i*pi/6),0]    
 for i in range(6):
    coord[i+12]=[(r-ep)*cos(2*i*pi/6),(r-ep)*sin(2*i*pi/6),h-x]    
 for i in range(3):
     coord[i+18]=[r*cos(2*i*pi/3),r*sin(2*i*pi/3),(h-x)]  
 for i in range(3):
     coord[i+21]=[r*cos(2*i*pi/3+pi/3),r*sin(2*i*pi/3+pi/3),h]  
 coord[24]=[0,0,h+x]
 coord[25]=[0,0,h+x-ep]
 #les faces
 # l'entree
 for i in range(6):
   j=(i+1)%6+6
   face.append([(i+1)%6,i,j])
   face.append([i,i+6,j])
 
 # Les cotes exterieurs : normales ok
 
 face.append([0,1,21])
 face.append([18,0,21])
 face.append([21,1,19])
 face.append([1,2,19])
 face.append([19,2,22])
 face.append([2,3,22])
 face.append([22,3,20])
 face.append([3,4,20])
 face.append([4,5,23])
 face.append([20,4,23])
 face.append([5,0,18])
 face.append([23,5,18])
 
 # Les losanges #normales ok
 face.append([18,21,24])
 face.append([24,21,19])
 face.append([19,22,24])
 face.append([22,20,24])
 face.append([20,23,24])
 face.append([23,18,24])
 

 # Les parois verticales du trou Normales ok

 for i in range(6):
      face.append([6+(i+1)%6,i+6,12+(i+1)%6])
      face.append([i+6,i+12,12+(i+1)%6])
      face.append([(i+1)%6+12,i+12,25])
    
 me.from_pydata(coord,[],face)  
 me.update(calc_edges=True) 
 return me 
    
                 
     
  
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
first=1
ind=0

# Construction de l'objet

catena="alveole"
r=30
for j in range(1): # range(6)
    decale=2*r*sqrt(3)/2
    for i in range(1): #range(3)
        myMesh=alveole(100,sqrt(2)*r/4,r,1)
        p1=Vector([decale*cos((2*j+1)*pi/6),decale*sin((2*j+1)*pi/6),0])
        trans=mathutils.Matrix.Translation(p1)
        myMesh.transform(trans)
        color(myMesh,colors[i])
        
        if(first==1):
            ob = bpy.data.objects.new(catena+str(ind), myMesh) 
            bpy.context.scene.objects.link(ob) 
            bpy.context.scene.objects.active = ob
            first=0
        else:
            localOb = bpy.data.objects.new(catena+str(ind), myMesh)
            scn.objects.link(localOb)
        ind=ind+1
        decale=decale+2*r*sqrt(3)/2    
        

bpy.ops.object.select_pattern(extend=False, pattern=catena+"*", case_sensitive=False)
bpy.ops.object.join()











