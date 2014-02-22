#declare disdyakis_dodecahedron=mesh2{

vertex_vectors{

26,
<0.0,0.0,1.0>,
<0.7071067811865,0.0,0.7071067811865>,
<0.0,0.7071067811865,0.7071067811865>,
<-0.7071067811865,0.0,0.7071067811865>,
<0.0,-0.7071067811865,0.7071067811865>,
<0.5773502691896,0.5773502691896,0.5773502691896>,
<-0.5773502691896,0.5773502691896,0.5773502691896>,
<-0.5773502691896,-0.5773502691896,0.5773502691896>,
<0.5773502691896,-0.5773502691896,0.5773502691896>,
<1.0,0.0,0.0>,
<0.7071067811865,0.7071067811865,0.0>,
<0.0,1.0,0.0>,
<-0.7071067811865,0.7071067811865,0.0>,
<-1.0,0.0,0.0>,
<-0.7071067811865,-0.7071067811865,0.0>,
<0.0,-1.0,0.0>,
<0.7071067811865,-0.7071067811865,0.0>,
<0.5773502691896,0.5773502691896,-0.5773502691896>,
<-0.5773502691896,0.5773502691896,-0.5773502691896>,
<-0.5773502691896,-0.5773502691896,-0.5773502691896>,
<0.5773502691896,-0.5773502691896,-0.5773502691896>,
<0.7071067811865,0.0,-0.7071067811865>,
<0.0,0.7071067811865,-0.7071067811865>,
<-0.7071067811865,0.0,-0.7071067811865>,
<0.0,-0.7071067811865,-0.7071067811865>,
<0.0,0.0,-1.0>
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
<6,3,13>,// ,0,
<3,6,0>,// ,0,
<1,5,9>,// ,0,
<5,1,0>,// ,0,
<6,2,0>,// ,0,
<2,5,0>,// ,0,
<2,6,11>,// ,0,
<5,2,11>,// ,0,
<23,18,13>,// ,0,
<18,23,25>,// ,0,
<12,6,13>,// ,0,
<18,12,13>,// ,0,
<6,12,11>,// ,0,
<12,18,11>,// ,0,
<17,21,9>,// ,0,
<21,17,25>,// ,0,
<5,10,9>,// ,0,
<10,17,9>,// ,0,
<10,5,11>,// ,0,
<17,10,11>,// ,0,
<22,18,25>,// ,0,
<17,22,25>,// ,0,
<18,22,11>,// ,0,
<22,17,11>,// ,0,
<7,3,0>,// ,0,
<3,7,13>,// ,0,
<4,7,0>,// ,0,
<7,4,15>,// ,0,
<7,14,13>,// ,0,
<14,7,15>,// ,0,
<23,19,25>,// ,0,
<19,14,15>,// ,0,
<19,23,13>,// ,0,
<14,19,13>,// ,0,
<1,8,0>,// ,0,
<8,4,0>,// ,0,
<8,1,9>,// ,0,
<16,8,9>,// ,0,
<8,16,15>,// ,0,
<4,8,15>,// ,0,
<19,24,25>,// ,0,
<24,19,15>,// ,0,
<21,20,9>,// ,0,
<20,16,9>,// ,0,
<20,21,25>,// ,0,
<24,20,25>,// ,0,
<16,20,15>,// ,0,
<20,24,15> //0
 } 
 }
#declare aretes=union{

object{cylinder{<0.0,0.0,1.0>,<0.7071067811865,0.0,0.7071067811865>,diam  }}
object{cylinder{<0.0,0.0,1.0>,<0.0,0.7071067811865,0.7071067811865>,diam  }}
object{cylinder{<0.0,0.0,1.0>,<-0.7071067811865,0.0,0.7071067811865>,diam  }}
object{cylinder{<0.0,0.0,1.0>,<0.0,-0.7071067811865,0.7071067811865>,diam  }}
object{cylinder{<0.0,0.0,1.0>,<0.5773502691896,0.5773502691896,0.5773502691896>,diam  }}
object{cylinder{<0.0,0.0,1.0>,<-0.5773502691896,0.5773502691896,0.5773502691896>,diam  }}
object{cylinder{<0.0,0.0,1.0>,<-0.5773502691896,-0.5773502691896,0.5773502691896>,diam  }}
object{cylinder{<0.0,0.0,1.0>,<0.5773502691896,-0.5773502691896,0.5773502691896>,diam  }}
object{cylinder{<0.7071067811865,0.0,0.7071067811865>,<0.5773502691896,0.5773502691896,0.5773502691896>,diam  }}
object{cylinder{<0.7071067811865,0.0,0.7071067811865>,<0.5773502691896,-0.5773502691896,0.5773502691896>,diam  }}
object{cylinder{<0.7071067811865,0.0,0.7071067811865>,<1.0,0.0,0.0>,diam  }}
object{cylinder{<0.0,0.7071067811865,0.7071067811865>,<0.5773502691896,0.5773502691896,0.5773502691896>,diam  }}
object{cylinder{<0.0,0.7071067811865,0.7071067811865>,<-0.5773502691896,0.5773502691896,0.5773502691896>,diam  }}
object{cylinder{<0.0,0.7071067811865,0.7071067811865>,<0.0,1.0,0.0>,diam  }}
object{cylinder{<-0.7071067811865,0.0,0.7071067811865>,<-0.5773502691896,0.5773502691896,0.5773502691896>,diam  }}
object{cylinder{<-0.7071067811865,0.0,0.7071067811865>,<-0.5773502691896,-0.5773502691896,0.5773502691896>,diam  }}
object{cylinder{<-0.7071067811865,0.0,0.7071067811865>,<-1.0,0.0,0.0>,diam  }}
object{cylinder{<0.0,-0.7071067811865,0.7071067811865>,<-0.5773502691896,-0.5773502691896,0.5773502691896>,diam  }}
object{cylinder{<0.0,-0.7071067811865,0.7071067811865>,<0.5773502691896,-0.5773502691896,0.5773502691896>,diam  }}
object{cylinder{<0.0,-0.7071067811865,0.7071067811865>,<0.0,-1.0,0.0>,diam  }}
object{cylinder{<0.5773502691896,0.5773502691896,0.5773502691896>,<1.0,0.0,0.0>,diam  }}
object{cylinder{<0.5773502691896,0.5773502691896,0.5773502691896>,<0.7071067811865,0.7071067811865,0.0>,diam  }}
object{cylinder{<0.5773502691896,0.5773502691896,0.5773502691896>,<0.0,1.0,0.0>,diam  }}
object{cylinder{<-0.5773502691896,0.5773502691896,0.5773502691896>,<0.0,1.0,0.0>,diam  }}
object{cylinder{<-0.5773502691896,0.5773502691896,0.5773502691896>,<-0.7071067811865,0.7071067811865,0.0>,diam  }}
object{cylinder{<-0.5773502691896,0.5773502691896,0.5773502691896>,<-1.0,0.0,0.0>,diam  }}
object{cylinder{<-0.5773502691896,-0.5773502691896,0.5773502691896>,<-1.0,0.0,0.0>,diam  }}
object{cylinder{<-0.5773502691896,-0.5773502691896,0.5773502691896>,<-0.7071067811865,-0.7071067811865,0.0>,diam  }}
object{cylinder{<-0.5773502691896,-0.5773502691896,0.5773502691896>,<0.0,-1.0,0.0>,diam  }}
object{cylinder{<0.5773502691896,-0.5773502691896,0.5773502691896>,<1.0,0.0,0.0>,diam  }}
object{cylinder{<0.5773502691896,-0.5773502691896,0.5773502691896>,<0.0,-1.0,0.0>,diam  }}
object{cylinder{<0.5773502691896,-0.5773502691896,0.5773502691896>,<0.7071067811865,-0.7071067811865,0.0>,diam  }}
object{cylinder{<1.0,0.0,0.0>,<0.7071067811865,0.7071067811865,0.0>,diam  }}
object{cylinder{<1.0,0.0,0.0>,<0.7071067811865,-0.7071067811865,0.0>,diam  }}
object{cylinder{<1.0,0.0,0.0>,<0.5773502691896,0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<1.0,0.0,0.0>,<0.5773502691896,-0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<1.0,0.0,0.0>,<0.7071067811865,0.0,-0.7071067811865>,diam  }}
object{cylinder{<0.7071067811865,0.7071067811865,0.0>,<0.0,1.0,0.0>,diam  }}
object{cylinder{<0.7071067811865,0.7071067811865,0.0>,<0.5773502691896,0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<0.0,1.0,0.0>,<-0.7071067811865,0.7071067811865,0.0>,diam  }}
object{cylinder{<0.0,1.0,0.0>,<0.5773502691896,0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<0.0,1.0,0.0>,<-0.5773502691896,0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<0.0,1.0,0.0>,<0.0,0.7071067811865,-0.7071067811865>,diam  }}
object{cylinder{<-0.7071067811865,0.7071067811865,0.0>,<-1.0,0.0,0.0>,diam  }}
object{cylinder{<-0.7071067811865,0.7071067811865,0.0>,<-0.5773502691896,0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<-1.0,0.0,0.0>,<-0.7071067811865,-0.7071067811865,0.0>,diam  }}
object{cylinder{<-1.0,0.0,0.0>,<-0.5773502691896,0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<-1.0,0.0,0.0>,<-0.5773502691896,-0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<-1.0,0.0,0.0>,<-0.7071067811865,0.0,-0.7071067811865>,diam  }}
object{cylinder{<-0.7071067811865,-0.7071067811865,0.0>,<0.0,-1.0,0.0>,diam  }}
object{cylinder{<-0.7071067811865,-0.7071067811865,0.0>,<-0.5773502691896,-0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<0.0,-1.0,0.0>,<0.7071067811865,-0.7071067811865,0.0>,diam  }}
object{cylinder{<0.0,-1.0,0.0>,<-0.5773502691896,-0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<0.0,-1.0,0.0>,<0.5773502691896,-0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<0.0,-1.0,0.0>,<0.0,-0.7071067811865,-0.7071067811865>,diam  }}
object{cylinder{<0.7071067811865,-0.7071067811865,0.0>,<0.5773502691896,-0.5773502691896,-0.5773502691896>,diam  }}
object{cylinder{<0.5773502691896,0.5773502691896,-0.5773502691896>,<0.7071067811865,0.0,-0.7071067811865>,diam  }}
object{cylinder{<0.5773502691896,0.5773502691896,-0.5773502691896>,<0.0,0.7071067811865,-0.7071067811865>,diam  }}
object{cylinder{<0.5773502691896,0.5773502691896,-0.5773502691896>,<0.0,0.0,-1.0>,diam  }}
object{cylinder{<-0.5773502691896,0.5773502691896,-0.5773502691896>,<0.0,0.7071067811865,-0.7071067811865>,diam  }}
object{cylinder{<-0.5773502691896,0.5773502691896,-0.5773502691896>,<-0.7071067811865,0.0,-0.7071067811865>,diam  }}
object{cylinder{<-0.5773502691896,0.5773502691896,-0.5773502691896>,<0.0,0.0,-1.0>,diam  }}
object{cylinder{<-0.5773502691896,-0.5773502691896,-0.5773502691896>,<-0.7071067811865,0.0,-0.7071067811865>,diam  }}
object{cylinder{<-0.5773502691896,-0.5773502691896,-0.5773502691896>,<0.0,-0.7071067811865,-0.7071067811865>,diam  }}
object{cylinder{<-0.5773502691896,-0.5773502691896,-0.5773502691896>,<0.0,0.0,-1.0>,diam  }}
object{cylinder{<0.5773502691896,-0.5773502691896,-0.5773502691896>,<0.7071067811865,0.0,-0.7071067811865>,diam  }}
object{cylinder{<0.5773502691896,-0.5773502691896,-0.5773502691896>,<0.0,-0.7071067811865,-0.7071067811865>,diam  }}
object{cylinder{<0.5773502691896,-0.5773502691896,-0.5773502691896>,<0.0,0.0,-1.0>,diam  }}
object{cylinder{<0.7071067811865,0.0,-0.7071067811865>,<0.0,0.0,-1.0>,diam  }}
object{cylinder{<0.0,0.7071067811865,-0.7071067811865>,<0.0,0.0,-1.0>,diam  }}
object{cylinder{<-0.7071067811865,0.0,-0.7071067811865>,<0.0,0.0,-1.0>,diam  }}
object{cylinder{<0.0,-0.7071067811865,-0.7071067811865>,<0.0,0.0,-1.0>,diam  }}
}
#declare sommets=union{

object{sphere{<0.0,0.0,1.0>,diam1 }}
object{sphere{<0.7071067811865,0.0,0.7071067811865>,diam1 }}
object{sphere{<0.0,0.7071067811865,0.7071067811865>,diam1 }}
object{sphere{<-0.7071067811865,0.0,0.7071067811865>,diam1 }}
object{sphere{<0.0,-0.7071067811865,0.7071067811865>,diam1 }}
object{sphere{<0.5773502691896,0.5773502691896,0.5773502691896>,diam1 }}
object{sphere{<-0.5773502691896,0.5773502691896,0.5773502691896>,diam1 }}
object{sphere{<-0.5773502691896,-0.5773502691896,0.5773502691896>,diam1 }}
object{sphere{<0.5773502691896,-0.5773502691896,0.5773502691896>,diam1 }}
object{sphere{<1.0,0.0,0.0>,diam1 }}
object{sphere{<0.7071067811865,0.7071067811865,0.0>,diam1 }}
object{sphere{<0.0,1.0,0.0>,diam1 }}
object{sphere{<-0.7071067811865,0.7071067811865,0.0>,diam1 }}
object{sphere{<-1.0,0.0,0.0>,diam1 }}
object{sphere{<-0.7071067811865,-0.7071067811865,0.0>,diam1 }}
object{sphere{<0.0,-1.0,0.0>,diam1 }}
object{sphere{<0.7071067811865,-0.7071067811865,0.0>,diam1 }}
object{sphere{<0.5773502691896,0.5773502691896,-0.5773502691896>,diam1 }}
object{sphere{<-0.5773502691896,0.5773502691896,-0.5773502691896>,diam1 }}
object{sphere{<-0.5773502691896,-0.5773502691896,-0.5773502691896>,diam1 }}
object{sphere{<0.5773502691896,-0.5773502691896,-0.5773502691896>,diam1 }}
object{sphere{<0.7071067811865,0.0,-0.7071067811865>,diam1 }}
object{sphere{<0.0,0.7071067811865,-0.7071067811865>,diam1 }}
object{sphere{<-0.7071067811865,0.0,-0.7071067811865>,diam1 }}
object{sphere{<0.0,-0.7071067811865,-0.7071067811865>,diam1 }}
object{sphere{<0.0,0.0,-1.0>,diam1 }}
}
#declare maxIndices=72;
#declare trans=array[72];
#declare trans[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-157.49999999999534,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-157.49999999999534,0>);
#declare transy=<-0.35355339059325,-0.0,-0.85355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -90.0*z rotate -157.49999999999534*y Axis_Rotate_Trans(Victor,provi)  translate <0.35355339059325,0.0,0.85355339059325>};
#declare trans[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-157.49999999999534>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-157.49999999999534>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-0.0,-0.35355339059325,-0.85355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -157.49999999999534*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.35355339059325,0.85355339059325>};
#declare trans[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-22.50000000000465,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-22.50000000000465,0>);
#declare transy=<0.35355339059325,-0.0,-0.85355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -90.0*z rotate -22.50000000000465*y Axis_Rotate_Trans(Victor,provi)  translate <-0.35355339059325,0.0,0.85355339059325>};
#declare trans[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-22.50000000000465>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-22.50000000000465>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-0.0,0.35355339059325,-0.85355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -22.50000000000465*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-0.35355339059325,0.85355339059325>};
#declare trans[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-128.89999797909238>);
#declare Victor=vrotate(Victor,<0,-143.79397688699402,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-128.89999797909238>);
#declare Hugo=vrotate(Hugo,<0,-143.79397688699402,0>);
#declare transy=<-0.2886751345948,-0.2886751345948,-0.7886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -128.89999797909238*z rotate -143.79397688699402*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,0.2886751345948,0.7886751345948>};
#declare trans[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-128.89999797909238>);
#declare Victor=vrotate(Victor,<0,-36.206023113006005,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-128.89999797909238>);
#declare Hugo=vrotate(Hugo,<0,-36.206023113006005,0>);
#declare transy=<0.2886751345948,-0.2886751345948,-0.7886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -128.89999797909238*z rotate -36.206023113006005*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,0.2886751345948,0.7886751345948>};
#declare trans[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-51.100002020907645>);
#declare Victor=vrotate(Victor,<0,-36.206023113006005,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-51.100002020907645>);
#declare Hugo=vrotate(Hugo,<0,-36.206023113006005,0>);
#declare transy=<0.2886751345948,0.2886751345948,-0.7886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -51.100002020907645*z rotate -36.206023113006005*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,-0.2886751345948,0.7886751345948>};
#declare trans[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-51.100002020907645>);
#declare Victor=vrotate(Victor,<0,-143.79397688699402,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-51.100002020907645>);
#declare Hugo=vrotate(Hugo,<0,-143.79397688699402,0>);
#declare transy=<-0.2886751345948,0.2886751345948,-0.7886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -51.100002020907645*z rotate -143.79397688699402*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,-0.2886751345948,0.7886751345948>};
#declare trans[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-162.3678051586247>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-162.3678051586247>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<-0.64222852518805,-0.2886751345948,-0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -162.3678051586247*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.64222852518805,0.2886751345948,0.64222852518805>};
#declare trans[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-17.632194841375316>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-17.632194841375316>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<-0.64222852518805,0.2886751345948,-0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -17.632194841375316*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.64222852518805,-0.2886751345948,0.64222852518805>};
#declare trans[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-112.50000000000465,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-112.50000000000465,0>);
#declare transy=<-0.85355339059325,-0.0,-0.35355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -90.0*z rotate -112.50000000000465*y Axis_Rotate_Trans(Victor,provi)  translate <0.85355339059325,0.0,0.35355339059325>};
#declare trans[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-77.63219484137872>);
#declare Victor=vrotate(Victor,<0,-167.33353069348723,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-77.63219484137872>);
#declare Hugo=vrotate(Hugo,<0,-167.33353069348723,0>);
#declare transy=<-0.2886751345948,-0.64222852518805,-0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -77.63219484137872*z rotate -167.33353069348723*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,0.64222852518805,0.64222852518805>};
#declare trans[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-77.63219484137872>);
#declare Victor=vrotate(Victor,<0,-12.666469306512777,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-77.63219484137872>);
#declare Hugo=vrotate(Hugo,<0,-12.666469306512777,0>);
#declare transy=<0.2886751345948,-0.64222852518805,-0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -77.63219484137872*z rotate -12.666469306512777*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,0.64222852518805,0.64222852518805>};
#declare trans[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-112.50000000000465>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-112.50000000000465>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-0.0,-0.85355339059325,-0.35355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -112.50000000000465*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.85355339059325,0.35355339059325>};
#declare trans[14]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-162.3678051586247>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-162.3678051586247>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<0.64222852518805,-0.2886751345948,-0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -162.3678051586247*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.64222852518805,0.2886751345948,0.64222852518805>};
#declare trans[15]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-17.632194841375316>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-17.632194841375316>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<0.64222852518805,0.2886751345948,-0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -17.632194841375316*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.64222852518805,-0.2886751345948,0.64222852518805>};
#declare trans[16]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-67.49999999999537,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-67.49999999999537,0>);
#declare transy=<0.85355339059325,-0.0,-0.35355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -90.0*z rotate -67.49999999999537*y Axis_Rotate_Trans(Victor,provi)  translate <-0.85355339059325,0.0,0.35355339059325>};
#declare trans[17]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-102.3678051586213>);
#declare Victor=vrotate(Victor,<0,-12.666469306512777,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-102.3678051586213>);
#declare Hugo=vrotate(Hugo,<0,-12.666469306512777,0>);
#declare transy=<0.2886751345948,0.64222852518805,-0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -102.3678051586213*z rotate -12.666469306512777*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,-0.64222852518805,0.64222852518805>};
#declare trans[18]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-102.3678051586213>);
#declare Victor=vrotate(Victor,<0,-167.33353069348723,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-102.3678051586213>);
#declare Hugo=vrotate(Hugo,<0,-167.33353069348723,0>);
#declare transy=<-0.2886751345948,0.64222852518805,-0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -102.3678051586213*z rotate -167.33353069348723*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,-0.64222852518805,0.64222852518805>};
#declare trans[19]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-67.49999999999537>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-67.49999999999537>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-0.0,0.85355339059325,-0.35355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -67.49999999999537*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-0.85355339059325,0.35355339059325>};
#declare trans[20]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-51.100002020907645>);
#declare Victor=vrotate(Victor,<0,-126.20602311300601,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-51.100002020907645>);
#declare Hugo=vrotate(Hugo,<0,-126.20602311300601,0>);
#declare transy=<-0.7886751345948,-0.2886751345948,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -51.100002020907645*z rotate -126.20602311300601*y Axis_Rotate_Trans(Victor,provi)  translate <0.7886751345948,0.2886751345948,0.2886751345948>};
#declare trans[21]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-102.36780515862128>);
#declare Victor=vrotate(Victor,<0,-102.66646930651277,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-102.36780515862128>);
#declare Hugo=vrotate(Hugo,<0,-102.66646930651277,0>);
#declare transy=<-0.64222852518805,-0.64222852518805,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -102.36780515862128*z rotate -102.66646930651277*y Axis_Rotate_Trans(Victor,provi)  translate <0.64222852518805,0.64222852518805,0.2886751345948>};
#declare trans[22]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-117.36780515862515>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-117.36780515862515>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<-0.2886751345948,-0.7886751345948,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -117.36780515862515*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,0.7886751345948,0.2886751345948>};
#declare trans[23]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-117.36780515862515>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-117.36780515862515>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<0.2886751345948,-0.7886751345948,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -117.36780515862515*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,0.7886751345948,0.2886751345948>};
#declare trans[24]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-102.36780515862128>);
#declare Victor=vrotate(Victor,<0,-77.33353069348725,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-102.36780515862128>);
#declare Hugo=vrotate(Hugo,<0,-77.33353069348725,0>);
#declare transy=<0.64222852518805,-0.64222852518805,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -102.36780515862128*z rotate -77.33353069348725*y Axis_Rotate_Trans(Victor,provi)  translate <-0.64222852518805,0.64222852518805,0.2886751345948>};
#declare trans[25]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-51.100002020907645>);
#declare Victor=vrotate(Victor,<0,-53.793976886994,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-51.100002020907645>);
#declare Hugo=vrotate(Hugo,<0,-53.793976886994,0>);
#declare transy=<0.7886751345948,-0.2886751345948,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -51.100002020907645*z rotate -53.793976886994*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7886751345948,0.2886751345948,0.2886751345948>};
#declare trans[26]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-128.89999797909238>);
#declare Victor=vrotate(Victor,<0,-53.793976886994,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-128.89999797909238>);
#declare Hugo=vrotate(Hugo,<0,-53.793976886994,0>);
#declare transy=<0.7886751345948,0.2886751345948,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -128.89999797909238*z rotate -53.793976886994*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7886751345948,-0.2886751345948,0.2886751345948>};
#declare trans[27]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-77.63219484137873>);
#declare Victor=vrotate(Victor,<0,-77.33353069348725,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-77.63219484137873>);
#declare Hugo=vrotate(Hugo,<0,-77.33353069348725,0>);
#declare transy=<0.64222852518805,0.64222852518805,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -77.63219484137873*z rotate -77.33353069348725*y Axis_Rotate_Trans(Victor,provi)  translate <-0.64222852518805,-0.64222852518805,0.2886751345948>};
#declare trans[28]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-62.63219484137486>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-62.63219484137486>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<0.2886751345948,0.7886751345948,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -62.63219484137486*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,-0.7886751345948,0.2886751345948>};
#declare trans[29]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-128.89999797909238>);
#declare Victor=vrotate(Victor,<0,-126.20602311300601,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-128.89999797909238>);
#declare Hugo=vrotate(Hugo,<0,-126.20602311300601,0>);
#declare transy=<-0.7886751345948,0.2886751345948,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -128.89999797909238*z rotate -126.20602311300601*y Axis_Rotate_Trans(Victor,provi)  translate <0.7886751345948,-0.2886751345948,0.2886751345948>};
#declare trans[30]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-62.63219484137486>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-62.63219484137486>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<-0.2886751345948,0.7886751345948,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -62.63219484137486*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,-0.7886751345948,0.2886751345948>};
#declare trans[31]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-77.63219484137873>);
#declare Victor=vrotate(Victor,<0,-102.66646930651277,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-77.63219484137873>);
#declare Hugo=vrotate(Hugo,<0,-102.66646930651277,0>);
#declare transy=<-0.64222852518805,0.64222852518805,-0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -77.63219484137873*z rotate -102.66646930651277*y Axis_Rotate_Trans(Victor,provi)  translate <0.64222852518805,-0.64222852518805,0.2886751345948>};
#declare trans[32]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-157.49999999999534>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-157.49999999999534>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.85355339059325,-0.35355339059325,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -157.49999999999534*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.85355339059325,0.35355339059325,0.0>};
#declare trans[33]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-22.50000000000465>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-22.50000000000465>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.85355339059325,0.35355339059325,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -22.50000000000465*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.85355339059325,-0.35355339059325,0.0>};
#declare trans[34]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-128.89999797909238>);
#declare Victor=vrotate(Victor,<0,-53.793976886994,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-128.89999797909238>);
#declare Hugo=vrotate(Hugo,<0,-53.793976886994,0>);
#declare transy=<-0.7886751345948,-0.2886751345948,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -128.89999797909238*z rotate -53.793976886994*y Axis_Rotate_Trans(Victor,provi)  translate <0.7886751345948,0.2886751345948,-0.2886751345948>};
#declare trans[35]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-51.100002020907645>);
#declare Victor=vrotate(Victor,<0,-53.793976886994,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-51.100002020907645>);
#declare Hugo=vrotate(Hugo,<0,-53.793976886994,0>);
#declare transy=<-0.7886751345948,0.2886751345948,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -51.100002020907645*z rotate -53.793976886994*y Axis_Rotate_Trans(Victor,provi)  translate <0.7886751345948,-0.2886751345948,-0.2886751345948>};
#declare trans[36]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-67.49999999999535,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-67.49999999999535,0>);
#declare transy=<-0.85355339059325,-0.0,0.35355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -90.0*z rotate -67.49999999999535*y Axis_Rotate_Trans(Victor,provi)  translate <0.85355339059325,0.0,-0.35355339059325>};
#declare trans[37]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-112.50000000000465>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-112.50000000000465>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.35355339059325,-0.85355339059325,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -112.50000000000465*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.35355339059325,0.85355339059325,0.0>};
#declare trans[38]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-77.63219484137872>);
#declare Victor=vrotate(Victor,<0,-77.33353069348722,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-77.63219484137872>);
#declare Hugo=vrotate(Hugo,<0,-77.33353069348722,0>);
#declare transy=<-0.64222852518805,-0.64222852518805,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -77.63219484137872*z rotate -77.33353069348722*y Axis_Rotate_Trans(Victor,provi)  translate <0.64222852518805,0.64222852518805,-0.2886751345948>};
#declare trans[39]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-67.49999999999535>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-67.49999999999535>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<0.35355339059325,-0.85355339059325,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -67.49999999999535*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.35355339059325,0.85355339059325,0.0>};
#declare trans[40]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-62.63219484137486>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-62.63219484137486>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<-0.2886751345948,-0.7886751345948,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -62.63219484137486*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,0.7886751345948,-0.2886751345948>};
#declare trans[41]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-62.63219484137486>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-62.63219484137486>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<0.2886751345948,-0.7886751345948,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -62.63219484137486*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,0.7886751345948,-0.2886751345948>};
#declare trans[42]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-67.49999999999535>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-67.49999999999535>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-0.0,-0.85355339059325,0.35355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -67.49999999999535*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.85355339059325,-0.35355339059325>};
#declare trans[43]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-22.500000000004636>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-22.500000000004636>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<0.85355339059325,-0.35355339059325,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -22.500000000004636*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.85355339059325,0.35355339059325,0.0>};
#declare trans[44]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-77.63219484137872>);
#declare Victor=vrotate(Victor,<0,-102.66646930651278,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-77.63219484137872>);
#declare Hugo=vrotate(Hugo,<0,-102.66646930651278,0>);
#declare transy=<0.64222852518805,-0.64222852518805,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -77.63219484137872*z rotate -102.66646930651278*y Axis_Rotate_Trans(Victor,provi)  translate <-0.64222852518805,0.64222852518805,-0.2886751345948>};
#declare trans[45]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-22.50000000000465>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-22.50000000000465>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<0.85355339059325,0.35355339059325,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -22.50000000000465*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.85355339059325,-0.35355339059325,0.0>};
#declare trans[46]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-128.89999797909238>);
#declare Victor=vrotate(Victor,<0,-126.20602311300601,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-128.89999797909238>);
#declare Hugo=vrotate(Hugo,<0,-126.20602311300601,0>);
#declare transy=<0.7886751345948,-0.2886751345948,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -128.89999797909238*z rotate -126.20602311300601*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7886751345948,0.2886751345948,-0.2886751345948>};
#declare trans[47]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-51.100002020907645>);
#declare Victor=vrotate(Victor,<0,-126.20602311300601,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-51.100002020907645>);
#declare Hugo=vrotate(Hugo,<0,-126.20602311300601,0>);
#declare transy=<0.7886751345948,0.2886751345948,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -51.100002020907645*z rotate -126.20602311300601*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7886751345948,-0.2886751345948,-0.2886751345948>};
#declare trans[48]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-112.50000000000465,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-112.50000000000465,0>);
#declare transy=<0.85355339059325,-0.0,0.35355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -90.0*z rotate -112.50000000000465*y Axis_Rotate_Trans(Victor,provi)  translate <-0.85355339059325,0.0,-0.35355339059325>};
#declare trans[49]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-67.49999999999537>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-67.49999999999537>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<0.35355339059325,0.85355339059325,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -67.49999999999537*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.35355339059325,-0.85355339059325,0.0>};
#declare trans[50]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-102.3678051586213>);
#declare Victor=vrotate(Victor,<0,-102.66646930651278,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-102.3678051586213>);
#declare Hugo=vrotate(Hugo,<0,-102.66646930651278,0>);
#declare transy=<0.64222852518805,0.64222852518805,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -102.3678051586213*z rotate -102.66646930651278*y Axis_Rotate_Trans(Victor,provi)  translate <-0.64222852518805,-0.64222852518805,-0.2886751345948>};
#declare trans[51]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-112.50000000000465>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-112.50000000000465>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<-0.35355339059325,0.85355339059325,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -112.50000000000465*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.35355339059325,-0.85355339059325,0.0>};
#declare trans[52]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-117.36780515862515>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-117.36780515862515>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<0.2886751345948,0.7886751345948,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -117.36780515862515*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,-0.7886751345948,-0.2886751345948>};
#declare trans[53]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-117.36780515862515>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-117.36780515862515>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<-0.2886751345948,0.7886751345948,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -117.36780515862515*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,-0.7886751345948,-0.2886751345948>};
#declare trans[54]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-112.50000000000465>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-112.50000000000465>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-0.0,0.85355339059325,0.35355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -112.50000000000465*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-0.85355339059325,-0.35355339059325>};
#declare trans[55]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-102.3678051586213>);
#declare Victor=vrotate(Victor,<0,-77.33353069348722,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-102.3678051586213>);
#declare Hugo=vrotate(Hugo,<0,-77.33353069348722,0>);
#declare transy=<-0.64222852518805,0.64222852518805,0.2886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -102.3678051586213*z rotate -77.33353069348722*y Axis_Rotate_Trans(Victor,provi)  translate <0.64222852518805,-0.64222852518805,-0.2886751345948>};
#declare trans[56]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-17.63219484137529>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-17.63219484137529>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<-0.64222852518805,-0.2886751345948,0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -17.63219484137529*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.64222852518805,0.2886751345948,-0.64222852518805>};
#declare trans[57]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-102.36780515862128>);
#declare Victor=vrotate(Victor,<0,-12.666469306512756,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-102.36780515862128>);
#declare Hugo=vrotate(Hugo,<0,-12.666469306512756,0>);
#declare transy=<-0.2886751345948,-0.64222852518805,0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -102.36780515862128*z rotate -12.666469306512756*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,0.64222852518805,-0.64222852518805>};
#declare trans[58]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-51.100002020907645>);
#declare Victor=vrotate(Victor,<0,-36.206023113006005,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-51.100002020907645>);
#declare Hugo=vrotate(Hugo,<0,-36.206023113006005,0>);
#declare transy=<-0.2886751345948,-0.2886751345948,0.7886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -51.100002020907645*z rotate -36.206023113006005*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,0.2886751345948,-0.7886751345948>};
#declare trans[59]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-102.36780515862128>);
#declare Victor=vrotate(Victor,<0,-167.33353069348723,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-102.36780515862128>);
#declare Hugo=vrotate(Hugo,<0,-167.33353069348723,0>);
#declare transy=<0.2886751345948,-0.64222852518805,0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -102.36780515862128*z rotate -167.33353069348723*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,0.64222852518805,-0.64222852518805>};
#declare trans[60]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-17.63219484137529>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-17.63219484137529>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<0.64222852518805,-0.2886751345948,0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -17.63219484137529*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.64222852518805,0.2886751345948,-0.64222852518805>};
#declare trans[61]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-51.100002020907645>);
#declare Victor=vrotate(Victor,<0,-143.79397688699402,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-51.100002020907645>);
#declare Hugo=vrotate(Hugo,<0,-143.79397688699402,0>);
#declare transy=<0.2886751345948,-0.2886751345948,0.7886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -51.100002020907645*z rotate -143.79397688699402*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,0.2886751345948,-0.7886751345948>};
#declare trans[62]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-162.36780515862472>);
#declare Victor=vrotate(Victor,<0,-45.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-162.36780515862472>);
#declare Hugo=vrotate(Hugo,<0,-45.0,0>);
#declare transy=<0.64222852518805,0.2886751345948,0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -162.36780515862472*z rotate -45.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.64222852518805,-0.2886751345948,-0.64222852518805>};
#declare trans[63]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-77.63219484137873>);
#declare Victor=vrotate(Victor,<0,-167.33353069348723,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-77.63219484137873>);
#declare Hugo=vrotate(Hugo,<0,-167.33353069348723,0>);
#declare transy=<0.2886751345948,0.64222852518805,0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -77.63219484137873*z rotate -167.33353069348723*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,-0.64222852518805,-0.64222852518805>};
#declare trans[64]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-128.89999797909238>);
#declare Victor=vrotate(Victor,<0,-143.79397688699402,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-128.89999797909238>);
#declare Hugo=vrotate(Hugo,<0,-143.79397688699402,0>);
#declare transy=<0.2886751345948,0.2886751345948,0.7886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -128.89999797909238*z rotate -143.79397688699402*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2886751345948,-0.2886751345948,-0.7886751345948>};
#declare trans[65]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-162.36780515862472>);
#declare Victor=vrotate(Victor,<0,-135.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-162.36780515862472>);
#declare Hugo=vrotate(Hugo,<0,-135.0,0>);
#declare transy=<-0.64222852518805,0.2886751345948,0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -162.36780515862472*z rotate -135.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.64222852518805,-0.2886751345948,-0.64222852518805>};
#declare trans[66]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-77.63219484137873>);
#declare Victor=vrotate(Victor,<0,-12.666469306512756,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-77.63219484137873>);
#declare Hugo=vrotate(Hugo,<0,-12.666469306512756,0>);
#declare transy=<-0.2886751345948,0.64222852518805,0.64222852518805>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.6589198314719803 rotate -77.63219484137873*z rotate -12.666469306512756*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,-0.64222852518805,-0.64222852518805>};
#declare trans[67]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-128.89999797909238>);
#declare Victor=vrotate(Victor,<0,-36.206023113006005,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-128.89999797909238>);
#declare Hugo=vrotate(Hugo,<0,-36.206023113006005,0>);
#declare transy=<-0.2886751345948,0.2886751345948,0.7886751345948>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000018346333974 rotate -128.89999797909238*z rotate -36.206023113006005*y Axis_Rotate_Trans(Victor,provi)  translate <0.2886751345948,-0.2886751345948,-0.7886751345948>};
#declare trans[68]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-22.500000000004636,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-22.500000000004636,0>);
#declare transy=<-0.35355339059325,-0.0,0.85355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -90.0*z rotate -22.500000000004636*y Axis_Rotate_Trans(Victor,provi)  translate <0.35355339059325,0.0,-0.85355339059325>};
#declare trans[69]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-22.500000000004636>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-22.500000000004636>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-0.0,-0.35355339059325,0.85355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -22.500000000004636*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,0.35355339059325,-0.85355339059325>};
#declare trans[70]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-157.49999999999537,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-157.49999999999537,0>);
#declare transy=<0.35355339059325,-0.0,0.85355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -90.0*z rotate -157.49999999999537*y Axis_Rotate_Trans(Victor,provi)  translate <-0.35355339059325,0.0,-0.85355339059325>};
#declare trans[71]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-157.49999999999537>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-157.49999999999537>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-0.0,0.35355339059325,0.85355339059325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8324634160649923 rotate -157.49999999999537*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,-0.35355339059325,-0.85355339059325>};
