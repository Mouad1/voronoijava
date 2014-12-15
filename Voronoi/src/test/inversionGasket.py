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
def distance(p1,p2):
    dx=p1[0]-p2[0]
    dx=dx*dx
    dy=p1[1]-p2[1]
    dy=dy*dy
    dz=p1[2]-p2[2]
    dz=dz*dz
    return sqrt(dx+dy+dz)
    
# construire un cercle quand on a trois points, en dimension 3
def circle3D(p1,p2,p3):
 # trois points du cercle
   print(p1,"\n",p2,"\n",p3,"_n")
   vec12=p2-p1 # vec1
   da=sqrt(vec12.dot(vec12))
   print("Vec12 ",vec12)
   
   vec13=p3-p1 #vec2
   db=sqrt(vec13.dot(vec13))
   print("Vec13 ",vec13)
   
   vec23=p3-p2
   dc=sqrt(vec23.dot(vec23))
   print("Vec23 ",vec23)
   
   verifRad=da*db*dc/sqrt(2*da*da*db*db+2*db*db*dc*dc+2*dc*dc*da*da-da*da*da*da-db*db*db*db-dc*dc*dc*dc)
   
   planeNormal=vec12.cross(vec13)
   planeNormal.normalize()
   
   #passage de la bissectrice 1 2
   milieu12=(p1+p2)/2
   #vecteur directeur de la bissectrice 1 2
   dir12=vec12.cross(planeNormal)
   dir12.normalize()
   milieu13=(p1+p3)/2
   #vecteur directeur de la bissectrice 1 3
   dir13=vec13.cross(planeNormal)
   dir13.normalize()
   
   dirAux=milieu12-milieu13
   c1=dir13.cross(dirAux)
   c2=dir12.cross(dir13)
   nA=c1.dot(c2)
   d=c2.dot(c2)
   #print("valeur de d ",d)
   # Ouf, on a trouve le centre
   center=milieu12+nA/d*dir12
   radio=center-p1
   radio2=center-p2
   radio3=center-p3
   rayon=sqrt(radio.dot(radio))
   
   rayon2=sqrt(radio2.dot(radio2))
   rayon3=sqrt(radio3.dot(radio3))
   """
   print("grosse formule ",verifRad)
   print("Rayon ",rayon," verif ",radio.dot(planeNormal))
   print("Rayon 2 ",rayon2," verif ",radio.dot(planeNormal))
   print("Rayon 3 ",rayon3," verif ",radio.dot(planeNormal))
   """
   print("Centre ",center," distance ",sqrt(center.dot(center)),"\n")
   print("Normale ",planeNormal)
   
   return center,rayon,planeNormal   



#un cylindre
# R : rayon
# ep : epaisseur
# n : nombres de points sur la circonference
def cylindre(R,ep,n):
    me=bpy.data.meshes.new('cylindre')
    coords=[[0,0,0] for i in range(2*n+2)]
    coords[2*n]=[0,0,ep/2]
    coords[2*n+1]=[0,0,-ep/2]
    faces=[]
    for i in range(n): 
        coords[i]=[R*cos(2*i*pi/n),R*sin(2*i*pi/n),ep/2]
        coords[i+n]=[R*cos(2*i*pi/n),R*sin(2*i*pi/n),-ep/2]
    for i in range(n):
        faces.append([2*n,i,(i+1)%n])
        faces.append([i+n,2*n+1,n+(i+1)%n])
        faces.append([i,i+n,(i+1)%n])
        faces.append([(i+1)%n,i+n,(i+1)%n+n])
    me.from_pydata(coords,[],faces)   
    me.update(calc_edges=True) 
    return me   


#un tore
# R : grand rayon
# r : petit rayon
# n : nombre de sections
# p : nombre de points sur une section
def tore(R,r,n,p):
    me=bpy.data.meshes.new('tore')
    coords=[[0,0,0] for i in range(n*p)]
    faces=[]
    for i in range(n): 
        for j in range(p):
                coords[i*p+j]=[(R+r*cos(2*j*pi/p))*cos(2*i*pi/n),r*sin(2*j*pi/p),(R+r*cos(2*j*pi/p))*sin(2*i*pi/n)]
    for i in range(n):
        #relier la couronne numero i a la couronne (i+1)%n
        depart=i*p
        arrivee=((i+1)*p)%(n*p)
        for j in range(p):
            faces.append([depart+j,arrivee+j,depart+(j+1)%p])
            faces.append([depart+(j+1)%p,arrivee+j,arrivee+(j+1)%p])
            
    me.from_pydata(coords,[],faces)   
    me.update(calc_edges=True) 
    return me          




  
   
def colorize(myMesh,myColor):
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
    j = 0
    for face in faces:
     for idx in face.loop_indices:
      vertexColor[j].color = myColor
      j += 1
    return
# fin de colorize      
       
# Inversion par rapport a une sphere      
def inversion(centre,rayon,point):
    k=rayon*rayon
    p1=point-centre
    denom=p1[0]*p1[0]+p1[1]*p1[1]+p1[2]*p1[2]
    p2=k/denom*p1
    resu=p2+centre
    return resu
    
 # un cylindre
def cylindre(r,nbFaces,l):
 
 me=bpy.data.meshes.new('cylindre')
 coords=[[0,0,0] for i in range(2*nbFaces+2)]
 faces=[]

 coords[2*nbFaces]=[0,0,0]
 coords[2*nbFaces+1]=[0,l,0]
 
 for i in range(0,nbFaces):
     coords[i]=[r*cos(2*i*pi/nbFaces),0,r*sin(2*i*pi/nbFaces)]
     coords[i+nbFaces]=[r*cos(2*i*pi/nbFaces),l,r*sin(2*i*pi/nbFaces)]
    
 for i in range(0,nbFaces):
     faces.append([i,(i+1)%nbFaces,2*nbFaces])  
     faces.append([i+nbFaces,2*nbFaces+1,nbFaces+(i+1)%nbFaces])
     faces.append([(i+1)%nbFaces,i,i+nbFaces])
     faces.append([i+nbFaces,nbFaces+(i+1)%nbFaces,(i+1)%nbFaces])
    
 me.from_pydata(coords,[],faces)   # edges or faces should be [], or you ask for problems
 me.update(calc_edges=True) 
 return me
     
# construit une liste de points (la couronne) et l'oriente dans l'espace
def cylindreOriente(p1,p2,rayon,nbFaces):
 
 # use the class constructors from Blender to form vectors for p1 and p2
 p1 = Vector(p1)
 p2 = Vector(p2)
 # form a vector that points in the direction from p1 to p2
 dir = p2-p1             
 # get the length of the line we want that goes from p1 to p2
 length = dir.length
 me=cylindre(rayon,nbFaces,length)
 dir.normalize()
 u = dir
 uu = Vector([0,1.0,0])
 if abs(u.angle(uu))>1e-6:
  v=u.cross(uu)
  A=Matrix.Rotation(-u.angle(uu),4,v)
 else:
  A = Matrix((
    (1,0,0,0),
    (0,1,0,0),
    (0,0,1,0),
    (0,0,0,1)))
  
 # apply the transform to the cylinder  
 
 me.transform(A)
 trans=mathutils.Matrix.Translation(p1)
 me.transform(trans)
 return me
         
 
#test

print("debut/n")

scn=bpy.context.scene

first=1
numero=0
petitR=0.5
nbLignes=85
nbf=20

centreInv=Vector((0,0,0.5))
radInv=1

for i in range(nbLignes):
    point1=Vector((cos(2*i*pi/nbLignes),sin(2*i*pi/nbLignes),0))
    point2=Vector((cos((4*i+1)*pi/nbLignes),sin((4*i+1)*pi/nbLignes),0))
    point3=(point1+point2)/2
    p1=inversion(centreInv,radInv,point1)
    p2=inversion(centreInv,radInv,point2)
    p3=inversion(centreInv,radInv,point3)
    
    
    monCercle=circle3D(p1,p2,p3)
    rayon=50*monCercle[1]
    centre=50*monCercle[0]
    plan=monCercle[2]
    
    if(plan[0]!=0):
        angle1=atan2(plan[2],plan[0])
    else:
        angle1=pi/2
    if(plan[1]!=0):
        angle2=atan2(sqrt(plan[0]*plan[0]+plan[2]*plan[2]),plan[1])
    else:
        angle2=pi/2
        
    # Le tore externe    
    myMesh=tore(rayon,petitR,200,nbf)
    rotata=mathutils.Matrix.Rotation(-angle2, 4, 'Z') 
    myMesh.transform(rotata)
    rotata=mathutils.Matrix.Rotation(-angle1, 4, 'Y') 
    myMesh.transform(rotata)
    trans=mathutils.Matrix.Translation(centre)
    myMesh.transform(trans)
   
    if(first==1):
      ob = bpy.data.objects.new('Cardio'+str(numero), myMesh)
      bpy.context.scene.objects.link(ob) 
      
      bpy.context.scene.objects.active = ob
      first=0
    else:
      localOb = bpy.data.objects.new('Cardio'+str(numero), myMesh)
      scn.objects.link(localOb)
    numero+=1
    
    #le tore central
    myMesh=tore((7-2*sqrt(12))*rayon,petitR,200,nbf)
    rotata=mathutils.Matrix.Rotation(-angle2, 4, 'Z') 
    myMesh.transform(rotata)
    rotata=mathutils.Matrix.Rotation(-angle1, 4, 'Y') 
    myMesh.transform(rotata)
    trans=mathutils.Matrix.Translation(centre)
    myMesh.transform(trans)
   
    if(first==1):
      ob = bpy.data.objects.new('Cardio'+str(numero), myMesh)
      bpy.context.scene.objects.link(ob) 
      
      bpy.context.scene.objects.active = ob
      first=0
    else:
      localOb = bpy.data.objects.new('Cardio'+str(numero), myMesh)
      scn.objects.link(localOb)
    numero+=1
    
    #le premier tore tangent
    myMesh=tore((sqrt(12)-3)*rayon,petitR,200,nbf)
    trans=mathutils.Matrix.Translation(Vector(((4-sqrt(12))*rayon,0,0)))
    myMesh.transform(trans)
    rotata=mathutils.Matrix.Rotation(-angle2, 4, 'Z') 
    myMesh.transform(rotata)
    rotata=mathutils.Matrix.Rotation(-angle1, 4, 'Y') 
    myMesh.transform(rotata)
    trans=mathutils.Matrix.Translation(centre)
    myMesh.transform(trans)
   
    if(first==1):
      ob = bpy.data.objects.new('Cardio'+str(numero), myMesh)
      bpy.context.scene.objects.link(ob) 
      
      bpy.context.scene.objects.active = ob
      first=0
    else:
      localOb = bpy.data.objects.new('Cardio'+str(numero), myMesh)
      scn.objects.link(localOb)
    numero+=1
    
    #le deuxieme tore tangent
    myMesh=tore((sqrt(12)-3)*rayon,petitR,200,nbf)
    trans=mathutils.Matrix.Translation(Vector(((4-sqrt(12))*rayon*cos(2*pi/3),0,(4-sqrt(12))*rayon*sin(2*pi/3))))
    myMesh.transform(trans)
    rotata=mathutils.Matrix.Rotation(-angle2, 4, 'Z') 
    myMesh.transform(rotata)
    rotata=mathutils.Matrix.Rotation(-angle1, 4, 'Y') 
    myMesh.transform(rotata)
    trans=mathutils.Matrix.Translation(centre)
    myMesh.transform(trans)
   
    if(first==1):
      ob = bpy.data.objects.new('Cardio'+str(numero), myMesh)
      bpy.context.scene.objects.link(ob) 
      
      bpy.context.scene.objects.active = ob
      first=0
    else:
      localOb = bpy.data.objects.new('Cardio'+str(numero), myMesh)
      scn.objects.link(localOb)
    numero+=1
    
    #le troisieme tore tangent
    myMesh=tore((sqrt(12)-3)*rayon,petitR,200,nbf)
    trans=mathutils.Matrix.Translation(Vector(((4-sqrt(12))*rayon*cos(4*pi/3),0,(4-sqrt(12))*rayon*sin(4*pi/3))))
    myMesh.transform(trans)
    rotata=mathutils.Matrix.Rotation(-angle2, 4, 'Z') 
    myMesh.transform(rotata)
    rotata=mathutils.Matrix.Rotation(-angle1, 4, 'Y') 
    myMesh.transform(rotata)
    trans=mathutils.Matrix.Translation(centre)
    myMesh.transform(trans)
   
    if(first==1):
      ob = bpy.data.objects.new('Cardio'+str(numero), myMesh)
      bpy.context.scene.objects.link(ob) 
      
      bpy.context.scene.objects.active = ob
      first=0
    else:
      localOb = bpy.data.objects.new('Cardio'+str(numero), myMesh)
      scn.objects.link(localOb)
    numero+=1
    
bpy.ops.object.select_pattern(extend=False, pattern="Cardio*", case_sensitive=False)
bpy.ops.object.join()   
