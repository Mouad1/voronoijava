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
#declare drouge=0.25; 
#declare djaune=2.3; 


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




sphere{<2.3,0,0>, 0.1 texture{pigment{color Yellow}} finish{reflection 0.2}}

polygon{
4,
<2.3,1,-2>
<2.3,1,2>
<2.3,-1,2>
<2.3,-1,-2>

texture{pigment{color rgbt<0,1,1,0.6>}}
}

#macro cylindre(depart,arrivee)
#declare norm=VDist(arrivee-depart,0); 
union{
object{cylinder{<0,0,0>,(arrivee-depart)*0.9,0.02 texture{pigment{color Green}}}}
object{cone{(arrivee-depart)*(1-0.3/norm),0.07,(arrivee-depart),0 texture{pigment{color Green}}}
}
translate depart
}
#end


#macro connard(depart,arrivee,couleur)
cone{depart,0.3,arrivee,0.1 open texture{pigment{color rgbt couleur}} }


#end

// de rouge vers jaune
#declare index1=0; 
 
cylindre(
<drouge,cos(2*index1*pi/5),sin(2*index1*pi/5)>
<djaune,0,0>
  )               

  
  #declare index1=2; 

cylindre(
<drouge,cos(2*index1*pi/5),sin(2*index1*pi/5)>
<djaune,0,0>
  ) 
 
   #declare index1=3; 

cylindre(
<drouge,cos(2*index1*pi/5),sin(2*index1*pi/5)>
<djaune,0,0>
  ) 
  #declare index1=1; 

cylindre(
<drouge,cos(2*index1*pi/5),sin(2*index1*pi/5)>
<djaune,0,0>
  ) 
 
   #declare index1=4; 

cylindre(
<drouge,cos(2*index1*pi/5),sin(2*index1*pi/5)>
<djaune,0,0>
  ) 
  
  cylindre(
  <djaune,0,0>
  <djaune+1.2,0,0>
  )
 
 #declare k=5; 
 #declare index=1; 
 connard(<dret,0.2,0.7>,<drouge,cos(2*index*pi/k),sin(2*index*pi/k)>,<0,0,1,0.8>)  
 #declare index=0; 
 connard(<dret,0.5,0.2>,<drouge,cos(2*index*pi/k),sin(2*index*pi/k)>,<0,1,1,0.8>)  
 #declare index=3; 
 connard(<dret,-0.5,-0.4>,<drouge,cos(2*index*pi/k),sin(2*index*pi/k)>,<1,0,0,0.8>)
 #declare epsilon=0.001; 
 cylinder{<dret-epsilon,0.2,0.7>,<dret+epsilon,0.2,0.7>,0.23 texture{pigment{color rgbt<1,1,1,0.5>}}finish{ambient 0.99}}  
 cylinder{<dret-epsilon,0.5,0.2>,<dret+epsilon,0.5,0.2>,0.3 texture{pigment{color rgbt<1,1,1,0.5>}}finish{ambient 0.99}}  
 cylinder{<dret-epsilon,-0.5,-0.4>,<dret+epsilon,-0.5,-0.4>,0.27 texture{pigment{color rgbt<1,1,1,0.5>}}finish{ambient 0.99}}  