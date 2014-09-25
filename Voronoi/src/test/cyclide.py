#!BPY
 
# Une cyclide de Dupin, sous forme de Mesh
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
#fonction creant une cyclide de Dupin
#pour le moment, seulement un sac a main, on verifiera par la suite
# r0+r1 et r0-r1 sont les deux rayons des cercles associes
# r0>r1
# rc rayon du cercle central
# nombre de cercles : nbc
# nombre de division sur un cercle : nbd


def cyclide(r0,r1,rc,nbc,nbd):
 me=bpy.data.meshes.new('cyclide')
 coords=[[0,0,0] for i in range(nbc*nbd)]
 faces=[]
 for k in range(nbc):
  theta=2*pi*k/nbc
  cosinus=cos(theta)
  sinus=sin(theta)
  for j in range(nbd):
   alpha=2*pi*j/nbd
   rayon=r0+r1*cosinus
   
   coords[k*nbd+j]=[(rc+rayon*cos(alpha))*cosinus,(rc+rayon*cos(alpha))*sinus,rayon*sin(alpha)] 
 # les faces
 for k in range(nbc):
  for j in range(nbd):
   #faire deux faces a partir de i (je me comprends)
   coinA=k*nbd+j; 
   coinB=k*nbd+(j+1)%nbd
   coinC=((k+1)%nbc)*nbd+j
   coinD=((k+1)%nbc)*nbd+(j+1)%nbd	
   faces.append([coinA,coinD,coinB])
   faces.append([coinA,coinC,coinD])


 me.from_pydata(coords,[],faces)   # edges or faces should be [], or you ask for problems
 me.update(calc_edges=True) 
 return me
#fin de la fonction
 

 
#test
print("debut/n")

scn=bpy.context.scene

first=1
numero=0


nbc=100
nbd=50
r0=1.5
r1=0.75
rc=5
myMesh=cyclide(r0,r1,rc,nbc,nbd)

ob = bpy.data.objects.new('Dupin'+str(numero), myMesh)
bpy.context.scene.objects.link(ob) 
 
bpy.context.scene.objects.active = ob
  
 
