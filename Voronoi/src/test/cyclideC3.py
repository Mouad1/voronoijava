#!BPY
 
# Une cyclide de Dupin C3, format fil de fer, avec les quatres droites. En couleur...
__author__ = "francesco de comite"
__version__ = "1.0 2014/11/05"
__url__="Website, www.lifl.fr/decomite"
 
 
##############################################################
# load the modules used in the script
import bpy
import math
import mathutils
from mathutils import *

from math import *
##############################################################
# une sphere
# R : rayon
# n : nombre de méridiens
# p : nombre de paralleles

def sphere(R,n,p):
    me=bpy.data.meshes.new('sphere')
    coords=[[0,0,0] for i in range(n*p+2)]
    faces=[]    
    
    # Les points
    for i in range(p): #les points sur un parallele
        zc=pi/2-(i+1)*pi/(p+1)
        for j in range(n):
            coords[j+i*n]=[R*cos(2*j*pi/n)*cos(zc),R*sin(2*j*pi/n)*cos(zc),R*sin(zc)]
    coords[n*p]=[0,0,R]
    coords[n*p+1]=[0,0,-R]
    
    #les faces
    # Calottes
    for i in range(n):
        faces.append([i,(i+1)%n,n*p])
        faces.append([i+(p-1)*n,n*p+1,(i+1)%n+(p-1)*n])
    
    # relier un parallele au suivant
    for i in range(p-1):
        for j in range(n):
            faces.append([(j+1)%n+n*i,j+n*i,j+n*(i+1)])
            faces.append([(j+1)%n+n*i,j+n*(i+1),(j+1)%n+n*(i+1)])
            
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
      


# les parametres de la cyclide
p=2
q=-9
omega=q-sqrt(q*q-p*q)
k=p*p-p*q
xOmega=(2*q*q-(p+2*q)*sqrt(q*q-p*q))/(2*q)
r=abs((q-p+sqrt(q*q-p*q))/2);
R=abs((q-p)*(q+sqrt(q*q-p*q))/(2*q)); 
Rr=sqrt(R*R-r*r); 
k=p*p-p*q; 

# les sous programmes auxiliaires (cf L. Garnier)

def den1(ct,theta,epsilon):
    global xOmega,r,R,omega
    valeur=xOmega*xOmega+R*R+r*r+omega*omega-2*xOmega*omega+2*R*r*cos(ct)-2*xOmega*epsilon*r*sin(theta)
    return valeur

def den2(ct,theta,epsilon):
    global xOmega,Rr,r,omega
    valeur=-2*xOmega*cos(theta)*sin(ct)*Rr+2*epsilon*r*omega*sin(theta)+2*omega*cos(theta)*sin(ct)*Rr
    return valeur
    
def den3(ct,theta,epsilon):
    global xOmega,R,omega
    valeur=-2*xOmega*R*epsilon*cos(ct)*sin(theta)+2*R*epsilon*omega*cos(ct)*sin(theta)
    return valeur
   
def denom(ct,theta,epsilon):
    global k
    valeur=den1(ct,theta,epsilon)+den2(ct,theta,epsilon)+den3(ct,theta,epsilon)
    
    return k/valeur

def valX(ct,theta,epsilon):
    global xOmega,omega,Rr,r,R
    f1=xOmega
    f2=epsilon*r*sin(theta)
    f3=omega
    f4=Rr*cos(theta)*sin(ct)
    f5=epsilon*R*cos(ct)*sin(theta)
    total=f1-f2-f3-f4-f5
    return omega+total*denom(ct,theta,epsilon)

def valY(ct,theta,epsilon):
    global R,r
    f1=epsilon*R*cos(ct)*cos(theta)
    f2=epsilon*r*cos(theta)
    f3=Rr*sin(ct)*sin(theta)
    total=-f1-f2+f3
    return (-total*denom(ct,theta,epsilon))
    
def valZ(ct,theta,epsilon):
    global r
    total=r*sin(ct);
    return total*denom(ct,theta,epsilon)


# Pour arreter les cylindres aux frontieres de la sphere englobante
def modifCoef(v1,v2,rayon):
    vA=v1[0]*v1[0]+v1[1]*v1[1]+v1[2]*v1[2]
    vB=v2[0]*v2[0]+v2[1]*v2[1]+v2[2]*v2[2]
    vC=v1[0]*v2[0]+v1[1]*v2[1]+v1[2]*v2[2]
    delta=(vC-vB)*(vC-vB)-(vA+vB-2*vC)*(vB-rayon*rayon)
    alpha0=(-(vC-vB)-sqrt(delta))/(vA+vB-2*vC)
    alpha1=(-(vC-vB)+sqrt(delta))/(vA+vB-2*vC)
    if (alpha0>=0)and(alpha0<=1):
        return alpha0
    else:
        return alpha1
    
    
 
#test
print("debut/n")

scn=bpy.context.scene

first=1
numero=0

catenaName='cyclo'
   
memoire=[0 for i in range(800)]
indice=0

maxbox=15
rayon=0.2

nbAlpha=20  # forcement multiple de 4...
nbTheta=100

for ind2 in range(nbAlpha):
    alphy=2*ind2*pi/nbAlpha
    if alphy==pi/2:
        alphy=0.9999*alphy
    if alphy==3*pi/2:
        alphy=0.9999*alphy
    for index in range(nbTheta):
        theta=2*index*pi/nbTheta
        vx=valX(theta,alphy,1)
        vy=valY(theta,alphy,1)
        vz=valZ(theta,alphy,1)
        
        thetaS=theta+2*pi/nbTheta
        vxS=valX(thetaS,alphy,1)
        vyS=valY(thetaS,alphy,1)
        vzS=valZ(thetaS,alphy,1)
        
        depart=Vector((vx,vy,vz))
        arrivee=Vector((vxS,vyS,vzS))
        
        debut=Vector((0,0,0))
        fin=Vector((0,0,0))
        
        # todo : mettre a jour les bornes du modele
        if (depart.length<=maxbox)and(arrivee.length<=maxbox):
            debut=depart
            fin=arrivee
        
        if (depart.length>maxbox)and(arrivee.length<=maxbox):
            debut=arrivee
            fin=depart
            coef=modifCoef(debut,fin,maxbox)
           
            fin=coef*debut+(1-coef)*fin
            memoire[indice]=fin 
            indice=indice+1
            
        if (depart.length<=maxbox)and(arrivee.length>maxbox):
            debut=depart
            fin=arrivee
            coef=modifCoef(debut,fin,maxbox)
            
            fin=coef*debut+(1-coef)*fin
            memoire[indice]=fin 
            indice=indice+1
            
        
        if (debut-fin).length>1e-3:
            
            if ind2==nbAlpha/4:
                csfer=2
                myCylindre=cylindreOriente(debut,fin,2*rayon,12)
            else:
                csfer=1
                myCylindre=cylindreOriente(debut,fin,rayon,12)
        
            if first==1:
                ob=bpy.data.objects.new(catenaName+str(numero),myCylindre)
                bpy.context.scene.objects.link(ob) 
                bpy.context.scene.objects.active = ob
                numero+=1
                first=0
            else:
                localOb=bpy.data.objects.new(catenaName+str(numero),myCylindre)
                numero+=1
                scn.objects.link(localOb)
            
                
            mySphere=sphere(csfer*rayon*1.03,16,16)
            A=mathutils.Matrix.Translation(debut)
            mySphere.transform(A)
            localOb=bpy.data.objects.new(catenaName+str(numero),myCylindre)
            numero+=1
            scn.objects.link(localOb)
                
        vx=valX(theta,alphy,-1)
        vy=valY(theta,alphy,-1)
        vz=valZ(theta,alphy,-1)
        
        thetaS=theta+2*pi/nbTheta
        vxS=valX(thetaS,alphy,-1)
        vyS=valY(thetaS,alphy,-1)
        vzS=valZ(thetaS,alphy,-1)
        
        depart=Vector((vx,vy,vz))
        arrivee=Vector((vxS,vyS,vzS))
        
        debut=Vector((0,0,0))
        fin=Vector((0,0,0))
        
        # todo : mettre a jour les bornes du modele
        if (depart.length<=maxbox)and(arrivee.length<=maxbox):
            debut=depart
            fin=arrivee
        
        if (depart.length>maxbox)and(arrivee.length<=maxbox):
            debut=arrivee
            fin=depart
            coef=modifCoef(debut,fin,maxbox)
           
            fin=coef*debut+(1-coef)*fin
            memoire[indice]=fin 
            indice=indice+1
            
        if (depart.length<=maxbox)and(arrivee.length>maxbox):
            debut=depart
            fin=arrivee
            coef=modifCoef(debut,fin,maxbox)
            
            fin=coef*debut+(1-coef)*fin
            memoire[indice]=fin 
            indice=indice+1
            
        
        if (debut-fin).length>1e-3:
            
            if ind2==3*nbAlpha/4:
                myCylindre=cylindreOriente(debut,fin,2*rayon,12)
            else:
                myCylindre=cylindreOriente(debut,fin,rayon,12)
        
            if first==1:
                ob=bpy.data.objects.new(catenaName+str(numero),myCylindre)
                bpy.context.scene.objects.link(ob) 
                bpy.context.scene.objects.active = ob
                numero+=1
                first=0
            else:
                localOb=bpy.data.objects.new(catenaName+str(numero),myCylindre)
                numero+=1
                scn.objects.link(localOb)
                    
             
                
 
      
      
bpy.ops.object.select_pattern(extend=False, pattern=catenaName+'*', case_sensitive=False)
bpy.ops.object.join()   
