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
from math import *
##############################################################
#function creating a torus
# R : grand rayon
# r : petit rayon
# n : nombre de troncons selon le grand rayon
# p : nombre de sections sur la tranche
def myTorus(R,r,n,p):
 me=bpy.data.meshes.new('myMesh')
 coords=[]
 faces=[]
 decal=0
 for i in range(n):
  if(decal==0):
   decal=0 #pi/p
  else:
   decal=0 
  for j in range(p):
  	
   coords.append([(R+r*cos(decal+2*pi*j/p))*sin(2*pi*i/n),(R+r*cos(decal+2*pi*j/p))*cos(2*pi*i/n),r*sin(2*pi*j/p)])
 
 #les faces 
 for j in range(n*p):
 #deux triangles definis pour chaque point
  k,jp=divmod(j,p)
  
 
  faces.append([j,k*p+(jp+1)%p,(j+p)%(n*p)])
  faces.append([j,(j+p)%(n*p),((k+1)*p+(jp-1+p)%p)%(n*p)])
 
 me.verts.extend(coords)          
 me.faces.extend(faces)  
 return me


#function creating a rubber
# r : rayon externe
# e : epaisseur
# h : hauteur
# n : nombre de troncons
def ruban(r,e,h,n):
 me=bpy.data.meshes.new('myMesh')
 coords=[]
 faces=[]
 for i in range(n):
  #print i	
 
  coords.append([(r-e)*cos(2*pi*i/(n)),(r-e)*sin(2*pi*i/(n)),-h/2])
  coords.append([r*cos(2*pi*i/(n)),r*sin(2*pi*i/(n)),-h/2])
  coords.append([r*cos(2*pi*i/(n)),r*sin(2*pi*i/(n)),h/2])
  coords.append([(r-e)*cos(2*pi*i/(n)),(r-e)*sin(2*pi*i/(n)),h/2])

  #les faces
 for i in range(n):
  faces.append([4*i,4*i+1,(4*i+5)%(4*n),(4*i+4)%(4*n)])
  faces.append([4*i+1,4*i+2,(4*i+6)%(4*n),(4*i+5)%(4*n)])
  faces.append([4*i+2,4*i+3,(4*i+7)%(4*n),(4*i+6)%(4*n)])
  faces.append([4*i+3,4*i,(4*i+4)%(4*n),(4*i+7)%(4*n)])
		
 #print coords 
 me.verts.extend(coords)          
 me.faces.extend(faces)  
 return me
		

 

 
##############################################################
# Get rid of the lamp and cube from the default scene
scn = Scene.GetCurrent()



epaisseur=0.025
first=1
#fichier=open('C:\Users\decomite\workspace\imageJ\cardioidBlender.txt')
fichier=open('C:/users/decomite/pictures/povray/cardioidBlender.txt')
index=0
try:	
 for line in fichier:
  listeNbrs=line.split(" ")
  print index
  index=index+1
 
  radio=float(listeNbrs[0])
  x1=float(listeNbrs[1])
  y1=float(listeNbrs[2])
#Pour des vieilles versions (sinon roto est direct good en degres)
  roto=180/pi*float(listeNbrs[3])*sqrt(2)	
  if (radio>epaisseur):
   #myMesh=ruban(radio,epaisseur,epaisseur,120)	
   myMesh=myTorus(radio,epaisseur,80,8)
   
   rotata=RotationMatrix(roto,4,"x")
   #rotata=RotationMatrix(roto*180/pi,4,"x")
   myMesh.transform(rotata)	
   #trans=TranslationMatrix(Vector(radio,0,0))
   trans=TranslationMatrix(Vector(x1,y1,0))
   myMesh.transform(trans)	
   rotata=RotationMatrix(atan2(x1,y1)*180/pi,4,"z")	
   #myMesh.transform(rotata)	
  
   if(first==1):
    ob=scn.objects.new(myMesh,'basic')
    first=0
   else:
     localOb=scn.objects.new(myMesh,'toto')
     ob.join([localOb])
     scn.objects.unlink(localOb)
   """
   myMesh2=ruban(radio,epaisseur,epaisseur,120)	
   trans=TranslationMatrix(Vector(-x1,y1,0))
   myMesh2.transform(trans)
   rotata=RotationMatrix(180-roto*180/pi,4,"x")
   myMesh2.transform(rotata)	
   localOb=scn.objects.new(myMesh2,'toto')
   ob.join([localOb])
   scn.objects.unlink(localOb)
   """ 

except e:
 print 'fini '+e
finally:
 fichier.close()	
 


Window.RedrawAll()
#
########################################