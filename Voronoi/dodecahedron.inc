#declare dodecahedron=mesh2{

vertex_vectors{

32,
<0.5773502691896,0.5773502691896,0.5773502691896>,
<-0.0,0.9341723589627,-0.3568220897731>,
<-0.5773502691896,0.5773502691896,0.5773502691896>,
<-0.0,0.9341723589627,0.3568220897731>,
<-0.9341723589627,0.3568220897731,-0.0>,
<-0.5773502691896,0.5773502691896,-0.5773502691896>,
<0.9341723589627,-0.3568220897731,-0.0>,
<0.9341723589627,0.3568220897731,-0.0>,
<0.5773502691896,0.5773502691896,-0.5773502691896>,
<0.5773502691896,-0.5773502691896,0.5773502691896>,
<0.3568220897731,0.0,0.9341723589627>,
<-0.3568220897731,0.0,0.9341723589627>,
<-0.9341723589627,-0.3568220897731,-0.0>,
<-0.5773502691896,-0.5773502691896,0.5773502691896>,
<-0.0,-0.9341723589627,0.3568220897731>,
<0.3568220897731,0.0,-0.9341723589627>,
<0.5773502691896,-0.5773502691896,-0.5773502691896>,
<-0.0,-0.9341723589627,-0.3568220897731>,
<-0.3568220897731,0.0,-0.9341723589627>,
<-0.5773502691896,-0.5773502691896,-0.5773502691896>,
<-0.41777457946838,0.67597346921554,0.0>,
<0.67597346921554,0.0,0.41777457946838>,
<0.67597346921554,0.0,-0.41777457946838>,
<0.41777457946838,0.67597346921554,0.0>,
<0.0,0.41777457946838,-0.67597346921554>,
<0.0,0.41777457946838,0.67597346921554>,
<0.41777457946838,-0.6759734692155401,0.0>,
<-0.6759734692155401,0.0,0.41777457946838>,
<0.0,-0.41777457946838,0.67597346921554>,
<0.0,-0.41777457946838,-0.67597346921554>,
<-0.41777457946838,-0.67597346921554,0.0>,
<-0.6759734692155401,0.0,-0.41777457946838>
 }
normal_vectors{

32,
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
1,
texture{texture0}
 }
*/
face_indices{
60,
<2,4,20>,// ,0,
<4,5,20>,// ,0,
<5,1,20>,// ,0,
<1,3,20>,// ,0,
<3,2,20>,// ,0,
<0,7,21>,// ,0,
<7,6,21>,// ,0,
<6,9,21>,// ,0,
<9,10,21>,// ,0,
<10,0,21>,// ,0,
<8,15,22>,// ,0,
<15,16,22>,// ,0,
<16,6,22>,// ,0,
<6,7,22>,// ,0,
<7,8,22>,// ,0,
<8,7,23>,// ,0,
<7,0,23>,// ,0,
<0,3,23>,// ,0,
<3,1,23>,// ,0,
<1,8,23>,// ,0,
<5,18,24>,// ,0,
<18,15,24>,// ,0,
<15,8,24>,// ,0,
<8,1,24>,// ,0,
<1,5,24>,// ,0,
<0,10,25>,// ,0,
<10,11,25>,// ,0,
<11,2,25>,// ,0,
<2,3,25>,// ,0,
<3,0,25>,// ,0,
<6,16,26>,// ,0,
<16,17,26>,// ,0,
<17,14,26>,// ,0,
<14,9,26>,// ,0,
<9,6,26>,// ,0,
<11,13,27>,// ,0,
<13,12,27>,// ,0,
<12,4,27>,// ,0,
<4,2,27>,// ,0,
<2,11,27>,// ,0,
<11,10,28>,// ,0,
<10,9,28>,// ,0,
<9,14,28>,// ,0,
<14,13,28>,// ,0,
<13,11,28>,// ,0,
<19,17,29>,// ,0,
<17,16,29>,// ,0,
<16,15,29>,// ,0,
<15,18,29>,// ,0,
<18,19,29>,// ,0,
<19,12,30>,// ,0,
<12,13,30>,// ,0,
<13,14,30>,// ,0,
<14,17,30>,// ,0,
<17,19,30>,// ,0,
<18,5,31>,// ,0,
<5,4,31>,// ,0,
<4,12,31>,// ,0,
<12,19,31>,// ,0,
<19,18,31> //0
 } 
 }
#declare aretes=union{

object{cylinder{<0.5773502691896,0.5773502691896,0.5773502691896>,<-0.0,0.9341723589627,0.3568220897731>,diam  }}
object{cylinder{<0.5773502691896,0.5773502691896,0.5773502691896>,<0.9341723589627,0.3568220897731,-0.0>,diam  }}
object{cylinder{<0.5773502691896,0.5773502691896,0.5773502691896>,<0.3568220897731,0.0,0.9341723589627>,diam  }}
object{cylinder{<-0.0,0.9341723589627,-0.3568220897731>,<-0.0,0.9341723589627,0.3568220897731>,diam  }}
object{cylinder{<-0.0,0.9341723589627,-0.3568220897731>,<-0.5773502691896,0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<-0.0,0.9341723589627,-0.3568220897731>,<0.5773502691896,0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<-0.5773502691896,0.5773502691896,0.5773502691896>,<-0.0,0.9341723589627,0.3568220897731>,diam  }}
object{cylinder{<-0.5773502691896,0.5773502691896,0.5773502691896>,<-0.9341723589627,0.3568220897731,-0.0>,diam  }}
object{cylinder{<-0.5773502691896,0.5773502691896,0.5773502691896>,<-0.3568220897731,0.0,0.9341723589627>,diam  }}
object{cylinder{<-0.9341723589627,0.3568220897731,-0.0>,<-0.5773502691896,0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<-0.9341723589627,0.3568220897731,-0.0>,<-0.9341723589627,-0.3568220897731,-0.0>,diam  }}
object{cylinder{<-0.5773502691896,0.5773502691896,-0.5773502691896>,<-0.3568220897731,0.0,-0.9341723589627>,diam  }}
object{cylinder{<0.9341723589627,-0.3568220897731,-0.0>,<0.9341723589627,0.3568220897731,-0.0>,diam  }}
object{cylinder{<0.9341723589627,-0.3568220897731,-0.0>,<0.5773502691896,-0.5773502691896,0.5773502691896>,diam  }}
object{cylinder{<0.9341723589627,-0.3568220897731,-0.0>,<0.5773502691896,-0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<0.9341723589627,0.3568220897731,-0.0>,<0.5773502691896,0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<0.5773502691896,0.5773502691896,-0.5773502691896>,<0.3568220897731,0.0,-0.9341723589627>,diam  }}
object{cylinder{<0.5773502691896,-0.5773502691896,0.5773502691896>,<0.3568220897731,0.0,0.9341723589627>,diam  }}
object{cylinder{<0.5773502691896,-0.5773502691896,0.5773502691896>,<-0.0,-0.9341723589627,0.3568220897731>,diam  }}
object{cylinder{<0.3568220897731,0.0,0.9341723589627>,<-0.3568220897731,0.0,0.9341723589627>,diam  }}
object{cylinder{<-0.3568220897731,0.0,0.9341723589627>,<-0.5773502691896,-0.5773502691896,0.5773502691896>,diam  }}
object{cylinder{<-0.9341723589627,-0.3568220897731,-0.0>,<-0.5773502691896,-0.5773502691896,0.5773502691896>,diam  }}
object{cylinder{<-0.9341723589627,-0.3568220897731,-0.0>,<-0.5773502691896,-0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<-0.5773502691896,-0.5773502691896,0.5773502691896>,<-0.0,-0.9341723589627,0.3568220897731>,diam  }}
object{cylinder{<-0.0,-0.9341723589627,0.3568220897731>,<-0.0,-0.9341723589627,-0.3568220897731>,diam  }}
object{cylinder{<0.3568220897731,0.0,-0.9341723589627>,<0.5773502691896,-0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<0.3568220897731,0.0,-0.9341723589627>,<-0.3568220897731,0.0,-0.9341723589627>,diam  }}
object{cylinder{<0.5773502691896,-0.5773502691896,-0.5773502691896>,<-0.0,-0.9341723589627,-0.3568220897731>,diam  }}
object{cylinder{<-0.0,-0.9341723589627,-0.3568220897731>,<-0.5773502691896,-0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<-0.3568220897731,0.0,-0.9341723589627>,<-0.5773502691896,-0.5773502691896,-0.5773502691896>,diam  }}
}
#declare sommets=union{

object{sphere{<0.5773502691896,0.5773502691896,0.5773502691896>,diam1 }}
object{sphere{<-0.0,0.9341723589627,-0.3568220897731>,diam1 }}
object{sphere{<-0.5773502691896,0.5773502691896,0.5773502691896>,diam1 }}
object{sphere{<-0.0,0.9341723589627,0.3568220897731>,diam1 }}
object{sphere{<-0.9341723589627,0.3568220897731,-0.0>,diam1 }}
object{sphere{<-0.5773502691896,0.5773502691896,-0.5773502691896>,diam1 }}
object{sphere{<0.9341723589627,-0.3568220897731,-0.0>,diam1 }}
object{sphere{<0.9341723589627,0.3568220897731,-0.0>,diam1 }}
object{sphere{<0.5773502691896,0.5773502691896,-0.5773502691896>,diam1 }}
object{sphere{<0.5773502691896,-0.5773502691896,0.5773502691896>,diam1 }}
object{sphere{<0.3568220897731,0.0,0.9341723589627>,diam1 }}
object{sphere{<-0.3568220897731,0.0,0.9341723589627>,diam1 }}
object{sphere{<-0.9341723589627,-0.3568220897731,-0.0>,diam1 }}
object{sphere{<-0.5773502691896,-0.5773502691896,0.5773502691896>,diam1 }}
object{sphere{<-0.0,-0.9341723589627,0.3568220897731>,diam1 }}
object{sphere{<0.3568220897731,0.0,-0.9341723589627>,diam1 }}
object{sphere{<0.5773502691896,-0.5773502691896,-0.5773502691896>,diam1 }}
object{sphere{<-0.0,-0.9341723589627,-0.3568220897731>,diam1 }}
object{sphere{<-0.3568220897731,0.0,-0.9341723589627>,diam1 }}
object{sphere{<-0.5773502691896,-0.5773502691896,-0.5773502691896>,diam1 }}
}
#declare maxIndices=30;
#declare trans=array[30];
#declare trans[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-120.0000000000022>);
#declare Victor=vrotate(Victor,<0,-20.905157447887046,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-120.0000000000022>);
#declare Hugo=vrotate(Hugo,<0,-20.905157447887046,0>);
#declare transy=<-0.2886751345948,-0.75576131407615,-0.46708617948135>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -120.0000000000022*z rotate -20.905157447887046*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,0.75576131407615,0.46708617948135>};
#declare trans[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-72.00000000000233>);
#declare Victor=vrotate(Victor,<0,-121.71747441146289,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-72.00000000000233>);
#declare Hugo=vrotate(Hugo,<0,-121.71747441146289,0>);
#declare transy=<-0.75576131407615,-0.46708617948135,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -72.00000000000233*z rotate -121.71747441146289*y Axis_Rotate_Trans(Victor,provi)  translate <0.75576131407615,0.46708617948135,0.2886751345948>};
#declare trans[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.000000000000554>);
#declare Victor=vrotate(Victor,<0,58.28252558854389,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.000000000000554>);
#declare Hugo=vrotate(Hugo,<0,58.28252558854389,0>);
#declare transy=<-0.46708617948135,-0.2886751345948,-0.75576131407615>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -36.000000000000554*z rotate 58.28252558854389*y Axis_Rotate_Trans(Victor,provi)  translate <0.46708617948135,0.2886751345948,0.75576131407615>};
#declare trans[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,90.0,0>);
#declare transy=<0.0,-0.9341723589627,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000058566590997 rotate -90.0*z rotate 90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.0,0.9341723589627,0.0>};
#declare trans[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-59.999999999997826>);
#declare Victor=vrotate(Victor,<0,-20.905157447887056,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-59.999999999997826>);
#declare Hugo=vrotate(Hugo,<0,-20.905157447887056,0>);
#declare transy=<0.2886751345948,-0.75576131407615,0.46708617948135>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -59.999999999997826*z rotate -20.905157447887056*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,0.75576131407615,-0.46708617948135>};
#declare trans[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-59.999999999997826>);
#declare Victor=vrotate(Victor,<0,-159.09484255211296,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-59.999999999997826>);
#declare Hugo=vrotate(Hugo,<0,-159.09484255211296,0>);
#declare transy=<-0.2886751345948,-0.75576131407615,0.46708617948135>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -59.999999999997826*z rotate -159.09484255211296*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,0.75576131407615,-0.46708617948135>};
#declare trans[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-120.0000000000022>);
#declare Victor=vrotate(Victor,<0,-159.09484255211296,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-120.0000000000022>);
#declare Hugo=vrotate(Hugo,<0,-159.09484255211296,0>);
#declare transy=<0.2886751345948,-0.75576131407615,-0.46708617948135>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -120.0000000000022*z rotate -159.09484255211296*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,0.75576131407615,0.46708617948135>};
#declare trans[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-72.00000000000233>);
#declare Victor=vrotate(Victor,<0,-58.282525588537126,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-72.00000000000233>);
#declare Hugo=vrotate(Hugo,<0,-58.282525588537126,0>);
#declare transy=<0.75576131407615,-0.46708617948135,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -72.00000000000233*z rotate -58.282525588537126*y Axis_Rotate_Trans(Victor,provi)  translate <-0.75576131407615,0.46708617948135,0.2886751345948>};
#declare trans[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.000000000000554>);
#declare Victor=vrotate(Victor,<0,121.71747441145612,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.000000000000554>);
#declare Hugo=vrotate(Hugo,<0,121.71747441145612,0>);
#declare transy=<0.46708617948135,-0.2886751345948,-0.75576131407615>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -36.000000000000554*z rotate 121.71747441145612*y Axis_Rotate_Trans(Victor,provi)  translate <-0.46708617948135,0.2886751345948,0.75576131407615>};
#declare trans[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-107.9999999999977>);
#declare Victor=vrotate(Victor,<0,-121.71747441146289,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-107.9999999999977>);
#declare Hugo=vrotate(Hugo,<0,-121.71747441146289,0>);
#declare transy=<0.75576131407615,-0.46708617948135,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -107.9999999999977*z rotate -121.71747441146289*y Axis_Rotate_Trans(Victor,provi)  translate <-0.75576131407615,0.46708617948135,-0.2886751345948>};
#declare trans[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-0.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-0.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<0.9341723589627,-0.0,0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000058566590997 rotate -0.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.9341723589627,0.0,-0.0>};
#declare trans[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.000000000000554>);
#declare Victor=vrotate(Victor,<0,-121.71747441145612,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.000000000000554>);
#declare Hugo=vrotate(Hugo,<0,-121.71747441145612,0>);
#declare transy=<0.46708617948135,-0.2886751345948,0.75576131407615>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -36.000000000000554*z rotate -121.71747441145612*y Axis_Rotate_Trans(Victor,provi)  translate <-0.46708617948135,0.2886751345948,-0.75576131407615>};
#declare trans[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-180.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-180.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.9341723589627,-0.0,0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000058566590997 rotate -180.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.9341723589627,0.0,-0.0>};
#declare trans[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-72.00000000000232>);
#declare Victor=vrotate(Victor,<0,58.282525588537126,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-72.00000000000232>);
#declare Hugo=vrotate(Hugo,<0,58.282525588537126,0>);
#declare transy=<-0.75576131407615,0.46708617948135,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -72.00000000000232*z rotate 58.282525588537126*y Axis_Rotate_Trans(Victor,provi)  translate <0.75576131407615,-0.46708617948135,0.2886751345948>};
#declare trans[14]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-72.00000000000232>);
#declare Victor=vrotate(Victor,<0,-58.282525588537126,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-72.00000000000232>);
#declare Hugo=vrotate(Hugo,<0,-58.282525588537126,0>);
#declare transy=<-0.75576131407615,0.46708617948135,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -72.00000000000232*z rotate -58.282525588537126*y Axis_Rotate_Trans(Victor,provi)  translate <0.75576131407615,-0.46708617948135,-0.2886751345948>};
#declare trans[15]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-107.9999999999977>);
#declare Victor=vrotate(Victor,<0,-58.282525588537126,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-107.9999999999977>);
#declare Hugo=vrotate(Hugo,<0,-58.282525588537126,0>);
#declare transy=<-0.75576131407615,-0.46708617948135,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -107.9999999999977*z rotate -58.282525588537126*y Axis_Rotate_Trans(Victor,provi)  translate <0.75576131407615,0.46708617948135,-0.2886751345948>};
#declare trans[16]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.000000000000554>);
#declare Victor=vrotate(Victor,<0,-58.28252558854389,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.000000000000554>);
#declare Hugo=vrotate(Hugo,<0,-58.28252558854389,0>);
#declare transy=<-0.46708617948135,-0.2886751345948,0.75576131407615>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -36.000000000000554*z rotate -58.28252558854389*y Axis_Rotate_Trans(Victor,provi)  translate <0.46708617948135,0.2886751345948,-0.75576131407615>};
#declare trans[17]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-143.99999999999943>);
#declare Victor=vrotate(Victor,<0,58.28252558854389,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-143.99999999999943>);
#declare Hugo=vrotate(Hugo,<0,58.28252558854389,0>);
#declare transy=<-0.46708617948135,0.2886751345948,-0.75576131407615>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -143.99999999999943*z rotate 58.28252558854389*y Axis_Rotate_Trans(Victor,provi)  translate <0.46708617948135,-0.2886751345948,0.75576131407615>};
#declare trans[18]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-59.999999999997826>);
#declare Victor=vrotate(Victor,<0,-20.905157447887046,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-59.999999999997826>);
#declare Hugo=vrotate(Hugo,<0,-20.905157447887046,0>);
#declare transy=<-0.2886751345948,0.75576131407615,-0.46708617948135>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -59.999999999997826*z rotate -20.905157447887046*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,-0.75576131407615,0.46708617948135>};
#declare trans[19]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,-0.0,-0.9341723589627>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000058566590997 rotate -90.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.0,0.9341723589627>};
#declare trans[20]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.00000000000056>);
#declare Victor=vrotate(Victor,<0,-58.28252558854388,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.00000000000056>);
#declare Hugo=vrotate(Hugo,<0,-58.28252558854388,0>);
#declare transy=<0.46708617948135,0.2886751345948,-0.75576131407615>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -36.00000000000056*z rotate -58.28252558854388*y Axis_Rotate_Trans(Victor,provi)  translate <-0.46708617948135,-0.2886751345948,0.75576131407615>};
#declare trans[21]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-72.00000000000232>);
#declare Victor=vrotate(Victor,<0,121.71747441146289,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-72.00000000000232>);
#declare Hugo=vrotate(Hugo,<0,121.71747441146289,0>);
#declare transy=<0.75576131407615,0.46708617948135,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -72.00000000000232*z rotate 121.71747441146289*y Axis_Rotate_Trans(Victor,provi)  translate <-0.75576131407615,-0.46708617948135,0.2886751345948>};
#declare trans[22]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-72.00000000000232>);
#declare Victor=vrotate(Victor,<0,-121.71747441146289,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-72.00000000000232>);
#declare Hugo=vrotate(Hugo,<0,-121.71747441146289,0>);
#declare transy=<0.75576131407615,0.46708617948135,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -72.00000000000232*z rotate -121.71747441146289*y Axis_Rotate_Trans(Victor,provi)  translate <-0.75576131407615,-0.46708617948135,-0.2886751345948>};
#declare trans[23]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-59.999999999997826>);
#declare Victor=vrotate(Victor,<0,-159.09484255211296,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-59.999999999997826>);
#declare Hugo=vrotate(Hugo,<0,-159.09484255211296,0>);
#declare transy=<0.2886751345948,0.75576131407615,-0.46708617948135>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -59.999999999997826*z rotate -159.09484255211296*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,-0.75576131407615,0.46708617948135>};
#declare trans[24]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<0.0,0.9341723589627,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000058566590997 rotate -90.0*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.0,-0.9341723589627,0.0>};
#declare trans[25]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.00000000000056>);
#declare Victor=vrotate(Victor,<0,121.71747441145614,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.00000000000056>);
#declare Hugo=vrotate(Hugo,<0,121.71747441145614,0>);
#declare transy=<-0.46708617948135,0.2886751345948,0.75576131407615>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -36.00000000000056*z rotate 121.71747441145614*y Axis_Rotate_Trans(Victor,provi)  translate <0.46708617948135,-0.2886751345948,-0.75576131407615>};
#declare trans[26]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.0,-0.0,0.9341723589627>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000058566590997 rotate -90.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.0,-0.9341723589627>};
#declare trans[27]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-59.999999999997826>);
#declare Victor=vrotate(Victor,<0,20.905157447887046,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-59.999999999997826>);
#declare Hugo=vrotate(Hugo,<0,20.905157447887046,0>);
#declare transy=<-0.2886751345948,0.75576131407615,0.46708617948135>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -59.999999999997826*z rotate 20.905157447887046*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,-0.75576131407615,-0.46708617948135>};
#declare trans[28]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-120.0000000000022>);
#declare Victor=vrotate(Victor,<0,-20.905157447887056,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-120.0000000000022>);
#declare Hugo=vrotate(Hugo,<0,-20.905157447887056,0>);
#declare transy=<0.2886751345948,0.75576131407615,0.46708617948135>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -120.0000000000022*z rotate -20.905157447887056*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,-0.75576131407615,-0.46708617948135>};
#declare trans[29]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.00000000000056>);
#declare Victor=vrotate(Victor,<0,58.28252558854388,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.00000000000056>);
#declare Hugo=vrotate(Hugo,<0,58.28252558854388,0>);
#declare transy=<0.46708617948135,0.2886751345948,0.75576131407615>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000005856659034 rotate -36.00000000000056*z rotate 58.28252558854388*y Axis_Rotate_Trans(Victor,provi)  translate <-0.46708617948135,-0.2886751345948,-0.75576131407615>};
#declare maxFaces=12;
#declare transface=array[12];
#declare transface[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-99.34970354257517>);
#declare Victor=vrotate(Victor,<0,-105.45043708632566,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-99.34970354257517>);
#declare Hugo=vrotate(Hugo,<0,-105.45043708632566,0>);
#declare transy=<0.4330127018922,-0.666555791632875,-0.055132044854124984>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -99.34970354257517*z rotate -105.45043708632566*y Axis_Rotate_Trans(Victor,provi)  translate <-0.4330127018922,0.666555791632875,0.055132044854124984>};
#declare transface[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-18.000000000000135>);
#declare Victor=vrotate(Victor,<0,-121.7174744114629,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-18.000000000000135>);
#declare Hugo=vrotate(Hugo,<0,-121.7174744114629,0>);
#declare transy=<-0.666555791632875,-0.055132044854124984,-0.4330127018922>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -18.000000000000135*z rotate -121.7174744114629*y Axis_Rotate_Trans(Victor,provi)  translate <0.666555791632875,0.055132044854124984,0.4330127018922>};
#declare transface[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-18.000000000000135>);
#declare Victor=vrotate(Victor,<0,121.7174744114629,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-18.000000000000135>);
#declare Hugo=vrotate(Hugo,<0,121.7174744114629,0>);
#declare transy=<-0.666555791632875,-0.055132044854124984,0.4330127018922>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -18.000000000000135*z rotate 121.7174744114629*y Axis_Rotate_Trans(Victor,provi)  translate <0.666555791632875,0.055132044854124984,-0.4330127018922>};
#declare transface[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-99.34970354257517>);
#declare Victor=vrotate(Victor,<0,74.54956291367435,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-99.34970354257517>);
#declare Hugo=vrotate(Hugo,<0,74.54956291367435,0>);
#declare transy=<-0.4330127018922,-0.666555791632875,0.055132044854124984>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -99.34970354257517*z rotate 74.54956291367435*y Axis_Rotate_Trans(Victor,provi)  translate <0.4330127018922,0.666555791632875,-0.055132044854124984>};
#declare transface[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-74.75983771732238>);
#declare Victor=vrotate(Victor,<0,-170.3062761046846,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-74.75983771732238>);
#declare Hugo=vrotate(Hugo,<0,-170.3062761046846,0>);
#declare transy=<0.055132044854124984,-0.4330127018922,0.666555791632875>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -74.75983771732238*z rotate -170.3062761046846*y Axis_Rotate_Trans(Victor,provi)  translate <-0.055132044854124984,0.4330127018922,-0.666555791632875>};
#declare transface[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-74.75983771732238>);
#declare Victor=vrotate(Victor,<0,9.693723895315399,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-74.75983771732238>);
#declare Hugo=vrotate(Hugo,<0,9.693723895315399,0>);
#declare transy=<-0.055132044854124984,-0.4330127018922,-0.666555791632875>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -74.75983771732238*z rotate 9.693723895315399*y Axis_Rotate_Trans(Victor,provi)  translate <0.055132044854124984,0.4330127018922,0.666555791632875>};
#declare transface[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-58.28252558853971>);
#declare Victor=vrotate(Victor,<0,0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-58.28252558853971>);
#declare Hugo=vrotate(Hugo,<0,0.0,0>);
#declare transy=<-0.46708617948135,0.6454972243679,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -58.28252558853971*z rotate 0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.46708617948135,-0.6454972243679,0.0>};
#declare transface[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-58.28252558853971,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-58.28252558853971,0>);
#declare transy=<0.6454972243679,-0.0,-0.46708617948135>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate -58.28252558853971*y Axis_Rotate_Trans(Victor,provi)  translate <-0.6454972243679,0.0,0.46708617948135>};
#declare transface[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-46.51292225447876>);
#declare Victor=vrotate(Victor,<0,-144.11024534041627,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-46.51292225447876>);
#declare Hugo=vrotate(Hugo,<0,-144.11024534041627,0>);
#declare transy=<0.03407347758915,0.377880657038075,-0.7006292692220251>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -46.51292225447876*z rotate -144.11024534041627*y Axis_Rotate_Trans(Victor,provi)  translate <-0.03407347758915,-0.377880657038075,0.7006292692220251>};
#declare transface[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-105.24016228267763>);
#declare Victor=vrotate(Victor,<0,-170.3062761046846,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-105.24016228267763>);
#declare Hugo=vrotate(Hugo,<0,-170.3062761046846,0>);
#declare transy=<0.055132044854124984,0.4330127018922,0.666555791632875>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -105.24016228267763*z rotate -170.3062761046846*y Axis_Rotate_Trans(Victor,provi)  translate <-0.055132044854124984,-0.4330127018922,-0.666555791632875>};
#declare transface[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-80.65029645742486>);
#declare Victor=vrotate(Victor,<0,105.45043708632566,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-80.65029645742486>);
#declare Hugo=vrotate(Hugo,<0,105.45043708632566,0>);
#declare transy=<0.4330127018922,0.666555791632875,0.055132044854124984>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -80.65029645742486*z rotate 105.45043708632566*y Axis_Rotate_Trans(Victor,provi)  translate <-0.4330127018922,-0.666555791632875,-0.055132044854124984>};
#declare transface[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,58.28252558853971,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,58.28252558853971,0>);
#declare transy=<0.6454972243679,-0.0,0.46708617948135>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate 58.28252558853971*y Axis_Rotate_Trans(Victor,provi)  translate <-0.6454972243679,0.0,-0.46708617948135>};
#declare nbVertices=32;
#declare lesVertices=array[nbVertices];
#declare lesVertices[0]=<0.5773502691896,0.5773502691896,0.5773502691896>;
#declare lesVertices[1]=<-0.0,0.9341723589627,-0.3568220897731>;
#declare lesVertices[2]=<-0.5773502691896,0.5773502691896,0.5773502691896>;
#declare lesVertices[3]=<-0.0,0.9341723589627,0.3568220897731>;
#declare lesVertices[4]=<-0.9341723589627,0.3568220897731,-0.0>;
#declare lesVertices[5]=<-0.5773502691896,0.5773502691896,-0.5773502691896>;
#declare lesVertices[6]=<0.9341723589627,-0.3568220897731,-0.0>;
#declare lesVertices[7]=<0.9341723589627,0.3568220897731,-0.0>;
#declare lesVertices[8]=<0.5773502691896,0.5773502691896,-0.5773502691896>;
#declare lesVertices[9]=<0.5773502691896,-0.5773502691896,0.5773502691896>;
#declare lesVertices[10]=<0.3568220897731,0.0,0.9341723589627>;
#declare lesVertices[11]=<-0.3568220897731,0.0,0.9341723589627>;
#declare lesVertices[12]=<-0.9341723589627,-0.3568220897731,-0.0>;
#declare lesVertices[13]=<-0.5773502691896,-0.5773502691896,0.5773502691896>;
#declare lesVertices[14]=<-0.0,-0.9341723589627,0.3568220897731>;
#declare lesVertices[15]=<0.3568220897731,0.0,-0.9341723589627>;
#declare lesVertices[16]=<0.5773502691896,-0.5773502691896,-0.5773502691896>;
#declare lesVertices[17]=<-0.0,-0.9341723589627,-0.3568220897731>;
#declare lesVertices[18]=<-0.3568220897731,0.0,-0.9341723589627>;
#declare lesVertices[19]=<-0.5773502691896,-0.5773502691896,-0.5773502691896>;
#declare lesVertices[20]=<-0.41777457946838,0.67597346921554,0.0>;
#declare lesVertices[21]=<0.67597346921554,0.0,0.41777457946838>;
#declare lesVertices[22]=<0.67597346921554,0.0,-0.41777457946838>;
#declare lesVertices[23]=<0.41777457946838,0.67597346921554,0.0>;
#declare lesVertices[24]=<0.0,0.41777457946838,-0.67597346921554>;
#declare lesVertices[25]=<0.0,0.41777457946838,0.67597346921554>;
#declare lesVertices[26]=<0.41777457946838,-0.6759734692155401,0.0>;
#declare lesVertices[27]=<-0.6759734692155401,0.0,0.41777457946838>;
#declare lesVertices[28]=<0.0,-0.41777457946838,0.67597346921554>;
#declare lesVertices[29]=<0.0,-0.41777457946838,-0.67597346921554>;
#declare lesVertices[30]=<-0.41777457946838,-0.67597346921554,0.0>;
#declare lesVertices[31]=<-0.6759734692155401,0.0,-0.41777457946838>;
