#include "inclusions.inc"


background{color White}

    global_settings
{
 max_trace_level 255
 charset utf8
 }
 /*
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
/*
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
translate <-40,360,-30>*0.1

photons {
refraction on
reflection on
}
media_attenuation on
}
*/

light_source{
<-10,5,-10>
color White
}

#declare drouge=0; 
#declare diamsphere=0.2;
#declare epsilon=0.1; 

camera{
//orthographic
location <drouge,0,-8>*0.7
look_at<0,0,0>
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

//plane{y, -diamsphere texture{pigment{color Gray90}} finish{reflection 0.1} }
sphere{<drouge,0,0>,diamsphere scale 0.4*y texture{pigment{color Red}} finish{ reflection 0.01 specular 0.5}}

#declare somme=union{
#declare decaler=0.05; 
text {ttf "DejaVuSans-Oblique.ttf" "s=" 0.1, 0}
text{ttf "DejaVuSans-Oblique.ttf" chr(425) 0.1,0 scale 2 translate <1,-0.5+decaler,0>}
text{ttf "DejaVuSans-Oblique.ttf" "n" 0.1,0 scale 0.7  translate <1.62,0.98+decaler,0>}
text{ttf "DejaVuSans-Oblique.ttf" "i=0" 0.1,0 scale 0.6  translate <1.06,-1.0+decaler,0>}
text{ttf "DejaVuSans-Oblique.ttf" "w" 0.1,0 scale 0.6  translate <2,0.1+decaler,0>}
text{ttf "DejaVuSans-Oblique.ttf" "i" 0.1,0 scale 0.4  translate <2.35,-0.1+decaler,0>}
text{ttf "DejaVuSans-Oblique.ttf" "x" 0.1,0 scale 0.6  translate <2.5,0.1+decaler,0>}
text{ttf "DejaVuSans-Oblique.ttf" "i" 0.1,0 scale 0.4  translate <2.87,-0.1+decaler,0>}
texture{pigment{color Blue}}
}//union

somme