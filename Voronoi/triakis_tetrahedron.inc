#declare triakis_tetrahedron=mesh2{

vertex_vectors{

8,
<0.0,1.7320511392202,0.0>,
<1.414213102205,-0.5773502567125,-0.8164966228729>,
<-0.0,0.3464099825657,-0.9797959114021>,
<-1.4142134498051,-0.5773503874356,-0.8164964380024>,
<0.8485281688646,0.3464102182877,0.4898978828461>,
<-0.8485281326832,0.3464102278824,0.4898978692772>,
<-5.16803E-8,-0.5773501696387,1.6329934666686>,
<5.4272E-8,-1.0392304533541,1.940944E-7>
 }
normal_vectors{

8,
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
12,
<1,0,2>,// ,0,
<0,3,2>,// ,0,
<1,4,0>,// ,0,
<2,3,1>,// ,0,
<5,3,0>,// ,0,
<6,4,1>,// ,0,
<6,0,4>,// ,0,
<7,1,3>,// ,0,
<5,6,3>,// ,0,
<0,6,5>,// ,0,
<1,7,6>,// ,0,
<3,6,7> //0
 } 
 }
#declare aretes=union{

object{cylinder{<0.0,1.7320511392202,0.0>,<1.414213102205,-0.5773502567125,-0.8164966228729>,diam  }}
object{cylinder{<0.0,1.7320511392202,0.0>,<-0.0,0.3464099825657,-0.9797959114021>,diam  }}
object{cylinder{<0.0,1.7320511392202,0.0>,<-1.4142134498051,-0.5773503874356,-0.8164964380024>,diam  }}
object{cylinder{<0.0,1.7320511392202,0.0>,<0.8485281688646,0.3464102182877,0.4898978828461>,diam  }}
object{cylinder{<0.0,1.7320511392202,0.0>,<-0.8485281326832,0.3464102278824,0.4898978692772>,diam  }}
object{cylinder{<0.0,1.7320511392202,0.0>,<-5.16803E-8,-0.5773501696387,1.6329934666686>,diam  }}
object{cylinder{<1.414213102205,-0.5773502567125,-0.8164966228729>,<-0.0,0.3464099825657,-0.9797959114021>,diam  }}
object{cylinder{<1.414213102205,-0.5773502567125,-0.8164966228729>,<-1.4142134498051,-0.5773503874356,-0.8164964380024>,diam  }}
object{cylinder{<1.414213102205,-0.5773502567125,-0.8164966228729>,<0.8485281688646,0.3464102182877,0.4898978828461>,diam  }}
object{cylinder{<1.414213102205,-0.5773502567125,-0.8164966228729>,<-5.16803E-8,-0.5773501696387,1.6329934666686>,diam  }}
object{cylinder{<1.414213102205,-0.5773502567125,-0.8164966228729>,<5.4272E-8,-1.0392304533541,1.940944E-7>,diam  }}
object{cylinder{<-0.0,0.3464099825657,-0.9797959114021>,<-1.4142134498051,-0.5773503874356,-0.8164964380024>,diam  }}
object{cylinder{<-1.4142134498051,-0.5773503874356,-0.8164964380024>,<-0.8485281326832,0.3464102278824,0.4898978692772>,diam  }}
object{cylinder{<-1.4142134498051,-0.5773503874356,-0.8164964380024>,<-5.16803E-8,-0.5773501696387,1.6329934666686>,diam  }}
object{cylinder{<-1.4142134498051,-0.5773503874356,-0.8164964380024>,<5.4272E-8,-1.0392304533541,1.940944E-7>,diam  }}
object{cylinder{<0.8485281688646,0.3464102182877,0.4898978828461>,<-5.16803E-8,-0.5773501696387,1.6329934666686>,diam  }}
object{cylinder{<-0.8485281326832,0.3464102278824,0.4898978692772>,<-5.16803E-8,-0.5773501696387,1.6329934666686>,diam  }}
object{cylinder{<-5.16803E-8,-0.5773501696387,1.6329934666686>,<5.4272E-8,-1.0392304533541,1.940944E-7>,diam  }}
}
#declare sommets=union{

object{sphere{<0.0,1.7320511392202,0.0>,diam1 }}
object{sphere{<1.414213102205,-0.5773502567125,-0.8164966228729>,diam1 }}
object{sphere{<-0.0,0.3464099825657,-0.9797959114021>,diam1 }}
object{sphere{<-1.4142134498051,-0.5773503874356,-0.8164964380024>,diam1 }}
object{sphere{<0.8485281688646,0.3464102182877,0.4898978828461>,diam1 }}
object{sphere{<-0.8485281326832,0.3464102278824,0.4898978692772>,diam1 }}
object{sphere{<-5.16803E-8,-0.5773501696387,1.6329934666686>,diam1 }}
object{sphere{<5.4272E-8,-1.0392304533541,1.940944E-7>,diam1 }}
}
#declare maxIndices=18;
#declare trans=array[18];
#declare trans[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-35.26437970533003>);
#declare Victor=vrotate(Victor,<0,-149.9999906526546,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-35.26437970533003>);
#declare Hugo=vrotate(Hugo,<0,-149.9999906526546,0>);
#declare transy=<-0.7071065511025,-0.57735044125385,0.40824831143645>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999989985169749 rotate -35.26437970533003*z rotate -149.9999906526546*y Axis_Rotate_Trans(Victor,provi)  translate <0.7071065511025,0.57735044125385,-0.40824831143645>};
#declare trans[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-35.26438012383132>);
#declare Victor=vrotate(Victor,<0,-90.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-35.26438012383132>);
#declare Hugo=vrotate(Hugo,<0,-90.0,0>);
#declare transy=<-0.0,-1.03923056089295,0.48989795570105>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.5999995403810806 rotate -35.26438012383132*z rotate -90.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.0,1.03923056089295,-0.48989795570105>};
#declare trans[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-35.264381626602514>);
#declare Victor=vrotate(Victor,<0,-29.999997631917534,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-35.264381626602514>);
#declare Hugo=vrotate(Hugo,<0,-29.999997631917534,0>);
#declare transy=<0.70710672490255,-0.5773503758923,0.4082482190012>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999990788327229 rotate -35.264381626602514*z rotate -29.999997631917534*y Axis_Rotate_Trans(Victor,provi)  translate <-0.70710672490255,0.5773503758923,-0.4082482190012>};
#declare trans[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-35.26438416961927>);
#declare Victor=vrotate(Victor,<0,150.00000424704933,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-35.26438416961927>);
#declare Hugo=vrotate(Hugo,<0,150.00000424704933,0>);
#declare transy=<-0.4242640844323,-1.03923067875395,-0.24494894142305>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.599999468268811 rotate -35.26438416961927*z rotate 150.00000424704933*y Axis_Rotate_Trans(Victor,provi)  translate <0.4242640844323,1.03923067875395,0.24494894142305>};
#declare trans[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-35.26438330585272>);
#declare Victor=vrotate(Victor,<0,29.999996123678116,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-35.26438330585272>);
#declare Hugo=vrotate(Hugo,<0,29.999996123678116,0>);
#declare transy=<0.4242640663416,-1.0392306835513,-0.2449489346386>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.5999994577181729 rotate -35.26438330585272*z rotate 29.999996123678116*y Axis_Rotate_Trans(Victor,provi)  translate <-0.4242640663416,1.0392306835513,0.2449489346386>};
#declare trans[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-35.2643920098042>);
#declare Victor=vrotate(Victor,<0,89.99999818672694,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-35.2643920098042>);
#declare Hugo=vrotate(Hugo,<0,89.99999818672694,0>);
#declare transy=<2.584015E-8,-0.57735048479075,-0.8164967333343>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999991126665062 rotate -35.2643920098042*z rotate 89.99999818672694*y Axis_Rotate_Trans(Victor,provi)  translate <-2.584015E-8,0.57735048479075,0.8164967333343>};
#declare trans[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-122.9789650848899>);
#declare Victor=vrotate(Victor,<0,-6.586776572321141,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-122.9789650848899>);
#declare Hugo=vrotate(Hugo,<0,-6.586776572321141,0>);
#declare transy=<-0.7071065511025,0.11547013707339998,0.8981462671375>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.5999992167083469 rotate -122.9789650848899*z rotate -6.586776572321141*y Axis_Rotate_Trans(Victor,provi)  translate <0.7071065511025,-0.11547013707339998,-0.8981462671375>};
#declare trans[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-89.99999735192634>);
#declare Victor=vrotate(Victor,<0,3.7449441280586527E-6,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-89.99999735192634>);
#declare Hugo=vrotate(Hugo,<0,3.7449441280586527E-6,0>);
#declare transy=<1.7380005001843557E-7,0.5773503220740499,0.81649653043765>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999987809527225 rotate -89.99999735192634*z rotate 3.7449441280586527E-6*y Axis_Rotate_Trans(Victor,provi)  translate <-1.7380005001843557E-7,-0.5773503220740499,-0.81649653043765>};
#declare trans[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-122.97896729246584>);
#declare Victor=vrotate(Victor,<0,66.5867933301579,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-122.97896729246584>);
#declare Hugo=vrotate(Hugo,<0,66.5867933301579,0>);
#declare transy=<-1.1313706355347999,0.11547001921239997,0.16329937001340003>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.5999993341874132 rotate -122.97896729246584*z rotate 66.5867933301579*y Axis_Rotate_Trans(Victor,provi)  translate <1.1313706355347999,-0.11547001921239997,-0.16329937001340003>};
#declare trans[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.00000176386412>);
#declare Victor=vrotate(Victor,<0,60.00001067833573,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.00000176386412>);
#declare Hugo=vrotate(Hugo,<0,60.00001067833573,0>);
#declare transy=<-0.70710652526235,0.5773502131756,-0.40824842189784993>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.99999901740678 rotate -90.00000176386412*z rotate 60.00001067833573*y Axis_Rotate_Trans(Victor,provi)  translate <0.70710652526235,-0.5773502131756,0.40824842189784993>};
#declare trans[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-74.20682855025586>);
#declare Victor=vrotate(Victor,<0,30.000016197139363,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-74.20682855025586>);
#declare Hugo=vrotate(Hugo,<0,30.000016197139363,0>);
#declare transy=<-0.7071065782385,0.8082903550332999,0.40824821438925>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.5999992768497179 rotate -74.20682855025586*z rotate 30.000016197139363*y Axis_Rotate_Trans(Victor,provi)  translate <0.7071065782385,-0.8082903550332999,-0.40824821438925>};
#declare trans[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-57.02103794841175>);
#declare Victor=vrotate(Victor,<0,6.58678235891727,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-57.02103794841175>);
#declare Hugo=vrotate(Hugo,<0,6.58678235891727,0>);
#declare transy=<0.70710672490255,0.11547020243494999,0.89814617470225>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.5999993505679689 rotate -57.02103794841175*z rotate 6.58678235891727*y Axis_Rotate_Trans(Victor,provi)  translate <-0.70710672490255,-0.11547020243494999,-0.89814617470225>};
#declare trans[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-122.97897181052353>);
#declare Victor=vrotate(Victor,<0,113.41322401758366,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-122.97897181052353>);
#declare Hugo=vrotate(Hugo,<0,113.41322401758366,0>);
#declare transy=<1.13137079124415,0.11547007977659998,0.1632992843626>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.5999993524122734 rotate -122.97897181052353*z rotate 113.41322401758366*y Axis_Rotate_Trans(Victor,provi)  translate <-1.13137079124415,-0.11547007977659998,-0.1632992843626>};
#declare trans[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.00000441193723>);
#declare Victor=vrotate(Victor,<0,119.99999547887273,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.00000441193723>);
#declare Hugo=vrotate(Hugo,<0,119.99999547887273,0>);
#declare transy=<0.7071067507427,0.57735027853715,-0.40824851433309994>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.9999990039778345 rotate -90.00000441193723*z rotate 119.99999547887273*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7071067507427,-0.57735027853715,0.40824851433309994>};
#declare trans[14]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-74.2068355776142>);
#declare Victor=vrotate(Victor,<0,149.99999742249608,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-74.2068355776142>);
#declare Hugo=vrotate(Hugo,<0,149.99999742249608,0>);
#declare transy=<0.70710669776655,0.80829042039485,0.408248121954>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.5999993672164033 rotate -74.2068355776142*z rotate 149.99999742249608*y Axis_Rotate_Trans(Victor,provi)  translate <-0.70710669776655,-0.80829042039485,-0.408248121954>};
#declare trans[15]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-57.0210455424906>);
#declare Victor=vrotate(Victor,<0,53.41323064857603,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-57.0210455424906>);
#declare Hugo=vrotate(Hugo,<0,53.41323064857603,0>);
#declare transy=<-0.42426405859215,0.11546997567549999,-1.06144567475735>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.599999484766819 rotate -57.0210455424906*z rotate 53.41323064857603*y Axis_Rotate_Trans(Victor,provi)  translate <0.42426405859215,-0.11546997567549999,1.06144567475735>};
#declare trans[16]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-57.021043942465816>);
#declare Victor=vrotate(Victor,<0,126.58676451643204,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-57.021043942465816>);
#declare Hugo=vrotate(Hugo,<0,126.58676451643204,0>);
#declare transy=<0.42426409218175004,0.11546997087815,-1.0614456679729>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.599999465176933 rotate -57.021043942465816*z rotate 126.58676451643204*y Axis_Rotate_Trans(Victor,provi)  translate <-0.42426409218175004,-0.11546997087815,1.0614456679729>};
#declare trans[17]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-74.20682974815367>);
#declare Victor=vrotate(Victor,<0,-90.00000371747988,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-74.20682974815367>);
#declare Hugo=vrotate(Hugo,<0,-90.00000371747988,0>);
#declare transy=<-1.295849999999999E-9,0.8082903114964,-0.8164968303815>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.5999994343127193 rotate -74.20682974815367*z rotate -90.00000371747988*y Axis_Rotate_Trans(Victor,provi)  translate <1.295849999999999E-9,-0.8082903114964,0.8164968303815>};
