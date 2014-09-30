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


def cyclide2(r0,r1,rc,nbc,nbd):
 me=bpy.data.meshes.new('cyclide')
 coords=[[0,0,0] for i in range(nbc*nbd)]
 faces=[]
 b2=rc*rc-r1*r1
 for k in range(nbc):
  theta=2*pi*k/nbc
  cost=cos(theta)
  sint=sin(theta)
  for j in range(nbd):
   alpha=2*pi*j/nbd
   cosa=cos(alpha)
   sina=sin(alpha)
   denom=rc-r1*cost*cosa
   mx=(r0*(r1-rc*cost*cosa)+b2*cost)/denom
   my=sqrt(b2)*sint*(rc-r0*cosa)/denom
   mz=sqrt(b2)*sina*(r1*cost-r0)/denom
   coords[k*nbd+j]=[mx,my,mz] 
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


#fonction creant une cyclide de Dupin
#pour le moment, seulement un sac a main, on verifiera par la suite
# r0+r1 et r0-r1 sont les deux rayons des cercles associes
# r0>r1
# rc rayon du cercle central
# nombre de cercles : nbc
# nombre de division sur un cercle : nbd

def cyclide2(r0,r1,rc,nbc,nbd):
 b2=sqrt(rc*rc-r1*r1)    
 me=bpy.data.meshes.new('cyclide')
 coords=[[0,0,0] for i in range(nbc*nbd)]
 faces=[]
 for k in range(nbc):
  theta=2*pi*k/nbc
  cosinus=cos(theta)
  sinus=sin(theta)
  for j in range(nbd):
   alpha=2*pi*j/nbd   
   denom=rc-r1*cos(theta)*cos(alpha)
   mx=(r0*(r1-rc*cos(theta)*cos(alpha))+b2*b2*cos(theta))/denom
   my=(b2*sin(theta)*(rc-r0*cos(alpha)))/denom
   mz=(b2*sin(alpha)*(r1*cos(theta)-r0))/denom
   coords[k*nbd+j]=[mx,my,mz]
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
myMesh=cyclide2(r0,r1,rc,nbc,nbd)

ob = bpy.data.objects.new('Dupin'+str(numero), myMesh)
bpy.context.scene.objects.link(ob) 
 
bpy.context.scene.objects.active = ob
  
 
