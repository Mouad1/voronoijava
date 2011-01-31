#declare rhombic_dodecahedron=mesh2{

vertex_vectors{

26,
<0.0,0.0,1.0>,
<0.5,0.5,0.5>,
<-0.5,0.5,0.5>,
<-0.5,-0.5,0.5>,
<0.5,-0.5,0.5>,
<1.0,0.0,0.0>,
<0.0,1.0,0.0>,
<-1.0,0.0,0.0>,
<0.0,-1.0,0.0>,
<0.5,0.5,-0.5>,
<-0.5,0.5,-0.5>,
<-0.5,-0.5,-0.5>,
<0.5,-0.5,-0.5>,
<0.0,0.0,-1.0>,
<0.5,0.0,0.5>,
<0.0,0.5,0.5>,
<-0.5,0.0,0.5>,
<0.0,-0.5,0.5>,
<0.5,0.5,0.0>,
<-0.5,0.5,0.0>,
<-0.5,-0.5,0.0>,
<0.5,-0.5,0.0>,
<0.5,0.0,-0.5>,
<0.0,0.5,-0.5>,
<-0.5,0.0,-0.5>,
<0.0,-0.5,-0.5>
 }
normal_vectors{

26,
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
1,
texture{texture0}
 }
*/
face_indices{
48,
<1,5,14>,// ,0,
<5,4,14>,// ,0,
<4,0,14>,// ,0,
<0,1,14>,// ,0,
<2,6,15>,// ,0,
<6,1,15>,// ,0,
<1,0,15>,// ,0,
<0,2,15>,// ,0,
<3,7,16>,// ,0,
<7,2,16>,// ,0,
<2,0,16>,// ,0,
<0,3,16>,// ,0,
<4,8,17>,// ,0,
<8,3,17>,// ,0,
<3,0,17>,// ,0,
<0,4,17>,// ,0,
<6,9,18>,// ,0,
<9,5,18>,// ,0,
<5,1,18>,// ,0,
<1,6,18>,// ,0,
<7,10,19>,// ,0,
<10,6,19>,// ,0,
<6,2,19>,// ,0,
<2,7,19>,// ,0,
<8,11,20>,// ,0,
<11,7,20>,// ,0,
<7,3,20>,// ,0,
<3,8,20>,// ,0,
<5,12,21>,// ,0,
<12,8,21>,// ,0,
<8,4,21>,// ,0,
<4,5,21>,// ,0,
<9,13,22>,// ,0,
<13,12,22>,// ,0,
<12,5,22>,// ,0,
<5,9,22>,// ,0,
<10,13,23>,// ,0,
<13,9,23>,// ,0,
<9,6,23>,// ,0,
<6,10,23>,// ,0,
<11,13,24>,// ,0,
<13,10,24>,// ,0,
<10,7,24>,// ,0,
<7,11,24>,// ,0,
<12,13,25>,// ,0,
<13,11,25>,// ,0,
<11,8,25>,// ,0,
<8,12,25> //0
 } 
 }
#declare aretes=union{

object{cylinder{<0.0,0.0,1.0>,<0.5,0.5,0.5>,diam  }}
object{cylinder{<0.0,0.0,1.0>,<-0.5,0.5,0.5>,diam  }}
object{cylinder{<0.0,0.0,1.0>,<-0.5,-0.5,0.5>,diam  }}
object{cylinder{<0.0,0.0,1.0>,<0.5,-0.5,0.5>,diam  }}
object{cylinder{<0.5,0.5,0.5>,<1.0,0.0,0.0>,diam  }}
object{cylinder{<-0.5,0.5,0.5>,<0.0,1.0,0.0>,diam  }}
object{cylinder{<-0.5,-0.5,0.5>,<-1.0,0.0,0.0>,diam  }}
object{cylinder{<0.5,-0.5,0.5>,<0.0,-1.0,0.0>,diam  }}
object{cylinder{<0.5,0.5,0.5>,<0.0,1.0,0.0>,diam  }}
object{cylinder{<-0.5,0.5,0.5>,<-1.0,0.0,0.0>,diam  }}
object{cylinder{<-0.5,-0.5,0.5>,<0.0,-1.0,0.0>,diam  }}
object{cylinder{<0.5,-0.5,0.5>,<1.0,0.0,0.0>,diam  }}
object{cylinder{<1.0,0.0,0.0>,<0.5,0.5,-0.5>,diam  }}
object{cylinder{<0.0,1.0,0.0>,<-0.5,0.5,-0.5>,diam  }}
object{cylinder{<-1.0,0.0,0.0>,<-0.5,-0.5,-0.5>,diam  }}
object{cylinder{<0.0,-1.0,0.0>,<0.5,-0.5,-0.5>,diam  }}
object{cylinder{<1.0,0.0,0.0>,<0.5,-0.5,-0.5>,diam  }}
object{cylinder{<0.0,1.0,0.0>,<0.5,0.5,-0.5>,diam  }}
object{cylinder{<-1.0,0.0,0.0>,<-0.5,0.5,-0.5>,diam  }}
object{cylinder{<0.0,-1.0,0.0>,<-0.5,-0.5,-0.5>,diam  }}
object{cylinder{<0.0,0.0,-1.0>,<0.5,0.5,-0.5>,diam  }}
object{cylinder{<0.0,0.0,-1.0>,<-0.5,0.5,-0.5>,diam  }}
object{cylinder{<0.0,0.0,-1.0>,<-0.5,-0.5,-0.5>,diam  }}
object{cylinder{<0.0,0.0,-1.0>,<0.5,-0.5,-0.5>,diam  }}
}
#declare sommets=union{

object{sphere{<0.0,0.0,1.0>,diam1 }}
object{sphere{<0.5,0.5,0.5>,diam1 }}
object{sphere{<-0.5,0.5,0.5>,diam1 }}
object{sphere{<-0.5,-0.5,0.5>,diam1 }}
object{sphere{<0.5,-0.5,0.5>,diam1 }}
object{sphere{<1.0,0.0,0.0>,diam1 }}
object{sphere{<0.0,1.0,0.0>,diam1 }}
object{sphere{<-1.0,0.0,0.0>,diam1 }}
object{sphere{<0.0,-1.0,0.0>,diam1 }}
object{sphere{<0.5,0.5,-0.5>,diam1 }}
object{sphere{<-0.5,0.5,-0.5>,diam1 }}
object{sphere{<-0.5,-0.5,-0.5>,diam1 }}
object{sphere{<0.5,-0.5,-0.5>,diam1 }}
object{sphere{<0.0,0.0,-1.0>,diam1 }}
}
#declare maxIndices=24;
#declare trans=array[24];
#declare trans[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-125.26438968275465>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-125.26438968275465>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<-0.25,-0.25,-0.75>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -125.26438968275465*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.25,0.25,0.75>};
#declare trans[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-125.26438968275465>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-125.26438968275465>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<0.25,-0.25,-0.75>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -125.26438968275465*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.25,0.25,0.75>};
#declare trans[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-54.735610317245346>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-54.735610317245346>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<0.25,0.25,-0.75>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -54.735610317245346*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.25,-0.25,0.75>};
#declare trans[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-54.735610317245346>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-54.735610317245346>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<-0.25,0.25,-0.75>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -54.735610317245346*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.25,-0.25,0.75>};
#declare trans[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-54.735610317245346>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-54.735610317245346>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<-0.75,-0.25,-0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -54.735610317245346*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.75,0.25,0.25>};
#declare trans[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-125.26438968275465>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-125.26438968275465>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<0.25,-0.75,-0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -125.26438968275465*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.25,0.75,0.25>};
#declare trans[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-125.26438968275465>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-125.26438968275465>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<0.75,0.25,-0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -125.26438968275465*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.75,-0.25,0.25>};
#declare trans[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-54.735610317245346>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-54.735610317245346>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<-0.25,0.75,-0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -54.735610317245346*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.25,-0.75,0.25>};
#declare trans[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-125.26438968275465>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-125.26438968275465>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<-0.25,-0.75,-0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -125.26438968275465*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.25,0.75,0.25>};
#declare trans[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-54.735610317245346>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-54.735610317245346>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<0.75,-0.25,-0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -54.735610317245346*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.75,0.25,0.25>};
#declare trans[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-54.735610317245346>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-54.735610317245346>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<0.25,0.75,-0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -54.735610317245346*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.25,-0.75,0.25>};
#declare trans[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-125.26438968275465>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-125.26438968275465>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<-0.75,0.25,-0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -125.26438968275465*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.75,-0.25,0.25>};
#declare trans[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-125.26438968275465>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-125.26438968275465>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<-0.75,-0.25,0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -125.26438968275465*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.75,0.25,-0.25>};
#declare trans[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-54.735610317245346>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-54.735610317245346>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<0.25,-0.75,0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -54.735610317245346*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.25,0.75,-0.25>};
#declare trans[14]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-54.735610317245346>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-54.735610317245346>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<0.75,0.25,0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -54.735610317245346*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.75,-0.25,-0.25>};
#declare trans[15]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-125.26438968275465>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-125.26438968275465>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<-0.25,0.75,0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -125.26438968275465*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.25,-0.75,-0.25>};
#declare trans[16]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-54.735610317245346>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-54.735610317245346>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<-0.75,0.25,0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -54.735610317245346*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.75,-0.25,-0.25>};
#declare trans[17]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-54.735610317245346>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-54.735610317245346>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<-0.25,-0.75,0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -54.735610317245346*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.25,0.75,-0.25>};
#declare trans[18]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-125.26438968275465>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-125.26438968275465>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<0.75,-0.25,0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -125.26438968275465*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.75,0.25,-0.25>};
#declare trans[19]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-125.26438968275465>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-125.26438968275465>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<0.25,0.75,0.25>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -125.26438968275465*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.25,-0.75,-0.25>};
#declare trans[20]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-125.26438968275465>);
#declare Victor=vrotate(Victor,<0,135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-125.26438968275465>);
#declare Hugo=vrotate(Hugo,<0,135.0,0>);
#declare transy=<-0.25,-0.25,0.75>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -125.26438968275465*z rotate 135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.25,0.25,-0.75>};
#declare trans[21]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-125.26438968275465>);
#declare Victor=vrotate(Victor,<0,45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-125.26438968275465>);
#declare Hugo=vrotate(Hugo,<0,45.0,0>);
#declare transy=<0.25,-0.25,0.75>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -125.26438968275465*z rotate 45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.25,0.25,-0.75>};
#declare trans[22]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-54.735610317245346>);
#declare Victor=vrotate(Victor,<0,45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-54.735610317245346>);
#declare Hugo=vrotate(Hugo,<0,45.0,0>);
#declare transy=<0.25,0.25,0.75>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -54.735610317245346*z rotate 45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.25,-0.25,-0.75>};
#declare trans[23]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-54.735610317245346>);
#declare Victor=vrotate(Victor,<0,135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-54.735610317245346>);
#declare Hugo=vrotate(Hugo,<0,135.0,0>);
#declare transy=<-0.25,0.25,0.75>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999946927755835 rotate -54.735610317245346*z rotate 135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.25,-0.25,-0.75>};
#declare maxFaces=12;
#declare transface=array[12];
#declare transface[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-0.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-0.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.5,-0.0,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -0.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,0.0,0.5>};
#declare transface[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-0.0,-0.5,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.5,0.5>};
#declare transface[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-180.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-180.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<0.5,-0.0,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -180.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,0.0,0.5>};
#declare transface[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,0.5,-0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-0.5,0.5>};
#declare transface[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.5,-0.5,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -135.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,0.5,0.0>};
#declare transface[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<0.5,-0.5,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -45.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,0.5,0.0>};
#declare transface[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<0.5,0.5,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -45.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,-0.5,0.0>};
#declare transface[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-0.5,0.5,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -135.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,-0.5,0.0>};
#declare transface[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-0.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-0.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.5,-0.0,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -0.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.5,0.0,-0.5>};
#declare transface[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-0.0,-0.5,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.5,-0.5>};
#declare transface[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-180.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-180.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<0.5,-0.0,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -180.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5,0.0,-0.5>};
#declare transface[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,0.5,0.5>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-0.5,-0.5>};
#declare nbVertices=14;
#declare lesVertices=array[nbVertices];
#declare lesVertices[0]=<0.0,0.0,1.0>;
#declare lesVertices[1]=<0.5,0.5,0.5>;
#declare lesVertices[2]=<-0.5,0.5,0.5>;
#declare lesVertices[3]=<-0.5,-0.5,0.5>;
#declare lesVertices[4]=<0.5,-0.5,0.5>;
#declare lesVertices[5]=<1.0,0.0,0.0>;
#declare lesVertices[6]=<0.0,1.0,0.0>;
#declare lesVertices[7]=<-1.0,0.0,0.0>;
#declare lesVertices[8]=<0.0,-1.0,0.0>;
#declare lesVertices[9]=<0.5,0.5,-0.5>;
#declare lesVertices[10]=<-0.5,0.5,-0.5>;
#declare lesVertices[11]=<-0.5,-0.5,-0.5>;
#declare lesVertices[12]=<0.5,-0.5,-0.5>;
#declare lesVertices[13]=<0.0,0.0,-1.0>;
