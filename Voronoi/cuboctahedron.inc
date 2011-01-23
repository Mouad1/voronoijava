#declare cuboctahedron=mesh2{

vertex_vectors{

18,
<1.0,0.0,1.0>,
<0.0,1.0,1.0>,
<-1.0,0.0,1.0>,
<0.0,-1.0,1.0>,
<1.0,1.0,0.0>,
<-1.0,1.0,0.0>,
<-1.0,-1.0,0.0>,
<1.0,-1.0,0.0>,
<1.0,0.0,-1.0>,
<0.0,1.0,-1.0>,
<-1.0,0.0,-1.0>,
<0.0,-1.0,-1.0>,
<0.0,0.0,1.0>,
<1.0,0.0,0.0>,
<0.0,1.0,0.0>,
<-1.0,0.0,0.0>,
<0.0,-1.0,0.0>,
<0.0,0.0,-1.0>
 }
normal_vectors{

18,
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
<0.0,0.0,0.0>,
<0.0,0.0,0.0>,
<0.0,0.0,0.0>
 }
/* 
 texture_list{
2,
texture{texture0},
texture{texture1}
 }
*/
face_indices{
32,
<3,2,12>,// ,0,
<2,1,12>,// ,0,
<1,0,12>,// ,0,
<0,3,12>,// ,0,
<0,4,13>,// ,0,
<4,8,13>,// ,0,
<8,7,13>,// ,0,
<7,0,13>,// ,0,
<1,5,14>,// ,0,
<5,9,14>,// ,0,
<9,4,14>,// ,0,
<4,1,14>,// ,0,
<2,6,15>,// ,0,
<6,10,15>,// ,0,
<10,5,15>,// ,0,
<5,2,15>,// ,0,
<3,7,16>,// ,0,
<7,11,16>,// ,0,
<11,6,16>,// ,0,
<6,3,16>,// ,0,
<8,9,17>,// ,0,
<9,10,17>,// ,0,
<10,11,17>,// ,0,
<11,8,17>,// ,0,
<0,1,4>,// ,1,
<1,2,5>,// ,1,
<2,3,6>,// ,1,
<3,0,7>,// ,1,
<4,9,8>,// ,1,
<5,10,9>,// ,1,
<6,11,10>,// ,1,
<7,8,11> //1
 } 
 }
#declare aretes=union{

object{cylinder{<1.0,0.0,1.0>,<0.0,1.0,1.0>,diam  }}
object{cylinder{<0.0,1.0,1.0>,<-1.0,0.0,1.0>,diam  }}
object{cylinder{<-1.0,0.0,1.0>,<0.0,-1.0,1.0>,diam  }}
object{cylinder{<0.0,-1.0,1.0>,<1.0,0.0,1.0>,diam  }}
object{cylinder{<1.0,1.0,0.0>,<1.0,0.0,1.0>,diam  }}
object{cylinder{<1.0,0.0,1.0>,<1.0,-1.0,0.0>,diam  }}
object{cylinder{<1.0,-1.0,0.0>,<1.0,0.0,-1.0>,diam  }}
object{cylinder{<1.0,0.0,-1.0>,<1.0,1.0,0.0>,diam  }}
object{cylinder{<-1.0,1.0,0.0>,<0.0,1.0,1.0>,diam  }}
object{cylinder{<0.0,1.0,1.0>,<1.0,1.0,0.0>,diam  }}
object{cylinder{<1.0,1.0,0.0>,<0.0,1.0,-1.0>,diam  }}
object{cylinder{<0.0,1.0,-1.0>,<-1.0,1.0,0.0>,diam  }}
object{cylinder{<-1.0,-1.0,0.0>,<-1.0,0.0,1.0>,diam  }}
object{cylinder{<-1.0,0.0,1.0>,<-1.0,1.0,0.0>,diam  }}
object{cylinder{<-1.0,1.0,0.0>,<-1.0,0.0,-1.0>,diam  }}
object{cylinder{<-1.0,0.0,-1.0>,<-1.0,-1.0,0.0>,diam  }}
object{cylinder{<1.0,-1.0,0.0>,<0.0,-1.0,1.0>,diam  }}
object{cylinder{<0.0,-1.0,1.0>,<-1.0,-1.0,0.0>,diam  }}
object{cylinder{<-1.0,-1.0,0.0>,<0.0,-1.0,-1.0>,diam  }}
object{cylinder{<0.0,-1.0,-1.0>,<1.0,-1.0,0.0>,diam  }}
object{cylinder{<1.0,0.0,-1.0>,<0.0,1.0,-1.0>,diam  }}
object{cylinder{<0.0,1.0,-1.0>,<-1.0,0.0,-1.0>,diam  }}
object{cylinder{<-1.0,0.0,-1.0>,<0.0,-1.0,-1.0>,diam  }}
object{cylinder{<0.0,-1.0,-1.0>,<1.0,0.0,-1.0>,diam  }}
}
#declare sommets=union{

object{sphere{<1.0,0.0,1.0>,diam1 }}
object{sphere{<0.0,1.0,1.0>,diam1 }}
object{sphere{<-1.0,0.0,1.0>,diam1 }}
object{sphere{<0.0,-1.0,1.0>,diam1 }}
object{sphere{<1.0,1.0,0.0>,diam1 }}
object{sphere{<-1.0,1.0,0.0>,diam1 }}
object{sphere{<-1.0,-1.0,0.0>,diam1 }}
object{sphere{<1.0,-1.0,0.0>,diam1 }}
object{sphere{<1.0,0.0,-1.0>,diam1 }}
object{sphere{<0.0,1.0,-1.0>,diam1 }}
object{sphere{<-1.0,0.0,-1.0>,diam1 }}
object{sphere{<0.0,-1.0,-1.0>,diam1 }}
}
#declare maxIndices=24;
#declare trans=array[24];
#declare trans[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.5,-0.5,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -135.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,0.5,1.0>};
#declare trans[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<0.5,-0.5,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,0.5,1.0>};
#declare trans[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<0.5,0.5,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,-0.5,1.0>};
#declare trans[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-0.5,0.5,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -135.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,-0.5,1.0>};
#declare trans[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<-1.0,-0.5,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,0.5,0.5>};
#declare trans[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-1.0,0.5,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,-0.5,0.5>};
#declare trans[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-1.0,0.5,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -135.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,-0.5,-0.5>};
#declare trans[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<-1.0,-0.5,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -135.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,0.5,-0.5>};
#declare trans[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,135.0,0>);
#declare transy=<0.5,-1.0,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate 135.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,1.0,0.5>};
#declare trans[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<-0.5,-1.0,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,1.0,0.5>};
#declare trans[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<-0.5,-1.0,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,1.0,-0.5>};
#declare trans[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,45.0,0>);
#declare transy=<0.5,-1.0,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate 45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,1.0,-0.5>};
#declare trans[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<1.0,0.5,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -135.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,-0.5,0.5>};
#declare trans[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<1.0,-0.5,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -135.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,0.5,0.5>};
#declare trans[14]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<1.0,-0.5,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,0.5,-0.5>};
#declare trans[15]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<1.0,0.5,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,-0.5,-0.5>};
#declare trans[16]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,45.0,0>);
#declare transy=<-0.5,1.0,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate 45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,-1.0,0.5>};
#declare trans[17]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<0.5,1.0,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,-1.0,0.5>};
#declare trans[18]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<0.5,1.0,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,-1.0,-0.5>};
#declare trans[19]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,135.0,0>);
#declare transy=<-0.5,1.0,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate 135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,-1.0,-0.5>};
#declare trans[20]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.5,-0.5,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -135.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,0.5,-1.0>};
#declare trans[21]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<0.5,-0.5,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,0.5,-1.0>};
#declare trans[22]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<0.5,0.5,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,-0.5,-1.0>};
#declare trans[23]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-0.5,0.5,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -135.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,-0.5,-1.0>};
#declare maxFaces=14;
#declare transface=array[14];
#declare transface[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-180.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-180.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,-0.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -180.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.0,1.0>};
#declare transface[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-1.0,-0.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,0.0,0.0>};
#declare transface[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-0.0,-1.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,1.0,0.0>};
#declare transface[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<1.0,-0.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,0.0,0.0>};
#declare transface[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-0.0,1.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-1.0,0.0>};
#declare transface[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,-0.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.0,-1.0>};
#declare transface[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-144.73561031724535>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-144.73561031724535>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<-0.75,-0.5,-0.75>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -144.73561031724535*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.75,0.5,0.75>};
#declare transface[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-65.90515744788931>);
#declare Victor=vrotate(Victor,<0,-26.56505117707799,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-65.90515744788931>);
#declare Hugo=vrotate(Hugo,<0,-26.56505117707799,0>);
#declare transy=<0.5,-0.75,-0.75>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -65.90515744788931*z rotate -26.56505117707799*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,0.75,0.75>};
#declare transface[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-35.264389682754654>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-35.264389682754654>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<0.75,0.5,-0.75>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -35.264389682754654*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.75,-0.5,0.75>};
#declare transface[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-114.09484255211072>);
#declare Victor=vrotate(Victor,<0,-153.43494882292202,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-114.09484255211072>);
#declare Hugo=vrotate(Hugo,<0,-153.43494882292202,0>);
#declare transy=<-0.5,0.75,-0.75>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -114.09484255211072*z rotate -153.43494882292202*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,-0.75,0.75>};
#declare transface[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-65.90515744788931>);
#declare Victor=vrotate(Victor,<0,-63.43494882292201,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-65.90515744788931>);
#declare Hugo=vrotate(Hugo,<0,-63.43494882292201,0>);
#declare transy=<-0.75,-0.75,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -65.90515744788931*z rotate -63.43494882292201*y Axis_Rotate_Trans(Victor,provi)  translate <0.75,0.75,-0.5>};
#declare transface[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-65.90515744788931>);
#declare Victor=vrotate(Victor,<0,-116.56505117707799,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-65.90515744788931>);
#declare Hugo=vrotate(Hugo,<0,-116.56505117707799,0>);
#declare transy=<0.75,-0.75,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -65.90515744788931*z rotate -116.56505117707799*y Axis_Rotate_Trans(Victor,provi)  translate <-0.75,0.75,-0.5>};
#declare transface[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-114.09484255211072>);
#declare Victor=vrotate(Victor,<0,-116.56505117707799,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-114.09484255211072>);
#declare Hugo=vrotate(Hugo,<0,-116.56505117707799,0>);
#declare transy=<0.75,0.75,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -114.09484255211072*z rotate -116.56505117707799*y Axis_Rotate_Trans(Victor,provi)  translate <-0.75,-0.75,-0.5>};
#declare transface[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-114.09484255211072>);
#declare Victor=vrotate(Victor,<0,-63.43494882292201,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-114.09484255211072>);
#declare Hugo=vrotate(Hugo,<0,-63.43494882292201,0>);
#declare transy=<-0.75,0.75,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -114.09484255211072*z rotate -63.43494882292201*y Axis_Rotate_Trans(Victor,provi)  translate <0.75,-0.75,-0.5>};
#declare nbVertices=12;
#declare lesVertices=array[nbVertices];
#declare lesVertices[0]=<1.0,0.0,1.0>;
#declare lesVertices[1]=<0.0,1.0,1.0>;
#declare lesVertices[2]=<-1.0,0.0,1.0>;
#declare lesVertices[3]=<0.0,-1.0,1.0>;
#declare lesVertices[4]=<1.0,1.0,0.0>;
#declare lesVertices[5]=<-1.0,1.0,0.0>;
#declare lesVertices[6]=<-1.0,-1.0,0.0>;
#declare lesVertices[7]=<1.0,-1.0,0.0>;
#declare lesVertices[8]=<1.0,0.0,-1.0>;
#declare lesVertices[9]=<0.0,1.0,-1.0>;
#declare lesVertices[10]=<-1.0,0.0,-1.0>;
#declare lesVertices[11]=<0.0,-1.0,-1.0>;
