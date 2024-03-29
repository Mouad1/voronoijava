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
 
   vec12=p2-p1 # vec1
   da=sqrt(vec12.dot(vec12))
   
   vec13=p3-p1 #vec2
   db=sqrt(vec13.dot(vec13))
   
   vec23=p3-p2
   dc=sqrt(vec23.dot(vec23))
   
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
   #print("Normale ",planeNormal)
   
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
                coords[i*p+j]=[(R+r*cos(2*j*pi/p))*cos(2*i*pi/n),(R+r*cos(2*j*pi/p))*sin(2*i*pi/n),r*sin(2*j*pi/p)]
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

def cyclide2(mu,c,a,nbc,nbd):
 global xOmega,r,R,omega,krap,den,b
 b=sqrt(a*a-c*c)
 print(" a, b,c,mu",a," ",b," ",c," ",mu)
 omega=(a*mu+b*sqrt(mu*mu-c*c))/c
 print("Omega dans cyclide ",omega)
 den=(a-c)*(mu-c)+b*sqrt(mu*mu-c*c)
 print("den ",den)
 krap=1000
 print("krap initial",krap)
 r=krap*c*c*(mu-c)/(den*((a+c)*(mu-c)+b*sqrt(mu*mu-c*c)))
 print("Proportion : ",(mu-c)/r)
 R=krap*c*c*(a-c)/(den*((a-c)*(mu+c)+b*sqrt(mu*mu-c*c)))
 
 print("R ",R," r ",r)
 xOmega=omega-krap*b*b*(omega-c)/(((a-c)*(mu+omega)-b*b)*((a+c)*(omega-mu)+b*b)) #(omega-c) dans le papier
 print("xOmega dans cyclide",xOmega)
 me=bpy.data.meshes.new('cyclide')
 coords=[[0,0,0] for i in range(nbc*nbd)]
 faces=[]
 b2=a*a-c*c
 for k in range(nbc):
  theta=2*pi*k/nbc
  cost=cos(theta)
  sint=sin(theta)
  for j in range(nbd):
   alpha=2*pi*j/nbd
   cosa=cos(alpha)
   sina=sin(alpha)
   denom=a-c*cost*cosa
   mx=(mu*(c-a*cost*cosa)+b2*cost)/denom
   my=sqrt(b2)*sint*(a-mu*cosa)/denom
   mz=sqrt(b2)*sina*(c*cost-mu)/denom
   coords[k*nbd+j]=[mx,mz,my] 
   
 # les faces
 for k in range(nbc):
  for j in range(nbd):
   #faire deux faces a partir de i (je me comprends)
   coinA=k*nbd+j; 
   coinB=k*nbd+(j+1)%nbd
   coinC=((k+1)%nbc)*nbd+j
   coinD=((k+1)%nbc)*nbd+(j+1)%nbd	
   faces.append([coinA,coinB,coinD])
   faces.append([coinA,coinD,coinC])


 me.from_pydata(coords,[],faces)   # edges or faces should be [], or you ask for problems
 me.update(calc_edges=True) 
 return me
#fin de la fonction

#Les parametres de la cyclide
b=0
omega=0
den=0

r=0
R=0
xOmega=0
superTheta=0

def den1(t,theta,epsilon):
    global xOmega,r,R,omega
    #print("XOmega dans den1 ",xOmega)
    #print("Omega theta",omega," ",theta)
    auxi=xOmega-sqrt(R*R-r*r)*cos(theta)*sin(t)-epsilon*(r+R*cos(t))*sin(theta)-omega
    #print("den1(",t,") ",auxi*auxi)
    return auxi*auxi

def den2(t,theta,epsilon):
    global xOmega,r,R,omega
    auxi=-sqrt(R*R-r*r)*sin(theta)*sin(t)+epsilon*(r+R*cos(t))*cos(theta)
    #print("den2(",t,") ",auxi*auxi)
    return auxi*auxi

def numx(t,theta,epsilon):
    global xOmega,r,R,omega
    return -sqrt(R*R-r*r)*cos(theta)*sin(t)-epsilon*(r+R*cos(t))*sin(theta)

def valX(t,theta,epsilon):
    global xOmega,r,R,omega,krap
    numer=krap*(xOmega-omega+numx(t,theta,epsilon))
    #print("krap dans valx ",krap)
    denim=den1(t,theta,epsilon)+den2(t,theta,epsilon)+r*r*sin(t)*sin(t)
    #print("valX (",t,"):",omega+numer/denim)
    return omega+numer/denim
    

def valY(t,theta,epsilon):
    global xOmega,r,R,omega,krap
    denim=den1(t,theta,epsilon)+den2(t,theta,epsilon)+r*r*sin(t)*sin(t)
    numer=krap*(-sqrt(R*R-r*r)*sin(theta)*sin(t)+epsilon*(r+R*cos(t))*cos(theta))
    #print("valY (",t,"):",numer/denim," theta ",theta)
    return numer/denim

def valZ(t,theta,epsilon):
    global xOmega,r,R,omega,krap
    denim=den1(t,theta,epsilon)+den2(t,theta,epsilon)+r*r*sin(t)*sin(t)
    #print("valZ (",t,"):",krap*r*sin(t)/denim)
    return krap*r*sin(t)/denim

def pointCyclide(va,vmu,vc,theta,phi):
    vdenom=va-vc*cos(theta)*cos(phi)
    vb2=a*a-c*c
    mx=(vmu*(vc-va*cos(theta)*cos(phi))+vb2*cos(theta))/vdenom
    my=sqrt(vb2)*sin(theta)*(va-vmu*cos(phi))/vdenom
    mz=sqrt(vb2)*sin(phi)*(vc*cos(theta)-vmu)/vdenom
    return Vector((mx,my,mz))
    

#Construire un tore sur un cercle de Villarceau pour la cyclide de parametre a,mu,c
# Construit un cercle de Villarceau (centre, rayon, plan normal
def villarceau(a,mu,c,theta,epsilon):
   global xOmega,r,R,omega
   # trois points du cercle
 
   point1=Vector((valX(0,theta,epsilon),valY(0,theta,epsilon),valZ(0,theta,epsilon)))
   point2=Vector((valX(pi/3,theta,epsilon),valY(pi/3,theta,epsilon),valZ(pi/3,theta,epsilon)))
   point3=Vector((valX(pi,theta,epsilon),valY(pi,theta,epsilon),valZ(pi,theta,epsilon)))
   
   
   
   vec12=point2-point1 # vec1
   da=sqrt(vec12.dot(vec12))
   """
   print("point1 ",point1)
   print("point2 ",point2)
   print("point3 ",point3)
   """
   vec13=point3-point1 #vec2
   db=sqrt(vec13.dot(vec13))
   
   vec23=point3-point2
   dc=sqrt(vec23.dot(vec23))
   
   verifRad=da*db*dc/sqrt(2*da*da*db*db+2*db*db*dc*dc+2*dc*dc*da*da-da*da*da*da-db*db*db*db-dc*dc*dc*dc)
   
   planeNormal=vec12.cross(vec13)
   planeNormal.normalize()
   #print(planeNormal)
   #print("Normale au plan ",planeNormal)
   #passage de la bissectrice 1 2
   milieu12=(point1+point2)/2
   #vecteur directeur de la bissectrice 1 2
   dir12=vec12.cross(planeNormal)
   dir12.normalize()
   milieu13=(point1+point3)/2
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
   radio=center-point1
   radio2=center-point2
   radio3=center-point3
   rayon=sqrt(radio.dot(radio))
   
   rayon2=sqrt(radio2.dot(radio2))
   rayon3=sqrt(radio3.dot(radio3))
   """
   print("grosse formule ",verifRad)
   print("Rayon ",rayon," verif ",radio.dot(planeNormal))
   print("Rayon 2 ",rayon2," verif ",radio.dot(planeNormal))
   print("Rayon 3 ",rayon3," verif ",radio.dot(planeNormal))
   
   print("Centre ",center)
   print("Normale ",planeNormal)
   """
   return center,rayon,planeNormal
   
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
       
      
    
    
 
#test

print("debut/n")

scn=bpy.context.scene

first=1
numero=0
reduc=0.95

nbc=100

nbd=50 #150
r0=3
r1=2
rc=5

# renommage des parametres de la cyclide pour etre en accord avec Garnier

# 5,3,1
rapaport=20
a=5*rapaport
mu=3*rapaport
c=2*rapaport
petitR=0.1

myMesh=cyclide2(mu,c,a,nbc,nbd)
colorize(myMesh,[1,0,0])

ob = bpy.data.objects.new('XVillarceau'+str(numero), myMesh)
bpy.context.scene.objects.link(ob) 
obj_B=scn.objects.get('XVillarceau0') 
bpy.context.scene.objects.active = ob


# la meme cyclide avec les premiers cercles en tore

nbtore=30

#les meridiens
for i in range(nbtore):
   theta=2*i*pi/nbtore
   denom=rc*rc-r1*r1*cos(theta)*cos(theta)
   rad1X=2*(r1*cos(theta)-r0)*(rc*rc-r1*r1)*cos(theta)/denom
   rad1Y=2*rc*sqrt(rc*rc-r1*r1)*sin(theta)*(r1*cos(theta)-r0)/denom
   rad1=0.5*sqrt(rad1X*rad1X+rad1Y*rad1Y)
   slide1X=rc*(r0*r1*sin(theta)*sin(theta)+(rc*rc-r1*r1)*cos(theta))/denom
   slide1Y=sqrt(rc*rc-r1*r1)*sin(theta)*(rc*rc-r0*r1*cos(theta))/denom
   p1=Vector([slide1X,slide1Y,0])
   trans=mathutils.Matrix.Translation(p1)
   myMesh=tore(rad1,petitR,200,20)
   rotata=mathutils.Matrix.Rotation(pi/2, 4, 'X') 
   myMesh.transform(rotata)
   rotata=mathutils.Matrix.Rotation(theta, 4, 'Z') 
   myMesh.transform(rotata)
   myMesh.transform(trans)
   rotata=mathutils.Matrix.Rotation(pi/2, 4, 'X') 
   myMesh.transform(rotata)
   """
   localOb = bpy.data.objects.new('Villarceau'+str(numero), myMesh)
   numero+=1
   scn.objects.link(localOb)
   colorize(myMesh,[0,1,0])
   """
 
#les paralleles 
pointCommun=Vector((a*mu/c,0,0))
for i in range(nbtore):
    phi=2*i*pi/nbtore   
    pA=pointCyclide(a,mu,c,0,phi)
    pB=pointCyclide(a,mu,c,pi/3,phi)  
    pC=pointCyclide(a,mu,c,2*pi/3,phi)  
    phiConstant=circle3D(pA,pB,pC)
    rayon=phiConstant[1]
    centre=phiConstant[0]
    plan=phiConstant[2]
    cprimeX=distance(centre,pointCommun)-(a*mu/c)
    myMesh=tore(rayon,petitR,200,20)
    
    rotata=mathutils.Matrix.Rotation(pi/2, 4, 'X') 
    myMesh.transform(rotata)
    trans=mathutils.Matrix.Translation(Vector((cprimeX,0,0)))
    myMesh.transform(trans)
    rotata=mathutils.Matrix.Rotation(pi, 4, 'Y') 
    myMesh.transform(rotata)
    trans=mathutils.Matrix.Translation(Vector((-a*mu/c,0,0)))
    
    myMesh.transform(trans)
    planTemoin=Vector((c*sin(phi),0,b))
    # Leux definitions de angle2 sont equivalentes
    angle2=atan2(plan[0],plan[2])
    angle2=atan2(c*sin(phi),b)
    rotata=mathutils.Matrix.Rotation(angle2, 4, 'Z') 
    myMesh.transform(rotata)
    trans=mathutils.Matrix.Translation(Vector((a*mu/c,0,0)))
    myMesh.transform(trans)
    """
    localOb = bpy.data.objects.new('Villarceau'+str(numero), myMesh)
    numero+=1
    scn.objects.link(localOb)
    colorize(myMesh,[1,0,1])
    """

# les villarceau
# Couleur de la premiere nappe
rgb1=[1,1,0]

# Couleur de la deuxieme nappe
rgb2=[0,0,1]




#first=1
#numero=0
nbCercles=16
ep=3
for i in range(nbCercles):
    print(i," avec epsilon=1")
    vilain=villarceau(a,mu,c,2*i*pi/nbCercles,1)   
    pn=vilain[2]
    angle1=atan2(pn[2],pn[0])
    angle2=atan2(sqrt(pn[2]*pn[2]+pn[0]*pn[0]),pn[1])
    #myMesh=tore(vilain[1],petitR,200,20)
    myMesh=cylindre(vilain[1]*reduc,ep,100)
    rotata=mathutils.Matrix.Rotation(angle2, 4, 'Y')  #original
    
    myMesh.transform(rotata)
    rotata=mathutils.Matrix.Rotation(-angle1, 4, 'Z')  #original
    
    myMesh.transform(rotata)
    trans=mathutils.Matrix.Translation(Vector([vilain[0][0],-vilain[0][2],vilain[0][1]])) #original
   
    myMesh.transform(trans)
    #rgb = [0.5+0.5*cos(2*i*pi/nbCercles),(cos(2*i*pi/nbCercles)+sin(2*i*pi/nbCercles))/4,0.5+0.5*sin(2*i*pi/nbCercles)]    
    # intersection de la lunule avec XVillarceau0
    
    
    colorize(myMesh,rgb1)    
    
    
    
    if(first==1):
      ob = bpy.data.objects.new('Villarceau'+str(numero), myMesh)
      bpy.context.scene.objects.link(ob) 
      # Le premier tore cree est actif, les autres seront selectionnes a la fin, puis joints 
      bpy.context.scene.objects.active = ob
      #numero+=1
      first=0
    else:
      localOb = bpy.data.objects.new('Villarceau'+str(numero), myMesh)
      #numero+=1
      scn.objects.link(localOb)
    
    obj_A=scn.objects.get('Villarceau'+str(numero))
    #print(obj_A)
    bpy.context.scene.objects.active = obj_A
    boo = obj_A.modifiers.new('Booh'+str(numero), 'BOOLEAN')
    boo.object = obj_B
    boo.operation = 'INTERSECT'
    bpy.ops.object.modifier_apply(apply_as='DATA', modifier='Booh'+str(numero))
    print(boo,boo.object,boo.operation,obj_A)
    #scn.objects.unlink(obj_B)
    #scn.objects.unlink(obj_A)
    
    numero+=1    
    print(i," avec epsilon=-1")
    vilain=villarceau(a,mu,c,2*i*pi/nbCercles,-1)   
    #vilain=villarceau(a,mu,c,0,-1)   
    
    pn=vilain[2]
    angle1=atan2(pn[2],pn[0])
    angle2=atan2(sqrt(pn[2]*pn[2]+pn[0]*pn[0]),pn[1])
    #myMesh=tore(vilain[1],petitR,200,20)
    myMesh=cylindre(vilain[1]*reduc,ep,100)
    rotata=mathutils.Matrix.Rotation(angle2, 4, 'Y')  #original
    
    myMesh.transform(rotata)
    rotata=mathutils.Matrix.Rotation(-angle1, 4, 'Z') #original
    
    myMesh.transform(rotata)
    trans=mathutils.Matrix.Translation(Vector([vilain[0][0],-vilain[0][2],vilain[0][1]]))
    myMesh.transform(trans)
    #rgb = [0.5+0.5*cos(2*i*pi/nbCercles),(cos(2*i*pi/nbCercles)+sin(2*i*pi/nbCercles))/4,0.5+0.5*sin(2*i*pi/nbCercles)]
    colorize(myMesh,rgb2)
    
    if(first==1):
      ob = bpy.data.objects.new('Villarceau'+str(numero), myMesh)
      bpy.context.scene.objects.link(ob) 
      
      bpy.context.scene.objects.active = ob
      #numero+=1
      first=0
    else:
      localOb = bpy.data.objects.new('Villarceau'+str(numero), myMesh)
      #numero+=1
      scn.objects.link(localOb)
    
    obj_A=scn.objects.get('Villarceau'+str(numero))
    #print(obj_A)
    bpy.context.scene.objects.active = obj_A
    boo = obj_A.modifiers.new('Booh'+str(numero), 'BOOLEAN')
    boo.object = obj_B
    boo.operation = 'INTERSECT'
    bpy.ops.object.modifier_apply(apply_as='DATA', modifier='Booh'+str(numero))
    print(boo,boo.object,boo.operation,obj_A)
    #scn.objects.unlink(obj_B)
    #scn.objects.unlink(obj_A)
    numero=numero+1
    
bpy.ops.object.select_pattern(extend=False, pattern="Villarceau*", case_sensitive=False)
bpy.ops.object.join()   
