#!BPY
 
#Lire de fichiers de donnees pour des tores, des pacmans, des cylindres et des spheres
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

def mySphere(p,r):
 me=Mesh.Primitives.UVsphere(12,12,r)
 dir=Vector(p)
 A = Matrix(
    [1,0,0,0],
    [0,1,0,0],
    [0,0,1,0],
    [dir[0],dir[1],dir[2],1])
 
 # apply the transform to the sphere
 me.transform(A,True)
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


#Un segment de tore
def myPacman(R,r,x0,y0,x2,y2,n,p):
 me=bpy.data.meshes.new('myMesh')
 coords=[]
 faces=[]
 alpha1=atan2(x0,y0)
 alpha2=atan2(x2,y2)
 print alpha1
 print alpha2
 if(alpha2<alpha1):
	alpha2=alpha2+2*pi
 alpha2=alpha2*0.985
 for i in range(n):
  
  for j in range(p):
  	
   coords.append([(R+r*cos(2*pi*j/p))*sin(alpha1+(-2*pi-alpha1+alpha2)*i/n),(R+r*cos(2*pi*j/p))*cos(alpha1+(-2*pi-alpha1+alpha2)*i/n),r*sin(2*pi*j/p)])
 
 #les faces 
 for j in range((n-1)*p):
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
scn = Scene.GetCurrent()


numero=0
epaisseur=0.0127356
diam=epaisseur*1.3
nbf=12
first=1
#fichier=open('C:\Users\decomite\workspace\imageJ\cardioidBlender.txt')
#fichier=open('C:/tmp/BeretSansTrou.txt')
fichier=open('C:/tmp/coquetier.txt')
index=0
try:	
 for line in fichier:
  listeNbrs=line.split(" ")
  print index
  index=index+1
 
  typeObjet=int(float(listeNbrs[0]))
  if(typeObjet==0):
   radio=float(listeNbrs[1])
   transl=float(listeNbrs[2])
   roto=180/pi*float(listeNbrs[3])
   rotz=180/pi*float(listeNbrs[4])
   if (radio>epaisseur):
    myMesh=myTorus(radio,epaisseur,120,12)
    rotata=RotationMatrix(roto,4,"x")
    myMesh.transform(rotata)	
    trans=TranslationMatrix(Vector(transl,0,0))
    myMesh.transform(trans)	
    rotata=RotationMatrix(rotz,4,"z")	
    myMesh.transform(rotata)
  
    if(first==1):
     ob=scn.objects.new(myMesh,'basic'+`numero`)
     numero+=1
     first=0
    else:
      localOb=scn.objects.new(myMesh,'toto'+`numero`)
      numero+=1
      ob.join([localOb])
      scn.objects.unlink(localOb)
#fin de typeObjet=0 (tore complet)

  if(typeObjet==1):
   radio=float(listeNbrs[1])
   transl=float(listeNbrs[2])
   roto=180/pi*float(listeNbrs[3])
   roto2=180/pi*float(listeNbrs[4])
   x0=float(listeNbrs[5])
   z0=float(listeNbrs[6])
   y0=-float(listeNbrs[7])
   x2=float(listeNbrs[8])
   z2=float(listeNbrs[9])
   y2=-float(listeNbrs[10])
   if (radio>epaisseur):
    myMesh=myPacman(radio,epaisseur,x0,y0,x2,y2,120,12)	
    rotata=RotationMatrix(roto,4,"x")
    myMesh.transform(rotata)	
    trans=TranslationMatrix(Vector(transl,0,0))
    myMesh.transform(trans)
    rotata=RotationMatrix(roto2,4,"z")	
    myMesh.transform(rotata)
  
    if(first==1):
     ob=scn.objects.new(myMesh,'basic'+`numero`)
     numero+=1
     first=0
    else:
      localOb=scn.objects.new(myMesh,'toto'+`numero`)
      numero+=1
      ob.join([localOb])
      scn.objects.unlink(localOb)
#fin de typeObjet=1 (tore incomplet)
  if(typeObjet==2):
   x0=float(listeNbrs[1]) 
   z0=float(listeNbrs[2]) 
   y0=-float(listeNbrs[3]) 
   x1=float(listeNbrs[4]) 
   z1=float(listeNbrs[5]) 
   y1=-float(listeNbrs[6]) 
   point0=Vector([x0,y0,z0])
   point1=Vector([x1,y1,z1])
   meFinal=NMesh.GetRaw()
   meFinal.verts.extend(lineSegMe(point0,point1,diam,nbf)[1])
   meFinal.verts.extend(lineSegMe(point0,point1,diam,nbf)[3])
   me=meshify(meFinal,nbf)
   if(first==1):
     ob=scn.objects.new(me,'basic'+`numero`)
     numero+=1
     first=0
   else:
    localOb=scn.objects.new(me,'cylindre'+`numero`)
    numero+=1
    ob.join([localOb])
    scn.objects.unlink(localOb)
   me=mySphere(point0,2*diam)
   localOb=scn.objects.new(me,'sphere'+`numero`)
   numero+=1
   ob.join([localOb])
   scn.objects.unlink(localOb)
  if(typeObjet==3):
   x0=float(listeNbrs[1]) 
   z0=float(listeNbrs[2]) 
   y0=-float(listeNbrs[3]) 
   point0=Vector([x0,y0,z0])
   me=mySphere(point0,2*diam)
   if(first==1):
    ob=scn.objects.new(me,'basic'+`numero`)
    numero+=1
    first=0
   else:
      localOb=scn.objects.new(me,'toto'+`numero`)
      numero+=1
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