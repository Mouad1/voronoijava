#declare cube=mesh2{

vertex_vectors{

14,
<1.0,1.0,1.0>,
<1.0,1.0,-1.0>,
<1.0,-1.0,1.0>,
<1.0,-1.0,-1.0>,
<-1.0,1.0,1.0>,
<-1.0,1.0,-1.0>,
<-1.0,-1.0,1.0>,
<-1.0,-1.0,-1.0>,
<0.0,0.0,1.0>,
<0.0,1.0,0.0>,
<-1.0,0.0,0.0>,
<1.0,0.0,0.0>,
<0.0,-1.0,0.0>,
<0.0,0.0,-1.0>
 }
normal_vectors{

14,
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
texture_list{
1,
texture{texture0}
 }
face_indices{
24,
<6,4,8>,0,
<4,0,8>,0,
<0,2,8>,0,
<2,6,8>,0,
<5,1,9>,0,
<1,0,9>,0,
<0,4,9>,0,
<4,5,9>,0,
<7,5,10>,0,
<5,4,10>,0,
<4,6,10>,0,
<6,7,10>,0,
<1,3,11>,0,
<3,2,11>,0,
<2,0,11>,0,
<0,1,11>,0,
<3,7,12>,0,
<7,6,12>,0,
<6,2,12>,0,
<2,3,12>,0,
<7,3,13>,0,
<3,1,13>,0,
<1,5,13>,0,
<5,7,13> 0
 } 
 }
#declare aretes=union{

object{cylinder{<1.0,1.0,1.0>,<1.0,1.0,-1.0>,diam  }}
object{cylinder{<1.0,1.0,1.0>,<1.0,-1.0,1.0>,diam  }}
object{cylinder{<1.0,1.0,1.0>,<-1.0,1.0,1.0>,diam  }}
object{cylinder{<1.0,1.0,-1.0>,<1.0,-1.0,-1.0>,diam  }}
object{cylinder{<1.0,1.0,-1.0>,<-1.0,1.0,-1.0>,diam  }}
object{cylinder{<1.0,-1.0,1.0>,<1.0,-1.0,-1.0>,diam  }}
object{cylinder{<1.0,-1.0,1.0>,<-1.0,-1.0,1.0>,diam  }}
object{cylinder{<1.0,-1.0,-1.0>,<-1.0,-1.0,-1.0>,diam  }}
object{cylinder{<-1.0,1.0,1.0>,<-1.0,1.0,-1.0>,diam  }}
object{cylinder{<-1.0,1.0,1.0>,<-1.0,-1.0,1.0>,diam  }}
object{cylinder{<-1.0,1.0,-1.0>,<-1.0,-1.0,-1.0>,diam  }}
object{cylinder{<-1.0,-1.0,1.0>,<-1.0,-1.0,-1.0>,diam  }}
}
#declare sommets=union{

object{sphere{<1.0,1.0,1.0>,diam1 }}
object{sphere{<1.0,1.0,-1.0>,diam1 }}
object{sphere{<1.0,-1.0,1.0>,diam1 }}
object{sphere{<1.0,-1.0,-1.0>,diam1 }}
object{sphere{<-1.0,1.0,1.0>,diam1 }}
object{sphere{<-1.0,1.0,-1.0>,diam1 }}
object{sphere{<-1.0,-1.0,1.0>,diam1 }}
object{sphere{<-1.0,-1.0,-1.0>,diam1 }}
}
#declare maxIndices=12;
#declare trans=array[12];
#declare trans[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-1.0,-1.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,1.0,0.0>};
#declare trans[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-0.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-0.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-1.0,-0.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -0.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,0.0,1.0>};
#declare trans[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,-1.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,1.0,1.0>};
#declare trans[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-0.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-0.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-1.0,-0.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -0.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,0.0,-1.0>};
#declare trans[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,-1.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,1.0,-1.0>};
#declare trans[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-1.0,1.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,-1.0,0.0>};
#declare trans[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,1.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-1.0,1.0>};
#declare trans[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,1.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-1.0,-1.0>};
#declare trans[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<1.0,-1.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,1.0,0.0>};
#declare trans[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-0.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-0.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<1.0,-0.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -0.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,0.0,1.0>};
#declare trans[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-0.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-0.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<1.0,-0.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -0.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,0.0,-1.0>};
#declare trans[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<1.0,1.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,-1.0,0.0>};
#declare maxFaces=6;
#declare transface=array[6];
#declare transface[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-0.0,-0.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -135.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.0,1.0>};
#declare transface[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,135.0,0>);
#declare transy=<-0.0,-1.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate 135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,1.0,0.0>};
#declare transface[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<1.0,-0.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -135.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,0.0,0.0>};
#declare transface[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<-1.0,-0.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -45.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,0.0,0.0>};
#declare transface[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,45.0,0>);
#declare transy=<-0.0,1.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate 45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-1.0,0.0>};
#declare transface[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-0.0,-0.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -135.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.0,-1.0>};
