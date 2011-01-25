#declare snub_cuboctahedron=mesh2{

vertex_vectors{

30,
<-0.2708048683775,0.9161259215252,-0.4980875502045>,
<0.4980875230225,0.9161259215252,-0.2708048508213>,
<0.2708046101967,0.4980876236981,-0.9161259422747>,
<-0.4980877609496,0.2708047233089,-0.9161258603639>,
<-0.9161260304097,0.4980875490498,-0.2708045978979>,
<-0.4980875560001,0.9161259215252,0.2708048743062>,
<0.2708048354,0.9161259215252,0.4980875736894>,
<0.9161263818513,0.4980877609063,0.2708046110593>,
<0.9161258246018,0.2708047764415,-0.4980878277576>,
<0.4980873793899,-0.2708046787866,-0.9161258745279>,
<-0.2708049657868,-0.4980876192649,-0.9161258804717>,
<-0.9161263811626,-0.2708048835994,-0.4980874894544>,
<-0.9161258269261,0.2708047688346,0.4980877645734>,
<-0.2708045404786,0.4980875336741,0.9161258279608>,
<0.4980877837613,0.2708047369332,0.9161258434116>,
<0.9161259983743,-0.2708047330446,0.4980874144542>,
<0.9161259144506,-0.4980875950454,-0.2708048834184>,
<0.2708047099142,-0.9161259773597,-0.4980876727504>,
<-0.4980876389816,-0.9161259675208,-0.2708046304949>,
<-0.916125872822,-0.4980876465805,0.2708049552677>,
<-0.4980874080624,-0.2708048093936,0.9161260163204>,
<0.2708049091478,-0.4980876394436,0.9161259310684>,
<0.498087697095,-0.9161259605635,0.2708046532422>,
<-0.2708046518008,-0.9161259507246,0.4980876954976>,
<-1.648877499815793E-8,0.9161259215252,1.17424499845864E-8>,
<-1.8428745002241342E-7,1.2238875010672778E-8,-0.91612588940955>,
<-0.9161260278301,-5.30738750031956E-8,1.5812219998634358E-7>,
<0.9161260298195,5.2314449994206313E-8,-1.7141562499989327E-7>,
<1.860920250118525E-7,-4.455747500131668E-8,0.9161259046903>,
<2.9056699990537282E-8,-0.91612596404215,1.1373625000143939E-8>
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
<1,6,24>,// ,0,
<6,5,24>,// ,0,
<5,0,24>,// ,0,
<0,1,24>,// ,0,
<3,10,25>,// ,0,
<10,9,25>,// ,0,
<9,2,25>,// ,0,
<2,3,25>,// ,0,
<12,19,26>,// ,0,
<19,11,26>,// ,0,
<11,4,26>,// ,0,
<4,12,26>,// ,0,
<8,16,27>,// ,0,
<16,15,27>,// ,0,
<15,7,27>,// ,0,
<7,8,27>,// ,0,
<14,21,28>,// ,0,
<21,20,28>,// ,0,
<20,13,28>,// ,0,
<13,14,28>,// ,0,
<18,23,29>,// ,0,
<23,22,29>,// ,0,
<22,17,29>,// ,0,
<17,18,29>,// ,0,
<2,1,0>,// ,1,
<3,2,0>,// ,1,
<4,3,0>,// ,1,
<5,4,0>,// ,1,
<7,6,1>,// ,1,
<8,7,1>,// ,1,
<2,8,1>,// ,1,
<9,8,2>,// ,1,
<11,10,3>,// ,1,
<4,11,3>,// ,1,
<5,12,4>,// ,1,
<13,12,5>,// ,1,
<6,13,5>,// ,1,
<14,13,6>,// ,1,
<7,14,6>,// ,1,
<15,14,7>,// ,1,
<9,16,8>,// ,1,
<17,16,9>,// ,1,
<10,17,9>,// ,1,
<18,17,10>,// ,1,
<11,18,10>,// ,1,
<19,18,11>,// ,1,
<20,19,12>,// ,1,
<13,20,12>,// ,1,
<15,21,14>,// ,1,
<22,21,15>,// ,1,
<16,22,15>,// ,1,
<17,22,16>,// ,1,
<19,23,18>,// ,1,
<20,23,19>,// ,1,
<21,23,20>,// ,1,
<22,23,21> //1
 } 
 }
#declare aretes=union{

object{cylinder{<-0.2708048683775,0.9161259215252,-0.4980875502045>,<0.4980875230225,0.9161259215252,-0.2708048508213>,diam  }}
object{cylinder{<-0.2708048683775,0.9161259215252,-0.4980875502045>,<0.2708046101967,0.4980876236981,-0.9161259422747>,diam  }}
object{cylinder{<-0.2708048683775,0.9161259215252,-0.4980875502045>,<-0.4980877609496,0.2708047233089,-0.9161258603639>,diam  }}
object{cylinder{<-0.2708048683775,0.9161259215252,-0.4980875502045>,<-0.9161260304097,0.4980875490498,-0.2708045978979>,diam  }}
object{cylinder{<-0.2708048683775,0.9161259215252,-0.4980875502045>,<-0.4980875560001,0.9161259215252,0.2708048743062>,diam  }}
object{cylinder{<0.4980875230225,0.9161259215252,-0.2708048508213>,<0.2708046101967,0.4980876236981,-0.9161259422747>,diam  }}
object{cylinder{<0.4980875230225,0.9161259215252,-0.2708048508213>,<0.2708048354,0.9161259215252,0.4980875736894>,diam  }}
object{cylinder{<0.4980875230225,0.9161259215252,-0.2708048508213>,<0.9161263818513,0.4980877609063,0.2708046110593>,diam  }}
object{cylinder{<0.4980875230225,0.9161259215252,-0.2708048508213>,<0.9161258246018,0.2708047764415,-0.4980878277576>,diam  }}
object{cylinder{<0.2708046101967,0.4980876236981,-0.9161259422747>,<-0.4980877609496,0.2708047233089,-0.9161258603639>,diam  }}
object{cylinder{<0.2708046101967,0.4980876236981,-0.9161259422747>,<0.9161258246018,0.2708047764415,-0.4980878277576>,diam  }}
object{cylinder{<0.2708046101967,0.4980876236981,-0.9161259422747>,<0.4980873793899,-0.2708046787866,-0.9161258745279>,diam  }}
object{cylinder{<-0.4980877609496,0.2708047233089,-0.9161258603639>,<-0.9161260304097,0.4980875490498,-0.2708045978979>,diam  }}
object{cylinder{<-0.4980877609496,0.2708047233089,-0.9161258603639>,<-0.2708049657868,-0.4980876192649,-0.9161258804717>,diam  }}
object{cylinder{<-0.4980877609496,0.2708047233089,-0.9161258603639>,<-0.9161263811626,-0.2708048835994,-0.4980874894544>,diam  }}
object{cylinder{<-0.9161260304097,0.4980875490498,-0.2708045978979>,<-0.4980875560001,0.9161259215252,0.2708048743062>,diam  }}
object{cylinder{<-0.9161260304097,0.4980875490498,-0.2708045978979>,<-0.9161263811626,-0.2708048835994,-0.4980874894544>,diam  }}
object{cylinder{<-0.9161260304097,0.4980875490498,-0.2708045978979>,<-0.9161258269261,0.2708047688346,0.4980877645734>,diam  }}
object{cylinder{<-0.4980875560001,0.9161259215252,0.2708048743062>,<0.2708048354,0.9161259215252,0.4980875736894>,diam  }}
object{cylinder{<-0.4980875560001,0.9161259215252,0.2708048743062>,<-0.9161258269261,0.2708047688346,0.4980877645734>,diam  }}
object{cylinder{<-0.4980875560001,0.9161259215252,0.2708048743062>,<-0.2708045404786,0.4980875336741,0.9161258279608>,diam  }}
object{cylinder{<0.2708048354,0.9161259215252,0.4980875736894>,<0.9161263818513,0.4980877609063,0.2708046110593>,diam  }}
object{cylinder{<0.2708048354,0.9161259215252,0.4980875736894>,<-0.2708045404786,0.4980875336741,0.9161258279608>,diam  }}
object{cylinder{<0.2708048354,0.9161259215252,0.4980875736894>,<0.4980877837613,0.2708047369332,0.9161258434116>,diam  }}
object{cylinder{<0.9161263818513,0.4980877609063,0.2708046110593>,<0.9161258246018,0.2708047764415,-0.4980878277576>,diam  }}
object{cylinder{<0.9161263818513,0.4980877609063,0.2708046110593>,<0.4980877837613,0.2708047369332,0.9161258434116>,diam  }}
object{cylinder{<0.9161263818513,0.4980877609063,0.2708046110593>,<0.9161259983743,-0.2708047330446,0.4980874144542>,diam  }}
object{cylinder{<0.9161258246018,0.2708047764415,-0.4980878277576>,<0.4980873793899,-0.2708046787866,-0.9161258745279>,diam  }}
object{cylinder{<0.9161258246018,0.2708047764415,-0.4980878277576>,<0.9161259144506,-0.4980875950454,-0.2708048834184>,diam  }}
object{cylinder{<0.4980873793899,-0.2708046787866,-0.9161258745279>,<-0.2708049657868,-0.4980876192649,-0.9161258804717>,diam  }}
object{cylinder{<0.4980873793899,-0.2708046787866,-0.9161258745279>,<0.9161259144506,-0.4980875950454,-0.2708048834184>,diam  }}
object{cylinder{<0.4980873793899,-0.2708046787866,-0.9161258745279>,<0.2708047099142,-0.9161259773597,-0.4980876727504>,diam  }}
object{cylinder{<-0.2708049657868,-0.4980876192649,-0.9161258804717>,<-0.9161263811626,-0.2708048835994,-0.4980874894544>,diam  }}
object{cylinder{<-0.2708049657868,-0.4980876192649,-0.9161258804717>,<0.2708047099142,-0.9161259773597,-0.4980876727504>,diam  }}
object{cylinder{<-0.2708049657868,-0.4980876192649,-0.9161258804717>,<-0.4980876389816,-0.9161259675208,-0.2708046304949>,diam  }}
object{cylinder{<-0.9161263811626,-0.2708048835994,-0.4980874894544>,<-0.4980876389816,-0.9161259675208,-0.2708046304949>,diam  }}
object{cylinder{<-0.9161263811626,-0.2708048835994,-0.4980874894544>,<-0.916125872822,-0.4980876465805,0.2708049552677>,diam  }}
object{cylinder{<-0.9161258269261,0.2708047688346,0.4980877645734>,<-0.2708045404786,0.4980875336741,0.9161258279608>,diam  }}
object{cylinder{<-0.9161258269261,0.2708047688346,0.4980877645734>,<-0.916125872822,-0.4980876465805,0.2708049552677>,diam  }}
object{cylinder{<-0.9161258269261,0.2708047688346,0.4980877645734>,<-0.4980874080624,-0.2708048093936,0.9161260163204>,diam  }}
object{cylinder{<-0.2708045404786,0.4980875336741,0.9161258279608>,<0.4980877837613,0.2708047369332,0.9161258434116>,diam  }}
object{cylinder{<-0.2708045404786,0.4980875336741,0.9161258279608>,<-0.4980874080624,-0.2708048093936,0.9161260163204>,diam  }}
object{cylinder{<0.4980877837613,0.2708047369332,0.9161258434116>,<0.9161259983743,-0.2708047330446,0.4980874144542>,diam  }}
object{cylinder{<0.4980877837613,0.2708047369332,0.9161258434116>,<0.2708049091478,-0.4980876394436,0.9161259310684>,diam  }}
object{cylinder{<0.9161259983743,-0.2708047330446,0.4980874144542>,<0.9161259144506,-0.4980875950454,-0.2708048834184>,diam  }}
object{cylinder{<0.9161259983743,-0.2708047330446,0.4980874144542>,<0.2708049091478,-0.4980876394436,0.9161259310684>,diam  }}
object{cylinder{<0.9161259983743,-0.2708047330446,0.4980874144542>,<0.498087697095,-0.9161259605635,0.2708046532422>,diam  }}
object{cylinder{<0.9161259144506,-0.4980875950454,-0.2708048834184>,<0.2708047099142,-0.9161259773597,-0.4980876727504>,diam  }}
object{cylinder{<0.9161259144506,-0.4980875950454,-0.2708048834184>,<0.498087697095,-0.9161259605635,0.2708046532422>,diam  }}
object{cylinder{<0.2708047099142,-0.9161259773597,-0.4980876727504>,<-0.4980876389816,-0.9161259675208,-0.2708046304949>,diam  }}
object{cylinder{<0.2708047099142,-0.9161259773597,-0.4980876727504>,<0.498087697095,-0.9161259605635,0.2708046532422>,diam  }}
object{cylinder{<-0.4980876389816,-0.9161259675208,-0.2708046304949>,<-0.916125872822,-0.4980876465805,0.2708049552677>,diam  }}
object{cylinder{<-0.4980876389816,-0.9161259675208,-0.2708046304949>,<-0.2708046518008,-0.9161259507246,0.4980876954976>,diam  }}
object{cylinder{<-0.916125872822,-0.4980876465805,0.2708049552677>,<-0.4980874080624,-0.2708048093936,0.9161260163204>,diam  }}
object{cylinder{<-0.916125872822,-0.4980876465805,0.2708049552677>,<-0.2708046518008,-0.9161259507246,0.4980876954976>,diam  }}
object{cylinder{<-0.4980874080624,-0.2708048093936,0.9161260163204>,<0.2708049091478,-0.4980876394436,0.9161259310684>,diam  }}
object{cylinder{<-0.4980874080624,-0.2708048093936,0.9161260163204>,<-0.2708046518008,-0.9161259507246,0.4980876954976>,diam  }}
object{cylinder{<0.2708049091478,-0.4980876394436,0.9161259310684>,<0.498087697095,-0.9161259605635,0.2708046532422>,diam  }}
object{cylinder{<0.2708049091478,-0.4980876394436,0.9161259310684>,<-0.2708046518008,-0.9161259507246,0.4980876954976>,diam  }}
object{cylinder{<0.498087697095,-0.9161259605635,0.2708046532422>,<-0.2708046518008,-0.9161259507246,0.4980876954976>,diam  }}
}
#declare sommets=union{

object{sphere{<-0.2708048683775,0.9161259215252,-0.4980875502045>,diam1 }}
object{sphere{<0.4980875230225,0.9161259215252,-0.2708048508213>,diam1 }}
object{sphere{<0.2708046101967,0.4980876236981,-0.9161259422747>,diam1 }}
object{sphere{<-0.4980877609496,0.2708047233089,-0.9161258603639>,diam1 }}
object{sphere{<-0.9161260304097,0.4980875490498,-0.2708045978979>,diam1 }}
object{sphere{<-0.4980875560001,0.9161259215252,0.2708048743062>,diam1 }}
object{sphere{<0.2708048354,0.9161259215252,0.4980875736894>,diam1 }}
object{sphere{<0.9161263818513,0.4980877609063,0.2708046110593>,diam1 }}
object{sphere{<0.9161258246018,0.2708047764415,-0.4980878277576>,diam1 }}
object{sphere{<0.4980873793899,-0.2708046787866,-0.9161258745279>,diam1 }}
object{sphere{<-0.2708049657868,-0.4980876192649,-0.9161258804717>,diam1 }}
object{sphere{<-0.9161263811626,-0.2708048835994,-0.4980874894544>,diam1 }}
object{sphere{<-0.9161258269261,0.2708047688346,0.4980877645734>,diam1 }}
object{sphere{<-0.2708045404786,0.4980875336741,0.9161258279608>,diam1 }}
object{sphere{<0.4980877837613,0.2708047369332,0.9161258434116>,diam1 }}
object{sphere{<0.9161259983743,-0.2708047330446,0.4980874144542>,diam1 }}
object{sphere{<0.9161259144506,-0.4980875950454,-0.2708048834184>,diam1 }}
object{sphere{<0.2708047099142,-0.9161259773597,-0.4980876727504>,diam1 }}
object{sphere{<-0.4980876389816,-0.9161259675208,-0.2708046304949>,diam1 }}
object{sphere{<-0.916125872822,-0.4980876465805,0.2708049552677>,diam1 }}
object{sphere{<-0.4980874080624,-0.2708048093936,0.9161260163204>,diam1 }}
object{sphere{<0.2708049091478,-0.4980876394436,0.9161259310684>,diam1 }}
object{sphere{<0.498087697095,-0.9161259605635,0.2708046532422>,diam1 }}
object{sphere{<-0.2708046518008,-0.9161259507246,0.4980876954976>,diam1 }}
}
#declare maxIndices=60;
#declare trans=array[60];
#declare trans[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,163.53245027354106,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,163.53245027354106,0>);
#declare transy=<-0.11364132732249999,-0.9161259215252,0.3844462005129>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013740276115 rotate -90.0*z rotate 163.53245027354106*y Axis_Rotate_Trans(Victor,provi)  translate <0.11364132732249999,0.9161259215252,-0.3844462005129>};
#declare trans[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-58.5746608671294>);
#declare Victor=vrotate(Victor,<0,-142.33743599482096,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-58.5746608671294>);
#declare Hugo=vrotate(Hugo,<0,-142.33743599482096,0>);
#declare transy=<1.2909040000841365E-7,-0.70710677261165,0.7071067462396>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013802378347 rotate -58.5746608671294*z rotate -142.33743599482096*y Axis_Rotate_Trans(Victor,provi)  translate <-1.2909040000841365E-7,0.70710677261165,-0.7071067462396>};
#declare trans[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.40330730683886>);
#declare Victor=vrotate(Victor,<0,-61.46755442822389,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.40330730683886>);
#declare Hugo=vrotate(Hugo,<0,-61.46755442822389,0>);
#declare transy=<0.38444631466355,-0.59346532241705,0.7071067052841999>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000014174998713 rotate -36.40330730683886*z rotate -61.46755442822389*y Axis_Rotate_Trans(Victor,provi)  translate <-0.38444631466355,0.59346532241705,-0.7071067052841999>};
#declare trans[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-58.57465680663919>);
#declare Victor=vrotate(Victor,<0,19.402329995714453,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-58.57465680663919>);
#declare Hugo=vrotate(Hugo,<0,19.402329995714453,0>);
#declare transy=<0.5934654493936,-0.7071067352875,0.3844460740512>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000014428194481 rotate -58.57465680663919*z rotate 19.402329995714453*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5934654493936,0.7071067352875,-0.3844460740512>};
#declare trans[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,73.53245175021414,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,73.53245175021414,0>);
#declare transy=<0.38444621218880004,-0.9161259215252,0.11364133794915002>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000014094721352 rotate -90.0*z rotate 73.53245175021414*y Axis_Rotate_Trans(Victor,provi)  translate <-0.38444621218880004,0.9161259215252,-0.11364133794915002>};
#declare trans[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-58.57465838960757>);
#declare Victor=vrotate(Victor,<0,-70.59767115932004,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-58.57465838960757>);
#declare Hugo=vrotate(Hugo,<0,-70.59767115932004,0>);
#declare transy=<-0.3844460666096,-0.70710677261165,0.593465396548>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013094681532 rotate -58.57465838960757*z rotate -70.59767115932004*y Axis_Rotate_Trans(Victor,provi)  translate <0.3844460666096,0.70710677261165,-0.593465396548>};
#declare trans[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,73.532451750221,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,73.532451750221,0>);
#declare transy=<-0.38444617921125,-0.9161259215252,-0.11364136143404999>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000014094720997 rotate -90.0*z rotate 73.532451750221*y Axis_Rotate_Trans(Victor,provi)  translate <0.38444617921125,0.9161259215252,0.11364136143404999>};
#declare trans[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-58.574679367494554>);
#declare Victor=vrotate(Victor,<0,127.66259580256812,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-58.574679367494554>);
#declare Hugo=vrotate(Hugo,<0,127.66259580256812,0>);
#declare transy=<-0.7071069524369,-0.70710684121575,1.1988100001580904E-7>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000015804758595 rotate -58.574679367494554*z rotate 127.66259580256812*y Axis_Rotate_Trans(Victor,provi)  translate <0.7071069524369,0.70710684121575,-1.1988100001580904E-7>};
#declare trans[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.40331144432453>);
#declare Victor=vrotate(Victor,<0,-151.4675450100153,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.40331144432453>);
#declare Hugo=vrotate(Hugo,<0,-151.4675450100153,0>);
#declare transy=<-0.70710667381215,-0.59346534898335,0.38444633928945005>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000001388410972 rotate -36.40331144432453*z rotate -151.4675450100153*y Axis_Rotate_Trans(Victor,provi)  translate <0.70710667381215,0.59346534898335,-0.38444633928945005>};
#declare trans[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-73.53243608845149>);
#declare Victor=vrotate(Victor,<0,6.103771243972575E-6,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-73.53243608845149>);
#declare Hugo=vrotate(Hugo,<0,6.103771243972575E-6,0>);
#declare transy=<0.11364157537645,-0.38444617350349997,0.9161259013192999>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000001420869328 rotate -73.53243608845149*z rotate 6.103771243972575E-6*y Axis_Rotate_Trans(Victor,provi)  translate <-0.11364157537645,0.38444617350349997,-0.9161259013192999>};
#declare trans[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-73.53243783984915>);
#declare Victor=vrotate(Victor,<0,147.06489419510874,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-73.53243783984915>);
#declare Hugo=vrotate(Hugo,<0,147.06489419510874,0>);
#declare transy=<-0.5934652173992501,-0.3844462000698,0.70710688501615>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000012905057678 rotate -73.53243783984915*z rotate 147.06489419510874*y Axis_Rotate_Trans(Victor,provi)  translate <0.5934652173992501,0.3844462000698,-0.70710688501615>};
#declare trans[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-16.46755631166012>);
#declare Victor=vrotate(Victor,<0,179.99998292168945,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-16.46755631166012>);
#declare Hugo=vrotate(Hugo,<0,179.99998292168945,0>);
#declare transy=<-0.3844459947933,-0.11364147245575001,0.9161259084013>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000012923607868 rotate -16.46755631166012*z rotate 179.99998292168945*y Axis_Rotate_Trans(Victor,provi)  translate <0.3844459947933,0.11364147245575001,-0.9161259084013>};
#declare trans[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-106.46755816210977>);
#declare Victor=vrotate(Victor,<0,57.06488645190836,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-106.46755816210977>);
#declare Hugo=vrotate(Hugo,<0,57.06488645190836,0>);
#declare transy=<0.70710689567965,-0.38444613617935,0.5934652291308999>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000014319016965 rotate -106.46755816210977*z rotate 57.06488645190836*y Axis_Rotate_Trans(Victor,provi)  translate <-0.70710689567965,0.38444613617935,-0.5934652291308999>};
#declare trans[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-16.467557279249636>);
#declare Victor=vrotate(Victor,<0,-179.99999493101944,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-16.467557279249636>);
#declare Hugo=vrotate(Hugo,<0,-179.99999493101944,0>);
#declare transy=<0.38444636336820004,0.113641447978,0.9161258704177999>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013494915743 rotate -16.467557279249636*z rotate -179.99999493101944*y Axis_Rotate_Trans(Victor,provi)  translate <-0.38444636336820004,-0.113641447978,-0.9161258704177999>};
#declare trans[14]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-47.50639886115645>);
#declare Victor=vrotate(Victor,<0,44.999982915403095,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-47.50639886115645>);
#declare Hugo=vrotate(Hugo,<0,44.999982915403095,0>);
#declare transy=<0.7071070710561,8.014525001986961E-8,0.70710667490915>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000001684243495 rotate -47.50639886115645*z rotate 44.999982915403095*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7071070710561,-8.014525001986961E-8,-0.70710667490915>};
#declare trans[15]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-121.42534199822933>);
#declare Victor=vrotate(Victor,<0,127.66256978972143,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-121.42534199822933>);
#declare Hugo=vrotate(Hugo,<0,127.66256978972143,0>);
#declare transy=<0.7071067932049,-0.7071067352875,-1.382041499853326E-7>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000014769580285 rotate -121.42534199822933*z rotate 127.66256978972143*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7071067932049,0.7071067352875,1.382041499853326E-7>};
#declare trans[16]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-16.467562060396528>);
#declare Victor=vrotate(Victor,<0,-89.99991157864682,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-16.467562060396528>);
#declare Hugo=vrotate(Hugo,<0,-89.99991157864682,0>);
#declare transy=<0.91612620578615,-0.1136413327252,0.38444604367615>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000014913080009 rotate -16.467562060396528*z rotate -89.99991157864682*y Axis_Rotate_Trans(Victor,provi)  translate <-0.91612620578615,0.1136413327252,-0.38444604367615>};
#declare trans[17]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-73.53244414816606>);
#declare Victor=vrotate(Victor,<0,90.0000151630476,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-73.53244414816606>);
#declare Hugo=vrotate(Hugo,<0,90.0000151630476,0>);
#declare transy=<0.9161259286679,-0.3844461589422,-0.11364158333774999>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000001368005514 rotate -73.53244414816606*z rotate 90.0000151630476*y Axis_Rotate_Trans(Victor,provi)  translate <-0.9161259286679,0.3844461589422,0.11364158333774999>};
#declare trans[18]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,163.5324502735431,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,163.5324502735431,0>);
#declare transy=<0.11364136030005001,-0.9161259215252,-0.3844462239978>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013740277314 rotate -90.0*z rotate 163.5324502735431*y Axis_Rotate_Trans(Victor,provi)  translate <-0.11364136030005001,0.9161259215252,0.3844462239978>};
#declare trans[19]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.403307191759644>);
#declare Victor=vrotate(Victor,<0,28.532447584484977,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.403307191759644>);
#declare Hugo=vrotate(Hugo,<0,28.532447584484977,0>);
#declare transy=<0.7071066914631,-0.5934653451799,-0.3844463194398>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013454714387 rotate -36.403307191759644*z rotate 28.532447584484977*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7071066914631,0.5934653451799,0.3844463194398>};
#declare trans[20]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-58.574649328525695>);
#declare Victor=vrotate(Victor,<0,109.40234078597332,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-58.574649328525695>);
#declare Hugo=vrotate(Hugo,<0,109.40234078597332,0>);
#declare transy=<0.38444604823935,-0.70710672759965,-0.5934653511335>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000012659900341 rotate -58.574649328525695*z rotate 109.40234078597332*y Axis_Rotate_Trans(Victor,provi)  translate <-0.38444604823935,0.70710672759965,0.5934653511335>};
#declare trans[21]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-58.5746833626884>);
#declare Victor=vrotate(Victor,<0,-160.59767988329938,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-58.5746833626884>);
#declare Hugo=vrotate(Hugo,<0,-160.59767988329938,0>);
#declare transy=<-0.59346560862565,-0.70710684121575,-0.38444609237435>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000016945975267 rotate -58.5746833626884*z rotate -160.59767988329938*y Axis_Rotate_Trans(Victor,provi)  translate <0.59346560862565,0.70710684121575,0.38444609237435>};
#declare trans[22]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-58.57464921154119>);
#declare Victor=vrotate(Victor,<0,37.66256012475183,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-58.57464921154119>);
#declare Hugo=vrotate(Hugo,<0,37.66256012475183,0>);
#declare transy=<-1.4746070001181444E-7,-0.70710672759965,-0.7071067008251>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000012626484076 rotate -58.57464921154119*z rotate 37.66256012475183*y Axis_Rotate_Trans(Victor,provi)  translate <1.4746070001181444E-7,0.70710672759965,0.7071067008251>};
#declare trans[23]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.403307374018034>);
#declare Victor=vrotate(Victor,<0,118.53245379937987,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.403307374018034>);
#declare Hugo=vrotate(Hugo,<0,118.53245379937987,0>);
#declare transy=<-0.38444630958064996,-0.5934653292292,-0.7071067085505>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013972519546 rotate -36.403307374018034*z rotate 118.53245379937987*y Axis_Rotate_Trans(Victor,provi)  translate <0.38444630958064996,0.5934653292292,0.7071067085505>};
#declare trans[24]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-73.53243169762263>);
#declare Victor=vrotate(Victor,<0,-89.99995847527836,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-73.53243169762263>);
#declare Hugo=vrotate(Hugo,<0,-89.99995847527836,0>);
#declare transy=<-0.91612610322655,-0.38444626867389997,0.11364160834915002>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000001531533212 rotate -73.53243169762263*z rotate -89.99995847527836*y Axis_Rotate_Trans(Victor,provi)  translate <0.91612610322655,0.38444626867389997,-0.11364160834915002>};
#declare trans[25]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-73.53243136058194>);
#declare Victor=vrotate(Victor,<0,57.06486467891163,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-73.53243136058194>);
#declare Hugo=vrotate(Hugo,<0,57.06486467891163,0>);
#declare transy=<-0.7071070828063,-0.38444624891975,-0.5934652272354499>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000016854618774 rotate -73.53243136058194*z rotate 57.06486467891163*y Axis_Rotate_Trans(Victor,provi)  translate <0.7071070828063,0.38444624891975,0.5934652272354499>};
#declare trans[26]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-16.467554776949342>);
#declare Victor=vrotate(Victor,<0,89.99990332918584,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-16.467554776949342>);
#declare Hugo=vrotate(Hugo,<0,89.99990332918584,0>);
#declare transy=<-0.9161261901127999,-0.11364151393085001,-0.38444601275675>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000015334589187 rotate -16.467554776949342*z rotate 89.99990332918584*y Axis_Rotate_Trans(Victor,provi)  translate <0.9161261901127999,0.11364151393085001,0.38444601275675>};
#declare trans[27]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-47.50638981598288>);
#declare Victor=vrotate(Victor,<0,-44.999972695055675,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-47.50638981598288>);
#declare Hugo=vrotate(Hugo,<0,-44.999972695055675,0>);
#declare transy=<-0.7071066019958501,-4.882744999989974E-8,0.70710685114275>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000001231866948 rotate -47.50638981598288*z rotate -44.999972695055675*y Axis_Rotate_Trans(Victor,provi)  translate <0.7071066019958501,4.882744999989974E-8,-0.70710685114275>};
#declare trans[28]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-16.46756691651443>);
#declare Victor=vrotate(Victor,<0,90.00002264999273,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-16.46756691651443>);
#declare Hugo=vrotate(Hugo,<0,90.00002264999273,0>);
#declare transy=<-0.9161258695262,0.11364140930195002,0.384446355588>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000014368154067 rotate -16.46756691651443*z rotate 90.00002264999273*y Axis_Rotate_Trans(Victor,provi)  translate <0.9161258695262,-0.11364140930195002,-0.384446355588>};
#declare trans[29]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-73.5324328151027>);
#declare Victor=vrotate(Victor,<0,-4.429159208183903E-7,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-73.5324328151027>);
#declare Hugo=vrotate(Hugo,<0,-4.429159208183903E-7,0>);
#declare transy=<-0.11364120680154999,0.38444614902575,0.9161258774998>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000014039816754 rotate -73.5324328151027*z rotate -4.429159208183903E-7*y Axis_Rotate_Trans(Victor,provi)  translate <0.11364120680154999,-0.38444614902575,-0.9161258774998>};
#declare trans[30]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-73.53243394649492>);
#declare Victor=vrotate(Victor,<0,122.93514115292128,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-73.53243394649492>);
#declare Hugo=vrotate(Hugo,<0,122.93514115292128,0>);
#declare transy=<-0.70710664692025,0.384446136916,0.59346537897315>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013642225742 rotate -73.53243394649492*z rotate 122.93514115292128*y Axis_Rotate_Trans(Victor,provi)  translate <0.70710664692025,-0.384446136916,-0.59346537897315>};
#declare trans[31]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.403291445122655>);
#declare Victor=vrotate(Victor,<0,61.46757179547933,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.403291445122655>);
#declare Hugo=vrotate(Hugo,<0,61.46757179547933,0>);
#declare transy=<-0.38444604465205,0.59346532807315,0.70710677363915>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013688862368 rotate -36.403291445122655*z rotate 61.46757179547933*y Axis_Rotate_Trans(Victor,provi)  translate <0.38444604465205,-0.59346532807315,-0.70710677363915>};
#declare trans[32]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-106.4675480508256>);
#declare Victor=vrotate(Victor,<0,32.93511495542445,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-106.4675480508256>);
#declare Hugo=vrotate(Hugo,<0,32.93511495542445,0>);
#declare transy=<0.5934656734747,0.38444625143215,0.70710668496305>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000016325993806 rotate -106.4675480508256*z rotate 32.93511495542445*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5934656734747,-0.38444625143215,-0.70710668496305>};
#declare trans[33]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-58.57465880951754>);
#declare Victor=vrotate(Victor,<0,142.33745830270422,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-58.57465880951754>);
#declare Hugo=vrotate(Hugo,<0,142.33745830270422,0>);
#declare transy=<1.2793629999841016E-7,0.7071067983123001,0.7071067766110499>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000001465630839 rotate -58.57465880951754*z rotate 142.33745830270422*y Axis_Rotate_Trans(Victor,provi)  translate <-1.2793629999841016E-7,-0.7071067983123001,-0.7071067766110499>};
#declare trans[34]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-58.574657919476444>);
#declare Victor=vrotate(Victor,<0,70.59769449745028,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-58.574657919476444>);
#declare Hugo=vrotate(Hugo,<0,70.59769449745028,0>);
#declare transy=<0.3844463023842,0.70710679339285,0.5934652554833>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000001416671163 rotate -58.574657919476444*z rotate 70.59769449745028*y Axis_Rotate_Trans(Victor,provi)  translate <-0.3844463023842,-0.70710679339285,-0.5934652554833>};
#declare trans[35]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.40333306076174>);
#declare Victor=vrotate(Victor,<0,151.46758283206864,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.40333306076174>);
#declare Hugo=vrotate(Hugo,<0,151.46758283206864,0>);
#declare transy=<0.7071070100721,0.5934654255601,0.38444605997465>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000015718202582 rotate -36.40333306076174*z rotate 151.46758283206864*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7071070100721,-0.5934654255601,-0.38444605997465>};
#declare trans[36]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-73.53244699537389>);
#declare Victor=vrotate(Victor,<0,90.00003788016276,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-73.53244699537389>);
#declare Hugo=vrotate(Hugo,<0,90.00003788016276,0>);
#declare transy=<0.9161261269923,0.38444626508995,0.11364126709335001>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000014602897453 rotate -73.53244699537389*z rotate 90.00003788016276*y Axis_Rotate_Trans(Victor,provi)  translate <-0.9161261269923,-0.38444626508995,-0.11364126709335001>};
#declare trans[37]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-106.46755585045008>);
#declare Victor=vrotate(Victor,<0,147.06490031157315,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-106.46755585045008>);
#declare Hugo=vrotate(Hugo,<0,147.06490031157315,0>);
#declare transy=<0.59346518370235,-0.38444615125435,-0.7071067962671>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013004370425 rotate -106.46755585045008*z rotate 147.06490031157315*y Axis_Rotate_Trans(Victor,provi)  translate <-0.59346518370235,0.38444615125435,0.7071067962671>};
#declare trans[38]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-16.467556772899005>);
#declare Victor=vrotate(Victor,<0,-89.99998843009125,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-16.467556772899005>);
#declare Hugo=vrotate(Hugo,<0,-89.99998843009125,0>);
#declare transy=<0.91612584987405,0.11364143887295,-0.38444635992055>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000014416147276 rotate -16.467556772899005*z rotate -89.99998843009125*y Axis_Rotate_Trans(Victor,provi)  translate <-0.91612584987405,-0.11364143887295,0.38444635992055>};
#declare trans[39]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-47.50638943213454>);
#declare Victor=vrotate(Victor,<0,135.00001145239656,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-47.50638943213454>);
#declare Hugo=vrotate(Hugo,<0,135.00001145239656,0>);
#declare transy=<0.70710661749425,2.0279500023701047E-8,-0.7071068904469>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000014516555433 rotate -47.50638943213454*z rotate 135.00001145239656*y Axis_Rotate_Trans(Victor,provi)  translate <-0.70710661749425,-2.0279500023701047E-8,0.7071068904469>};
#declare trans[40]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-73.53244224121235>);
#declare Victor=vrotate(Victor,<0,179.99999884864812,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-73.53244224121235>);
#declare Hugo=vrotate(Hugo,<0,179.99999884864812,0>);
#declare transy=<-0.11364162164135,-0.38444613530365,-0.9161258356862>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000001328120995 rotate -73.53244224121235*z rotate 179.99999884864812*y Axis_Rotate_Trans(Victor,provi)  translate <0.11364162164135,0.38444613530365,0.9161258356862>};
#declare trans[41]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-16.467562232213247>);
#declare Victor=vrotate(Victor,<0,4.748360587303176E-5,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-16.467562232213247>);
#declare Hugo=vrotate(Hugo,<0,4.748360587303176E-5,0>);
#declare transy=<0.3844459742705,-0.11364136214025,-0.9161259221406>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013756870632 rotate -16.467562232213247*z rotate 4.748360587303176E-5*y Axis_Rotate_Trans(Victor,provi)  translate <-0.3844459742705,0.11364136214025,0.9161259221406>};
#declare trans[42]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-47.50639421304764>);
#declare Victor=vrotate(Victor,<0,-134.99998531112,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-47.50639421304764>);
#declare Hugo=vrotate(Hugo,<0,-134.99998531112,0>);
#declare transy=<-0.7071068910678,-1.9442999987795417E-9,-0.7071066289329>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013428695123 rotate -47.50639421304764*z rotate -134.99998531112*y Axis_Rotate_Trans(Victor,provi)  translate <0.7071068910678,1.9442999987795417E-9,0.7071066289329>};
#declare trans[43]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-16.467562039203308>);
#declare Victor=vrotate(Victor,<0,2.209741801487425E-5,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-16.467562039203308>);
#declare Hugo=vrotate(Hugo,<0,2.209741801487425E-5,0>);
#declare transy=<-0.38444634645455,0.1136414512552,-0.91612588724>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000014180122425 rotate -16.467562039203308*z rotate 2.209741801487425E-5*y Axis_Rotate_Trans(Victor,provi)  translate <0.38444634645455,-0.1136414512552,0.91612588724>};
#declare trans[44]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-73.5324372348689>);
#declare Victor=vrotate(Victor,<0,-89.9999937462323,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-73.5324372348689>);
#declare Hugo=vrotate(Hugo,<0,-89.9999937462323,0>);
#declare transy=<-0.91612595641245,0.384446164045,-0.11364126551790002>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000001319656907 rotate -73.5324372348689*z rotate -89.9999937462323*y Axis_Rotate_Trans(Victor,provi)  translate <0.91612595641245,-0.384446164045,0.11364126551790002>};
#declare trans[45]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-73.5324360871577>);
#declare Victor=vrotate(Victor,<0,32.93513602411481,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-73.5324360871577>);
#declare Hugo=vrotate(Hugo,<0,32.93513602411481,0>);
#declare transy=<-0.59346545376105,0.3844461862441,-0.7071066727613>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000014472349112 rotate -73.5324360871577*z rotate 32.93513602411481*y Axis_Rotate_Trans(Victor,provi)  translate <0.59346545376105,-0.3844461862441,0.7071066727613>};
#declare trans[46]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.40330200659393>);
#declare Victor=vrotate(Victor,<0,-28.532432186200573,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.40330200659393>);
#declare Hugo=vrotate(Hugo,<0,-28.532432186200573,0>);
#declare transy=<-0.70710684773465,0.59346534680405,-0.3844460338482>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013946975377 rotate -36.40330200659393*z rotate -28.532432186200573*y Axis_Rotate_Trans(Victor,provi)  translate <0.70710684773465,-0.59346534680405,0.3844460338482>};
#declare trans[47]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-58.57465568320179>);
#declare Victor=vrotate(Victor,<0,-19.402315940171036,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-58.57465568320179>);
#declare Hugo=vrotate(Hugo,<0,-19.402315940171036,0>);
#declare transy=<-0.5934653121824001,0.70710678620255,0.3844462780844>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000001434264702 rotate -58.57465568320179*z rotate -19.402315940171036*y Axis_Rotate_Trans(Victor,provi)  translate <0.5934653121824001,-0.70710678620255,-0.3844462780844>};
#declare trans[48]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-58.57465447521236>);
#declare Victor=vrotate(Victor,<0,52.33745054951821,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-58.57465447521236>);
#declare Hugo=vrotate(Hugo,<0,52.33745054951821,0>);
#declare transy=<-0.7071068057728,0.70710677780445,1.150880999944981E-7>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013595801795 rotate -58.57465447521236*z rotate 52.33745054951821*y Axis_Rotate_Trans(Victor,provi)  translate <0.7071068057728,-0.70710677780445,-1.150880999944981E-7>};
#declare trans[49]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.00000070309393>);
#declare Victor=vrotate(Victor,<0,16.467574084282514,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.00000070309393>);
#declare Hugo=vrotate(Hugo,<0,16.467574084282514,0>);
#declare transy=<0.1136414645337,0.91612597244025,0.38444615162265>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000014444137042 rotate -90.00000070309393*z rotate 16.467574084282514*y Axis_Rotate_Trans(Victor,provi)  translate <-0.1136414645337,-0.91612597244025,-0.38444615162265>};
#declare trans[50]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.00000120026694>);
#declare Victor=vrotate(Victor,<0,106.46757077400329,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.00000120026694>);
#declare Hugo=vrotate(Hugo,<0,106.46757077400329,0>);
#declare transy=<-0.3844462035046,0.9161259689616,0.1136415097541>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013975481192 rotate -90.00000120026694*z rotate 106.46757077400329*y Axis_Rotate_Trans(Victor,provi)  translate <0.3844462035046,-0.9161259689616,-0.1136415097541>};
#declare trans[51]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-121.42534098294979>);
#declare Victor=vrotate(Victor,<0,52.33745196915426,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-121.42534098294979>);
#declare Hugo=vrotate(Hugo,<0,52.33745196915426,0>);
#declare transy=<0.7071067559018,0.70710680705065,-1.623863999933306E-7>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000001382680611 rotate -121.42534098294979*z rotate 52.33745196915426*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7071067559018,-0.70710680705065,1.623863999933306E-7>};
#declare trans[52]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.00000120026694>);
#declare Victor=vrotate(Victor,<0,106.46757077400532,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.00000120026694>);
#declare Hugo=vrotate(Hugo,<0,106.46757077400532,0>);
#declare transy=<0.38444614539120003,0.9161259591227,-0.11364153250135>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013975479998 rotate -90.00000120026694*z rotate 106.46757077400532*y Axis_Rotate_Trans(Victor,provi)  translate <-0.38444614539120003,-0.9161259591227,0.11364153250135>};
#declare trans[53]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-106.46756021988537>);
#declare Victor=vrotate(Victor,<0,122.93513392249753,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-106.46756021988537>);
#declare Hugo=vrotate(Hugo,<0,122.93513392249753,0>);
#declare transy=<0.7071066404422,0.38444622798704997,-0.59346548579405>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013607623104 rotate -106.46756021988537*z rotate 122.93513392249753*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7071066404422,-0.38444622798704997,0.59346548579405>};
#declare trans[54]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-58.57466042149596>);
#declare Victor=vrotate(Victor,<0,160.59768839692373,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-58.57466042149596>);
#declare Hugo=vrotate(Hugo,<0,160.59768839692373,0>);
#declare transy=<0.5934652623114,0.70710679865255,-0.38444632538265>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013826195226 rotate -58.57466042149596*z rotate 160.59768839692373*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5934652623114,-0.70710679865255,0.38444632538265>};
#declare trans[55]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-73.53243981616029>);
#declare Victor=vrotate(Victor,<0,-179.99999364725116,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-73.53243981616029>);
#declare Hugo=vrotate(Hugo,<0,-179.99999364725116,0>);
#declare transy=<0.1136412494573,0.3844462244186,-0.9161259736944001>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013314895886 rotate -73.53243981616029*z rotate -179.99999364725116*y Axis_Rotate_Trans(Victor,provi)  translate <-0.1136412494573,-0.3844462244186,0.9161259736944001>};
#declare trans[56]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-36.4033065133091>);
#declare Victor=vrotate(Victor,<0,-118.53243053844842,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-36.4033065133091>);
#declare Hugo=vrotate(Hugo,<0,-118.53243053844842,0>);
#declare transy=<0.3844460299316,0.5934653800591,-0.707106855909>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013191372477 rotate -36.4033065133091*z rotate -118.53243053844842*y Axis_Rotate_Trans(Victor,provi)  translate <-0.3844460299316,-0.5934653800591,0.707106855909>};
#declare trans[57]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-58.574661973223925>);
#declare Victor=vrotate(Victor,<0,-109.40231379188353,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-58.574661973223925>);
#declare Hugo=vrotate(Hugo,<0,-109.40231379188353,0>);
#declare transy=<-0.3844463031214,0.7071068000035501,-0.5934652921553>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000001467552479 rotate -58.574661973223925*z rotate -109.40231379188353*y Axis_Rotate_Trans(Victor,provi)  translate <0.3844463031214,-0.7071068000035501,0.5934652921553>};
#declare trans[58]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-58.57465891357187>);
#declare Victor=vrotate(Victor,<0,-37.662549415256315,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-58.57465891357187>);
#declare Hugo=vrotate(Hugo,<0,-37.662549415256315,0>);
#declare transy=<-1.286734999939032E-7,0.7071067950841,-0.7071068132830001>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000013566184955 rotate -58.57465891357187*z rotate -37.662549415256315*y Axis_Rotate_Trans(Victor,provi)  translate <1.286734999939032E-7,-0.7071067950841,0.7071068132830001>};
#declare trans[59]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.00000070309393>);
#declare Victor=vrotate(Victor,<0,16.46757408427567,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.00000070309393>);
#declare Hugo=vrotate(Hugo,<0,16.46757408427567,0>);
#declare transy=<-0.11364152264710001,0.91612595564405,-0.38444617436990003>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000001444413669 rotate -90.00000070309393*z rotate 16.46757408427567*y Axis_Rotate_Trans(Victor,provi)  translate <0.11364152264710001,-0.91612595564405,0.38444617436990003>};
#declare maxFaces=38;
#declare transface=array[38];
#declare transface[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,28.53245202728702,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,28.53245202728702,0>);
#declare transy=<1.6488800019809347E-8,-0.9161259215252,-1.17424499845864E-8>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.0*z rotate 28.53245202728702*y Axis_Rotate_Trans(Victor,provi)  translate <-1.6488800019809347E-8,0.9161259215252,1.17424499845864E-8>};
#declare transface[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-61.467563793097995>);
#declare Victor=vrotate(Victor,<0,-179.99999918534664,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-61.467563793097995>);
#declare Hugo=vrotate(Hugo,<0,-179.99999918534664,0>);
#declare transy=<1.9077985000115483E-7,-2.226115000669715E-8,0.9161258674459>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -61.467563793097995*z rotate -179.99999918534664*y Axis_Rotate_Trans(Victor,provi)  translate <-1.9077985000115483E-7,2.226115000669715E-8,-0.9161258674459>};
#declare transface[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-61.467555423761155>);
#declare Victor=vrotate(Victor,<0,-89.999968122665,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-61.467555423761155>);
#declare Hugo=vrotate(Hugo,<0,-89.999968122665,0>);
#declare transy=<0.91612610404435,5.738240002606254E-8,-1.3755949998528472E-7>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -61.467555423761155*z rotate -89.999968122665*y Axis_Rotate_Trans(Victor,provi)  translate <-0.91612610404435,-5.738240002606254E-8,1.3755949998528472E-7>};
#declare transface[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-61.46756148448369>);
#declare Victor=vrotate(Victor,<0,90.00000999465799,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-61.46756148448369>);
#declare Hugo=vrotate(Hugo,<0,90.00000999465799,0>);
#declare transy=<-0.91612591148805,-2.169844998123338E-8,2.0665170000211397E-7>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -61.46756148448369*z rotate 90.00000999465799*y Axis_Rotate_Trans(Victor,provi)  translate <0.91612591148805,2.169844998123338E-8,-2.0665170000211397E-7>};
#declare transface[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-61.4675586328334>);
#declare Victor=vrotate(Victor,<0,9.944982139224186E-6,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-61.4675586328334>);
#declare Hugo=vrotate(Hugo,<0,9.944982139224186E-6,0>);
#declare transy=<-1.8784944999516995E-7,3.623020000675936E-8,-0.916125929866>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -61.4675586328334*z rotate 9.944982139224186E-6*y Axis_Rotate_Trans(Victor,provi)  translate <1.8784944999516995E-7,-3.623020000675936E-8,0.916125929866>};
#declare transface[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.00000035155443>);
#declare Victor=vrotate(Victor,<0,151.46757377174117,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.00000035155443>);
#declare Hugo=vrotate(Hugo,<0,151.46757377174117,0>);
#declare transy=<-2.9056699990537282E-8,0.91612596404215,-1.137364999403978E-8>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -90.00000035155443*z rotate 151.46757377174117*y Axis_Rotate_Trans(Victor,provi)  translate <2.9056699990537282E-8,-0.91612596404215,1.137364999403978E-8>};
#declare transface[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-127.01656909587868>);
#declare Victor=vrotate(Victor,<0,73.5324444096661,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-127.01656909587868>);
#declare Hugo=vrotate(Hugo,<0,73.5324444096661,0>);
#declare transy=<-0.1922229687596,-0.70710677261165,0.6502860713938>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -127.01656909587868*z rotate 73.5324444096661*y Axis_Rotate_Trans(Victor,provi)  translate <0.1922229687596,0.70710677261165,-0.6502860713938>};
#declare transface[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-128.92840376202736>);
#declare Victor=vrotate(Victor,<0,157.23497160645866,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-128.92840376202736>);
#declare Hugo=vrotate(Hugo,<0,157.23497160645866,0>);
#declare transy=<0.24904394502,-0.48895574796027497,0.81161630330175>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -128.92840376202736*z rotate 157.23497160645866*y Axis_Rotate_Trans(Victor,provi)  translate <-0.24904394502,0.48895574796027497,-0.81161630330175>};
#declare transface[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-97.89511716210072>);
#declare Victor=vrotate(Victor,<0,-140.6273284786096,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-97.89511716210072>);
#declare Hugo=vrotate(Hugo,<0,-140.6273284786096,0>);
#declare transy=<0.650286172536625,-0.5457764357334249,0.48895565159105>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -97.89511716210072*z rotate -140.6273284786096*y Axis_Rotate_Trans(Victor,provi)  translate <-0.650286172536625,0.5457764357334249,-0.48895565159105>};
#declare transface[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-72.4809429514305>);
#declare Victor=vrotate(Victor,<0,-81.71822756339076,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-72.4809429514305>);
#declare Hugo=vrotate(Hugo,<0,-81.71822756339076,0>);
#declare transy=<0.54577650269685,-0.81161632840635,0.056820599872500016>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -72.4809429514305*z rotate -81.71822756339076*y Axis_Rotate_Trans(Victor,provi)  translate <-0.54577650269685,0.81161632840635,-0.056820599872500016>};
#declare transface[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-127.01653856764361>);
#declare Victor=vrotate(Victor,<0,-16.467538793825234,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-127.01653856764361>);
#declare Hugo=vrotate(Hugo,<0,-16.467538793825234,0>);
#declare transy=<-0.650286280531275,-0.70710684121575,-0.192222986246675>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -127.01653856764361*z rotate -16.467538793825234*y Axis_Rotate_Trans(Victor,provi)  translate <0.650286280531275,0.70710684121575,0.192222986246675>};
#declare transface[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-128.92840597522653>);
#declare Victor=vrotate(Victor,<0,67.23499839199984,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-128.92840597522653>);
#declare Hugo=vrotate(Hugo,<0,67.23499839199984,0>);
#declare transy=<-0.81161638851935,-0.488955808828625,0.24904397381930002>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -128.92840597522653*z rotate 67.23499839199984*y Axis_Rotate_Trans(Victor,provi)  translate <0.81161638851935,0.488955808828625,-0.24904397381930002>};
#declare transface[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-97.89511453490393>);
#declare Victor=vrotate(Victor,<0,129.37267466156268,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-97.89511453490393>);
#declare Hugo=vrotate(Hugo,<0,129.37267466156268,0>);
#declare transy=<-0.488955642004425,-0.5457764863407251,0.650286140782075>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -97.89511453490393*z rotate 129.37267466156268*y Axis_Rotate_Trans(Victor,provi)  translate <0.488955642004425,0.5457764863407251,-0.650286140782075>};
#declare transface[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-160.67771410939486>);
#declare Victor=vrotate(Victor,<0,114.52777512443002,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-160.67771410939486>);
#declare Hugo=vrotate(Hugo,<0,114.52777512443002,0>);
#declare transy=<-0.5457762983945751,-0.05682076064160002,0.811616379772025>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -160.67771410939486*z rotate 114.52777512443002*y Axis_Rotate_Trans(Victor,provi)  translate <0.5457762983945751,0.05682076064160002,-0.811616379772025>};
#declare transface[14]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-103.08179745986318>);
#declare Victor=vrotate(Victor,<0,-141.82346947870997,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-103.08179745986318>);
#declare Hugo=vrotate(Hugo,<0,-141.82346947870997,0>);
#declare transy=<0.6502863722654,0.19222316578870002,0.7071066799361>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -103.08179745986318*z rotate -141.82346947870997*y Axis_Rotate_Trans(Victor,provi)  translate <-0.6502863722654,-0.19222316578870002,-0.7071066799361>};
#declare transface[15]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-44.165480140226215>);
#declare Victor=vrotate(Victor,<0,-115.5976534474486,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-44.165480140226215>);
#declare Hugo=vrotate(Hugo,<0,-115.5976534474486,0>);
#declare transy=<0.8116165507329001,-0.249043734452275,0.488955636403525>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -44.165480140226215*z rotate -115.5976534474486*y Axis_Rotate_Trans(Victor,provi)  translate <-0.8116165507329001,0.249043734452275,-0.488955636403525>};
#declare transface[16]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-40.02990525352144>);
#declare Victor=vrotate(Victor,<0,-20.603962552250678,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-40.02990525352144>);
#declare Hugo=vrotate(Hugo,<0,-20.603962552250678,0>);
#declare transy=<0.7071067423340001,-0.6502860402337001,-0.19222322882197498>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -40.02990525352144*z rotate -20.603962552250678*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7071067423340001,0.6502860402337001,0.19222322882197498>};
#declare transface[17]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-97.89512178150197>);
#declare Victor=vrotate(Victor,<0,-50.627314720017694,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-97.89512178150197>);
#declare Hugo=vrotate(Hugo,<0,-50.627314720017694,0>);
#declare transy=<0.48895561597085,-0.545776439427,-0.6502860737003>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -97.89512178150197*z rotate -50.627314720017694*y Axis_Rotate_Trans(Victor,provi)  translate <-0.48895561597085,0.545776439427,0.6502860737003>};
#declare transface[18]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-72.4809403408621>);
#declare Victor=vrotate(Victor,<0,8.281763314868618,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-72.4809403408621>);
#declare Hugo=vrotate(Hugo,<0,8.281763314868618,0>);
#declare transy=<0.05682060641967501,-0.811616324562425,-0.54577646241145>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -72.4809403408621*z rotate 8.281763314868618*y Axis_Rotate_Trans(Victor,provi)  translate <-0.05682060641967501,0.811616324562425,0.54577646241145>};
#declare transface[19]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-128.92839921469664>);
#declare Victor=vrotate(Victor,<0,-22.765030995065743,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-128.92839921469664>);
#declare Hugo=vrotate(Hugo,<0,-22.765030995065743,0>);
#declare transy=<-0.249043965611,-0.48895573226642497,-0.81161627211835>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -128.92839921469664*z rotate -22.765030995065743*y Axis_Rotate_Trans(Victor,provi)  translate <0.249043965611,0.48895573226642497,0.81161627211835>};
#declare transface[20]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-97.89509735044759>);
#declare Victor=vrotate(Victor,<0,39.37265204339523,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-97.89509735044759>);
#declare Hugo=vrotate(Hugo,<0,39.37265204339523,0>);
#declare transy=<-0.650286345715975,-0.5457765450677501,-0.48895565980489997>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -97.89509735044759*z rotate 39.37265204339523*y Axis_Rotate_Trans(Victor,provi)  translate <0.650286345715975,0.5457765450677501,0.48895565980489997>};
#declare transface[21]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-160.67772297829717>);
#declare Victor=vrotate(Victor,<0,24.527777055905357,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-160.67772297829717>);
#declare Hugo=vrotate(Hugo,<0,24.527777055905357,0>);
#declare transy=<-0.8116165405903,-0.05682075793757499,-0.545776320844825>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -160.67772297829717*z rotate 24.527777055905357*y Axis_Rotate_Trans(Victor,provi)  translate <0.8116165405903,0.05682075793757499,0.545776320844825>};
#declare transface[22]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-103.08179017065129>);
#declare Victor=vrotate(Victor,<0,128.17656391197158,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-103.08179017065129>);
#declare Hugo=vrotate(Hugo,<0,128.17656391197158,0>);
#declare transy=<-0.70710662445805,0.19222304404427498,0.65028611505795>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -103.08179017065129*z rotate 128.17656391197158*y Axis_Rotate_Trans(Victor,provi)  translate <0.70710662445805,-0.19222304404427498,-0.65028611505795>};
#declare transface[23]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-139.97010552601176>);
#declare Victor=vrotate(Victor,<0,-167.6688513243775,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-139.97010552601176>);
#declare Hugo=vrotate(Hugo,<0,-167.6688513243775,0>);
#declare transy=<-0.48895567841722504,0.65028605713785,0.545776525861775>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -139.97010552601176*z rotate -167.6688513243775*y Axis_Rotate_Trans(Victor,provi)  translate <0.48895567841722504,-0.65028605713785,-0.545776525861775>};
#declare transface[24]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-82.10488831769531>);
#declare Victor=vrotate(Victor,<0,162.30779057826518,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-82.10488831769531>);
#declare Hugo=vrotate(Hugo,<0,162.30779057826518,0>);
#declare transy=<-0.056820539432624995,0.5457764736690249,0.811616327055425>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -82.10488831769531*z rotate 162.30779057826518*y Axis_Rotate_Trans(Victor,provi)  translate <0.056820539432624995,-0.5457764736690249,-0.811616327055425>};
#declare transface[25]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-107.51905601817231>);
#declare Victor=vrotate(Victor,<0,-138.78310555643998,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-107.51905601817231>);
#declare Hugo=vrotate(Hugo,<0,-138.78310555643998,0>);
#declare transy=<0.24904388345895,0.81161638291655,0.48895570355297496>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -107.51905601817231*z rotate -138.78310555643998*y Axis_Rotate_Trans(Victor,provi)  translate <-0.24904388345895,-0.81161638291655,-0.48895570355297496>};
#declare transface[26]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-51.07162176731823>);
#declare Victor=vrotate(Victor,<0,-169.82991719911269,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-51.07162176731823>);
#declare Hugo=vrotate(Hugo,<0,-169.82991719911269,0>);
#declare transy=<0.6502863417734001,0.488955838496125,0.54577637246885>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -51.07162176731823*z rotate -169.82991719911269*y Axis_Rotate_Trans(Victor,provi)  translate <-0.6502863417734001,-0.488955838496125,-0.54577637246885>};
#declare transface[27]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-82.1048817934625>);
#declare Victor=vrotate(Victor,<0,-107.69218992846832,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-82.1048817934625>);
#declare Hugo=vrotate(Hugo,<0,-107.69218992846832,0>);
#declare transy=<0.8116164414470499,0.5457765360703,0.056820552353474996>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -82.1048817934625*z rotate -107.69218992846832*y Axis_Rotate_Trans(Victor,provi)  translate <-0.8116164414470499,-0.5457765360703,-0.056820552353474996>};
#declare transface[28]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-103.08179683100661>);
#declare Victor=vrotate(Victor,<0,-51.823446503687734,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-103.08179683100661>);
#declare Hugo=vrotate(Hugo,<0,-51.823446503687734,0>);
#declare transy=<0.707106628968225,0.19222312413327503,-0.650286188120475>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -103.08179683100661*z rotate -51.823446503687734*y Axis_Rotate_Trans(Victor,provi)  translate <-0.707106628968225,-0.19222312413327503,0.650286188120475>};
#declare transface[29]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-44.16548390767965>);
#declare Victor=vrotate(Victor,<0,-25.597651114566585,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-44.16548390767965>);
#declare Hugo=vrotate(Hugo,<0,-25.597651114566585,0>);
#declare transy=<0.48895557898642494,-0.2490437566973,-0.81161635920385>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -44.16548390767965*z rotate -25.597651114566585*y Axis_Rotate_Trans(Victor,provi)  translate <-0.48895557898642494,0.2490437566973,0.81161635920385>};
#declare transface[30]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-103.08178940752185>);
#declare Victor=vrotate(Victor,<0,38.176555793604905,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-103.08178940752185>);
#declare Hugo=vrotate(Hugo,<0,38.176555793604905,0>);
#declare transy=<-0.650286172414425,0.19222309214990002,-0.7071066508471>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -103.08178940752185*z rotate 38.176555793604905*y Axis_Rotate_Trans(Victor,provi)  translate <0.650286172414425,-0.19222309214990002,0.7071066508471>};
#declare transface[31]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-139.97009624280105>);
#declare Victor=vrotate(Victor,<0,102.33115273707472,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-139.97009624280105>);
#declare Hugo=vrotate(Hugo,<0,102.33115273707472,0>);
#declare transy=<-0.545776575428025,0.6502860734038001,-0.48895566300175>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -139.97009624280105*z rotate 102.33115273707472*y Axis_Rotate_Trans(Victor,provi)  translate <0.545776575428025,-0.6502860734038001,0.48895566300175>};
#declare transface[32]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-82.10488366292734>);
#declare Victor=vrotate(Victor,<0,72.30779140330573,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-82.10488366292734>);
#declare Hugo=vrotate(Hugo,<0,72.30779140330573,0>);
#declare transy=<-0.811616381092625,0.545776470924725,-0.0568205752149>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -82.10488366292734*z rotate 72.30779140330573*y Axis_Rotate_Trans(Victor,provi)  translate <0.811616381092625,-0.545776470924725,0.0568205752149>};
#declare transface[33]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-107.51905835764484>);
#declare Victor=vrotate(Victor,<0,131.21688851447863,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-107.51905835764484>);
#declare Hugo=vrotate(Hugo,<0,131.21688851447863,0>);
#declare transy=<-0.48895575784350004,0.811616377582075,0.24904389391925>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -107.51905835764484*z rotate 131.21688851447863*y Axis_Rotate_Trans(Victor,provi)  translate <0.48895575784350004,-0.811616377582075,-0.24904389391925>};
#declare transface[34]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-52.98343122189156>);
#declare Victor=vrotate(Victor,<0,-163.53243012594334,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-52.98343122189156>);
#declare Hugo=vrotate(Hugo,<0,-163.53243012594334,0>);
#declare transy=<0.6502860091066001,0.7071068028516,-0.192223243884525>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -52.98343122189156*z rotate -163.53243012594334*y Axis_Rotate_Trans(Victor,provi)  translate <-0.6502860091066001,-0.7071068028516,0.192223243884525>};
#declare transface[35]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-51.071597680927965>);
#declare Victor=vrotate(Victor,<0,-79.82990072473578,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-51.071597680927965>);
#declare Hugo=vrotate(Hugo,<0,-79.82990072473578,0>);
#declare transy=<0.5457763351868999,0.48895580402307504,-0.6502861708515251>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -51.071597680927965*z rotate -79.82990072473578*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5457763351868999,-0.48895580402307504,0.6502861708515251>};
#declare transface[36]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-82.10488483832016>);
#declare Victor=vrotate(Victor,<0,-17.692208714580573,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-82.10488483832016>);
#declare Hugo=vrotate(Hugo,<0,-17.692208714580573,0>);
#declare transy=<0.056820560391900005,0.5457765097513501,-0.8116163934887>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -82.10488483832016*z rotate -17.692208714580573*y Axis_Rotate_Trans(Victor,provi)  translate <-0.056820560391900005,-0.5457765097513501,0.8116163934887>};
#declare transface[37]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-107.51905442478987>);
#declare Victor=vrotate(Victor,<0,41.21689207859706,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-107.51905442478987>);
#declare Hugo=vrotate(Hugo,<0,41.21689207859706,0>);
#declare transy=<-0.24904391288424998,0.8116163778238,-0.4889557332626>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0 rotate -107.51905442478987*z rotate 41.21689207859706*y Axis_Rotate_Trans(Victor,provi)  translate <0.24904391288424998,-0.8116163778238,0.4889557332626>};
#declare nbVertices=24;
#declare lesVertices=array[nbVertices];
#declare lesVertices[0]=<-0.2708048683775,0.9161259215252,-0.4980875502045>;
#declare lesVertices[1]=<0.4980875230225,0.9161259215252,-0.2708048508213>;
#declare lesVertices[2]=<0.2708046101967,0.4980876236981,-0.9161259422747>;
#declare lesVertices[3]=<-0.4980877609496,0.2708047233089,-0.9161258603639>;
#declare lesVertices[4]=<-0.9161260304097,0.4980875490498,-0.2708045978979>;
#declare lesVertices[5]=<-0.4980875560001,0.9161259215252,0.2708048743062>;
#declare lesVertices[6]=<0.2708048354,0.9161259215252,0.4980875736894>;
#declare lesVertices[7]=<0.9161263818513,0.4980877609063,0.2708046110593>;
#declare lesVertices[8]=<0.9161258246018,0.2708047764415,-0.4980878277576>;
#declare lesVertices[9]=<0.4980873793899,-0.2708046787866,-0.9161258745279>;
#declare lesVertices[10]=<-0.2708049657868,-0.4980876192649,-0.9161258804717>;
#declare lesVertices[11]=<-0.9161263811626,-0.2708048835994,-0.4980874894544>;
#declare lesVertices[12]=<-0.9161258269261,0.2708047688346,0.4980877645734>;
#declare lesVertices[13]=<-0.2708045404786,0.4980875336741,0.9161258279608>;
#declare lesVertices[14]=<0.4980877837613,0.2708047369332,0.9161258434116>;
#declare lesVertices[15]=<0.9161259983743,-0.2708047330446,0.4980874144542>;
#declare lesVertices[16]=<0.9161259144506,-0.4980875950454,-0.2708048834184>;
#declare lesVertices[17]=<0.2708047099142,-0.9161259773597,-0.4980876727504>;
#declare lesVertices[18]=<-0.4980876389816,-0.9161259675208,-0.2708046304949>;
#declare lesVertices[19]=<-0.916125872822,-0.4980876465805,0.2708049552677>;
#declare lesVertices[20]=<-0.4980874080624,-0.2708048093936,0.9161260163204>;
#declare lesVertices[21]=<0.2708049091478,-0.4980876394436,0.9161259310684>;
#declare lesVertices[22]=<0.498087697095,-0.9161259605635,0.2708046532422>;
#declare lesVertices[23]=<-0.2708046518008,-0.9161259507246,0.4980876954976>;
