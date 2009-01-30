#include "inclusions.inc"


background{color White}
/*
    global_settings
{
 max_trace_level 255
radiosity
{
pretrace_start 0.16
pretrace_end 0.01
count 600
nearest_count 4
error_bound 0.1
recursion_limit 1
low_error_factor 1
gray_threshold 0.0
minimum_reuse 0.015
brightness 0.2
adc_bailout 0.01/2
}
photons
{
count 200000
jitter .1
}
}
*/
 light_source
{
0*x
color White
area_light
<4, 0, 0> <0, 0, 4>
5, 5
adaptive 0.2
jitter
circular
orient
translate <40,100,-30>*0.1

photons {
refraction on
reflection on
}
media_attenuation on
}

light_source
{
0*x
color White*0.7
area_light
<4, 0, 0> <0, 0, 4>
5, 5
adaptive 0.2
jitter
circular
orient
translate <-40,360,-30>

photons {
refraction on
reflection on
}
media_attenuation on
}
/*
light_source
{
0*x
color White*0.7
area_light
<4, 0, 0> <0, 0, 4>
5, 5
adaptive 0.2
jitter
circular
orient
translate <40,100,-30>

photons {
refraction on
reflection on
}
media_attenuation on
}
light_source
{
0*x
color White*0.7
area_light
<4, 0, 0> <0, 0, 4>
5, 5
adaptive 0.2
jitter
circular
orient
translate <40,360,30>

photons {
refraction on
reflection on
}
media_attenuation on
}
*/

#declare dret=-1.8; 
#declare drouge=0.25; 
#declare djaune=2.3; 
#declare diamsphere=0.2;
#declare epsilon=0.1; 
#declare coef=1.2; 

camera{
//orthographic
location <drouge,6,-8>*0.7
look_at<0,-1,0>
}

#macro cylindre(depart,arrivee)
#declare norm=VDist(arrivee-depart,0); 
union{
object{cylinder{<0,0,0>,(arrivee-depart)*0.98,0.01 texture{pigment{color Green}}}}
object{cone{(arrivee-depart)*(1-0.3/norm),0.04,(arrivee-depart),0 texture{pigment{color Green}}}
}
translate depart
}
#end

#declare index=-2; 
#while(index<3)
sphere{<dret,0,index*coef>,diamsphere texture{pigment{color Red}} finish{ reflection 0.01 specular 0.5}}
#declare index=index+1;
#end

#declare index=-1; 
#while(index<2)
sphere{<drouge,0,index*coef>,diamsphere texture{pigment{color Blue}} finish{ reflection 0.01 specular 0.5}}
#declare index=index+1;
#end

#declare index=-0.5; 
#while(index<1)
sphere{<djaune,0,index*coef>,diamsphere texture{pigment{color Yellow}} finish{ reflection 0.01 specular 0.5}}
#declare index=index+1;
#end

#declare i1=-2; 
#while(i1<3)
cylindre(<dret-1.5,0,i1*coef>,<dret-epsilon,0,i1*coef>)
#declare i2=-1; 
#while(i2<2)
cylindre(<dret,0,i1*coef>,<drouge-epsilon,0,i2*coef>)
#declare i2=i2+1; 
#end 
#declare i1=i1+1; 
#end 

#declare i1=-1; 
#while(i1<2)
#declare i2=-0.5; 
#while(i2<1)
cylindre(<drouge,0,i1*coef>,<djaune-epsilon,0,i2*coef>)
#declare i2=i2+1; 
#end 
#declare i1=i1+1; 
#end 

#declare i2=-0.5; 
#while(i2<1)
cylindre(<djaune,0,i2*coef>,<djaune+2,0,i2*coef>)
#declare i2=i2+1; 
#end 
plane{y, -diamsphere texture{pigment{color Gray90}} finish{reflection 0.1} }
  #declare decale=0.7; 
 text {
    ttf "LucidaBrightRegular.ttf" "Input" 0.1, 0
    texture{T_Gold_3E}
    finish{Metallic_Finish}
    scale 0.6
    rotate 0*y
    translate <dret-decale,0,3.5>
  }

text {
    ttf "LucidaBrightRegular.ttf" "Hidden" 0.1, 0
    texture{T_Gold_3E}
    finish{Metallic_Finish}
    scale 0.6
    rotate 0*y
    translate <drouge-decale,0,2.5>
  }
text {
    ttf "LucidaBrightRegular.ttf" "Output" 0.1, 0
    texture{T_Gold_3E}
    finish{Metallic_Finish}
    scale 0.6
    rotate 0*y
    translate <djaune-decale,0,1.5>
  }