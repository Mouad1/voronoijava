#declare truncated_tetrahedron=mesh2{

vertex_vectors{

16,
<1.0,1.0,-3.0>,
<3.0,1.0,-1.0>,
<1.0,3.0,-1.0>,
<-1.0,1.0,3.0>,
<-3.0,1.0,1.0>,
<-1.0,3.0,1.0>,
<1.0,-1.0,3.0>,
<3.0,-1.0,1.0>,
<1.0,-3.0,1.0>,
<-1.0,-1.0,-3.0>,
<-3.0,-1.0,-1.0>,
<-1.0,-3.0,-1.0>,
<-1.0,1.0,-1.0>,
<1.0,1.0,1.0>,
<-1.0,-1.0,1.0>,
<1.0,-1.0,-1.0>
 }
normal_vectors{

16,
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
28,
<0,1,2>,// ,0,
<3,4,5>,// ,0,
<6,7,8>,// ,0,
<9,10,11>,// ,0,
<0,2,12>,// ,0,
<2,5,12>,// ,0,
<5,4,12>,// ,0,
<4,10,12>,// ,0,
<10,9,12>,// ,0,
<9,0,12>,// ,0,
<5,2,13>,// ,0,
<2,1,13>,// ,0,
<1,7,13>,// ,0,
<7,6,13>,// ,0,
<6,3,13>,// ,0,
<3,5,13>,// ,0,
<4,3,14>,// ,0,
<3,6,14>,// ,0,
<6,8,14>,// ,0,
<8,11,14>,// ,0,
<11,10,14>,// ,0,
<10,4,14>,// ,0,
<1,0,15>,// ,0,
<0,9,15>,// ,0,
<9,11,15>,// ,0,
<11,8,15>,// ,0,
<8,7,15>,// ,0,
<7,1,15> //0
 } 
 }
#declare aretes=union{

object{cylinder{<1.0,1.0,-3.0>,<3.0,1.0,-1.0>,diam  }}
object{cylinder{<1.0,1.0,-3.0>,<1.0,3.0,-1.0>,diam  }}
object{cylinder{<1.0,1.0,-3.0>,<-1.0,-1.0,-3.0>,diam  }}
object{cylinder{<3.0,1.0,-1.0>,<1.0,3.0,-1.0>,diam  }}
object{cylinder{<3.0,1.0,-1.0>,<3.0,-1.0,1.0>,diam  }}
object{cylinder{<1.0,3.0,-1.0>,<-1.0,3.0,1.0>,diam  }}
object{cylinder{<-1.0,1.0,3.0>,<-3.0,1.0,1.0>,diam  }}
object{cylinder{<-1.0,1.0,3.0>,<-1.0,3.0,1.0>,diam  }}
object{cylinder{<-1.0,1.0,3.0>,<1.0,-1.0,3.0>,diam  }}
object{cylinder{<-3.0,1.0,1.0>,<-1.0,3.0,1.0>,diam  }}
object{cylinder{<-3.0,1.0,1.0>,<-3.0,-1.0,-1.0>,diam  }}
object{cylinder{<1.0,-1.0,3.0>,<3.0,-1.0,1.0>,diam  }}
object{cylinder{<1.0,-1.0,3.0>,<1.0,-3.0,1.0>,diam  }}
object{cylinder{<3.0,-1.0,1.0>,<1.0,-3.0,1.0>,diam  }}
object{cylinder{<1.0,-3.0,1.0>,<-1.0,-3.0,-1.0>,diam  }}
object{cylinder{<-1.0,-1.0,-3.0>,<-3.0,-1.0,-1.0>,diam  }}
object{cylinder{<-1.0,-1.0,-3.0>,<-1.0,-3.0,-1.0>,diam  }}
object{cylinder{<-3.0,-1.0,-1.0>,<-1.0,-3.0,-1.0>,diam  }}
}
#declare sommets=union{

object{sphere{<1.0,1.0,-3.0>,diam1 }}
object{sphere{<3.0,1.0,-1.0>,diam1 }}
object{sphere{<1.0,3.0,-1.0>,diam1 }}
object{sphere{<-1.0,1.0,3.0>,diam1 }}
object{sphere{<-3.0,1.0,1.0>,diam1 }}
object{sphere{<-1.0,3.0,1.0>,diam1 }}
object{sphere{<1.0,-1.0,3.0>,diam1 }}
object{sphere{<3.0,-1.0,1.0>,diam1 }}
object{sphere{<1.0,-3.0,1.0>,diam1 }}
object{sphere{<-1.0,-1.0,-3.0>,diam1 }}
object{sphere{<-3.0,-1.0,-1.0>,diam1 }}
object{sphere{<-1.0,-3.0,-1.0>,diam1 }}
}
#declare maxIndices=18;
#declare trans=array[18];
#declare trans[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,135.0,0>);
#declare transy=<-2.0,-1.0,2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -90.0*z rotate 135.0*y Axis_Rotate_Trans(Victor,provi)  translate <2.0,1.0,-2.0>};
#declare trans[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<-1.0,-2.0,2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -135.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,2.0,-2.0>};
#declare trans[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,-0.0,3.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -45.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.0,-3.0>};
#declare trans[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-2.0,-2.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -135.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <2.0,2.0,-1.0>};
#declare trans[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<-3.0,-0.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -45.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <3.0,0.0,0.0>};
#declare trans[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,45.0,0>);
#declare transy=<-0.0,-3.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -90.0*z rotate 45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,3.0,0.0>};
#declare trans[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<2.0,-1.0,-2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -90.0*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-2.0,1.0,2.0>};
#declare trans[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<1.0,-2.0,-2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -135.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,2.0,2.0>};
#declare trans[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-0.0,-0.0,-3.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -45.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.0,3.0>};
#declare trans[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<2.0,-2.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -135.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <-2.0,2.0,1.0>};
#declare trans[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<3.0,-0.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -45.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-3.0,0.0,0.0>};
#declare trans[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<-2.0,1.0,-2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -90.0*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <2.0,-1.0,2.0>};
#declare trans[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-1.0,2.0,-2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -45.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,-2.0,2.0>};
#declare trans[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-2.0,2.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -45.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <2.0,-2.0,1.0>};
#declare trans[14]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<-0.0,3.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -90.0*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-3.0,0.0>};
#declare trans[15]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,45.0,0>);
#declare transy=<2.0,1.0,2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -90.0*z rotate 45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-2.0,-1.0,-2.0>};
#declare trans[16]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<1.0,2.0,2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -45.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,-2.0,-2.0>};
#declare trans[17]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<2.0,2.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -45.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <-2.0,-2.0,-1.0>};
#declare maxFaces=8;
#declare transface=array[8];
#declare transface[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-114.09484255211072>);
#declare Victor=vrotate(Victor,<0,116.56505117707799,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-114.09484255211072>);
#declare Hugo=vrotate(Hugo,<0,116.56505117707799,0>);
#declare transy=<-1.5,-1.5,2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -114.09484255211072*z rotate 116.56505117707799*y Axis_Rotate_Trans(Victor,provi)  translate <1.5,1.5,-2.0>};
#declare transface[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-114.09484255211072>);
#declare Victor=vrotate(Victor,<0,-63.43494882292201,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-114.09484255211072>);
#declare Hugo=vrotate(Hugo,<0,-63.43494882292201,0>);
#declare transy=<1.5,-1.5,-2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -114.09484255211072*z rotate -63.43494882292201*y Axis_Rotate_Trans(Victor,provi)  translate <-1.5,1.5,2.0>};
#declare transface[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-65.90515744788931>);
#declare Victor=vrotate(Victor,<0,-116.56505117707799,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-65.90515744788931>);
#declare Hugo=vrotate(Hugo,<0,-116.56505117707799,0>);
#declare transy=<-1.5,1.5,-2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -65.90515744788931*z rotate -116.56505117707799*y Axis_Rotate_Trans(Victor,provi)  translate <1.5,-1.5,2.0>};
#declare transface[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-65.90515744788931>);
#declare Victor=vrotate(Victor,<0,63.43494882292201,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-65.90515744788931>);
#declare Hugo=vrotate(Hugo,<0,63.43494882292201,0>);
#declare transy=<1.5,1.5,2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -65.90515744788931*z rotate 63.43494882292201*y Axis_Rotate_Trans(Victor,provi)  translate <-1.5,-1.5,-2.0>};
#declare transface[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,45.0,0>);
#declare transy=<1.0,-1.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate 45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,1.0,-1.0>};
#declare transface[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-1.0,-1.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -45.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,1.0,1.0>};
#declare transface[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<1.0,1.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -45.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,-1.0,1.0>};
#declare transface[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-1.0,1.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -45.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,-1.0,-1.0>};
#declare nbVertices=16;
#declare lesVertices=array[nbVertices];
#declare lesVertices[0]=<1.0,1.0,-3.0>;
#declare lesVertices[1]=<3.0,1.0,-1.0>;
#declare lesVertices[2]=<1.0,3.0,-1.0>;
#declare lesVertices[3]=<-1.0,1.0,3.0>;
#declare lesVertices[4]=<-3.0,1.0,1.0>;
#declare lesVertices[5]=<-1.0,3.0,1.0>;
#declare lesVertices[6]=<1.0,-1.0,3.0>;
#declare lesVertices[7]=<3.0,-1.0,1.0>;
#declare lesVertices[8]=<1.0,-3.0,1.0>;
#declare lesVertices[9]=<-1.0,-1.0,-3.0>;
#declare lesVertices[10]=<-3.0,-1.0,-1.0>;
#declare lesVertices[11]=<-1.0,-3.0,-1.0>;
#declare lesVertices[12]=<-1.0,1.0,-1.0>;
#declare lesVertices[13]=<1.0,1.0,1.0>;
#declare lesVertices[14]=<-1.0,-1.0,1.0>;
#declare lesVertices[15]=<1.0,-1.0,-1.0>;
