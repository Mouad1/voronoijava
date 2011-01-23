#declare truncated_cube=mesh2{

vertex_vectors{

30,
<-0.2928933810154,0.7071069525112,-0.7071068866789>,
<-0.7071068119516,0.7071068351458,-0.292893067537>,
<0.2928931195137,0.7071067380728,-0.7071068661872>,
<-0.7071069181379,0.2928932654414,-0.7071066318213>,
<-0.7071066824639,0.7071068288421,0.2928933439243>,
<0.707106622498,0.292893188244,-0.7071069032521>,
<0.7071068105983,0.7071067380728,-0.2928933927734>,
<-0.707106955917,-0.2928932002946,-0.7071066650452>,
<-0.7071069999108,0.2928933904424,0.7071071919322>,
<-0.2928929857576,0.7071068152701,0.7071068309101>,
<0.7071069999108,-0.2928933904424,-0.7071071919322>,
<0.7071068637937,0.7071067380728,0.2928930860654>,
<-0.2928934473111,-0.7071067636954,-0.7071066885381>,
<-0.7071068637937,-0.7071067380728,-0.2928930860654>,
<-0.707106622498,-0.292893188244,0.7071069032521>,
<0.2928934473111,0.7071067636954,0.7071066885381>,
<0.2928929857576,-0.7071068152701,-0.7071068309101>,
<0.7071066824639,-0.7071068288421,-0.2928933439243>,
<0.707106955917,0.2928932002946,0.7071066650452>,
<-0.7071068105983,-0.7071067380728,0.2928933927734>,
<-0.2928931195137,-0.7071067380728,0.7071068661872>,
<0.7071068119516,-0.7071068351458,0.292893067537>,
<0.7071069181379,-0.2928932654414,0.7071066318213>,
<0.2928933810154,-0.7071069525112,0.7071068866789>,
<4.750353756882708E-8,0.7071068012103751,-3.29673250226703E-8>,
<-1.2183766253531791E-7,-3.1791375226797314E-9,-0.7071068330456374>,
<-0.7071068331589001,5.6898437475472186E-8,1.7267663752346118E-7>,
<0.7071068331589,-5.6898437489349973E-8,-1.726766375026445E-7>,
<1.2183766248674566E-7,3.179137487985262E-9,0.7071068330456375>,
<-4.7503537554949293E-8,-0.7071068012103751,3.2967325008792514E-8>
 }
normal_vectors{

30,
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
56,
<2,6,24>,// ,1,
<6,11,24>,// ,1,
<11,15,24>,// ,1,
<15,9,24>,// ,1,
<9,4,24>,// ,1,
<4,1,24>,// ,1,
<1,0,24>,// ,1,
<0,2,24>,// ,1,
<3,7,25>,// ,1,
<7,12,25>,// ,1,
<12,16,25>,// ,1,
<16,10,25>,// ,1,
<10,5,25>,// ,1,
<5,2,25>,// ,1,
<2,0,25>,// ,1,
<0,3,25>,// ,1,
<4,8,26>,// ,1,
<8,14,26>,// ,1,
<14,19,26>,// ,1,
<19,13,26>,// ,1,
<13,7,26>,// ,1,
<7,3,26>,// ,1,
<3,1,26>,// ,1,
<1,4,26>,// ,1,
<10,17,27>,// ,1,
<17,21,27>,// ,1,
<21,22,27>,// ,1,
<22,18,27>,// ,1,
<18,11,27>,// ,1,
<11,6,27>,// ,1,
<6,5,27>,// ,1,
<5,10,27>,// ,1,
<9,15,28>,// ,1,
<15,18,28>,// ,1,
<18,22,28>,// ,1,
<22,23,28>,// ,1,
<23,20,28>,// ,1,
<20,14,28>,// ,1,
<14,8,28>,// ,1,
<8,9,28>,// ,1,
<13,19,29>,// ,1,
<19,20,29>,// ,1,
<20,23,29>,// ,1,
<23,21,29>,// ,1,
<21,17,29>,// ,1,
<17,16,29>,// ,1,
<16,12,29>,// ,1,
<12,13,29>,// ,1,
<1,3,0>,// ,0,
<5,6,2>,// ,0,
<9,8,4>,// ,0,
<13,12,7>,// ,0,
<16,17,10>,// ,0,
<18,15,11>,// ,0,
<20,19,14>,// ,0,
<23,22,21> //0
 } 
 }
#declare aretes=union{

object{cylinder{<-0.2928933810154,0.7071069525112,-0.7071068866789>,<-0.7071068119516,0.7071068351458,-0.292893067537>,diam  }}
object{cylinder{<-0.2928933810154,0.7071069525112,-0.7071068866789>,<0.2928931195137,0.7071067380728,-0.7071068661872>,diam  }}
object{cylinder{<-0.2928933810154,0.7071069525112,-0.7071068866789>,<-0.7071069181379,0.2928932654414,-0.7071066318213>,diam  }}
object{cylinder{<-0.7071068119516,0.7071068351458,-0.292893067537>,<-0.7071069181379,0.2928932654414,-0.7071066318213>,diam  }}
object{cylinder{<-0.7071068119516,0.7071068351458,-0.292893067537>,<-0.7071066824639,0.7071068288421,0.2928933439243>,diam  }}
object{cylinder{<0.2928931195137,0.7071067380728,-0.7071068661872>,<0.707106622498,0.292893188244,-0.7071069032521>,diam  }}
object{cylinder{<0.2928931195137,0.7071067380728,-0.7071068661872>,<0.7071068105983,0.7071067380728,-0.2928933927734>,diam  }}
object{cylinder{<-0.7071069181379,0.2928932654414,-0.7071066318213>,<-0.707106955917,-0.2928932002946,-0.7071066650452>,diam  }}
object{cylinder{<-0.7071066824639,0.7071068288421,0.2928933439243>,<-0.7071069999108,0.2928933904424,0.7071071919322>,diam  }}
object{cylinder{<-0.7071066824639,0.7071068288421,0.2928933439243>,<-0.2928929857576,0.7071068152701,0.7071068309101>,diam  }}
object{cylinder{<0.707106622498,0.292893188244,-0.7071069032521>,<0.7071068105983,0.7071067380728,-0.2928933927734>,diam  }}
object{cylinder{<0.707106622498,0.292893188244,-0.7071069032521>,<0.7071069999108,-0.2928933904424,-0.7071071919322>,diam  }}
object{cylinder{<0.7071068105983,0.7071067380728,-0.2928933927734>,<0.7071068637937,0.7071067380728,0.2928930860654>,diam  }}
object{cylinder{<-0.707106955917,-0.2928932002946,-0.7071066650452>,<-0.2928934473111,-0.7071067636954,-0.7071066885381>,diam  }}
object{cylinder{<-0.707106955917,-0.2928932002946,-0.7071066650452>,<-0.7071068637937,-0.7071067380728,-0.2928930860654>,diam  }}
object{cylinder{<-0.7071069999108,0.2928933904424,0.7071071919322>,<-0.2928929857576,0.7071068152701,0.7071068309101>,diam  }}
object{cylinder{<-0.7071069999108,0.2928933904424,0.7071071919322>,<-0.707106622498,-0.292893188244,0.7071069032521>,diam  }}
object{cylinder{<-0.2928929857576,0.7071068152701,0.7071068309101>,<0.2928934473111,0.7071067636954,0.7071066885381>,diam  }}
object{cylinder{<0.7071069999108,-0.2928933904424,-0.7071071919322>,<0.2928929857576,-0.7071068152701,-0.7071068309101>,diam  }}
object{cylinder{<0.7071069999108,-0.2928933904424,-0.7071071919322>,<0.7071066824639,-0.7071068288421,-0.2928933439243>,diam  }}
object{cylinder{<0.7071068637937,0.7071067380728,0.2928930860654>,<0.2928934473111,0.7071067636954,0.7071066885381>,diam  }}
object{cylinder{<0.7071068637937,0.7071067380728,0.2928930860654>,<0.707106955917,0.2928932002946,0.7071066650452>,diam  }}
object{cylinder{<-0.2928934473111,-0.7071067636954,-0.7071066885381>,<-0.7071068637937,-0.7071067380728,-0.2928930860654>,diam  }}
object{cylinder{<-0.2928934473111,-0.7071067636954,-0.7071066885381>,<0.2928929857576,-0.7071068152701,-0.7071068309101>,diam  }}
object{cylinder{<-0.7071068637937,-0.7071067380728,-0.2928930860654>,<-0.7071068105983,-0.7071067380728,0.2928933927734>,diam  }}
object{cylinder{<-0.707106622498,-0.292893188244,0.7071069032521>,<-0.7071068105983,-0.7071067380728,0.2928933927734>,diam  }}
object{cylinder{<-0.707106622498,-0.292893188244,0.7071069032521>,<-0.2928931195137,-0.7071067380728,0.7071068661872>,diam  }}
object{cylinder{<0.2928934473111,0.7071067636954,0.7071066885381>,<0.707106955917,0.2928932002946,0.7071066650452>,diam  }}
object{cylinder{<0.2928929857576,-0.7071068152701,-0.7071068309101>,<0.7071066824639,-0.7071068288421,-0.2928933439243>,diam  }}
object{cylinder{<0.7071066824639,-0.7071068288421,-0.2928933439243>,<0.7071068119516,-0.7071068351458,0.292893067537>,diam  }}
object{cylinder{<0.707106955917,0.2928932002946,0.7071066650452>,<0.7071069181379,-0.2928932654414,0.7071066318213>,diam  }}
object{cylinder{<-0.7071068105983,-0.7071067380728,0.2928933927734>,<-0.2928931195137,-0.7071067380728,0.7071068661872>,diam  }}
object{cylinder{<-0.2928931195137,-0.7071067380728,0.7071068661872>,<0.2928933810154,-0.7071069525112,0.7071068866789>,diam  }}
object{cylinder{<0.7071068119516,-0.7071068351458,0.292893067537>,<0.7071069181379,-0.2928932654414,0.7071066318213>,diam  }}
object{cylinder{<0.7071068119516,-0.7071068351458,0.292893067537>,<0.2928933810154,-0.7071069525112,0.7071068866789>,diam  }}
object{cylinder{<0.7071069181379,-0.2928932654414,0.7071066318213>,<0.2928933810154,-0.7071069525112,0.7071068866789>,diam  }}
}
#declare sommets=union{

object{sphere{<-0.2928933810154,0.7071069525112,-0.7071068866789>,diam1 }}
object{sphere{<-0.7071068119516,0.7071068351458,-0.292893067537>,diam1 }}
object{sphere{<0.2928931195137,0.7071067380728,-0.7071068661872>,diam1 }}
object{sphere{<-0.7071069181379,0.2928932654414,-0.7071066318213>,diam1 }}
object{sphere{<-0.7071066824639,0.7071068288421,0.2928933439243>,diam1 }}
object{sphere{<0.707106622498,0.292893188244,-0.7071069032521>,diam1 }}
object{sphere{<0.7071068105983,0.7071067380728,-0.2928933927734>,diam1 }}
object{sphere{<-0.707106955917,-0.2928932002946,-0.7071066650452>,diam1 }}
object{sphere{<-0.7071069999108,0.2928933904424,0.7071071919322>,diam1 }}
object{sphere{<-0.2928929857576,0.7071068152701,0.7071068309101>,diam1 }}
object{sphere{<0.7071069999108,-0.2928933904424,-0.7071071919322>,diam1 }}
object{sphere{<0.7071068637937,0.7071067380728,0.2928930860654>,diam1 }}
object{sphere{<-0.2928934473111,-0.7071067636954,-0.7071066885381>,diam1 }}
object{sphere{<-0.7071068637937,-0.7071067380728,-0.2928930860654>,diam1 }}
object{sphere{<-0.707106622498,-0.292893188244,0.7071069032521>,diam1 }}
object{sphere{<0.2928934473111,0.7071067636954,0.7071066885381>,diam1 }}
object{sphere{<0.2928929857576,-0.7071068152701,-0.7071068309101>,diam1 }}
object{sphere{<0.7071066824639,-0.7071068288421,-0.2928933439243>,diam1 }}
object{sphere{<0.707106955917,0.2928932002946,0.7071066650452>,diam1 }}
object{sphere{<-0.7071068105983,-0.7071067380728,0.2928933927734>,diam1 }}
object{sphere{<-0.2928931195137,-0.7071067380728,0.7071068661872>,diam1 }}
object{sphere{<0.7071068119516,-0.7071068351458,0.292893067537>,diam1 }}
object{sphere{<0.7071069181379,-0.2928932654414,0.7071066318213>,diam1 }}
object{sphere{<0.2928933810154,-0.7071069525112,0.7071068866789>,diam1 }}
}
#declare maxIndices=36;
#declare trans=array[36];
#declare trans[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-89.99998852049035>);
#declare Victor=vrotate(Victor,<0,45.000026849126705,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-89.99998852049035>);
#declare Hugo=vrotate(Hugo,<0,45.000026849126705,0>);
#declare transy=<0.5000000964835,-0.7071068938285,0.49999997710794997>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999940699739229 rotate -89.99998852049035*z rotate 45.000026849126705*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5000000964835,0.7071068938285,-0.49999997710794997>};
#declare trans[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-89.9999790257794>);
#declare Victor=vrotate(Victor,<0,179.99999799570676,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-89.9999790257794>);
#declare Hugo=vrotate(Hugo,<0,179.99999799570676,0>);
#declare transy=<1.3075085000813225E-7,-0.707106845292,0.7071068764330499>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999940260658934 rotate -89.9999790257794*z rotate 179.99999799570676*y Axis_Rotate_Trans(Victor,provi)  translate <-1.3075085000813225E-7,0.707106845292,-0.7071068764330499>};
#declare trans[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-44.999989629332916>);
#declare Victor=vrotate(Victor,<0,3.525298802641799E-5,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-44.999989629332916>);
#declare Hugo=vrotate(Hugo,<0,3.525298802641799E-5,0>);
#declare transy=<0.5000001495766501,-0.5000001089763,0.7071067592500999>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999940387271696 rotate -44.999989629332916*z rotate 3.525298802641799E-5*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5000001495766501,0.5000001089763,-0.7071067592500999>};
#declare trans[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-44.99999962513532>);
#declare Victor=vrotate(Victor,<0,-89.99998531185996,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-44.99999962513532>);
#declare Hugo=vrotate(Hugo,<0,-89.99998531185996,0>);
#declare transy=<0.7071068650447501,-0.5000000502936,0.49999984967915>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999939298423597 rotate -44.99999962513532*z rotate -89.99998531185996*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7071068650447501,0.5000000502936,-0.49999984967915>};
#declare trans[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-89.999999383435>);
#declare Victor=vrotate(Victor,<0,90.0000126651943,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-89.999999383435>);
#declare Hugo=vrotate(Hugo,<0,90.0000126651943,0>);
#declare transy=<0.7071067472077499,-0.70710683199395,-1.3819364999556605E-7>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999938740185295 rotate -89.999999383435*z rotate 90.0000126651943*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7071067472077499,0.70710683199395,1.3819364999556605E-7>};
#declare trans[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-44.99999676013472>);
#declare Victor=vrotate(Victor,<0,-179.99999487302486,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-44.99999676013472>);
#declare Hugo=vrotate(Hugo,<0,-179.99999487302486,0>);
#declare transy=<-0.49999987100585,-0.4999999631584,0.70710688471965>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999938318553259 rotate -44.99999676013472*z rotate -179.99999487302486*y Axis_Rotate_Trans(Victor,provi)  translate <0.49999987100585,0.4999999631584,-0.70710688471965>};
#declare trans[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,135.00001505457416,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,135.00001505457416,0>);
#declare transy=<-0.49999996505600003,-0.7071067380728,0.5000001294803>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999939666706197 rotate -90.0*z rotate 135.00001505457416*y Axis_Rotate_Trans(Victor,provi)  translate <0.49999996505600003,0.7071067380728,-0.5000001294803>};
#declare trans[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-4.92081362142998E-6>);
#declare Victor=vrotate(Victor,<0,-41.32921786799537,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-4.92081362142998E-6>);
#declare Hugo=vrotate(Hugo,<0,-41.32921786799537,0>);
#declare transy=<0.7071069370274501,-3.257340000506481E-8,0.70710664843325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999939666706533 rotate -4.92081362142998E-6*z rotate -41.32921786799537*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7071069370274501,3.257340000506481E-8,-0.70710664843325>};
#declare trans[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.000028329376>);
#declare Victor=vrotate(Victor,<0,89.99995608942655,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.000028329376>);
#declare Hugo=vrotate(Hugo,<0,89.99995608942655,0>);
#declare transy=<0.70710684118735,-0.50000010964225,-0.50000026792825>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999941138273812 rotate -45.000028329376*z rotate 89.99995608942655*y Axis_Rotate_Trans(Victor,provi)  translate <-0.70710684118735,0.50000010964225,0.50000026792825>};
#declare trans[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-89.9999986725226>);
#declare Victor=vrotate(Victor,<0,135.0000145047142,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-89.9999986725226>);
#declare Hugo=vrotate(Hugo,<0,135.0000145047142,0>);
#declare transy=<0.49999983411075,-0.7071068220561,-0.5000000874171999>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.999993989839322 rotate -89.9999986725226*z rotate 135.0000145047142*y Axis_Rotate_Trans(Victor,provi)  translate <-0.49999983411075,0.7071068220561,0.5000000874171999>};
#declare trans[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.00000272153378>);
#declare Victor=vrotate(Victor,<0,90.00002601883581,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.00000272153378>);
#declare Hugo=vrotate(Hugo,<0,90.00002601883581,0>);
#declare transy=<-0.70710671654815,-0.4999999631584,0.5000001480127501>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999938409018608 rotate -135.00000272153378*z rotate 90.00002601883581*y Axis_Rotate_Trans(Victor,provi)  translate <0.70710671654815,0.4999999631584,-0.5000001480127501>};
#declare trans[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-4.647535335262499E-5>);
#declare Victor=vrotate(Victor,<0,-142.58790853742624,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-4.647535335262499E-5>);
#declare Hugo=vrotate(Hugo,<0,-142.58790853742624,0>);
#declare transy=<-0.7071068112044,1.010991999839117E-7,0.7071070475921499>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999941594882001 rotate -4.647535335262499E-5*z rotate -142.58790853742624*y Axis_Rotate_Trans(Victor,provi)  translate <0.7071068112044,-1.010991999839117E-7,-0.7071070475921499>};
#declare trans[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,90.00000520304246,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,90.00000520304246,0>);
#declare transy=<-0.7071068371960001,-0.7071067380728,1.5335399999871768E-7>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999939890383966 rotate -90.0*z rotate 90.00000520304246*y Axis_Rotate_Trans(Victor,provi)  translate <0.7071068371960001,0.7071067380728,-1.5335399999871768E-7>};
#declare trans[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-44.99999621026813>);
#declare Victor=vrotate(Victor,<0,-179.99999675036184,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-44.99999621026813>);
#declare Hugo=vrotate(Hugo,<0,-179.99999675036184,0>);
#declare transy=<0.50000020161405,0.499999981995,0.7071066767916501>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.999993855023909 rotate -44.99999621026813*z rotate -179.99999675036184*y Axis_Rotate_Trans(Victor,provi)  translate <-0.50000020161405,-0.499999981995,-0.7071066767916501>};
#declare trans[14]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.000002849590906>);
#declare Victor=vrotate(Victor,<0,90.00001274288572,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.000002849590906>);
#declare Hugo=vrotate(Hugo,<0,90.00001274288572,0>);
#declare transy=<0.70710690985535,0.4999999691837,0.4999998755553>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999939090431886 rotate -45.000002849590906*z rotate 90.00001274288572*y Axis_Rotate_Trans(Victor,provi)  translate <-0.70710690985535,-0.4999999691837,-0.4999998755553>};
#declare trans[15]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-134.99995924100128>);
#declare Victor=vrotate(Victor,<0,-179.99995006194402,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-134.99995924100128>);
#declare Hugo=vrotate(Hugo,<0,-179.99995006194402,0>);
#declare transy=<0.49999999283419994,-0.50000010285625,-0.70710701142115>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999942979987002 rotate -134.99995924100128*z rotate -179.99995006194402*y Axis_Rotate_Trans(Victor,provi)  translate <-0.49999999283419994,0.50000010285625,0.70710701142115>};
#declare trans[16]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-4.6475353365819724E-5>);
#declare Victor=vrotate(Victor,<0,-142.58790851615953,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-4.6475353365819724E-5>);
#declare Hugo=vrotate(Hugo,<0,-142.58790851615953,0>);
#declare transy=<0.7071068112044,-1.010991999839117E-7,-0.7071070475921499>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999941594882001 rotate -4.6475353365819724E-5*z rotate -142.58790851615953*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7071068112044,1.010991999839117E-7,0.7071070475921499>};
#declare trans[17]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-89.99999495547786>);
#declare Victor=vrotate(Victor,<0,-179.9999860745926,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-89.99999495547786>);
#declare Hugo=vrotate(Hugo,<0,-179.9999860745926,0>);
#declare transy=<-2.3077675001537123E-7,-0.7071067894827501,-0.7071067597241>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999939109044529 rotate -89.99999495547786*z rotate -179.9999860745926*y Axis_Rotate_Trans(Victor,provi)  translate <2.3077675001537123E-7,0.7071067894827501,0.7071067597241>};
#declare trans[18]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.00004075899872>);
#declare Victor=vrotate(Victor,<0,4.993805601391497E-5,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.00004075899872>);
#declare Hugo=vrotate(Hugo,<0,4.993805601391497E-5,0>);
#declare transy=<-0.49999999283419994,0.50000010285625,0.70710701142115>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999942979987002 rotate -45.00004075899872*z rotate 4.993805601391497E-5*y Axis_Rotate_Trans(Victor,provi)  translate <0.49999999283419994,-0.50000010285625,-0.70710701142115>};
#declare trans[19]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.00002832937599>);
#declare Victor=vrotate(Victor,<0,89.99995608942659,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.00002832937599>);
#declare Hugo=vrotate(Hugo,<0,89.99995608942659,0>);
#declare transy=<-0.70710684118735,0.50000010964225,0.50000026792825>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999941138273812 rotate -45.00002832937599*z rotate 89.99995608942659*y Axis_Rotate_Trans(Victor,provi)  translate <0.70710684118735,-0.50000010964225,-0.50000026792825>};
#declare trans[20]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0000025061472>);
#declare Victor=vrotate(Victor,<0,45.000012863472,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0000025061472>);
#declare Hugo=vrotate(Hugo,<0,45.000012863472,0>);
#declare transy=<-0.5000001555524001,-0.7071067508841,-0.49999988730175>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999937909856169 rotate -90.0000025061472*z rotate 45.000012863472*y Axis_Rotate_Trans(Victor,provi)  translate <0.5000001555524001,0.7071067508841,0.49999988730175>};
#declare trans[21]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-45.000002849590906>);
#declare Victor=vrotate(Victor,<0,90.00001274288567,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-45.000002849590906>);
#declare Hugo=vrotate(Hugo,<0,90.00001274288567,0>);
#declare transy=<-0.70710690985535,-0.4999999691837,-0.4999998755553>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999939090431886 rotate -45.000002849590906*z rotate 90.00001274288567*y Axis_Rotate_Trans(Victor,provi)  translate <0.70710690985535,0.4999999691837,0.4999998755553>};
#declare trans[22]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0000025061472>);
#declare Victor=vrotate(Victor,<0,45.00001286347199,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0000025061472>);
#declare Hugo=vrotate(Hugo,<0,45.00001286347199,0>);
#declare transy=<0.5000001555524001,0.7071067508841,0.49999988730175>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999937909856169 rotate -90.0000025061472*z rotate 45.00001286347199*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5000001555524001,-0.7071067508841,-0.49999988730175>};
#declare trans[23]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-89.99999495547785>);
#declare Victor=vrotate(Victor,<0,-179.9999860745926,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-89.99999495547785>);
#declare Hugo=vrotate(Hugo,<0,-179.9999860745926,0>);
#declare transy=<2.3077675001537123E-7,0.7071067894827501,0.7071067597241>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999939109044529 rotate -89.99999495547785*z rotate -179.9999860745926*y Axis_Rotate_Trans(Victor,provi)  translate <-2.3077675001537123E-7,-0.7071067894827501,-0.7071067597241>};
#declare trans[24]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,90.00000520304243,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,90.00000520304243,0>);
#declare transy=<0.7071068371960001,0.7071067380728,-1.5335399999871768E-7>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999939890383966 rotate -90.0*z rotate 90.00000520304243*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7071068371960001,-0.7071067380728,1.5335399999871768E-7>};
#declare trans[25]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-44.999997278466246>);
#declare Victor=vrotate(Victor,<0,-89.99997398116422,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-44.999997278466246>);
#declare Hugo=vrotate(Hugo,<0,-89.99997398116422,0>);
#declare transy=<0.70710671654815,0.4999999631584,-0.5000001480127501>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999938409018608 rotate -44.999997278466246*z rotate -89.99997398116422*y Axis_Rotate_Trans(Victor,provi)  translate <-0.70710671654815,-0.4999999631584,0.5000001480127501>};
#declare trans[26]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-44.99999676013472>);
#declare Victor=vrotate(Victor,<0,-179.99999487302486,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-44.99999676013472>);
#declare Hugo=vrotate(Hugo,<0,-179.99999487302486,0>);
#declare transy=<0.49999987100585,0.4999999631584,-0.70710688471965>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999938318553259 rotate -44.99999676013472*z rotate -179.99999487302486*y Axis_Rotate_Trans(Victor,provi)  translate <-0.49999987100585,-0.4999999631584,0.70710688471965>};
#declare trans[27]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-44.99999621026813>);
#declare Victor=vrotate(Victor,<0,-179.99999675036187,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-44.99999621026813>);
#declare Hugo=vrotate(Hugo,<0,-179.99999675036187,0>);
#declare transy=<-0.50000020161405,-0.499999981995,-0.7071066767916501>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.999993855023909 rotate -44.99999621026813*z rotate -179.99999675036187*y Axis_Rotate_Trans(Victor,provi)  translate <0.50000020161405,0.499999981995,0.7071066767916501>};
#declare trans[28]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-89.9999986725226>);
#declare Victor=vrotate(Victor,<0,135.0000145047142,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-89.9999986725226>);
#declare Hugo=vrotate(Hugo,<0,135.0000145047142,0>);
#declare transy=<-0.49999983411075,0.7071068220561,0.5000000874171999>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.999993989839322 rotate -89.9999986725226*z rotate 135.0000145047142*y Axis_Rotate_Trans(Victor,provi)  translate <0.49999983411075,-0.7071068220561,-0.5000000874171999>};
#declare trans[29]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-89.999999383435>);
#declare Victor=vrotate(Victor,<0,90.00001266519428,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-89.999999383435>);
#declare Hugo=vrotate(Hugo,<0,90.00001266519428,0>);
#declare transy=<-0.7071067472077499,0.70710683199395,1.3819364999556605E-7>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999938740185295 rotate -89.999999383435*z rotate 90.00001266519428*y Axis_Rotate_Trans(Victor,provi)  translate <0.7071067472077499,-0.70710683199395,-1.3819364999556605E-7>};
#declare trans[30]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-4.920813605121198E-6>);
#declare Victor=vrotate(Victor,<0,-41.32921803499142,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-4.920813605121198E-6>);
#declare Hugo=vrotate(Hugo,<0,-41.32921803499142,0>);
#declare transy=<-0.7071069370274501,3.257340000506481E-8,-0.70710664843325>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999939666706533 rotate -4.920813605121198E-6*z rotate -41.32921803499142*y Axis_Rotate_Trans(Victor,provi)  translate <0.7071069370274501,-3.257340000506481E-8,0.70710664843325>};
#declare trans[31]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,135.00001505457413,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,135.00001505457413,0>);
#declare transy=<0.49999996505600003,0.7071067380728,-0.5000001294803>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999939666706197 rotate -90.0*z rotate 135.00001505457413*y Axis_Rotate_Trans(Victor,provi)  translate <-0.49999996505600003,-0.7071067380728,0.5000001294803>};
#declare trans[32]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-89.99997902577941>);
#declare Victor=vrotate(Victor,<0,179.9999979957068,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-89.99997902577941>);
#declare Hugo=vrotate(Hugo,<0,179.9999979957068,0>);
#declare transy=<-1.3075085000813225E-7,0.707106845292,-0.7071068764330499>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999940260658934 rotate -89.99997902577941*z rotate 179.9999979957068*y Axis_Rotate_Trans(Victor,provi)  translate <1.3075085000813225E-7,-0.707106845292,0.7071068764330499>};
#declare trans[33]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-135.0000003748647>);
#declare Victor=vrotate(Victor,<0,90.00001468814007,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-135.0000003748647>);
#declare Hugo=vrotate(Hugo,<0,90.00001468814007,0>);
#declare transy=<-0.7071068650447501,0.5000000502936,-0.49999984967915>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999939298423597 rotate -135.0000003748647*z rotate 90.00001468814007*y Axis_Rotate_Trans(Victor,provi)  translate <0.7071068650447501,-0.5000000502936,0.49999984967915>};
#declare trans[34]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-89.99998852049035>);
#declare Victor=vrotate(Victor,<0,45.000026849126684,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-89.99998852049035>);
#declare Hugo=vrotate(Hugo,<0,45.000026849126684,0>);
#declare transy=<-0.5000000964835,0.7071068938285,-0.49999997710794997>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999940699739229 rotate -89.99998852049035*z rotate 45.000026849126684*y Axis_Rotate_Trans(Victor,provi)  translate <0.5000000964835,-0.7071068938285,0.49999997710794997>};
#declare trans[35]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-44.999989629332916>);
#declare Victor=vrotate(Victor,<0,3.525298799570385E-5,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-44.999989629332916>);
#declare Hugo=vrotate(Hugo,<0,3.525298799570385E-5,0>);
#declare transy=<-0.5000001495766501,0.5000001089763,-0.7071067592500999>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999940387271696 rotate -44.999989629332916*z rotate 3.525298799570385E-5*y Axis_Rotate_Trans(Victor,provi)  translate <0.5000001495766501,-0.5000001089763,0.7071067592500999>};
#declare maxFaces=14;
#declare transface=array[14];
#declare transface[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.00000288951594>);
#declare Victor=vrotate(Victor,<0,67.50001342299188,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.00000288951594>);
#declare Hugo=vrotate(Hugo,<0,67.50001342299188,0>);
#declare transy=<-6.687805001459601E-8,-0.70710677667145,1.76385500094689E-8>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.00000288951594*z rotate 67.50001342299188*y Axis_Rotate_Trans(Victor,provi)  translate <6.687805001459601E-8,0.70710677667145,-1.76385500094689E-8>};
#declare transface[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-67.49999754712479>);
#declare Victor=vrotate(Victor,<0,-179.99997730754154,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-67.49999754712479>);
#declare Hugo=vrotate(Hugo,<0,-179.99997730754154,0>);
#declare transy=<-4.0886449947930004E-8,6.250049999767526E-8,0.7071069118767499>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -67.49999754712479*z rotate -179.99997730754154*y Axis_Rotate_Trans(Victor,provi)  translate <4.0886449947930004E-8,-6.250049999767526E-8,-0.7071069118767499>};
#declare transface[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-22.499999670841746>);
#declare Victor=vrotate(Victor,<0,-89.99998226412954,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-22.499999670841746>);
#declare Hugo=vrotate(Hugo,<0,-89.99998226412954,0>);
#declare transy=<0.7071067731288,-4.538464998260494E-8,-1.289294500050886E-7>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -22.499999670841746*z rotate -89.99998226412954*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7071067731288,4.538464998260494E-8,1.289294500050886E-7>};
#declare transface[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-112.50000107481364>);
#declare Victor=vrotate(Victor,<0,89.99999821762526,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-112.50000107481364>);
#declare Hugo=vrotate(Hugo,<0,89.99999821762526,0>);
#declare transy=<-0.7071069779139,9.507390000274007E-8,2.6344349995932603E-7>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -112.50000107481364*z rotate 89.99999821762526*y Axis_Rotate_Trans(Victor,provi)  translate <0.7071069779139,-9.507390000274007E-8,-2.6344349995932603E-7>};
#declare transface[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-22.49999460754158>);
#declare Victor=vrotate(Victor,<0,179.99999454525224,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-22.49999460754158>);
#declare Hugo=vrotate(Hugo,<0,179.99999454525224,0>);
#declare transy=<-1.9762890002272826E-7,6.862055001999323E-8,-0.7071068587945>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -22.49999460754158*z rotate 179.99999454525224*y Axis_Rotate_Trans(Victor,provi)  translate <1.9762890002272826E-7,-6.862055001999323E-8,0.7071068587945>};
#declare transface[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-89.99999636653122>);
#declare Victor=vrotate(Victor,<0,157.50001144580625,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-89.99999636653122>);
#declare Hugo=vrotate(Hugo,<0,157.50001144580625,0>);
#declare transy=<2.592105002863221E-8,0.7071067866092999,9.26419999047745E-9>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -89.99999636653122*z rotate 157.50001144580625*y Axis_Rotate_Trans(Victor,provi)  translate <-2.592105002863221E-8,-0.7071067866092999,-9.26419999047745E-9>};
#declare transface[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-65.90516600430132>);
#declare Victor=vrotate(Victor,<0,-116.56503087311728,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-65.90516600430132>);
#declare Hugo=vrotate(Hugo,<0,-116.56503087311728,0>);
#declare transy=<0.603553480764125,-0.60355347206105,0.49999991339355>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -65.90516600430132*z rotate -116.56503087311728*y Axis_Rotate_Trans(Victor,provi)  translate <-0.603553480764125,0.60355347206105,-0.49999991339355>};
#declare transface[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-144.73561805173512>);
#declare Victor=vrotate(Victor,<0,45.00001609123721,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-144.73561805173512>);
#declare Hugo=vrotate(Hugo,<0,45.00001609123721,0>);
#declare transy=<-0.6035532937770001,-0.4999999631584,0.6035535163662>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -144.73561805173512*z rotate 45.00001609123721*y Axis_Rotate_Trans(Victor,provi)  translate <0.6035532937770001,0.4999999631584,-0.6035535163662>};
#declare transface[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-65.90517282438864>);
#declare Victor=vrotate(Victor,<0,-26.565010815955198,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-65.90517282438864>);
#declare Hugo=vrotate(Hugo,<0,-26.565010815955198,0>);
#declare transy=<0.49999991347247497,-0.6035534624561749,-0.603553549419175>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -65.90517282438864*z rotate -26.565010815955198*y Axis_Rotate_Trans(Victor,provi)  translate <-0.49999991347247497,0.6035534624561749,0.603553549419175>};
#declare transface[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-114.09484124802593>);
#declare Victor=vrotate(Victor,<0,-116.56503643907389,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-114.09484124802593>);
#declare Hugo=vrotate(Hugo,<0,-116.56503643907389,0>);
#declare transy=<0.603553532703875,0.6035533600339,0.49999988142852503>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -114.09484124802593*z rotate -116.56503643907389*y Axis_Rotate_Trans(Victor,provi)  translate <-0.603553532703875,-0.6035533600339,-0.49999988142852503>};
#declare transface[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-114.09482717561136>);
#declare Victor=vrotate(Victor,<0,153.4349891840448,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-114.09482717561136>);
#declare Hugo=vrotate(Hugo,<0,153.4349891840448,0>);
#declare transy=<-0.49999991347247497,0.6035534624561749,0.603553549419175>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -114.09482717561136*z rotate 153.4349891840448*y Axis_Rotate_Trans(Victor,provi)  translate <0.49999991347247497,-0.6035534624561749,-0.603553549419175>};
#declare transface[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-144.73560852285215>);
#declare Victor=vrotate(Victor,<0,-44.99999687094658,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-144.73560852285215>);
#declare Hugo=vrotate(Hugo,<0,-44.99999687094658,0>);
#declare transy=<-0.6035535557347,-0.49999997558935,-0.603553276173475>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -144.73560852285215*z rotate -44.99999687094658*y Axis_Rotate_Trans(Victor,provi)  translate <0.6035535557347,0.49999997558935,0.603553276173475>};
#declare transface[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-114.09484177532113>);
#declare Victor=vrotate(Victor,<0,-26.56504228639489,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-114.09484177532113>);
#declare Hugo=vrotate(Hugo,<0,-26.56504228639489,0>);
#declare transy=<0.49999991803092503,0.6035533506156,-0.603553507099975>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -114.09484177532113*z rotate -26.56504228639489*y Axis_Rotate_Trans(Victor,provi)  translate <-0.49999991803092503,-0.6035533506156,0.603553507099975>};
#declare transface[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-114.0948529865164>);
#declare Victor=vrotate(Victor,<0,-153.43491618005422,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-114.0948529865164>);
#declare Hugo=vrotate(Hugo,<0,-153.43491618005422,0>);
#declare transy=<-0.500000123030075,0.6035535014024,-0.603553368179025>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -114.0948529865164*z rotate -153.43491618005422*y Axis_Rotate_Trans(Victor,provi)  translate <0.500000123030075,-0.6035535014024,0.603553368179025>};
#declare nbVertices=30;
#declare lesVertices=array[nbVertices];
#declare lesVertices[0]=<-0.2928933810154,0.7071069525112,-0.7071068866789>;
#declare lesVertices[1]=<-0.7071068119516,0.7071068351458,-0.292893067537>;
#declare lesVertices[2]=<0.2928931195137,0.7071067380728,-0.7071068661872>;
#declare lesVertices[3]=<-0.7071069181379,0.2928932654414,-0.7071066318213>;
#declare lesVertices[4]=<-0.7071066824639,0.7071068288421,0.2928933439243>;
#declare lesVertices[5]=<0.707106622498,0.292893188244,-0.7071069032521>;
#declare lesVertices[6]=<0.7071068105983,0.7071067380728,-0.2928933927734>;
#declare lesVertices[7]=<-0.707106955917,-0.2928932002946,-0.7071066650452>;
#declare lesVertices[8]=<-0.7071069999108,0.2928933904424,0.7071071919322>;
#declare lesVertices[9]=<-0.2928929857576,0.7071068152701,0.7071068309101>;
#declare lesVertices[10]=<0.7071069999108,-0.2928933904424,-0.7071071919322>;
#declare lesVertices[11]=<0.7071068637937,0.7071067380728,0.2928930860654>;
#declare lesVertices[12]=<-0.2928934473111,-0.7071067636954,-0.7071066885381>;
#declare lesVertices[13]=<-0.7071068637937,-0.7071067380728,-0.2928930860654>;
#declare lesVertices[14]=<-0.707106622498,-0.292893188244,0.7071069032521>;
#declare lesVertices[15]=<0.2928934473111,0.7071067636954,0.7071066885381>;
#declare lesVertices[16]=<0.2928929857576,-0.7071068152701,-0.7071068309101>;
#declare lesVertices[17]=<0.7071066824639,-0.7071068288421,-0.2928933439243>;
#declare lesVertices[18]=<0.707106955917,0.2928932002946,0.7071066650452>;
#declare lesVertices[19]=<-0.7071068105983,-0.7071067380728,0.2928933927734>;
#declare lesVertices[20]=<-0.2928931195137,-0.7071067380728,0.7071068661872>;
#declare lesVertices[21]=<0.7071068119516,-0.7071068351458,0.292893067537>;
#declare lesVertices[22]=<0.7071069181379,-0.2928932654414,0.7071066318213>;
#declare lesVertices[23]=<0.2928933810154,-0.7071069525112,0.7071068866789>;
#declare lesVertices[24]=<4.750353756882708E-8,0.7071068012103751,-3.29673250226703E-8>;
#declare lesVertices[25]=<-1.2183766253531791E-7,-3.1791375226797314E-9,-0.7071068330456374>;
#declare lesVertices[26]=<-0.7071068331589001,5.6898437475472186E-8,1.7267663752346118E-7>;
#declare lesVertices[27]=<0.7071068331589,-5.6898437489349973E-8,-1.726766375026445E-7>;
#declare lesVertices[28]=<1.2183766248674566E-7,3.179137487985262E-9,0.7071068330456375>;
#declare lesVertices[29]=<-4.7503537554949293E-8,-0.7071068012103751,3.2967325008792514E-8>;
