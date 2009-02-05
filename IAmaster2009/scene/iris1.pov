#include "inclusions.inc"


background{color Gray90}

    global_settings
{
 max_trace_level 255
 charset utf8
 }/*
 
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
translate <40,1000,-30>*10

photons {
refraction on
reflection on
}
media_attenuation on
shadowless
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
translate <-40,3,-30>

photons {
refraction on
reflection on
}
media_attenuation on
shadowless
}

camera{

location <2,10,2>
look_at<2,0,2>
}

#declare Tspher1=texture{pigment{color Red}}
#declare Fspher1=finish{Metallic_Finish}
#declare Tspher2=texture{pigment{color Blue}}
#declare Fspher2=finish{Metallic_Finish}

#declare dsphere=0.05; 
#declare diamcyl=0.01;

#declare TCyl=texture{pigment{color Green}}
#declare Fcyl=finish{Metallic_Finish}
 
#declare nan=0;  
#include "/tmp/perceptron.txt"


cylinder{<0,0,-20>,<0,0,20>,diamcyl texture{pigment{color Black}} finish{Metallic_Finish}}
cylinder{<-20,0,0>,<20,0,0>,diamcyl texture{pigment{color Black}} finish{Metallic_Finish}}

plane{y,-0.001 texture{pigment{color Gray80}} finish{reflection 0.3}}

text {ttf "DejaVuSans-Oblique.ttf" "Apprentissage du Perceptron" 0.3, 0  
scale 0.4 rotate 90*x translate <1,0.08,6> texture{pigment{color Blue}} finish{reflection 0.3}}