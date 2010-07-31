#declare tetrahedron=mesh2{

vertex_vectors{

4,
<1.0,1.0,-1.0>,
<-1.0,1.0,1.0>,
<1.0,-1.0,1.0>,
<-1.0,-1.0,-1.0>
 }
normal_vectors{

4,
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
4,
<0,2,1>,0,
<3,0,1>,0,
<2,3,1>,0,
<3,2,0> 0
 } 
 }
#declare aretes=union{

object{cylinder{<1.0,1.0,-1.0>,<-1.0,1.0,1.0>,diam  }}
object{cylinder{<1.0,1.0,-1.0>,<1.0,-1.0,1.0>,diam  }}
object{cylinder{<1.0,1.0,-1.0>,<-1.0,-1.0,-1.0>,diam  }}
object{cylinder{<-1.0,1.0,1.0>,<1.0,-1.0,1.0>,diam  }}
object{cylinder{<-1.0,1.0,1.0>,<-1.0,-1.0,-1.0>,diam  }}
object{cylinder{<1.0,-1.0,1.0>,<-1.0,-1.0,-1.0>,diam  }}
}
#declare sommets=union{

object{sphere{<1.0,1.0,-1.0>,diam1 }}
object{sphere{<-1.0,1.0,1.0>,diam1 }}
object{sphere{<1.0,-1.0,1.0>,diam1 }}
object{sphere{<-1.0,-1.0,-1.0>,diam1 }}
}
#declare maxIndices=6;
#declare trans=array[6];
#declare trans[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,45.0,0>);
#declare transy=<-0.0,-1.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -90.0*z rotate 45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,1.0,0.0>};
#declare trans[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<-1.0,-0.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -45.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <1.0,0.0,0.0>};
#declare trans[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,-0.0,1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -45.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.0,-1.0>};
#declare trans[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-0.0,-0.0,-1.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -45.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.0,1.0>};
#declare trans[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<1.0,-0.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -45.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-1.0,0.0,0.0>};
#declare trans[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<-0.0,1.0,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989834453001 rotate -90.0*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-1.0,0.0>};
#declare maxFaces=4;
#declare transface=array[4];
#declare transface[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-65.90515744788931>);
#declare Victor=vrotate(Victor,<0,63.43494882292201,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-65.90515744788931>);
#declare Hugo=vrotate(Hugo,<0,63.43494882292201,0>);
#declare transy=<-0.5,-0.5,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -65.90515744788931*z rotate 63.43494882292201*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,0.5,0.0>};
#declare transface[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-144.73561031724535>);
#declare Victor=vrotate(Victor,<0,135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-144.73561031724535>);
#declare Hugo=vrotate(Hugo,<0,135.0,0>);
#declare transy=<0.5,-0.0,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -144.73561031724535*z rotate 135.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,0.0,-0.5>};
#declare transface[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-114.09484255211072>);
#declare Victor=vrotate(Victor,<0,-26.56505117707799,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-114.09484255211072>);
#declare Hugo=vrotate(Hugo,<0,-26.56505117707799,0>);
#declare transy=<-0.0,0.5,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -114.09484255211072*z rotate -26.56505117707799*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-0.5,0.5>};
#declare transface[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-114.09484255211072>);
#declare Victor=vrotate(Victor,<0,153.43494882292202,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-114.09484255211072>);
#declare Hugo=vrotate(Hugo,<0,153.43494882292202,0>);
#declare transy=<-0.0,0.5,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -114.09484255211072*z rotate 153.43494882292202*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-0.5,-0.5>};
