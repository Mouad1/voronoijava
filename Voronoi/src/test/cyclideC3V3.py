#!BPY
 
# Une cyclide de Dupin C3, format fil de fer, avec les quatres droites. En couleur...
# chaque cercle est un seul mesh
# on isole le cas des cercles complets, plutot que de trainer des si alors sinon compliques
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
     
# construit un cylindre et l'oriente dans l'espace
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

#Construit une couronne de points
def couronneOrientee(p1,p2,rayon,nbFaces):
     # use the class constructors from Blender to form vectors for p1 and p2
     p1 = Vector(p1)
     p2 = Vector(p2)
     # form a vector that points in the direction from p1 to p2
     dir = p2-p1             
     # get the length of the line we want that goes from p1 to p2
     length = dir.length
     me=[[0,0,0] for i in range(nbFaces)]
     for i in range(nbFaces):
         me[i]=[rayon*cos(2*i*pi/nbFaces),0,rayon*sin(2*i*pi/nbFaces)]
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
     trans=mathutils.Matrix.Translation(p1)
     for i in range(nbFaces):
         vecti=Vector((me[i][0],me[i][1],me[i][2]))
         vecti.rotate(A)
         vecti=vecti+p1
         me[i]=[vecti.x,vecti.y,vecti.z]
     return me      
 
 
 
maxbox=15
rayon=0.1

nbAlpha=80 # forcement multiple de 4...
nbTheta=50
nbFaces=20
indice=0
memoire=[[0,0,0] for i in range(2*nbAlpha)]

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
    

def distance(t1,t2):
    ax=t1[0]-t2[0]
    ax=ax*ax
    ay=t1[1]-t2[1]
    ay=ay*ay
    az=t1[2]-t2[2]
    az=az*az
    return sqrt(ax+ay+az)
  
#quand tous les point du cercle sont dans la sphere, on fait un tore cols. 
def makeSimiliTorus(path,rayon,nbFaces):
    coords=[]
    faces=[]
    me=bpy.data.meshes.new('victor')
    for i in range(len(path)):
        tably=couronneOrientee(path[i],path[(i+1)%len(path)],rayon,nbFaces)
        for j in range(len(tably)):
            coords.append(tably[j])
    
    # Construire les faces
    for i in range(len(path)):
        # calculer le decalage pour eviter les etranglements
        temoin=coords[i*nbFaces]
        indice_challenger=((i+1)%len(path))*nbFaces
        decalageMin=0
        
        challenger=coords[indice_challenger]
        distMin=distance(temoin,challenger)
        # TODO : pas tres au point, et pas utile
        for decalage in range(nbFaces):
            challenger=coords[indice_challenger+decalage]
            distCourante=distance(temoin,challenger)
            if(distCourante<distMin):
                decalageMin=decalage
                distMin=distCourante
                
        decalageMin=0
        for j in range(nbFaces):
            faces.append([i*nbFaces+j,i*nbFaces+((j+1)%nbFaces),((i+1)%len(path))*nbFaces+(j+decalageMin)%nbFaces])
            faces.append([((i+1)%len(path))*nbFaces+(j+decalageMin)%nbFaces,((i+1)%len(path))*nbFaces+((j+1+decalageMin)%nbFaces),i*nbFaces+(j+1)%nbFaces])
    me.from_pydata(coords,[],faces)
    me.update(calc_edges=True) 
    return me           
          
      
  # fin de makeSililiTorus  

# construire un tube a partir d'un tableau de points    
# aussitot qu'on repere que tous les points sont presents, on pass la main a un autre programme
def makeMesh(path,radio,nbFaces,alpha,epsilon):
    global nbTheta,maxbox,memoire,indice
    coords=[]
    faces=[]
    
    me=bpy.data.meshes.new('myMesh')
    fin=len(path)-1
    complet=1
    # A quel angle theta=2*indiceDepart*pi/nbTheta correspond la premiere valeur du tableau
    indiceDepart=0
    # Purger le tableau 
    nbZero=0
    for i in range(len(path)):
        if(path[i].length==0):
             nbZero=nbZero+1
    if(nbZero==len(path)):
        print("rien dans le tableau")
        return      
    
    if(nbZero==0):
        return makeSimiliTorus(path,radio,nbFaces)
    
    # cas  des cercles incomplets
    
    # tableau avec des trous
    complet=0
    # tant qu'il y a des zeros a gauche, decaler a gauche    
    while(path[0].length==0):
        #decaler le tableau vers la gauche
        indiceDepart=indiceDepart+1
        tmp=path[0]
        for i in range(len(path)-1):
            path[i]=path[i+1]
        path[len(path)-1]=tmp
    #tant qu'il y a quelque chose a droite, decaler a droite
    while(path[len(path)-1].length!=0):
        indiceDepart=indiceDepart-1
        tmp=path[len(path)-1]
        for i in range(len(path)-1):
            j=len(path)-i-1
            path[j]=path[j-1]
        path[0]=tmp        
    while(path[fin].length==0):
        fin=fin-1
    # de l'indice zero  a l'indice fin (inclus), la liste des points du tube 
    # pour des angles theta=2*(indiceDepart)*pi/nbTheta jusqu'a theta=2*(indiceDepart+fin)*pi/nbTheta
    # todo : si le tube n'est pas ferme, rajouter des bouts de tube pour arriver au bord, memoriser la position de cette extremite...
    
    
    #rajouter un point a la fin
    
    theta1=2*(indiceDepart+fin)*pi/nbTheta
    theta2=2*(1+indiceDepart+fin)*pi/nbTheta
    vx=valX(theta1,alpha,epsilon)
    vy=valY(theta1,alpha,epsilon)
    vz=valZ(theta1,alpha,epsilon)
    point1=Vector((vx,vy,vz))
    
    vx=valX(theta2,alpha,epsilon)
    vy=valY(theta2,alpha,epsilon)
    vz=valZ(theta2,alpha,epsilon)
    point2=Vector((vx,vy,vz))
    valcoef=modifCoef(point1,point2,maxbox)
    fin=fin+1
    path[fin]=valcoef*point1+(1-valcoef)*point2    
    memoire[indice]=path[fin]
    indice=indice+1
        
    #rajouter un point au debut
    if(nbZero!=1):
        theta1=2*(indiceDepart-1)*pi/nbTheta
        theta2=2*(indiceDepart)*pi/nbTheta
        vx=valX(theta1,alpha,epsilon)
        vy=valY(theta1,alpha,epsilon)
        vz=valZ(theta1,alpha,epsilon)
        point1=Vector((vx,vy,vz))
        
        vx=valX(theta2,alpha,epsilon)
        vy=valY(theta2,alpha,epsilon)
        vz=valZ(theta2,alpha,epsilon)
        point2=Vector((vx,vy,vz))
        valcoef=modifCoef(point1,point2,maxbox)
        for i in reversed(range(fin+1)):
            path[i+1]=path[i]
        path[0]=valcoef*point1+(1-valcoef)*point2    
        memoire[indice]=path[0]
        indice=indice+1
        fin=fin+1 
    
    
      
    for i in range(fin):
        
        tably=couronneOrientee(path[i],path[i+1],rayon,nbFaces)
        for j in range(len(tably)):
            coords.append(tably[j])
        
    # la derniere couronne (a l'envers)
    tably=couronneOrientee(path[fin],path[fin-1],rayon,nbFaces)
    for j in reversed(range(len(tably))):
            coords.append(tably[j])
    # Construire les faces
    for i in range(fin):
        # calculer le decalage pour eviter les etranglements
        temoin=coords[i*nbFaces]
        indice_challenger=(i+1)*nbFaces
        decalageMin=0
        challenger=coords[indice_challenger]
        distMin=distance(temoin,challenger)
        for decalage in range(nbFaces):
            challenger=coords[indice_challenger+decalage]
            distCourante=distance(temoin,challenger)
            if(distCourante<distMin):
                decalageMin=decalage
                distMin=distCourante
        
        
        
        if(i!=fin-1): 
            decalageMin=0
            for j in range(nbFaces):
                faces.append([i*nbFaces+j,i*nbFaces+((j+1)%nbFaces),(i+1)*nbFaces+(j+decalageMin)%nbFaces])
                faces.append([(i+1)*nbFaces+(j+decalageMin)%nbFaces,(i+1)*nbFaces+((j+1+decalageMin)%nbFaces),i*nbFaces+(j+1)%nbFaces])
        else:
            print("decalage :",decalageMin)
            for j in range(nbFaces):
                faces.append([i*nbFaces+j,i*nbFaces+((j+1)%nbFaces),(i+1)*nbFaces+(j+decalageMin)%nbFaces])
                faces.append([(i+1)*nbFaces+(j+decalageMin)%nbFaces,(i+1)*nbFaces+((j+1+decalageMin)%nbFaces),i*nbFaces+(j+1)%nbFaces])        
        
    # toutes les faces sont finies sauf les couvercles
    
    coords.append([path[0][0],path[0][1],path[0][2]]) # de numero (fin+1)*nbFaces
    coords.append([path[fin][0],path[fin][1],path[fin][2]])    # de numero (fin+1)*nbFaces+1       
    for j in range(nbFaces):
        # fabriquer des triangles pour les couvercles     
        faces.append([j,(j+1)%nbFaces,(fin+1)*nbFaces])
        faces.append([j+fin*nbFaces,(j+1)%nbFaces+fin*nbFaces,(fin+1)*nbFaces+1])
       
    me.from_pydata(coords,[],faces)
    me.update(calc_edges=True) 
    return me        
                   
def ordonner(tableau,indice):
    for i in range(indice):
        for j in range(indice-1):
            valj=atan2(tableau[j][1],tableau[j][2])
            valjp1=atan2(tableau[j+1][1],tableau[j+1][2])    
            if(valj>valjp1):
                tmp=tableau[j]
                tableau[j]=tableau[j+1]
                tableau[j+1]=tmp
    return                        
    
    
 
#test
print("debut/n")

scn=bpy.context.scene

first=1
numero=0

catenaName='velo'

# Memoriser tous les points de coupure, pour les ordonner et les relier a la fin   
memoire=[0 for i in range(800)]
indice=0



for ind2 in range(nbAlpha):
   
    alphy=2*ind2*pi/nbAlpha
    #le cas des droites
    if alphy==pi/2:
        alphy=0.9999*alphy
    if alphy==3*pi/2:
        alphy=0.9999*alphy
    # memoriser tous les points d'un cercle de Villarceau, 0 si on sort des bornes    
    cheminDirect=[Vector((0,0,0)) for i in range(nbTheta)]  
    cheminInverse=[Vector((0,0,0))  for i in range(nbTheta)]    
    
    for index in range(nbTheta):
        theta=2*index*pi/nbTheta
        vx=valX(theta,alphy,1)
        vy=valY(theta,alphy,1)
        vz=valZ(theta,alphy,1)
        
        
        depart=Vector((vx,vy,vz))
        
        
        if depart.length<=maxbox:
            cheminDirect[index]=depart
           
        
            
        # deuxieme cercle pour le meme alpha        
        vx=valX(theta,alphy,-1)
        vy=valY(theta,alphy,-1)
        vz=valZ(theta,alphy,-1)
        
        thetaS=theta+2*pi/nbTheta
        vxS=valX(thetaS,alphy,-1)
        vyS=valY(thetaS,alphy,-1)
        vzS=valZ(thetaS,alphy,-1)
        
        depart=Vector((vx,vy,vz))
        
        if (depart.length<=maxbox):
            cheminInverse[index]=depart
        
        
    # On a cree deux chemins, pas forcement complets, on les transforme en tubes fermes aux extremites
    
    
    cercle1=makeMesh(cheminDirect,rayon,nbFaces,alphy,1)
    
    if(first==1):
        ob=bpy.data.objects.new(catenaName+str(numero),cercle1)
        bpy.context.scene.objects.link(ob) 
        bpy.context.scene.objects.active = ob
        numero+=1
        first=0
    else:
        localOb=bpy.data.objects.new(catenaName+str(numero),cercle1)
        numero+=1
        scn.objects.link(localOb)
    
    cercle2=makeMesh(cheminInverse,rayon,nbFaces,alphy,-1)
    if(first==1):
        ob=bpy.data.objects.new(catenaName+str(numero),cercle2)
        bpy.context.scene.objects.link(ob) 
        bpy.context.scene.objects.active = ob
        numero+=1
        first=0
    else:
        localOb=bpy.data.objects.new(catenaName+str(numero),cercle2)
        numero+=1
        scn.objects.link(localOb)
       

for index in range(indice):      
    print(index," ",memoire[index]," ",atan2(memoire[index][1],memoire[index][2]))
    
   
print("--------")
ordonner(memoire,indice)

newMemoire=[[0,0,0] for i in range(indice)]
  
for index in range(indice):      
    print(index," ",memoire[index]," ",atan2(memoire[index][1],memoire[index][2]))
    newMemoire[index]=memoire[index]
              
contour=makeSimiliTorus(newMemoire,rayon,nbFaces) 
localOb=bpy.data.objects.new(catenaName+str(numero),contour)
numero+=1
scn.objects.link(localOb)

bpy.ops.object.select_pattern(extend=False, pattern=catenaName+'*', case_sensitive=False)
bpy.ops.object.join()   