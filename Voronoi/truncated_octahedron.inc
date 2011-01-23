#declare truncated_octahedron=mesh2{

vertex_vectors{

38,
<0.0,1.0,2.0>,
<0.0,2.0,1.0>,
<1.0,0.0,2.0>,
<1.0,2.0,0.0>,
<2.0,0.0,1.0>,
<2.0,1.0,0.0>,
<0.0,-1.0,2.0>,
<0.0,2.0,-1.0>,
<-1.0,0.0,2.0>,
<-1.0,2.0,0.0>,
<2.0,0.0,-1.0>,
<2.0,-1.0,0.0>,
<0.0,1.0,-2.0>,
<0.0,-2.0,1.0>,
<1.0,0.0,-2.0>,
<1.0,-2.0,0.0>,
<-2.0,0.0,1.0>,
<-2.0,1.0,0.0>,
<0.0,-1.0,-2.0>,
<0.0,-2.0,-1.0>,
<-1.0,0.0,-2.0>,
<-1.0,-2.0,0.0>,
<-2.0,0.0,-1.0>,
<-2.0,-1.0,0.0>,
<0.0,2.0,0.0>,
<-1.0,1.0,-1.0>,
<-1.0,1.0,1.0>,
<2.0,0.0,0.0>,
<-2.0,0.0,0.0>,
<1.0,1.0,-1.0>,
<1.0,1.0,1.0>,
<0.0,-2.0,0.0>,
<-1.0,-1.0,-1.0>,
<1.0,-1.0,-1.0>,
<0.0,0.0,-2.0>,
<-1.0,-1.0,1.0>,
<1.0,-1.0,1.0>,
<0.0,0.0,2.0>
 }
normal_vectors{

38,
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
72,
<7,3,24>,// ,0,
<3,1,24>,// ,0,
<1,9,24>,// ,0,
<9,7,24>,// ,0,
<12,7,25>,// ,1,
<7,9,25>,// ,1,
<9,17,25>,// ,1,
<17,22,25>,// ,1,
<22,20,25>,// ,1,
<20,12,25>,// ,1,
<1,0,26>,// ,1,
<0,8,26>,// ,1,
<8,16,26>,// ,1,
<16,17,26>,// ,1,
<17,9,26>,// ,1,
<9,1,26>,// ,1,
<11,4,27>,// ,0,
<4,5,27>,// ,0,
<5,10,27>,// ,0,
<10,11,27>,// ,0,
<16,23,28>,// ,0,
<23,22,28>,// ,0,
<22,17,28>,// ,0,
<17,16,28>,// ,0,
<14,10,29>,// ,1,
<10,5,29>,// ,1,
<5,3,29>,// ,1,
<3,7,29>,// ,1,
<7,12,29>,// ,1,
<12,14,29>,// ,1,
<4,2,30>,// ,1,
<2,0,30>,// ,1,
<0,1,30>,// ,1,
<1,3,30>,// ,1,
<3,5,30>,// ,1,
<5,4,30>,// ,1,
<21,13,31>,// ,0,
<13,15,31>,// ,0,
<15,19,31>,// ,0,
<19,21,31>,// ,0,
<19,18,32>,// ,1,
<18,20,32>,// ,1,
<20,22,32>,// ,1,
<22,23,32>,// ,1,
<23,21,32>,// ,1,
<21,19,32>,// ,1,
<14,18,33>,// ,1,
<18,19,33>,// ,1,
<19,15,33>,// ,1,
<15,11,33>,// ,1,
<11,10,33>,// ,1,
<10,14,33>,// ,1,
<18,14,34>,// ,0,
<14,12,34>,// ,0,
<12,20,34>,// ,0,
<20,18,34>,// ,0,
<23,16,35>,// ,1,
<16,8,35>,// ,1,
<8,6,35>,// ,1,
<6,13,35>,// ,1,
<13,21,35>,// ,1,
<21,23,35>,// ,1,
<15,13,36>,// ,1,
<13,6,36>,// ,1,
<6,2,36>,// ,1,
<2,4,36>,// ,1,
<4,11,36>,// ,1,
<11,15,36>,// ,1,
<2,6,37>,// ,0,
<6,8,37>,// ,0,
<8,0,37>,// ,0,
<0,2,37> //0
 } 
 }
#declare aretes=union{

object{cylinder{<0.0,1.0,2.0>,<0.0,2.0,1.0>,diam  }}
object{cylinder{<0.0,1.0,2.0>,<1.0,0.0,2.0>,diam  }}
object{cylinder{<0.0,1.0,2.0>,<-1.0,0.0,2.0>,diam  }}
object{cylinder{<0.0,2.0,1.0>,<1.0,2.0,0.0>,diam  }}
object{cylinder{<0.0,2.0,1.0>,<-1.0,2.0,0.0>,diam  }}
object{cylinder{<1.0,0.0,2.0>,<2.0,0.0,1.0>,diam  }}
object{cylinder{<1.0,0.0,2.0>,<0.0,-1.0,2.0>,diam  }}
object{cylinder{<1.0,2.0,0.0>,<2.0,1.0,0.0>,diam  }}
object{cylinder{<1.0,2.0,0.0>,<0.0,2.0,-1.0>,diam  }}
object{cylinder{<2.0,0.0,1.0>,<2.0,1.0,0.0>,diam  }}
object{cylinder{<2.0,0.0,1.0>,<2.0,-1.0,0.0>,diam  }}
object{cylinder{<2.0,1.0,0.0>,<2.0,0.0,-1.0>,diam  }}
object{cylinder{<0.0,-1.0,2.0>,<-1.0,0.0,2.0>,diam  }}
object{cylinder{<0.0,-1.0,2.0>,<0.0,-2.0,1.0>,diam  }}
object{cylinder{<0.0,2.0,-1.0>,<-1.0,2.0,0.0>,diam  }}
object{cylinder{<0.0,2.0,-1.0>,<0.0,1.0,-2.0>,diam  }}
object{cylinder{<-1.0,0.0,2.0>,<-2.0,0.0,1.0>,diam  }}
object{cylinder{<-1.0,2.0,0.0>,<-2.0,1.0,0.0>,diam  }}
object{cylinder{<2.0,0.0,-1.0>,<2.0,-1.0,0.0>,diam  }}
object{cylinder{<2.0,0.0,-1.0>,<1.0,0.0,-2.0>,diam  }}
object{cylinder{<2.0,-1.0,0.0>,<1.0,-2.0,0.0>,diam  }}
object{cylinder{<0.0,1.0,-2.0>,<1.0,0.0,-2.0>,diam  }}
object{cylinder{<0.0,1.0,-2.0>,<-1.0,0.0,-2.0>,diam  }}
object{cylinder{<0.0,-2.0,1.0>,<1.0,-2.0,0.0>,diam  }}
object{cylinder{<0.0,-2.0,1.0>,<-1.0,-2.0,0.0>,diam  }}
object{cylinder{<1.0,0.0,-2.0>,<0.0,-1.0,-2.0>,diam  }}
object{cylinder{<1.0,-2.0,0.0>,<0.0,-2.0,-1.0>,diam  }}
object{cylinder{<-2.0,0.0,1.0>,<-2.0,1.0,0.0>,diam  }}
object{cylinder{<-2.0,0.0,1.0>,<-2.0,-1.0,0.0>,diam  }}
object{cylinder{<-2.0,1.0,0.0>,<-2.0,0.0,-1.0>,diam  }}
object{cylinder{<0.0,-1.0,-2.0>,<0.0,-2.0,-1.0>,diam  }}
object{cylinder{<0.0,-1.0,-2.0>,<-1.0,0.0,-2.0>,diam  }}
object{cylinder{<0.0,-2.0,-1.0>,<-1.0,-2.0,0.0>,diam  }}
object{cylinder{<-1.0,0.0,-2.0>,<-2.0,0.0,-1.0>,diam  }}
object{cylinder{<-1.0,-2.0,0.0>,<-2.0,-1.0,0.0>,diam  }}
object{cylinder{<-2.0,0.0,-1.0>,<-2.0,-1.0,0.0>,diam  }}
}
#declare sommets=union{

object{sphere{<0.0,1.0,2.0>,diam1 }}
object{sphere{<0.0,2.0,1.0>,diam1 }}
object{sphere{<1.0,0.0,2.0>,diam1 }}
object{sphere{<1.0,2.0,0.0>,diam1 }}
object{sphere{<2.0,0.0,1.0>,diam1 }}
object{sphere{<2.0,1.0,0.0>,diam1 }}
object{sphere{<0.0,-1.0,2.0>,diam1 }}
object{sphere{<0.0,2.0,-1.0>,diam1 }}
object{sphere{<-1.0,0.0,2.0>,diam1 }}
object{sphere{<-1.0,2.0,0.0>,diam1 }}
object{sphere{<2.0,0.0,-1.0>,diam1 }}
object{sphere{<2.0,-1.0,0.0>,diam1 }}
object{sphere{<0.0,1.0,-2.0>,diam1 }}
object{sphere{<0.0,-2.0,1.0>,diam1 }}
object{sphere{<1.0,0.0,-2.0>,diam1 }}
object{sphere{<1.0,-2.0,0.0>,diam1 }}
object{sphere{<-2.0,0.0,1.0>,diam1 }}
object{sphere{<-2.0,1.0,0.0>,diam1 }}
object{sphere{<0.0,-1.0,-2.0>,diam1 }}
object{sphere{<0.0,-2.0,-1.0>,diam1 }}
object{sphere{<-1.0,0.0,-2.0>,diam1 }}
object{sphere{<-1.0,-2.0,0.0>,diam1 }}
object{sphere{<-2.0,0.0,-1.0>,diam1 }}
object{sphere{<-2.0,-1.0,0.0>,diam1 }}
}
#declare maxIndices=36;
#declare trans=array[36];
#declare trans[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-0.0,-1.5,-1.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -135.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,1.5,1.5>};
#declare trans[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-0.5,-0.5,-2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,0.5,2.0>};
#declare trans[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<0.5,-0.5,-2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,0.5,2.0>};
#declare trans[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<-0.5,-2.0,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,2.0,0.5>};
#declare trans[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<0.5,-2.0,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,2.0,0.5>};
#declare trans[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<-1.5,-0.0,-1.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.5,0.0,1.5>};
#declare trans[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.5,0.5,-2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,-0.5,2.0>};
#declare trans[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-1.5,-1.5,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.5,1.5,0.0>};
#declare trans[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<-0.5,-2.0,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,2.0,-0.5>};
#declare trans[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-2.0,-0.5,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -135.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <2.0,0.5,0.5>};
#declare trans[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-2.0,0.5,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <2.0,-0.5,0.5>};
#declare trans[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-2.0,-0.5,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <2.0,0.5,-0.5>};
#declare trans[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<0.5,0.5,-2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -135.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,-0.5,2.0>};
#declare trans[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-0.0,1.5,-1.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-1.5,1.5>};
#declare trans[14]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,45.0,0>);
#declare transy=<0.5,-2.0,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate 45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,2.0,-0.5>};
#declare trans[15]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-0.0,-1.5,1.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,1.5,-1.5>};
#declare trans[16]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<1.5,-0.0,-1.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.5,0.0,1.5>};
#declare trans[17]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<1.5,-1.5,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.5,1.5,0.0>};
#declare trans[18]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<-2.0,0.5,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <2.0,-0.5,-0.5>};
#declare trans[19]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<-1.5,-0.0,1.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.5,0.0,-1.5>};
#declare trans[20]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-1.5,1.5,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.5,-1.5,0.0>};
#declare trans[21]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-0.5,-0.5,2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,0.5,-2.0>};
#declare trans[22]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<0.5,-0.5,2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,0.5,-2.0>};
#declare trans[23]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<-0.5,2.0,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,-2.0,0.5>};
#declare trans[24]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<0.5,2.0,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,-2.0,0.5>};
#declare trans[25]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.5,0.5,2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,-0.5,-2.0>};
#declare trans[26]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<-0.5,2.0,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,-2.0,-0.5>};
#declare trans[27]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<2.0,-0.5,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -135.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-2.0,0.5,0.5>};
#declare trans[28]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<2.0,0.5,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-2.0,-0.5,0.5>};
#declare trans[29]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<2.0,-0.5,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-2.0,0.5,-0.5>};
#declare trans[30]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<-0.0,1.5,1.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-1.5,-1.5>};
#declare trans[31]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<0.5,0.5,2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -135.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,-0.5,-2.0>};
#declare trans[32]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,45.0,0>);
#declare transy=<0.5,2.0,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate 45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,-2.0,-0.5>};
#declare trans[33]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,45.0,0>);
#declare transy=<1.5,-0.0,1.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -90.0*z rotate 45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.5,0.0,-1.5>};
#declare trans[34]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<1.5,1.5,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -135.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.5,-1.5,0.0>};
#declare trans[35]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<2.0,0.5,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002518984518 rotate -45.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-2.0,-0.5,-0.5>};
#declare maxFaces=14;
#declare transface=array[14];
#declare transface[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<-0.0,-2.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,2.0,0.0>};
#declare transface[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,45.0,0>);
#declare transy=<1.0,-1.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate 45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,1.0,-1.0>};
#declare transface[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<1.0,-1.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -45.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,1.0,1.0>};
#declare transface[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-180.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-180.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-2.0,-0.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -180.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <2.0,0.0,0.0>};
#declare transface[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<2.0,-0.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-2.0,0.0,0.0>};
#declare transface[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<-1.0,-1.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -135.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,1.0,-1.0>};
#declare transface[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-1.0,-1.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -135.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,1.0,1.0>};
#declare transface[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-0.0,2.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-2.0,0.0>};
#declare transface[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<1.0,1.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -135.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,-1.0,-1.0>};
#declare transface[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<-1.0,1.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -45.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,-1.0,-1.0>};
#declare transface[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-180.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-180.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,-0.0,2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -180.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.0,-2.0>};
#declare transface[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,135.0,0>);
#declare transy=<1.0,1.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate 135.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,-1.0,1.0>};
#declare transface[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<-1.0,1.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -135.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,-1.0,1.0>};
#declare transface[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,-0.0,-2.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.0,2.0>};
#declare nbVertices=38;
#declare lesVertices=array[nbVertices];
#declare lesVertices[0]=<0.0,1.0,2.0>;
#declare lesVertices[1]=<0.0,2.0,1.0>;
#declare lesVertices[2]=<1.0,0.0,2.0>;
#declare lesVertices[3]=<1.0,2.0,0.0>;
#declare lesVertices[4]=<2.0,0.0,1.0>;
#declare lesVertices[5]=<2.0,1.0,0.0>;
#declare lesVertices[6]=<0.0,-1.0,2.0>;
#declare lesVertices[7]=<0.0,2.0,-1.0>;
#declare lesVertices[8]=<-1.0,0.0,2.0>;
#declare lesVertices[9]=<-1.0,2.0,0.0>;
#declare lesVertices[10]=<2.0,0.0,-1.0>;
#declare lesVertices[11]=<2.0,-1.0,0.0>;
#declare lesVertices[12]=<0.0,1.0,-2.0>;
#declare lesVertices[13]=<0.0,-2.0,1.0>;
#declare lesVertices[14]=<1.0,0.0,-2.0>;
#declare lesVertices[15]=<1.0,-2.0,0.0>;
#declare lesVertices[16]=<-2.0,0.0,1.0>;
#declare lesVertices[17]=<-2.0,1.0,0.0>;
#declare lesVertices[18]=<0.0,-1.0,-2.0>;
#declare lesVertices[19]=<0.0,-2.0,-1.0>;
#declare lesVertices[20]=<-1.0,0.0,-2.0>;
#declare lesVertices[21]=<-1.0,-2.0,0.0>;
#declare lesVertices[22]=<-2.0,0.0,-1.0>;
#declare lesVertices[23]=<-2.0,-1.0,0.0>;
#declare lesVertices[24]=<0.0,2.0,0.0>;
#declare lesVertices[25]=<-1.0,1.0,-1.0>;
#declare lesVertices[26]=<-1.0,1.0,1.0>;
#declare lesVertices[27]=<2.0,0.0,0.0>;
#declare lesVertices[28]=<-2.0,0.0,0.0>;
#declare lesVertices[29]=<1.0,1.0,-1.0>;
#declare lesVertices[30]=<1.0,1.0,1.0>;
#declare lesVertices[31]=<0.0,-2.0,0.0>;
#declare lesVertices[32]=<-1.0,-1.0,-1.0>;
#declare lesVertices[33]=<1.0,-1.0,-1.0>;
#declare lesVertices[34]=<0.0,0.0,-2.0>;
#declare lesVertices[35]=<-1.0,-1.0,1.0>;
#declare lesVertices[36]=<1.0,-1.0,1.0>;
#declare lesVertices[37]=<0.0,0.0,2.0>;
