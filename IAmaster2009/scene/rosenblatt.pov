#include "inclusions.inc"


background{color White}

light_source{
<0.5,0.5,-4>
color White
}

camera{
//orthographic
location <1,0.5,-5>
look_at<0.5,0,0>
}

#declare dret=-1.8; 
#declare drouge=-0.3; 
#declare dbleu=1.1; 


box { <0,0,0> <1,1,0.0001>
      pigment { image_map 
                { png "playmo.png" // file type and file name
                  map_type 0 // 0=planar
                  interpolate 2 // bilinear
                 } } 
     finish{ambient 0.8 diffuse 0.8}
     translate 0.00005*z
     translate -0.5*x
     translate -0.5*y
     rotate 90*y
     //translate 0.005*x
     scale <1,2,2>
     translate dret*x
    
                 }
                 
#declare k=5; 
#declare index=0; 
#while(index<k)
sphere{<drouge,cos(2*index*pi/k),sin(2*index*pi/k)>, 0.1 texture{pigment{color Red}} finish{reflection 0.2}}
#declare index=index+1; 
#end


polygon{
4,
<drouge,1,-2>
<drouge,1,2>
<drouge,-1,2>
<drouge,-1,-2>

texture{pigment{color rgbt<1,0,0,0.6>}}
}

#declare k=3; 
#declare index=0; 
#while(index<k)
sphere{<dbleu,cos(2*index*pi/k+pi/4),sin(2*index*pi/k+pi/4)>, 0.1 texture{pigment{color Blue}} finish{reflection 0.2}}
#declare index=index+1; 
#end

polygon{
4,
<dbleu,1,-2>
<dbleu,1,2>
<dbleu,-1,2>
<dbleu,-1,-2>

texture{pigment{color rgbt<0,0,1,0.6>}}
}

#declare k=2; 
#declare index=-1; 
#while(index<k)
sphere{<2.3,0,index>, 0.1 texture{pigment{color Yellow}} finish{reflection 0.2}}
#declare index=index+1; 
#end
polygon{
4,
<2.3,1,-2>
<2.3,1,2>
<2.3,-1,2>
<2.3,-1,-2>

texture{pigment{color rgbt<0,1,1,0.6>}}
}

#macro cylindre(depart,arrivee)
union{
object{cylinder{<0,0,0>,(arrivee-depart)*0.9,0.02 texture{pigment{color Green}}}}
object{cone{(arrivee-depart)*0.8,0.07,(arrivee-depart),0 texture{pigment{color Green}}}
}
translate depart
}
#end

// de rouge vers bleu
#declare index1=0; 
#declare index2=2; 
cylindre(
<drouge,cos(2*index1*pi/5),sin(2*index1*pi/5)>
<dbleu,cos(2*index2*pi/3+pi/4),sin(2*index2*pi/3+pi/4)>
  )               
#declare index1=0; 
#declare index2=0; 
cylindre(
<drouge,cos(2*index1*pi/5),sin(2*index1*pi/5)>
<dbleu,cos(2*index2*pi/3+pi/4),sin(2*index2*pi/3+pi/4)>
  )    
  
  
  #declare index1=2; 
#declare index2=1; 
cylindre(
<drouge,cos(2*index1*pi/5),sin(2*index1*pi/5)>
<dbleu,cos(2*index2*pi/3+pi/4),sin(2*index2*pi/3+pi/4)>
  ) 
 
   #declare index1=3; 
#declare index2=1; 
cylindre(
<drouge,cos(2*index1*pi/5),sin(2*index1*pi/5)>
<dbleu,cos(2*index2*pi/3+pi/4),sin(2*index2*pi/3+pi/4)>
  ) 
  #declare index1=1; 
#declare index2=2; 
cylindre(
<drouge,cos(2*index1*pi/5),sin(2*index1*pi/5)>
<1.3,cos(2*index2*pi/3+pi/4),sin(2*index2*pi/3+pi/4)>
  ) 
 
   #declare index1=4; 
#declare index2=1; 
cylindre(
<drouge,cos(2*index1*pi/5),sin(2*index1*pi/5)>
<dbleu,cos(2*index2*pi/3+pi/4),sin(2*index2*pi/3+pi/4)>
  ) 
  
  
 // de bleu vers jaune 
 
#declare index2=2; 
cylindre(
<dbleu,cos(2*index2*pi/3+pi/4),sin(2*index2*pi/3+pi/4)>
<2.3,0,1>
  )               
#declare index2=2; 
cylindre(
<dbleu,cos(2*index2*pi/3+pi/4),sin(2*index2*pi/3+pi/4)>
<2.3,0,-1>
  )        



#declare index2=0; 
cylindre(
<dbleu,cos(2*index2*pi/3+pi/4),sin(2*index2*pi/3+pi/4)>
<2.3,0,1>
  )    
 #declare index2=0; 
cylindre(
<dbleu,cos(2*index2*pi/3+pi/4),sin(2*index2*pi/3+pi/4)>
<2.3,0,0>
  )     
  

#declare index2=1; 
cylindre(

<dbleu,cos(2*index2*pi/3+pi/4),sin(2*index2*pi/3+pi/4)>
<2.3,0,0>
  ) 
 
 
#declare index2=1; 
cylindre(
<dbleu,cos(2*index2*pi/3+pi/4),sin(2*index2*pi/3+pi/4)>
<2.3,0,-1>
  )                  
  
 // de la retine vers projection
 

cylindre(
<dret,-0.5,0.7>
<drouge,cos(2*1*pi/5),sin(2*1*pi/5)>
  )     
  
  cylindre(
<dret,-0.5,0.7>
<drouge,cos(2*0*pi/5),sin(2*0*pi/5)>
  )   
  cylindre(
<dret,0.7,0.7>
<drouge,cos(2*3*pi/5),sin(2*3*pi/5)>
  )   
  cylindre(
<dret,-0.15,-0.87>
<drouge,cos(2*3*pi/5),sin(2*3*pi/5)>
  )   
  cylindre(
<dret,0.65,-0.1>
<drouge,cos(2*2*pi/5),sin(2*2*pi/5)>
  )      
  
    cylindre(
<dret,-0.15,-0.87>
<drouge,cos(2*4*pi/5),sin(2*4*pi/5)>
  )    