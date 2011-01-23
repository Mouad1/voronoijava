#declare icosahedron=mesh2{

vertex_vectors{

12,
<-1.0,0.0,0.6180339887499>,
<1.0,0.0,0.6180339887499>,
<-1.0,0.0,-0.6180339887499>,
<1.0,0.0,-0.6180339887499>,
<0.0,0.6180339887499,1.0>,
<0.0,0.6180339887499,-1.0>,
<0.0,-0.6180339887499,1.0>,
<0.0,-0.6180339887499,-1.0>,
<0.6180339887499,1.0,0.0>,
<-0.6180339887499,1.0,0.0>,
<0.6180339887499,-1.0,0.0>,
<-0.6180339887499,-1.0,0.0>
 }
normal_vectors{

12,
<0.0,0.0,0.0>,
<0.0,0.0,0.0>,
<0.0,0.0,0.0>,
<0.0,0.0,0.0>,
<0.0,0.0,0.0>,
<0.0,0.0,0.0>,
<0.0,0.0,0.0>,
<0.0,0.0,0.0>,
<0.0,0.0,0.0>,
<0.0,0.0,0.0>,
<0.0,0.0,0.0>,
<0.0,0.0,0.0>
 }
/* 
 texture_list{
1,
texture{texture0}
 }
*/
face_indices{
20,
<4,8,1>,// ,0,
<10,6,1>,// ,0,
<4,6,0>,// ,0,
<6,4,1>,// ,0,
<8,3,1>,// ,0,
<3,10,1>,// ,0,
<4,9,8>,// ,0,
<2,9,0>,// ,0,
<9,4,0>,// ,0,
<11,6,10>,// ,0,
<11,2,0>,// ,0,
<6,11,0>,// ,0,
<5,3,8>,// ,0,
<9,5,8>,// ,0,
<5,9,2>,// ,0,
<3,7,10>,// ,0,
<7,11,10>,// ,0,
<11,7,2>,// ,0,
<7,5,2>,// ,0,
<5,7,3> //0
 } 
 }
#declare aretes=union{

object{cylinder{<-1.0,0.0,0.6180339887499>,<-1.0,0.0,-0.6180339887499>,diam  }}
object{cylinder{<-1.0,0.0,0.6180339887499>,<0.0,0.6180339887499,1.0>,diam  }}
object{cylinder{<-1.0,0.0,0.6180339887499>,<0.0,-0.6180339887499,1.0>,diam  }}
object{cylinder{<-1.0,0.0,0.6180339887499>,<-0.6180339887499,1.0,0.0>,diam  }}
object{cylinder{<-1.0,0.0,0.6180339887499>,<-0.6180339887499,-1.0,0.0>,diam  }}
object{cylinder{<1.0,0.0,0.6180339887499>,<1.0,0.0,-0.6180339887499>,diam  }}
object{cylinder{<1.0,0.0,0.6180339887499>,<0.0,0.6180339887499,1.0>,diam  }}
object{cylinder{<1.0,0.0,0.6180339887499>,<0.0,-0.6180339887499,1.0>,diam  }}
object{cylinder{<1.0,0.0,0.6180339887499>,<0.6180339887499,1.0,0.0>,diam  }}
object{cylinder{<1.0,0.0,0.6180339887499>,<0.6180339887499,-1.0,0.0>,diam  }}
object{cylinder{<-1.0,0.0,-0.6180339887499>,<0.0,0.6180339887499,-1.0>,diam  }}
object{cylinder{<-1.0,0.0,-0.6180339887499>,<0.0,-0.6180339887499,-1.0>,diam  }}
object{cylinder{<-1.0,0.0,-0.6180339887499>,<-0.6180339887499,1.0,0.0>,diam  }}
object{cylinder{<-1.0,0.0,-0.6180339887499>,<-0.6180339887499,-1.0,0.0>,diam  }}
object{cylinder{<1.0,0.0,-0.6180339887499>,<0.0,0.6180339887499,-1.0>,diam  }}
object{cylinder{<1.0,0.0,-0.6180339887499>,<0.0,-0.6180339887499,-1.0>,diam  }}
object{cylinder{<1.0,0.0,-0.6180339887499>,<0.6180339887499,1.0,0.0>,diam  }}
object{cylinder{<1.0,0.0,-0.6180339887499>,<0.6180339887499,-1.0,0.0>,diam  }}
object{cylinder{<0.0,0.6180339887499,1.0>,<0.0,-0.6180339887499,1.0>,diam  }}
object{cylinder{<0.0,0.6180339887499,1.0>,<0.6180339887499,1.0,0.0>,diam  }}
object{cylinder{<0.0,0.6180339887499,1.0>,<-0.6180339887499,1.0,0.0>,diam  }}
object{cylinder{<0.0,0.6180339887499,-1.0>,<0.0,-0.6180339887499,-1.0>,diam  }}
object{cylinder{<0.0,0.6180339887499,-1.0>,<0.6180339887499,1.0,0.0>,diam  }}
object{cylinder{<0.0,0.6180339887499,-1.0>,<-0.6180339887499,1.0,0.0>,diam  }}
object{cylinder{<0.0,-0.6180339887499,1.0>,<0.6180339887499,-1.0,0.0>,diam  }}
object{cylinder{<0.0,-0.6180339887499,1.0>,<-0.6180339887499,-1.0,0.0>,diam  }}
object{cylinder{<0.0,-0.6180339887499,-1.0>,<0.6180339887499,-1.0,0.0>,diam  }}
object{cylinder{<0.0,-0.6180339887499,-1.0>,<-0.6180339887499,-1.0,0.0>,diam  }}
object{cylinder{<0.6180339887499,1.0,0.0>,<-0.6180339887499,1.0,0.0>,diam  }}
object{cylinder{<0.6180339887499,-1.0,0.0>,<-0.6180339887499,-1.0,0.0>,diam  }}
}
#declare sommets=union{

object{sphere{<-1.0,0.0,0.6180339887499>,diam1 }}
object{sphere{<1.0,0.0,0.6180339887499>,diam1 }}
object{sphere{<-1.0,0.0,-0.6180339887499>,diam1 }}
object{sphere{<1.0,0.0,-0.6180339887499>,diam1 }}
object{sphere{<0.0,0.6180339887499,1.0>,diam1 }}
object{sphere{<0.0,0.6180339887499,-1.0>,diam1 }}
object{sphere{<0.0,-0.6180339887499,1.0>,diam1 }}
object{sphere{<0.0,-0.6180339887499,-1.0>,diam1 }}
object{sphere{<0.6180339887499,1.0,0.0>,diam1 }}
object{sphere{<-0.6180339887499,1.0,0.0>,diam1 }}
object{sphere{<0.6180339887499,-1.0,0.0>,diam1 }}
object{sphere{<-0.6180339887499,-1.0,0.0>,diam1 }}
}
#declare maxIndices=30;
#declare trans=array[30];
#declare trans[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<1.0,-0.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656443 rotate -90.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,0.0,0.0>};
#declare trans[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-120.00000000000028>);
#declare Victor=vrotate(Victor,<0,159.09484255211098,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-120.00000000000028>);
#declare Hugo=vrotate(Hugo,<0,159.09484255211098,0>);
#declare transy=<0.5,-0.30901699437495,-0.80901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -120.00000000000028*z rotate 159.09484255211098*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,0.30901699437495,0.80901699437495>};
#declare trans[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-59.99999999999975>);
#declare Victor=vrotate(Victor,<0,159.09484255211098,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-59.99999999999975>);
#declare Hugo=vrotate(Hugo,<0,159.09484255211098,0>);
#declare transy=<0.5,0.30901699437495,-0.80901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -59.99999999999975*z rotate 159.09484255211098*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,-0.30901699437495,0.80901699437495>};
#declare trans[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-143.99999999999994>);
#declare Victor=vrotate(Victor,<0,-121.71747441146047,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-143.99999999999994>);
#declare Hugo=vrotate(Hugo,<0,-121.71747441146047,0>);
#declare transy=<0.80901699437495,-0.5,-0.30901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -143.99999999999994*z rotate -121.71747441146047*y Axis_Rotate_Trans(Victor,provi)  translate <-0.80901699437495,0.5,0.30901699437495>};
#declare trans[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.000000000000064>);
#declare Victor=vrotate(Victor,<0,-121.71747441146047,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.000000000000064>);
#declare Hugo=vrotate(Hugo,<0,-121.71747441146047,0>);
#declare transy=<0.80901699437495,0.5,-0.30901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -36.000000000000064*z rotate -121.71747441146047*y Axis_Rotate_Trans(Victor,provi)  translate <-0.80901699437495,-0.5,0.30901699437495>};
#declare trans[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-1.0,-0.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656443 rotate -90.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,0.0,0.0>};
#declare trans[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-120.00000000000028>);
#declare Victor=vrotate(Victor,<0,20.905157447889042,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-120.00000000000028>);
#declare Hugo=vrotate(Hugo,<0,20.905157447889042,0>);
#declare transy=<-0.5,-0.30901699437495,-0.80901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -120.00000000000028*z rotate 20.905157447889042*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,0.30901699437495,0.80901699437495>};
#declare trans[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-59.99999999999975>);
#declare Victor=vrotate(Victor,<0,20.905157447889042,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-59.99999999999975>);
#declare Hugo=vrotate(Hugo,<0,20.905157447889042,0>);
#declare transy=<-0.5,0.30901699437495,-0.80901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -59.99999999999975*z rotate 20.905157447889042*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,-0.30901699437495,0.80901699437495>};
#declare trans[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-143.99999999999994>);
#declare Victor=vrotate(Victor,<0,-58.282525588539556,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-143.99999999999994>);
#declare Hugo=vrotate(Hugo,<0,-58.282525588539556,0>);
#declare transy=<-0.80901699437495,-0.5,-0.30901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -143.99999999999994*z rotate -58.282525588539556*y Axis_Rotate_Trans(Victor,provi)  translate <0.80901699437495,0.5,0.30901699437495>};
#declare trans[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.000000000000064>);
#declare Victor=vrotate(Victor,<0,-58.282525588539556,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.000000000000064>);
#declare Hugo=vrotate(Hugo,<0,-58.282525588539556,0>);
#declare transy=<-0.80901699437495,0.5,-0.30901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -36.000000000000064*z rotate -58.282525588539556*y Axis_Rotate_Trans(Victor,provi)  translate <0.80901699437495,-0.5,0.30901699437495>};
#declare trans[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-120.00000000000028>);
#declare Victor=vrotate(Victor,<0,-159.09484255211098,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-120.00000000000028>);
#declare Hugo=vrotate(Hugo,<0,-159.09484255211098,0>);
#declare transy=<0.5,-0.30901699437495,0.80901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -120.00000000000028*z rotate -159.09484255211098*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,0.30901699437495,-0.80901699437495>};
#declare trans[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-59.99999999999975>);
#declare Victor=vrotate(Victor,<0,-159.09484255211098,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-59.99999999999975>);
#declare Hugo=vrotate(Hugo,<0,-159.09484255211098,0>);
#declare transy=<0.5,0.30901699437495,0.80901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -59.99999999999975*z rotate -159.09484255211098*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,-0.30901699437495,-0.80901699437495>};
#declare trans[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-143.99999999999994>);
#declare Victor=vrotate(Victor,<0,121.71747441146047,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-143.99999999999994>);
#declare Hugo=vrotate(Hugo,<0,121.71747441146047,0>);
#declare transy=<0.80901699437495,-0.5,0.30901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -143.99999999999994*z rotate 121.71747441146047*y Axis_Rotate_Trans(Victor,provi)  translate <-0.80901699437495,0.5,-0.30901699437495>};
#declare trans[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.000000000000064>);
#declare Victor=vrotate(Victor,<0,121.71747441146047,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.000000000000064>);
#declare Hugo=vrotate(Hugo,<0,121.71747441146047,0>);
#declare transy=<0.80901699437495,0.5,0.30901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -36.000000000000064*z rotate 121.71747441146047*y Axis_Rotate_Trans(Victor,provi)  translate <-0.80901699437495,-0.5,-0.30901699437495>};
#declare trans[14]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-120.00000000000028>);
#declare Victor=vrotate(Victor,<0,-20.905157447889042,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-120.00000000000028>);
#declare Hugo=vrotate(Hugo,<0,-20.905157447889042,0>);
#declare transy=<-0.5,-0.30901699437495,0.80901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -120.00000000000028*z rotate -20.905157447889042*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,0.30901699437495,-0.80901699437495>};
#declare trans[15]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-59.99999999999975>);
#declare Victor=vrotate(Victor,<0,-20.905157447889042,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-59.99999999999975>);
#declare Hugo=vrotate(Hugo,<0,-20.905157447889042,0>);
#declare transy=<-0.5,0.30901699437495,0.80901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -59.99999999999975*z rotate -20.905157447889042*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,-0.30901699437495,-0.80901699437495>};
#declare trans[16]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-143.99999999999994>);
#declare Victor=vrotate(Victor,<0,58.282525588539556,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-143.99999999999994>);
#declare Hugo=vrotate(Hugo,<0,58.282525588539556,0>);
#declare transy=<-0.80901699437495,-0.5,0.30901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -143.99999999999994*z rotate 58.282525588539556*y Axis_Rotate_Trans(Victor,provi)  translate <0.80901699437495,0.5,-0.30901699437495>};
#declare trans[17]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.000000000000064>);
#declare Victor=vrotate(Victor,<0,58.282525588539556,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.000000000000064>);
#declare Hugo=vrotate(Hugo,<0,58.282525588539556,0>);
#declare transy=<-0.80901699437495,0.5,0.30901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -36.000000000000064*z rotate 58.282525588539556*y Axis_Rotate_Trans(Victor,provi)  translate <0.80901699437495,-0.5,-0.30901699437495>};
#declare trans[18]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-0.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-0.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,-0.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656443 rotate -0.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.0,1.0>};
#declare trans[19]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-107.99999999999974>);
#declare Victor=vrotate(Victor,<0,-121.71747441146123,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-107.99999999999974>);
#declare Hugo=vrotate(Hugo,<0,-121.71747441146123,0>);
#declare transy=<-0.30901699437495,-0.80901699437495,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -107.99999999999974*z rotate -121.71747441146123*y Axis_Rotate_Trans(Victor,provi)  translate <0.30901699437495,0.80901699437495,0.5>};
#declare trans[20]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-107.99999999999974>);
#declare Victor=vrotate(Victor,<0,-58.28252558853878,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-107.99999999999974>);
#declare Hugo=vrotate(Hugo,<0,-58.28252558853878,0>);
#declare transy=<0.30901699437495,-0.80901699437495,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -107.99999999999974*z rotate -58.28252558853878*y Axis_Rotate_Trans(Victor,provi)  translate <-0.30901699437495,0.80901699437495,0.5>};
#declare trans[21]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-0.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-0.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,-0.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656443 rotate -0.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.0,-1.0>};
#declare trans[22]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-107.99999999999974>);
#declare Victor=vrotate(Victor,<0,121.71747441146123,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-107.99999999999974>);
#declare Hugo=vrotate(Hugo,<0,121.71747441146123,0>);
#declare transy=<-0.30901699437495,-0.80901699437495,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -107.99999999999974*z rotate 121.71747441146123*y Axis_Rotate_Trans(Victor,provi)  translate <0.30901699437495,0.80901699437495,-0.5>};
#declare trans[23]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-107.99999999999974>);
#declare Victor=vrotate(Victor,<0,58.28252558853878,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-107.99999999999974>);
#declare Hugo=vrotate(Hugo,<0,58.28252558853878,0>);
#declare transy=<0.30901699437495,-0.80901699437495,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -107.99999999999974*z rotate 58.28252558853878*y Axis_Rotate_Trans(Victor,provi)  translate <-0.30901699437495,0.80901699437495,-0.5>};
#declare trans[24]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-72.00000000000027>);
#declare Victor=vrotate(Victor,<0,-121.71747441146123,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-72.00000000000027>);
#declare Hugo=vrotate(Hugo,<0,-121.71747441146123,0>);
#declare transy=<-0.30901699437495,0.80901699437495,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -72.00000000000027*z rotate -121.71747441146123*y Axis_Rotate_Trans(Victor,provi)  translate <0.30901699437495,-0.80901699437495,0.5>};
#declare trans[25]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-72.00000000000027>);
#declare Victor=vrotate(Victor,<0,-58.28252558853878,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-72.00000000000027>);
#declare Hugo=vrotate(Hugo,<0,-58.28252558853878,0>);
#declare transy=<0.30901699437495,0.80901699437495,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -72.00000000000027*z rotate -58.28252558853878*y Axis_Rotate_Trans(Victor,provi)  translate <-0.30901699437495,-0.80901699437495,0.5>};
#declare trans[26]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-72.00000000000027>);
#declare Victor=vrotate(Victor,<0,121.71747441146123,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-72.00000000000027>);
#declare Hugo=vrotate(Hugo,<0,121.71747441146123,0>);
#declare transy=<-0.30901699437495,0.80901699437495,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -72.00000000000027*z rotate 121.71747441146123*y Axis_Rotate_Trans(Victor,provi)  translate <0.30901699437495,-0.80901699437495,-0.5>};
#declare trans[27]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-72.00000000000027>);
#declare Victor=vrotate(Victor,<0,58.28252558853878,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-72.00000000000027>);
#declare Hugo=vrotate(Hugo,<0,58.28252558853878,0>);
#declare transy=<0.30901699437495,0.80901699437495,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656368 rotate -72.00000000000027*z rotate 58.28252558853878*y Axis_Rotate_Trans(Victor,provi)  translate <-0.30901699437495,-0.80901699437495,-0.5>};
#declare trans[28]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,-1.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656443 rotate -90.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,1.0,0.0>};
#declare trans[29]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,1.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999983637656443 rotate -90.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-1.0,0.0>};
#declare maxFaces=20;
#declare transface=array[20];
#declare transface[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-83.66946059778677>);
#declare Victor=vrotate(Victor,<0,-139.4992949875802,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-83.66946059778677>);
#declare Hugo=vrotate(Hugo,<0,-139.4992949875802,0>);
#declare transy=<-0.404508497187475,-0.55901699437495,-0.6545084971874751>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -83.66946059778677*z rotate -139.4992949875802*y Axis_Rotate_Trans(Victor,provi)  translate <0.404508497187475,0.55901699437495,0.6545084971874751>};
#declare transface[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-130.20296588656956>);
#declare Victor=vrotate(Victor,<0,81.69922520048955,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-130.20296588656956>);
#declare Hugo=vrotate(Hugo,<0,81.69922520048955,0>);
#declare transy=<-0.55901699437495,0.6545084971874751,-0.404508497187475>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -130.20296588656956*z rotate 81.69922520048955*y Axis_Rotate_Trans(Victor,provi)  translate <0.55901699437495,-0.6545084971874751,0.404508497187475>};
#declare transface[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-29.999999999999748>);
#declare Victor=vrotate(Victor,<0,-20.90515744788903,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-29.999999999999748>);
#declare Hugo=vrotate(Hugo,<0,-20.90515744788903,0>);
#declare transy=<0.25,-0.154508497187475,-0.9045084971874751>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -29.999999999999748*z rotate -20.90515744788903*y Axis_Rotate_Trans(Victor,provi)  translate <-0.25,0.154508497187475,0.9045084971874751>};
#declare transface[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-150.00000000000026>);
#declare Victor=vrotate(Victor,<0,-159.09484255211098,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-150.00000000000026>);
#declare Hugo=vrotate(Hugo,<0,-159.09484255211098,0>);
#declare transy=<-0.25,0.154508497187475,-0.9045084971874751>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -150.00000000000026*z rotate -159.09484255211098*y Axis_Rotate_Trans(Victor,provi)  translate <0.25,-0.154508497187475,0.9045084971874751>};
#declare transface[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-20.905157447889042>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-20.905157447889042>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-0.80901699437495,-0.5,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -20.905157447889042*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.80901699437495,0.5,0.0>};
#declare transface[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-62.15468023279717>);
#declare Victor=vrotate(Victor,<0,78.35927686322965,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-62.15468023279717>);
#declare Hugo=vrotate(Hugo,<0,78.35927686322965,0>);
#declare transy=<-0.9045084971874751,0.25,0.154508497187475>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -62.15468023279717*z rotate 78.35927686322965*y Axis_Rotate_Trans(Victor,provi)  translate <0.9045084971874751,-0.25,-0.154508497187475>};
#declare transface[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-110.90515744788905>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-110.90515744788905>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-0.0,-0.80901699437495,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -110.90515744788905*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.80901699437495,0.5>};
#declare transface[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-117.84531976720285>);
#declare Victor=vrotate(Victor,<0,101.64072313677036,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-117.84531976720285>);
#declare Hugo=vrotate(Hugo,<0,101.64072313677036,0>);
#declare transy=<0.9045084971874751,-0.25,0.154508497187475>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -117.84531976720285*z rotate 101.64072313677036*y Axis_Rotate_Trans(Victor,provi)  translate <-0.9045084971874751,0.25,-0.154508497187475>};
#declare transface[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-49.797034113430456>);
#declare Victor=vrotate(Victor,<0,98.30077479951046,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-49.797034113430456>);
#declare Hugo=vrotate(Hugo,<0,98.30077479951046,0>);
#declare transy=<0.55901699437495,-0.6545084971874751,-0.404508497187475>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -49.797034113430456*z rotate 98.30077479951046*y Axis_Rotate_Trans(Victor,provi)  translate <-0.55901699437495,0.6545084971874751,0.404508497187475>};
#declare transface[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-100.27722132835316>);
#declare Victor=vrotate(Victor,<0,151.66003262923599,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-100.27722132835316>);
#declare Hugo=vrotate(Hugo,<0,151.66003262923599,0>);
#declare transy=<0.154508497187475,0.9045084971874751,-0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -100.27722132835316*z rotate 151.66003262923599*y Axis_Rotate_Trans(Victor,provi)  translate <-0.154508497187475,-0.9045084971874751,0.25>};
#declare transface[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-159.09484255211098>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-159.09484255211098>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<0.80901699437495,0.5,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -159.09484255211098*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.80901699437495,-0.5,0.0>};
#declare transface[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-96.33053940221325>);
#declare Victor=vrotate(Victor,<0,-40.50070501241979,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-96.33053940221325>);
#declare Hugo=vrotate(Hugo,<0,-40.50070501241979,0>);
#declare transy=<0.404508497187475,0.55901699437495,-0.6545084971874751>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -96.33053940221325*z rotate -40.50070501241979*y Axis_Rotate_Trans(Victor,provi)  translate <-0.404508497187475,-0.55901699437495,0.6545084971874751>};
#declare transface[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-83.66946059778677>);
#declare Victor=vrotate(Victor,<0,139.4992949875802,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-83.66946059778677>);
#declare Hugo=vrotate(Hugo,<0,139.4992949875802,0>);
#declare transy=<-0.404508497187475,-0.55901699437495,0.6545084971874751>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -83.66946059778677*z rotate 139.4992949875802*y Axis_Rotate_Trans(Victor,provi)  translate <0.404508497187475,0.55901699437495,-0.6545084971874751>};
#declare transface[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-79.72277867164686>);
#declare Victor=vrotate(Victor,<0,-151.66003262923599,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-79.72277867164686>);
#declare Hugo=vrotate(Hugo,<0,-151.66003262923599,0>);
#declare transy=<0.154508497187475,-0.9045084971874751,0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -79.72277867164686*z rotate -151.66003262923599*y Axis_Rotate_Trans(Victor,provi)  translate <-0.154508497187475,0.9045084971874751,-0.25>};
#declare transface[14]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-83.66946059778677>);
#declare Victor=vrotate(Victor,<0,40.50070501241979,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-83.66946059778677>);
#declare Hugo=vrotate(Hugo,<0,40.50070501241979,0>);
#declare transy=<0.404508497187475,-0.55901699437495,0.6545084971874751>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -83.66946059778677*z rotate 40.50070501241979*y Axis_Rotate_Trans(Victor,provi)  translate <-0.404508497187475,0.55901699437495,-0.6545084971874751>};
#declare transface[15]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-40.908063754091806>);
#declare Victor=vrotate(Victor,<0,9.693723895315268,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-40.908063754091806>);
#declare Hugo=vrotate(Hugo,<0,9.693723895315268,0>);
#declare transy=<-0.6545084971874751,0.404508497187475,0.55901699437495>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -40.908063754091806*z rotate 9.693723895315268*y Axis_Rotate_Trans(Victor,provi)  translate <0.6545084971874751,-0.404508497187475,-0.55901699437495>};
#declare transface[16]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-69.09484255211096>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-69.09484255211096>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<-0.0,0.80901699437495,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -69.09484255211096*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-0.80901699437495,-0.5>};
#declare transface[17]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-130.20296588656956>);
#declare Victor=vrotate(Victor,<0,-98.30077479951046,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-130.20296588656956>);
#declare Hugo=vrotate(Hugo,<0,-98.30077479951046,0>);
#declare transy=<0.55901699437495,0.6545084971874751,0.404508497187475>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -130.20296588656956*z rotate -98.30077479951046*y Axis_Rotate_Trans(Victor,provi)  translate <-0.55901699437495,-0.6545084971874751,-0.404508497187475>};
#declare transface[18]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-150.00000000000026>);
#declare Victor=vrotate(Victor,<0,20.90515744788903,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-150.00000000000026>);
#declare Hugo=vrotate(Hugo,<0,20.90515744788903,0>);
#declare transy=<0.25,0.154508497187475,0.9045084971874751>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -150.00000000000026*z rotate 20.90515744788903*y Axis_Rotate_Trans(Victor,provi)  translate <-0.25,-0.154508497187475,-0.9045084971874751>};
#declare transface[19]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-29.999999999999748>);
#declare Victor=vrotate(Victor,<0,159.09484255211098,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-29.999999999999748>);
#declare Hugo=vrotate(Hugo,<0,159.09484255211098,0>);
#declare transy=<-0.25,-0.154508497187475,0.9045084971874751>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -29.999999999999748*z rotate 159.09484255211098*y Axis_Rotate_Trans(Victor,provi)  translate <0.25,0.154508497187475,-0.9045084971874751>};
#declare nbVertices=12;
#declare lesVertices=array[nbVertices];
#declare lesVertices[0]=<-1.0,0.0,0.6180339887499>;
#declare lesVertices[1]=<1.0,0.0,0.6180339887499>;
#declare lesVertices[2]=<-1.0,0.0,-0.6180339887499>;
#declare lesVertices[3]=<1.0,0.0,-0.6180339887499>;
#declare lesVertices[4]=<0.0,0.6180339887499,1.0>;
#declare lesVertices[5]=<0.0,0.6180339887499,-1.0>;
#declare lesVertices[6]=<0.0,-0.6180339887499,1.0>;
#declare lesVertices[7]=<0.0,-0.6180339887499,-1.0>;
#declare lesVertices[8]=<0.6180339887499,1.0,0.0>;
#declare lesVertices[9]=<-0.6180339887499,1.0,0.0>;
#declare lesVertices[10]=<0.6180339887499,-1.0,0.0>;
#declare lesVertices[11]=<-0.6180339887499,-1.0,0.0>;
