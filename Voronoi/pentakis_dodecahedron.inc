#declare pentakis_dodecahedron=mesh2{

vertex_vectors{

32,
<0.2017741,0.381966,0.9794321>,
<-0.4292385,-0.04863268,0.9794321>,
<0.2017741,-0.295686,0.9794321>,
<0.7814061,-0.04863268,0.7300256>,
<-0.4035482,0.591372,0.758194>,
<-0.2395937,-0.745356,0.7300256>,
<0.6703638,0.591372,0.536956>,
<0.5086258,-0.745356,0.5758839>,
<-0.9219869,0.254644,0.4806191>,
<0.09901297,0.9513673,0.4806191>,
<-0.7950671,-0.408628,0.536956>,
<1.036877,0.254644,0.07707085>,
<0.9425591,-0.408628,0.1789853>,
<-0.5955095,0.872678,0.1723357>,
<0.03687301,-1.026662,0.1789853>,
<-0.6151351,-0.872678,0.07707085>,
<0.6151351,0.872678,-0.07707085>,
<0.5955095,-0.872678,-0.1723357>,
<-0.9425591,0.408628,-0.1789853>,
<-1.036877,-0.254644,-0.07707085>,
<-0.03687301,1.026662,-0.1789853>,
<0.7950671,0.408628,-0.536956>,
<0.9219869,-0.254644,-0.4806191>,
<-0.5086258,0.745356,-0.5758839>,
<-0.09901297,-0.9513673,-0.4806191>,
<-0.6703638,-0.591372,-0.536956>,
<0.2395937,0.745356,-0.7300256>,
<0.4035482,-0.591372,-0.758194>,
<-0.7814061,0.04863268,-0.7300256>,
<0.4292385,0.04863268,-0.9794321>,
<-0.2017741,0.295686,-0.9794321>,
<-0.2017741,-0.381966,-0.9794321>
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
f=NMesh.Face()
f.v.append(me.verts[1])
f.v.append(me.verts[0])
f.v.append(me.verts[2]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[0])
f.v.append(me.verts[3])
f.v.append(me.verts[2]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[1])
f.v.append(me.verts[4])
f.v.append(me.verts[0]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[2])
f.v.append(me.verts[5])
f.v.append(me.verts[1]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[6])
f.v.append(me.verts[3])
f.v.append(me.verts[0]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[7])
f.v.append(me.verts[2])
f.v.append(me.verts[3]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[8])
f.v.append(me.verts[4])
f.v.append(me.verts[1]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[9])
f.v.append(me.verts[0])
f.v.append(me.verts[4]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[7])
f.v.append(me.verts[5])
f.v.append(me.verts[2]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[10])
f.v.append(me.verts[1])
f.v.append(me.verts[5]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[6])
f.v.append(me.verts[11])
f.v.append(me.verts[3]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[0])
f.v.append(me.verts[9])
f.v.append(me.verts[6]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[3])
f.v.append(me.verts[12])
f.v.append(me.verts[7]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[8])
f.v.append(me.verts[13])
f.v.append(me.verts[4]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[1])
f.v.append(me.verts[10])
f.v.append(me.verts[8]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[4])
f.v.append(me.verts[13])
f.v.append(me.verts[9]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[7])
f.v.append(me.verts[14])
f.v.append(me.verts[5]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[5])
f.v.append(me.verts[15])
f.v.append(me.verts[10]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[16])
f.v.append(me.verts[11])
f.v.append(me.verts[6]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[12])
f.v.append(me.verts[3])
f.v.append(me.verts[11]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[16])
f.v.append(me.verts[6])
f.v.append(me.verts[9]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[17])
f.v.append(me.verts[7])
f.v.append(me.verts[12]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[18])
f.v.append(me.verts[13])
f.v.append(me.verts[8]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[19])
f.v.append(me.verts[8])
f.v.append(me.verts[10]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[20])
f.v.append(me.verts[9])
f.v.append(me.verts[13]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[17])
f.v.append(me.verts[14])
f.v.append(me.verts[7]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[15])
f.v.append(me.verts[5])
f.v.append(me.verts[14]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[19])
f.v.append(me.verts[10])
f.v.append(me.verts[15]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[16])
f.v.append(me.verts[21])
f.v.append(me.verts[11]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[11])
f.v.append(me.verts[22])
f.v.append(me.verts[12]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[9])
f.v.append(me.verts[20])
f.v.append(me.verts[16]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[12])
f.v.append(me.verts[22])
f.v.append(me.verts[17]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[18])
f.v.append(me.verts[23])
f.v.append(me.verts[13]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[8])
f.v.append(me.verts[19])
f.v.append(me.verts[18]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[13])
f.v.append(me.verts[23])
f.v.append(me.verts[20]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[17])
f.v.append(me.verts[24])
f.v.append(me.verts[14]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[14])
f.v.append(me.verts[24])
f.v.append(me.verts[15]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[15])
f.v.append(me.verts[25])
f.v.append(me.verts[19]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[26])
f.v.append(me.verts[21])
f.v.append(me.verts[16]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[22])
f.v.append(me.verts[11])
f.v.append(me.verts[21]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[26])
f.v.append(me.verts[16])
f.v.append(me.verts[20]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[27])
f.v.append(me.verts[17])
f.v.append(me.verts[22]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[28])
f.v.append(me.verts[23])
f.v.append(me.verts[18]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[28])
f.v.append(me.verts[18])
f.v.append(me.verts[19]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[26])
f.v.append(me.verts[20])
f.v.append(me.verts[23]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[27])
f.v.append(me.verts[24])
f.v.append(me.verts[17]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[25])
f.v.append(me.verts[15])
f.v.append(me.verts[24]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[28])
f.v.append(me.verts[19])
f.v.append(me.verts[25]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[26])
f.v.append(me.verts[29])
f.v.append(me.verts[21]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[21])
f.v.append(me.verts[29])
f.v.append(me.verts[22]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[22])
f.v.append(me.verts[29])
f.v.append(me.verts[27]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[28])
f.v.append(me.verts[30])
f.v.append(me.verts[23]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[23])
f.v.append(me.verts[30])
f.v.append(me.verts[26]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[27])
f.v.append(me.verts[31])
f.v.append(me.verts[24]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[24])
f.v.append(me.verts[31])
f.v.append(me.verts[25]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[25])
f.v.append(me.verts[31])
f.v.append(me.verts[28]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[30])
f.v.append(me.verts[29])
f.v.append(me.verts[26]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[31])
f.v.append(me.verts[27])
f.v.append(me.verts[29]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[31])
f.v.append(me.verts[30])
f.v.append(me.verts[28]),// ,0,
f=NMesh.Face()
f.v.append(me.verts[30])
f.v.append(me.verts[31])
f.v.append(me.verts[29]) //0
 } 
 }
#declare aretes=union{

object{cylinder{<0.2017741,0.381966,0.9794321>,<-0.4292385,-0.04863268,0.9794321>,diam  }}
object{cylinder{<0.2017741,0.381966,0.9794321>,<0.2017741,-0.295686,0.9794321>,diam  }}
object{cylinder{<0.2017741,0.381966,0.9794321>,<0.7814061,-0.04863268,0.7300256>,diam  }}
object{cylinder{<0.2017741,0.381966,0.9794321>,<-0.4035482,0.591372,0.758194>,diam  }}
object{cylinder{<0.2017741,0.381966,0.9794321>,<0.6703638,0.591372,0.536956>,diam  }}
object{cylinder{<0.2017741,0.381966,0.9794321>,<0.09901297,0.9513673,0.4806191>,diam  }}
object{cylinder{<-0.4292385,-0.04863268,0.9794321>,<0.2017741,-0.295686,0.9794321>,diam  }}
object{cylinder{<-0.4292385,-0.04863268,0.9794321>,<-0.4035482,0.591372,0.758194>,diam  }}
object{cylinder{<-0.4292385,-0.04863268,0.9794321>,<-0.2395937,-0.745356,0.7300256>,diam  }}
object{cylinder{<-0.4292385,-0.04863268,0.9794321>,<-0.9219869,0.254644,0.4806191>,diam  }}
object{cylinder{<-0.4292385,-0.04863268,0.9794321>,<-0.7950671,-0.408628,0.536956>,diam  }}
object{cylinder{<0.2017741,-0.295686,0.9794321>,<0.7814061,-0.04863268,0.7300256>,diam  }}
object{cylinder{<0.2017741,-0.295686,0.9794321>,<-0.2395937,-0.745356,0.7300256>,diam  }}
object{cylinder{<0.2017741,-0.295686,0.9794321>,<0.5086258,-0.745356,0.5758839>,diam  }}
object{cylinder{<0.7814061,-0.04863268,0.7300256>,<0.6703638,0.591372,0.536956>,diam  }}
object{cylinder{<0.7814061,-0.04863268,0.7300256>,<0.5086258,-0.745356,0.5758839>,diam  }}
object{cylinder{<0.7814061,-0.04863268,0.7300256>,<1.036877,0.254644,0.07707085>,diam  }}
object{cylinder{<0.7814061,-0.04863268,0.7300256>,<0.9425591,-0.408628,0.1789853>,diam  }}
object{cylinder{<-0.4035482,0.591372,0.758194>,<-0.9219869,0.254644,0.4806191>,diam  }}
object{cylinder{<-0.4035482,0.591372,0.758194>,<0.09901297,0.9513673,0.4806191>,diam  }}
object{cylinder{<-0.4035482,0.591372,0.758194>,<-0.5955095,0.872678,0.1723357>,diam  }}
object{cylinder{<-0.2395937,-0.745356,0.7300256>,<0.5086258,-0.745356,0.5758839>,diam  }}
object{cylinder{<-0.2395937,-0.745356,0.7300256>,<-0.7950671,-0.408628,0.536956>,diam  }}
object{cylinder{<-0.2395937,-0.745356,0.7300256>,<0.03687301,-1.026662,0.1789853>,diam  }}
object{cylinder{<-0.2395937,-0.745356,0.7300256>,<-0.6151351,-0.872678,0.07707085>,diam  }}
object{cylinder{<0.6703638,0.591372,0.536956>,<0.09901297,0.9513673,0.4806191>,diam  }}
object{cylinder{<0.6703638,0.591372,0.536956>,<1.036877,0.254644,0.07707085>,diam  }}
object{cylinder{<0.6703638,0.591372,0.536956>,<0.6151351,0.872678,-0.07707085>,diam  }}
object{cylinder{<0.5086258,-0.745356,0.5758839>,<0.9425591,-0.408628,0.1789853>,diam  }}
object{cylinder{<0.5086258,-0.745356,0.5758839>,<0.03687301,-1.026662,0.1789853>,diam  }}
object{cylinder{<0.5086258,-0.745356,0.5758839>,<0.5955095,-0.872678,-0.1723357>,diam  }}
object{cylinder{<-0.9219869,0.254644,0.4806191>,<-0.7950671,-0.408628,0.536956>,diam  }}
object{cylinder{<-0.9219869,0.254644,0.4806191>,<-0.5955095,0.872678,0.1723357>,diam  }}
object{cylinder{<-0.9219869,0.254644,0.4806191>,<-0.9425591,0.408628,-0.1789853>,diam  }}
object{cylinder{<-0.9219869,0.254644,0.4806191>,<-1.036877,-0.254644,-0.07707085>,diam  }}
object{cylinder{<0.09901297,0.9513673,0.4806191>,<-0.5955095,0.872678,0.1723357>,diam  }}
object{cylinder{<0.09901297,0.9513673,0.4806191>,<0.6151351,0.872678,-0.07707085>,diam  }}
object{cylinder{<0.09901297,0.9513673,0.4806191>,<-0.03687301,1.026662,-0.1789853>,diam  }}
object{cylinder{<-0.7950671,-0.408628,0.536956>,<-0.6151351,-0.872678,0.07707085>,diam  }}
object{cylinder{<-0.7950671,-0.408628,0.536956>,<-1.036877,-0.254644,-0.07707085>,diam  }}
object{cylinder{<1.036877,0.254644,0.07707085>,<0.9425591,-0.408628,0.1789853>,diam  }}
object{cylinder{<1.036877,0.254644,0.07707085>,<0.6151351,0.872678,-0.07707085>,diam  }}
object{cylinder{<1.036877,0.254644,0.07707085>,<0.7950671,0.408628,-0.536956>,diam  }}
object{cylinder{<1.036877,0.254644,0.07707085>,<0.9219869,-0.254644,-0.4806191>,diam  }}
object{cylinder{<0.9425591,-0.408628,0.1789853>,<0.5955095,-0.872678,-0.1723357>,diam  }}
object{cylinder{<0.9425591,-0.408628,0.1789853>,<0.9219869,-0.254644,-0.4806191>,diam  }}
object{cylinder{<-0.5955095,0.872678,0.1723357>,<-0.9425591,0.408628,-0.1789853>,diam  }}
object{cylinder{<-0.5955095,0.872678,0.1723357>,<-0.03687301,1.026662,-0.1789853>,diam  }}
object{cylinder{<-0.5955095,0.872678,0.1723357>,<-0.5086258,0.745356,-0.5758839>,diam  }}
object{cylinder{<0.03687301,-1.026662,0.1789853>,<-0.6151351,-0.872678,0.07707085>,diam  }}
object{cylinder{<0.03687301,-1.026662,0.1789853>,<0.5955095,-0.872678,-0.1723357>,diam  }}
object{cylinder{<0.03687301,-1.026662,0.1789853>,<-0.09901297,-0.9513673,-0.4806191>,diam  }}
object{cylinder{<-0.6151351,-0.872678,0.07707085>,<-1.036877,-0.254644,-0.07707085>,diam  }}
object{cylinder{<-0.6151351,-0.872678,0.07707085>,<-0.09901297,-0.9513673,-0.4806191>,diam  }}
object{cylinder{<-0.6151351,-0.872678,0.07707085>,<-0.6703638,-0.591372,-0.536956>,diam  }}
object{cylinder{<0.6151351,0.872678,-0.07707085>,<-0.03687301,1.026662,-0.1789853>,diam  }}
object{cylinder{<0.6151351,0.872678,-0.07707085>,<0.7950671,0.408628,-0.536956>,diam  }}
object{cylinder{<0.6151351,0.872678,-0.07707085>,<0.2395937,0.745356,-0.7300256>,diam  }}
object{cylinder{<0.5955095,-0.872678,-0.1723357>,<0.9219869,-0.254644,-0.4806191>,diam  }}
object{cylinder{<0.5955095,-0.872678,-0.1723357>,<-0.09901297,-0.9513673,-0.4806191>,diam  }}
object{cylinder{<0.5955095,-0.872678,-0.1723357>,<0.4035482,-0.591372,-0.758194>,diam  }}
object{cylinder{<-0.9425591,0.408628,-0.1789853>,<-1.036877,-0.254644,-0.07707085>,diam  }}
object{cylinder{<-0.9425591,0.408628,-0.1789853>,<-0.5086258,0.745356,-0.5758839>,diam  }}
object{cylinder{<-0.9425591,0.408628,-0.1789853>,<-0.7814061,0.04863268,-0.7300256>,diam  }}
object{cylinder{<-1.036877,-0.254644,-0.07707085>,<-0.6703638,-0.591372,-0.536956>,diam  }}
object{cylinder{<-1.036877,-0.254644,-0.07707085>,<-0.7814061,0.04863268,-0.7300256>,diam  }}
object{cylinder{<-0.03687301,1.026662,-0.1789853>,<-0.5086258,0.745356,-0.5758839>,diam  }}
object{cylinder{<-0.03687301,1.026662,-0.1789853>,<0.2395937,0.745356,-0.7300256>,diam  }}
object{cylinder{<0.7950671,0.408628,-0.536956>,<0.9219869,-0.254644,-0.4806191>,diam  }}
object{cylinder{<0.7950671,0.408628,-0.536956>,<0.2395937,0.745356,-0.7300256>,diam  }}
object{cylinder{<0.7950671,0.408628,-0.536956>,<0.4292385,0.04863268,-0.9794321>,diam  }}
object{cylinder{<0.9219869,-0.254644,-0.4806191>,<0.4035482,-0.591372,-0.758194>,diam  }}
object{cylinder{<0.9219869,-0.254644,-0.4806191>,<0.4292385,0.04863268,-0.9794321>,diam  }}
object{cylinder{<-0.5086258,0.745356,-0.5758839>,<0.2395937,0.745356,-0.7300256>,diam  }}
object{cylinder{<-0.5086258,0.745356,-0.5758839>,<-0.7814061,0.04863268,-0.7300256>,diam  }}
object{cylinder{<-0.5086258,0.745356,-0.5758839>,<-0.2017741,0.295686,-0.9794321>,diam  }}
object{cylinder{<-0.09901297,-0.9513673,-0.4806191>,<-0.6703638,-0.591372,-0.536956>,diam  }}
object{cylinder{<-0.09901297,-0.9513673,-0.4806191>,<0.4035482,-0.591372,-0.758194>,diam  }}
object{cylinder{<-0.09901297,-0.9513673,-0.4806191>,<-0.2017741,-0.381966,-0.9794321>,diam  }}
object{cylinder{<-0.6703638,-0.591372,-0.536956>,<-0.7814061,0.04863268,-0.7300256>,diam  }}
object{cylinder{<-0.6703638,-0.591372,-0.536956>,<-0.2017741,-0.381966,-0.9794321>,diam  }}
object{cylinder{<0.2395937,0.745356,-0.7300256>,<0.4292385,0.04863268,-0.9794321>,diam  }}
object{cylinder{<0.2395937,0.745356,-0.7300256>,<-0.2017741,0.295686,-0.9794321>,diam  }}
object{cylinder{<0.4035482,-0.591372,-0.758194>,<0.4292385,0.04863268,-0.9794321>,diam  }}
object{cylinder{<0.4035482,-0.591372,-0.758194>,<-0.2017741,-0.381966,-0.9794321>,diam  }}
object{cylinder{<-0.7814061,0.04863268,-0.7300256>,<-0.2017741,0.295686,-0.9794321>,diam  }}
object{cylinder{<-0.7814061,0.04863268,-0.7300256>,<-0.2017741,-0.381966,-0.9794321>,diam  }}
object{cylinder{<0.4292385,0.04863268,-0.9794321>,<-0.2017741,0.295686,-0.9794321>,diam  }}
object{cylinder{<0.4292385,0.04863268,-0.9794321>,<-0.2017741,-0.381966,-0.9794321>,diam  }}
object{cylinder{<-0.2017741,0.295686,-0.9794321>,<-0.2017741,-0.381966,-0.9794321>,diam  }}
}
#declare sommets=union{

object{sphere{<0.2017741,0.381966,0.9794321>,diam1 }}
object{sphere{<-0.4292385,-0.04863268,0.9794321>,diam1 }}
object{sphere{<0.2017741,-0.295686,0.9794321>,diam1 }}
object{sphere{<0.7814061,-0.04863268,0.7300256>,diam1 }}
object{sphere{<-0.4035482,0.591372,0.758194>,diam1 }}
object{sphere{<-0.2395937,-0.745356,0.7300256>,diam1 }}
object{sphere{<0.6703638,0.591372,0.536956>,diam1 }}
object{sphere{<0.5086258,-0.745356,0.5758839>,diam1 }}
object{sphere{<-0.9219869,0.254644,0.4806191>,diam1 }}
object{sphere{<0.09901297,0.9513673,0.4806191>,diam1 }}
object{sphere{<-0.7950671,-0.408628,0.536956>,diam1 }}
object{sphere{<1.036877,0.254644,0.07707085>,diam1 }}
object{sphere{<0.9425591,-0.408628,0.1789853>,diam1 }}
object{sphere{<-0.5955095,0.872678,0.1723357>,diam1 }}
object{sphere{<0.03687301,-1.026662,0.1789853>,diam1 }}
object{sphere{<-0.6151351,-0.872678,0.07707085>,diam1 }}
object{sphere{<0.6151351,0.872678,-0.07707085>,diam1 }}
object{sphere{<0.5955095,-0.872678,-0.1723357>,diam1 }}
object{sphere{<-0.9425591,0.408628,-0.1789853>,diam1 }}
object{sphere{<-1.036877,-0.254644,-0.07707085>,diam1 }}
object{sphere{<-0.03687301,1.026662,-0.1789853>,diam1 }}
object{sphere{<0.7950671,0.408628,-0.536956>,diam1 }}
object{sphere{<0.9219869,-0.254644,-0.4806191>,diam1 }}
object{sphere{<-0.5086258,0.745356,-0.5758839>,diam1 }}
object{sphere{<-0.09901297,-0.9513673,-0.4806191>,diam1 }}
object{sphere{<-0.6703638,-0.591372,-0.536956>,diam1 }}
object{sphere{<0.2395937,0.745356,-0.7300256>,diam1 }}
object{sphere{<0.4035482,-0.591372,-0.758194>,diam1 }}
object{sphere{<-0.7814061,0.04863268,-0.7300256>,diam1 }}
object{sphere{<0.4292385,0.04863268,-0.9794321>,diam1 }}
object{sphere{<-0.2017741,0.295686,-0.9794321>,diam1 }}
object{sphere{<-0.2017741,-0.381966,-0.9794321>,diam1 }}
}
#declare maxIndices=90;
#declare trans=array[90];
#declare trans[0]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-55.69064001754826>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-55.69064001754826>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<0.1137322,-0.16666666000000002,-0.9794321>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026385625864 rotate -55.69064001754826*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.1137322,0.16666666000000002,0.9794321>};
#declare trans[1]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-0.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-0.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.2017741,-0.04314000000000001,-0.9794321>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.887060332753001 rotate -0.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.2017741,0.04314000000000001,0.9794321>};
#declare trans[2]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-55.690638553939834>);
#declare Victor=vrotate(Victor,<0,-156.7185534147008,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-55.690638553939834>);
#declare Hugo=vrotate(Hugo,<0,-156.7185534147008,0>);
#declare transy=<-0.49159010000000003,-0.16666666000000002,-0.8547288500000001>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026011283714 rotate -55.690638553939834*z rotate -156.7185534147008*y Axis_Rotate_Trans(Victor,provi)  translate <0.49159010000000003,0.16666666000000002,0.8547288500000001>};
#declare trans[3]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-108.00000092186424>);
#declare Victor=vrotate(Victor,<0,-20.07675679274157,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-108.00000092186424>);
#declare Hugo=vrotate(Hugo,<0,-20.07675679274157,0>);
#declare transy=<0.10088705,-0.486669,-0.86881305>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603554513465 rotate -108.00000092186424*z rotate -20.07675679274157*y Axis_Rotate_Trans(Victor,provi)  translate <-0.10088705,0.486669,0.86881305>};
#declare trans[4]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-108.00000047088764>);
#declare Victor=vrotate(Victor,<0,-136.64180187163623,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-108.00000047088764>);
#declare Hugo=vrotate(Hugo,<0,-136.64180187163623,0>);
#declare transy=<-0.43606895,-0.486669,-0.75819405>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603769399643 rotate -108.00000047088764*z rotate -136.64180187163623*y Axis_Rotate_Trans(Victor,provi)  translate <0.43606895,0.486669,0.75819405>};
#declare trans[5]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-138.1896858476384>);
#declare Victor=vrotate(Victor,<0,-78.35927679088381,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-138.1896858476384>);
#declare Hugo=vrotate(Hugo,<0,-78.35927679088381,0>);
#declare transy=<-0.15039353500000002,-0.66666665,-0.7300256>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026168633538 rotate -138.1896858476384*z rotate -78.35927679088381*y Axis_Rotate_Trans(Victor,provi)  translate <0.15039353500000002,0.66666665,0.7300256>};
#declare trans[6]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-68.61872098678411>);
#declare Victor=vrotate(Victor,<0,-180.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-68.61872098678411>);
#declare Hugo=vrotate(Hugo,<0,-180.0,0>);
#declare transy=<0.1137322,0.17215934,-0.9794321>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603435490628 rotate -68.61872098678411*z rotate -180.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.1137322,-0.17215934,0.9794321>};
#declare trans[7]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-160.81185877965743>);
#declare Victor=vrotate(Victor,<0,-96.623555696289,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-160.81185877965743>);
#declare Hugo=vrotate(Hugo,<0,-96.623555696289,0>);
#declare transy=<0.41639335,-0.27136966,-0.86881305>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603769151443 rotate -160.81185877965743*z rotate -96.623555696289*y Axis_Rotate_Trans(Victor,provi)  translate <-0.41639335,0.27136966,0.86881305>};
#declare trans[8]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-24.213617395833094>);
#declare Victor=vrotate(Victor,<0,-127.24879043198169,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-24.213617395833094>);
#declare Hugo=vrotate(Hugo,<0,-127.24879043198169,0>);
#declare transy=<0.3344161,0.39699434,-0.8547288500000001>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026492418284 rotate -24.213617395833094*z rotate -127.24879043198169*y Axis_Rotate_Trans(Victor,provi)  translate <-0.3344161,-0.39699434,0.8547288500000001>};
#declare trans[9]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-113.39041328778082>);
#declare Victor=vrotate(Victor,<0,-45.35042878003553,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-113.39041328778082>);
#declare Hugo=vrotate(Hugo,<0,-45.35042878003553,0>);
#declare transy=<0.6756127000000001,-0.10300566,-0.7300256>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026511800622 rotate -113.39041328778082*z rotate -45.35042878003553*y Axis_Rotate_Trans(Victor,provi)  translate <-0.6756127000000001,0.10300566,0.7300256>};
#declare trans[10]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-57.91078015072248>);
#declare Victor=vrotate(Victor,<0,-50.41687573496472,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-57.91078015072248>);
#declare Hugo=vrotate(Hugo,<0,-50.41687573496472,0>);
#declare transy=<0.6121528,0.22863034,-0.75819405>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.88706039163805 rotate -57.91078015072248*z rotate -50.41687573496472*y Axis_Rotate_Trans(Victor,provi)  translate <-0.6121528,-0.22863034,0.75819405>};
#declare trans[11]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-111.38128008039882>);
#declare Victor=vrotate(Victor,<0,-156.7185534147008,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-111.38128008039882>);
#declare Hugo=vrotate(Hugo,<0,-156.7185534147008,0>);
#declare transy=<-0.49159010000000003,0.17215934,-0.8547288500000001>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603013486484 rotate -111.38128008039882*z rotate -156.7185534147008*y Axis_Rotate_Trans(Victor,provi)  translate <0.49159010000000003,-0.17215934,0.8547288500000001>};
#declare trans[12]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-48.42723546208645>);
#declare Victor=vrotate(Victor,<0,-29.469763619112307,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-48.42723546208645>);
#declare Hugo=vrotate(Hugo,<0,-29.469763619112307,0>);
#declare transy=<0.01890979999999999,0.520521,-0.8547288500000001>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603452270414 rotate -48.42723546208645*z rotate -29.469763619112307*y Axis_Rotate_Trans(Victor,provi)  translate <-0.01890979999999999,-0.520521,0.8547288500000001>};
#declare trans[13]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-48.42723426668966>);
#declare Victor=vrotate(Victor,<0,-127.24878712665708,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-48.42723426668966>);
#declare Hugo=vrotate(Hugo,<0,-127.24878712665708,0>);
#declare transy=<-0.35519995000000004,0.520521,-0.777658>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603243618211 rotate -48.42723426668966*z rotate -127.24878712665708*y Axis_Rotate_Trans(Victor,provi)  translate <0.35519995000000004,-0.520521,0.777658>};
#declare trans[14]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-160.81186336385088>);
#declare Victor=vrotate(Victor,<0,-60.09501441775132,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-160.81186336385088>);
#declare Hugo=vrotate(Hugo,<0,-60.09501441775132,0>);
#declare transy=<-0.72588495,-0.27136966,-0.6334908>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603522161857 rotate -160.81186336385088*z rotate -60.09501441775132*y Axis_Rotate_Trans(Victor,provi)  translate <0.72588495,0.27136966,0.6334908>};
#declare trans[15]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-24.213617760169793>);
#declare Victor=vrotate(Victor,<0,-29.469764746452054,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-24.213617760169793>);
#declare Hugo=vrotate(Hugo,<0,-29.469764746452054,0>);
#declare transy=<-0.64501595,0.39699434,-0.65295475>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026521014442 rotate -24.213617760169793*z rotate -29.469764746452054*y Axis_Rotate_Trans(Victor,provi)  translate <0.64501595,-0.39699434,0.65295475>};
#declare trans[16]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-113.39041558894404>);
#declare Victor=vrotate(Victor,<0,-111.36810094629841,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-113.39041558894404>);
#declare Hugo=vrotate(Hugo,<0,-111.36810094629841,0>);
#declare transy=<-0.90914155,-0.10300566,-0.40354822500000004>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000025583262755 rotate -113.39041558894404*z rotate -111.36810094629841*y Axis_Rotate_Trans(Victor,provi)  translate <0.90914155,0.10300566,0.40354822500000004>};
#declare trans[17]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-57.910781636561694>);
#declare Victor=vrotate(Victor,<0,-106.30168006058848,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-57.910781636561694>);
#declare Hugo=vrotate(Hugo,<0,-106.30168006058848,0>);
#declare transy=<-0.8619825999999999,0.22863034,-0.45450545000000003>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870604283248185 rotate -57.910781636561694*z rotate -106.30168006058848*y Axis_Rotate_Trans(Victor,provi)  translate <0.8619825999999999,-0.22863034,0.45450545000000003>};
#declare trans[18]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-60.20461900917166>);
#declare Victor=vrotate(Victor,<0,-28.164838748028753,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-60.20461900917166>);
#declare Hugo=vrotate(Hugo,<0,-28.164838748028753,0>);
#declare transy=<0.6627675500000001,-0.423008,-0.61940655>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603555931333 rotate -60.20461900917166*z rotate -28.164838748028753*y Axis_Rotate_Trans(Victor,provi)  translate <-0.6627675500000001,0.423008,0.61940655>};
#declare trans[19]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-122.08922267837768>);
#declare Victor=vrotate(Victor,<0,-151.08722409284616,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-122.08922267837768>);
#declare Hugo=vrotate(Hugo,<0,-151.08722409284616,0>);
#declare transy=<0.15226761500000002,-0.77136965,-0.61940655>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870602725031451 rotate -122.08922267837768*z rotate -151.08722409284616*y Axis_Rotate_Trans(Victor,provi)  translate <-0.15226761500000002,0.77136965,0.61940655>};
#declare trans[20]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-114.52679245342719>);
#declare Victor=vrotate(Victor,<0,-71.85819066159532,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-114.52679245342719>);
#declare Hugo=vrotate(Hugo,<0,-71.85819066159532,0>);
#declare transy=<0.49952885,-0.7320249999999999,-0.46526485>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870602563625444 rotate -114.52679245342719*z rotate -71.85819066159532*y Axis_Rotate_Trans(Victor,provi)  translate <-0.49952885,0.7320249999999999,0.46526485>};
#declare trans[21]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-168.35927642359113,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-168.35927642359113,0>);
#declare transy=<-0.13451605,0.745356,-0.65295475>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002603677374 rotate -90.0*z rotate -168.35927642359113*y Axis_Rotate_Trans(Victor,provi)  translate <0.13451605,-0.745356,0.65295475>};
#declare trans[22]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-119.79537892669877>);
#declare Victor=vrotate(Victor,<0,-19.16625931103074,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-119.79537892669877>);
#declare Hugo=vrotate(Hugo,<0,-19.16625931103074,0>);
#declare transy=<0.5173304,0.576992,-0.6334908>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870604114038297 rotate -119.79537892669877*z rotate -19.16625931103074*y Axis_Rotate_Trans(Victor,provi)  translate <-0.5173304,-0.576992,0.6334908>};
#declare trans[23]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-65.47321226007878>);
#declare Victor=vrotate(Victor,<0,-116.64373379982116,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-65.47321226007878>);
#declare Hugo=vrotate(Hugo,<0,-116.64373379982116,0>);
#declare transy=<0.10136034499999999,0.886009,-0.45450545000000003>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.887060416293536 rotate -65.47321226007878*z rotate -116.64373379982116*y Axis_Rotate_Trans(Victor,provi)  translate <-0.10136034499999999,-0.886009,0.45450545000000003>};
#declare trans[24]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-80.40593210273035>);
#declare Victor=vrotate(Victor,<0,-60.095003951677064,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-80.40593210273035>);
#declare Hugo=vrotate(Hugo,<0,-60.095003951677064,0>);
#declare transy=<0.42736440000000003,0.809017,-0.40354822500000004>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026520729313 rotate -80.40593210273035*z rotate -60.095003951677064*y Axis_Rotate_Trans(Victor,provi)  translate <-0.42736440000000003,-0.809017,0.40354822500000004>};
#declare trans[25]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-122.08922023190367>);
#declare Victor=vrotate(Victor,<0,-5.631331933046248,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-122.08922023190367>);
#declare Hugo=vrotate(Hugo,<0,-5.631331933046248,0>);
#declare transy=<-0.38468838499999997,-0.77136965,-0.50878755>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603329088783 rotate -122.08922023190367*z rotate -5.631331933046248*y Axis_Rotate_Trans(Victor,provi)  translate <0.38468838499999997,0.77136965,0.50878755>};
#declare trans[26]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-60.20461065738479>);
#declare Victor=vrotate(Victor,<0,-128.5536823841685,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-60.20461065738479>);
#declare Hugo=vrotate(Hugo,<0,-128.5536823841685,0>);
#declare transy=<-0.8536204000000001,-0.423008,-0.307013425>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870601297745274 rotate -60.20461065738479*z rotate -128.5536823841685*y Axis_Rotate_Trans(Victor,provi)  translate <0.8536204000000001,0.423008,0.307013425>};
#declare trans[27]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-114.52678979336764>);
#declare Victor=vrotate(Victor,<0,-84.86035631636346,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-114.52678979336764>);
#declare Hugo=vrotate(Hugo,<0,-84.86035631636346,0>);
#declare transy=<-0.6427494499999999,-0.7320249999999999,-0.22994257499999998>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603466193359 rotate -114.52678979336764*z rotate -84.86035631636346*y Axis_Rotate_Trans(Victor,provi)  translate <0.6427494499999999,0.7320249999999999,0.22994257499999998>};
#declare trans[28]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-119.79537753430756>);
#declare Victor=vrotate(Victor,<0,-137.5522952037528,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-119.79537753430756>);
#declare Hugo=vrotate(Hugo,<0,-137.5522952037528,0>);
#declare transy=<-0.7255924499999999,0.576992,-0.3774346>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870604490518209 rotate -119.79537753430756*z rotate -137.5522952037528*y Axis_Rotate_Trans(Victor,provi)  translate <0.7255924499999999,-0.576992,0.3774346>};
#declare trans[29]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-65.4732105405382>);
#declare Victor=vrotate(Victor,<0,-40.07482481583841,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-65.4732105405382>);
#declare Hugo=vrotate(Hugo,<0,-40.07482481583841,0>);
#declare transy=<-0.272749405,0.886009,-0.3774346>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603579488842 rotate -65.4732105405382*z rotate -40.07482481583841*y Axis_Rotate_Trans(Victor,provi)  translate <0.272749405,-0.886009,0.3774346>};
#declare trans[30]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-80.40593291994072>);
#declare Victor=vrotate(Victor,<0,-96.62355525883203,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-80.40593291994072>);
#declare Hugo=vrotate(Hugo,<0,-96.62355525883203,0>);
#declare transy=<-0.55206765,0.809017,-0.2017741>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000027364542805 rotate -80.40593291994072*z rotate -96.62355525883203*y Axis_Rotate_Trans(Victor,provi)  translate <0.55206765,-0.809017,0.2017741>};
#declare trans[31]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-11.824550736127328>);
#declare Victor=vrotate(Victor,<0,156.06462085046033,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-11.824550736127328>);
#declare Hugo=vrotate(Hugo,<0,156.06462085046033,0>);
#declare transy=<0.858527,0.076992,-0.50878755>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603277437644 rotate -11.824550736127328*z rotate 156.06462085046033*y Axis_Rotate_Trans(Victor,provi)  translate <-0.858527,-0.076992,0.50878755>};
#declare trans[32]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-143.9999988963423>);
#declare Victor=vrotate(Victor,<0,-136.64180598365482,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-143.9999988963423>);
#declare Hugo=vrotate(Hugo,<0,-136.64180598365482,0>);
#declare transy=<0.7587482000000001,-0.563661,-0.32647740000000003>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002679692291 rotate -143.9999988963423*z rotate -136.64180598365482*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7587482000000001,0.563661,0.32647740000000003>};
#declare trans[33]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-103.13414327745093>);
#declare Victor=vrotate(Victor,<0,-88.21359852862882,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-103.13414327745093>);
#declare Hugo=vrotate(Hugo,<0,-88.21359852862882,0>);
#declare transy=<0.932273,-0.331636,-0.1508169>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603511661597 rotate -103.13414327745093*z rotate -88.21359852862882*y Axis_Rotate_Trans(Victor,provi)  translate <-0.932273,0.331636,0.1508169>};
#declare trans[34]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-48.189684302007365>);
#declare Victor=vrotate(Victor,<0,-78.35931116969572,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-48.189684302007365>);
#declare Hugo=vrotate(Hugo,<0,-78.35931116969572,0>);
#declare transy=<0.97943195,-0.0,-0.20177412500000003>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026023869764 rotate -48.189684302007365*z rotate -78.35931116969572*y Axis_Rotate_Trans(Victor,provi)  translate <-0.97943195,0.0,0.20177412500000003>};
#declare trans[35]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-84.08772538040904>);
#declare Victor=vrotate(Victor,<0,-23.935392470057856,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-84.08772538040904>);
#declare Hugo=vrotate(Hugo,<0,-23.935392470057856,0>);
#declare transy=<0.24824826500000002,-0.9120226499999999,-0.32647740000000003>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026363422356 rotate -84.08772538040904*z rotate -23.935392470057856*y Axis_Rotate_Trans(Victor,provi)  translate <-0.24824826500000002,0.9120226499999999,0.32647740000000003>};
#declare trans[36]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-84.0877254686392>);
#declare Victor=vrotate(Victor,<0,-132.78315766823857,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-84.0877254686392>);
#declare Hugo=vrotate(Hugo,<0,-132.78315766823857,0>);
#declare transy=<-0.357074035,-0.9120226499999999,-0.20177412500000003>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002651212488 rotate -84.0877254686392*z rotate -132.78315766823857*y Axis_Rotate_Trans(Victor,provi)  translate <0.357074035,0.9120226499999999,0.20177412500000003>};
#declare trans[37]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-96.37937288529666>);
#declare Victor=vrotate(Victor,<0,-78.35927681681552,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-96.37937288529666>);
#declare Hugo=vrotate(Hugo,<0,-78.35927681681552,0>);
#declare transy=<-0.031069980000000004,-0.98901465,-0.1508169>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603547782557 rotate -96.37937288529666*z rotate -78.35927681681552*y Axis_Rotate_Trans(Victor,provi)  translate <0.031069980000000004,0.98901465,0.1508169>};
#declare trans[38]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-46.780828874623616>);
#declare Victor=vrotate(Victor,<0,-111.36813088225318,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-46.780828874623616>);
#declare Hugo=vrotate(Hugo,<0,-111.36813088225318,0>);
#declare transy=<0.7051011,0.6406529999999999,-0.307013425>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.887060376419586 rotate -46.780828874623616*z rotate -111.36813088225318*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7051011,-0.6406529999999999,0.307013425>};
#declare trans[39]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-103.13414589259337>);
#declare Victor=vrotate(Victor,<0,-68.50498483874922,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-103.13414589259337>);
#declare Hugo=vrotate(Hugo,<0,-68.50498483874922,0>);
#declare transy=<0.91597205,0.331636,-0.22994257499999998>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870601776480257 rotate -103.13414589259337*z rotate -68.50498483874922*y Axis_Rotate_Trans(Victor,provi)  translate <-0.91597205,-0.331636,0.22994257499999998>};
#declare trans[40]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-11.8245326920062>);
#declare Victor=vrotate(Victor,<0,47.216928168102356,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-11.8245326920062>);
#declare Hugo=vrotate(Hugo,<0,47.216928168102356,0>);
#declare transy=<-0.98971805,0.076992,-0.12802807500000002>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870602692572546 rotate -11.8245326920062*z rotate 47.216928168102356*y Axis_Rotate_Trans(Victor,provi)  translate <0.98971805,-0.076992,0.12802807500000002>};
#declare trans[41]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-144.00001602624218>);
#declare Victor=vrotate(Victor,<0,-20.076763073582438,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-144.00001602624218>);
#declare Hugo=vrotate(Hugo,<0,-20.076763073582438,0>);
#declare transy=<-0.82600605,-0.563661,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000024624750812 rotate -144.00001602624218*z rotate -20.076763073582438*y Axis_Rotate_Trans(Victor,provi)  translate <0.82600605,0.563661,0.0>};
#declare trans[42]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-103.13414589259337>);
#declare Victor=vrotate(Victor,<0,-68.50498483874922,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-103.13414589259337>);
#declare Hugo=vrotate(Hugo,<0,-68.50498483874922,0>);
#declare transy=<-0.91597205,-0.331636,0.22994257499999998>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870601776480257 rotate -103.13414589259337*z rotate -68.50498483874922*y Axis_Rotate_Trans(Victor,provi)  translate <0.91597205,0.331636,-0.22994257499999998>};
#declare trans[43]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-48.189684302007365>);
#declare Victor=vrotate(Victor,<0,-78.35931116969572,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-48.189684302007365>);
#declare Hugo=vrotate(Hugo,<0,-78.35931116969572,0>);
#declare transy=<-0.97943195,-0.0,0.20177412500000003>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026023869764 rotate -48.189684302007365*z rotate -78.35931116969572*y Axis_Rotate_Trans(Victor,provi)  translate <0.97943195,0.0,-0.20177412500000003>};
#declare trans[44]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-46.78082852796711>);
#declare Victor=vrotate(Victor,<0,-45.350430188487465,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-46.78082852796711>);
#declare Hugo=vrotate(Hugo,<0,-45.350430188487465,0>);
#declare transy=<-0.7690343,0.6406529999999999,-0.0033248000000000028>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603707081647 rotate -46.78082852796711*z rotate -45.350430188487465*y Axis_Rotate_Trans(Victor,provi)  translate <0.7690343,-0.6406529999999999,0.0033248000000000028>};
#declare trans[45]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-103.13414327745093>);
#declare Victor=vrotate(Victor,<0,-88.21359852862882,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-103.13414327745093>);
#declare Hugo=vrotate(Hugo,<0,-88.21359852862882,0>);
#declare transy=<-0.932273,0.331636,0.1508169>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603511661597 rotate -103.13414327745093*z rotate -88.21359852862882*y Axis_Rotate_Trans(Victor,provi)  translate <0.932273,-0.331636,-0.1508169>};
#declare trans[46]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-46.78082852796709>);
#declare Victor=vrotate(Victor,<0,-45.35043018848747,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-46.78082852796709>);
#declare Hugo=vrotate(Hugo,<0,-45.35043018848747,0>);
#declare transy=<0.7690343,-0.6406529999999999,0.0033248000000000028>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603707081647 rotate -46.78082852796709*z rotate -45.35043018848747*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7690343,0.6406529999999999,-0.0033248000000000028>};
#declare trans[47]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-103.13414337806154>);
#declare Victor=vrotate(Victor,<0,-147.83461606220288,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-103.13414337806154>);
#declare Hugo=vrotate(Hugo,<0,-147.83461606220288,0>);
#declare transy=<0.316191255,-0.94967,0.0033248000000000028>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603444905133 rotate -103.13414337806154*z rotate -147.83461606220288*y Axis_Rotate_Trans(Victor,provi)  translate <-0.316191255,0.94967,-0.0033248000000000028>};
#declare trans[48]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-80.40593291994072>);
#declare Victor=vrotate(Victor,<0,-96.62355525883203,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-80.40593291994072>);
#declare Hugo=vrotate(Hugo,<0,-96.62355525883203,0>);
#declare transy=<0.55206765,-0.809017,0.2017741>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000027364542805 rotate -80.40593291994072*z rotate -96.62355525883203*y Axis_Rotate_Trans(Victor,provi)  translate <-0.55206765,0.809017,-0.2017741>};
#declare trans[49]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-103.13414399491147>);
#declare Victor=vrotate(Victor,<0,-8.883934503712648,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-103.13414399491147>);
#declare Hugo=vrotate(Hugo,<0,-8.883934503712648,0>);
#declare transy=<0.28913104500000003,0.94967,-0.12802807500000002>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603035617031 rotate -103.13414399491147*z rotate -8.883934503712648*y Axis_Rotate_Trans(Victor,provi)  translate <-0.28913104500000003,-0.94967,0.12802807500000002>};
#declare trans[50]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-103.13414337806152>);
#declare Victor=vrotate(Victor,<0,-147.83461606220288,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-103.13414337806152>);
#declare Hugo=vrotate(Hugo,<0,-147.83461606220288,0>);
#declare transy=<-0.316191255,0.94967,-0.0033248000000000028>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603444905133 rotate -103.13414337806152*z rotate -147.83461606220288*y Axis_Rotate_Trans(Victor,provi)  translate <0.316191255,-0.94967,0.0033248000000000028>};
#declare trans[51]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-96.37937288529666>);
#declare Victor=vrotate(Victor,<0,-78.35927681681552,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-96.37937288529666>);
#declare Hugo=vrotate(Hugo,<0,-78.35927681681552,0>);
#declare transy=<0.031069980000000004,0.98901465,0.1508169>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603547782557 rotate -96.37937288529666*z rotate -78.35927681681552*y Axis_Rotate_Trans(Victor,provi)  translate <-0.031069980000000004,-0.98901465,-0.1508169>};
#declare trans[52]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-144.00001602624218>);
#declare Victor=vrotate(Victor,<0,-20.076763073582438,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-144.00001602624218>);
#declare Hugo=vrotate(Hugo,<0,-20.076763073582438,0>);
#declare transy=<0.82600605,0.563661,-0.0>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000024624750812 rotate -144.00001602624218*z rotate -20.076763073582438*y Axis_Rotate_Trans(Victor,provi)  translate <-0.82600605,-0.563661,0.0>};
#declare trans[53]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-84.08772546863922>);
#declare Victor=vrotate(Victor,<0,-132.78315766823857,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-84.08772546863922>);
#declare Hugo=vrotate(Hugo,<0,-132.78315766823857,0>);
#declare transy=<0.357074035,0.9120226499999999,0.20177412500000003>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002651212488 rotate -84.08772546863922*z rotate -132.78315766823857*y Axis_Rotate_Trans(Victor,provi)  translate <-0.357074035,-0.9120226499999999,-0.20177412500000003>};
#declare trans[54]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-114.52678979336767>);
#declare Victor=vrotate(Victor,<0,-84.86035631636348,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-114.52678979336767>);
#declare Hugo=vrotate(Hugo,<0,-84.86035631636348,0>);
#declare transy=<0.6427494499999999,0.7320249999999999,0.22994257499999998>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603466193359 rotate -114.52678979336767*z rotate -84.86035631636348*y Axis_Rotate_Trans(Victor,provi)  translate <-0.6427494499999999,-0.7320249999999999,-0.22994257499999998>};
#declare trans[55]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-103.1341439949115>);
#declare Victor=vrotate(Victor,<0,-8.883934503712654,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-103.1341439949115>);
#declare Hugo=vrotate(Hugo,<0,-8.883934503712654,0>);
#declare transy=<-0.28913104500000003,-0.94967,0.12802807500000002>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603035617031 rotate -103.1341439949115*z rotate -8.883934503712654*y Axis_Rotate_Trans(Victor,provi)  translate <0.28913104500000003,0.94967,-0.12802807500000002>};
#declare trans[56]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-46.780828874623595>);
#declare Victor=vrotate(Victor,<0,-111.36813088225318,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-46.780828874623595>);
#declare Hugo=vrotate(Hugo,<0,-111.36813088225318,0>);
#declare transy=<-0.7051011,-0.6406529999999999,0.307013425>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.887060376419586 rotate -46.780828874623595*z rotate -111.36813088225318*y Axis_Rotate_Trans(Victor,provi)  translate <0.7051011,0.6406529999999999,-0.307013425>};
#declare trans[57]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-80.40593210273035>);
#declare Victor=vrotate(Victor,<0,-60.095003951677064,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-80.40593210273035>);
#declare Hugo=vrotate(Hugo,<0,-60.095003951677064,0>);
#declare transy=<-0.42736440000000003,-0.809017,0.40354822500000004>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026520729313 rotate -80.40593210273035*z rotate -60.095003951677064*y Axis_Rotate_Trans(Victor,provi)  translate <0.42736440000000003,0.809017,-0.40354822500000004>};
#declare trans[58]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-143.9999988963423>);
#declare Victor=vrotate(Victor,<0,-136.64180598365482,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-143.9999988963423>);
#declare Hugo=vrotate(Hugo,<0,-136.64180598365482,0>);
#declare transy=<-0.7587482000000001,0.563661,0.32647740000000003>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002679692291 rotate -143.9999988963423*z rotate -136.64180598365482*y Axis_Rotate_Trans(Victor,provi)  translate <0.7587482000000001,-0.563661,-0.32647740000000003>};
#declare trans[59]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-84.08772538040905>);
#declare Victor=vrotate(Victor,<0,-23.935392470057863,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-84.08772538040905>);
#declare Hugo=vrotate(Hugo,<0,-23.935392470057863,0>);
#declare transy=<-0.24824826500000002,0.9120226499999999,0.32647740000000003>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026363422356 rotate -84.08772538040905*z rotate -23.935392470057863*y Axis_Rotate_Trans(Victor,provi)  translate <0.24824826500000002,-0.9120226499999999,-0.32647740000000003>};
#declare trans[60]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-114.52679245342722>);
#declare Victor=vrotate(Victor,<0,-71.85819066159532,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-114.52679245342722>);
#declare Hugo=vrotate(Hugo,<0,-71.85819066159532,0>);
#declare transy=<-0.49952885,0.7320249999999999,0.46526485>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870602563625444 rotate -114.52679245342722*z rotate -71.85819066159532*y Axis_Rotate_Trans(Victor,provi)  translate <0.49952885,-0.7320249999999999,-0.46526485>};
#declare trans[61]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-11.824532692006196>);
#declare Victor=vrotate(Victor,<0,47.216928168102335,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-11.824532692006196>);
#declare Hugo=vrotate(Hugo,<0,47.216928168102335,0>);
#declare transy=<0.98971805,-0.076992,0.12802807500000002>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870602692572546 rotate -11.824532692006196*z rotate 47.216928168102335*y Axis_Rotate_Trans(Victor,provi)  translate <-0.98971805,0.076992,-0.12802807500000002>};
#declare trans[62]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-119.79537753430753>);
#declare Victor=vrotate(Victor,<0,-137.5522952037528,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-119.79537753430753>);
#declare Hugo=vrotate(Hugo,<0,-137.5522952037528,0>);
#declare transy=<0.7255924499999999,-0.576992,0.3774346>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870604490518209 rotate -119.79537753430753*z rotate -137.5522952037528*y Axis_Rotate_Trans(Victor,provi)  translate <-0.7255924499999999,0.576992,-0.3774346>};
#declare trans[63]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-57.9107816365617>);
#declare Victor=vrotate(Victor,<0,-106.30168006058851,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-57.9107816365617>);
#declare Hugo=vrotate(Hugo,<0,-106.30168006058851,0>);
#declare transy=<0.8619825999999999,-0.22863034,0.45450545000000003>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870604283248185 rotate -57.9107816365617*z rotate -106.30168006058851*y Axis_Rotate_Trans(Victor,provi)  translate <-0.8619825999999999,0.22863034,-0.45450545000000003>};
#declare trans[64]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-60.20461065738479>);
#declare Victor=vrotate(Victor,<0,-128.55368238416847,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-60.20461065738479>);
#declare Hugo=vrotate(Hugo,<0,-128.55368238416847,0>);
#declare transy=<0.8536204000000001,0.423008,0.307013425>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870601297745274 rotate -60.20461065738479*z rotate -128.55368238416847*y Axis_Rotate_Trans(Victor,provi)  translate <-0.8536204000000001,-0.423008,-0.307013425>};
#declare trans[65]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-113.39041558894404>);
#declare Victor=vrotate(Victor,<0,-111.36810094629841,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-113.39041558894404>);
#declare Hugo=vrotate(Hugo,<0,-111.36810094629841,0>);
#declare transy=<0.90914155,0.10300566,0.40354822500000004>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000025583262755 rotate -113.39041558894404*z rotate -111.36810094629841*y Axis_Rotate_Trans(Victor,provi)  translate <-0.90914155,-0.10300566,-0.40354822500000004>};
#declare trans[66]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-65.4732105405382>);
#declare Victor=vrotate(Victor,<0,-40.07482481583841,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-65.4732105405382>);
#declare Hugo=vrotate(Hugo,<0,-40.07482481583841,0>);
#declare transy=<0.272749405,-0.886009,0.3774346>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603579488842 rotate -65.4732105405382*z rotate -40.07482481583841*y Axis_Rotate_Trans(Victor,provi)  translate <-0.272749405,0.886009,-0.3774346>};
#declare trans[67]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-65.4732122600788>);
#declare Victor=vrotate(Victor,<0,-116.64373379982116,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-65.4732122600788>);
#declare Hugo=vrotate(Hugo,<0,-116.64373379982116,0>);
#declare transy=<-0.10136034499999999,-0.886009,0.45450545000000003>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.887060416293536 rotate -65.4732122600788*z rotate -116.64373379982116*y Axis_Rotate_Trans(Victor,provi)  translate <0.10136034499999999,0.886009,-0.45450545000000003>};
#declare trans[68]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-11.824550736127332>);
#declare Victor=vrotate(Victor,<0,156.0646208504603,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-11.824550736127332>);
#declare Hugo=vrotate(Hugo,<0,156.0646208504603,0>);
#declare transy=<-0.858527,-0.076992,0.50878755>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603277437644 rotate -11.824550736127332*z rotate 156.0646208504603*y Axis_Rotate_Trans(Victor,provi)  translate <0.858527,0.076992,-0.50878755>};
#declare trans[69]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-119.79537892669876>);
#declare Victor=vrotate(Victor,<0,-19.166259311030732,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-119.79537892669876>);
#declare Hugo=vrotate(Hugo,<0,-19.166259311030732,0>);
#declare transy=<-0.5173304,-0.576992,0.6334908>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870604114038297 rotate -119.79537892669876*z rotate -19.166259311030732*y Axis_Rotate_Trans(Victor,provi)  translate <0.5173304,0.576992,-0.6334908>};
#declare trans[70]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-57.91078015072248>);
#declare Victor=vrotate(Victor,<0,-50.41687573496471,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-57.91078015072248>);
#declare Hugo=vrotate(Hugo,<0,-50.41687573496471,0>);
#declare transy=<-0.6121528,-0.22863034,0.75819405>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.88706039163805 rotate -57.91078015072248*z rotate -50.41687573496471*y Axis_Rotate_Trans(Victor,provi)  translate <0.6121528,0.22863034,-0.75819405>};
#declare trans[71]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-60.20461900917164>);
#declare Victor=vrotate(Victor,<0,-28.164838748028753,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-60.20461900917164>);
#declare Hugo=vrotate(Hugo,<0,-28.164838748028753,0>);
#declare transy=<-0.6627675500000001,0.423008,0.61940655>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603555931333 rotate -60.20461900917164*z rotate -28.164838748028753*y Axis_Rotate_Trans(Victor,provi)  translate <0.6627675500000001,-0.423008,-0.61940655>};
#declare trans[72]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-113.39041328778082>);
#declare Victor=vrotate(Victor,<0,-45.350428780035536,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-113.39041328778082>);
#declare Hugo=vrotate(Hugo,<0,-45.350428780035536,0>);
#declare transy=<-0.6756127000000001,0.10300566,0.7300256>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026511800622 rotate -113.39041328778082*z rotate -45.350428780035536*y Axis_Rotate_Trans(Victor,provi)  translate <0.6756127000000001,-0.10300566,-0.7300256>};
#declare trans[73]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-90.0>);
#declare Victor=vrotate(Victor,<0,-168.35927642359113,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-90.0>);
#declare Hugo=vrotate(Hugo,<0,-168.35927642359113,0>);
#declare transy=<0.13451605,-0.745356,0.65295475>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.000002603677374 rotate -90.0*z rotate -168.35927642359113*y Axis_Rotate_Trans(Victor,provi)  translate <-0.13451605,0.745356,-0.65295475>};
#declare trans[74]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-24.213617760169793>);
#declare Victor=vrotate(Victor,<0,-29.469764746452054,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-24.213617760169793>);
#declare Hugo=vrotate(Hugo,<0,-29.469764746452054,0>);
#declare transy=<0.64501595,-0.39699434,0.65295475>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026521014442 rotate -24.213617760169793*z rotate -29.469764746452054*y Axis_Rotate_Trans(Victor,provi)  translate <-0.64501595,0.39699434,-0.65295475>};
#declare trans[75]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-48.42723426668965>);
#declare Victor=vrotate(Victor,<0,-127.24878712665708,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-48.42723426668965>);
#declare Hugo=vrotate(Hugo,<0,-127.24878712665708,0>);
#declare transy=<0.35519995000000004,-0.520521,0.777658>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603243618211 rotate -48.42723426668965*z rotate -127.24878712665708*y Axis_Rotate_Trans(Victor,provi)  translate <-0.35519995000000004,0.520521,-0.777658>};
#declare trans[76]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-122.08922023190367>);
#declare Victor=vrotate(Victor,<0,-5.631331933046239,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-122.08922023190367>);
#declare Hugo=vrotate(Hugo,<0,-5.631331933046239,0>);
#declare transy=<0.38468838499999997,0.77136965,0.50878755>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603329088783 rotate -122.08922023190367*z rotate -5.631331933046239*y Axis_Rotate_Trans(Victor,provi)  translate <-0.38468838499999997,-0.77136965,-0.50878755>};
#declare trans[77]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-122.08922267837768>);
#declare Victor=vrotate(Victor,<0,-151.08722409284616,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-122.08922267837768>);
#declare Hugo=vrotate(Hugo,<0,-151.08722409284616,0>);
#declare transy=<-0.15226761500000002,0.77136965,0.61940655>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870602725031451 rotate -122.08922267837768*z rotate -151.08722409284616*y Axis_Rotate_Trans(Victor,provi)  translate <0.15226761500000002,-0.77136965,-0.61940655>};
#declare trans[78]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-138.1896858476384>);
#declare Victor=vrotate(Victor,<0,-78.3592767908838,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-138.1896858476384>);
#declare Hugo=vrotate(Hugo,<0,-78.3592767908838,0>);
#declare transy=<0.15039353500000002,0.66666665,0.7300256>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026168633538 rotate -138.1896858476384*z rotate -78.3592767908838*y Axis_Rotate_Trans(Victor,provi)  translate <-0.15039353500000002,-0.66666665,-0.7300256>};
#declare trans[79]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-160.81186336385088>);
#declare Victor=vrotate(Victor,<0,-60.09501441775132,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-160.81186336385088>);
#declare Hugo=vrotate(Hugo,<0,-60.09501441775132,0>);
#declare transy=<0.72588495,0.27136966,0.6334908>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603522161857 rotate -160.81186336385088*z rotate -60.09501441775132*y Axis_Rotate_Trans(Victor,provi)  translate <-0.72588495,-0.27136966,-0.6334908>};
#declare trans[80]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-108.00000047088764>);
#declare Victor=vrotate(Victor,<0,-136.64180187163623,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-108.00000047088764>);
#declare Hugo=vrotate(Hugo,<0,-136.64180187163623,0>);
#declare transy=<0.43606895,0.486669,0.75819405>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603769399643 rotate -108.00000047088764*z rotate -136.64180187163623*y Axis_Rotate_Trans(Victor,provi)  translate <-0.43606895,-0.486669,-0.75819405>};
#declare trans[81]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-24.213617395833104>);
#declare Victor=vrotate(Victor,<0,-127.24879043198163,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-24.213617395833104>);
#declare Hugo=vrotate(Hugo,<0,-127.24879043198163,0>);
#declare transy=<-0.3344161,-0.39699434,0.8547288500000001>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026492418284 rotate -24.213617395833104*z rotate -127.24879043198163*y Axis_Rotate_Trans(Victor,provi)  translate <0.3344161,0.39699434,-0.8547288500000001>};
#declare trans[82]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-48.42723546208645>);
#declare Victor=vrotate(Victor,<0,-29.469763619112328,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-48.42723546208645>);
#declare Hugo=vrotate(Hugo,<0,-29.469763619112328,0>);
#declare transy=<-0.01890979999999999,-0.520521,0.8547288500000001>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603452270414 rotate -48.42723546208645*z rotate -29.469763619112328*y Axis_Rotate_Trans(Victor,provi)  translate <0.01890979999999999,0.520521,-0.8547288500000001>};
#declare trans[83]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-160.81185877965746>);
#declare Victor=vrotate(Victor,<0,-96.623555696289,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-160.81185877965746>);
#declare Hugo=vrotate(Hugo,<0,-96.623555696289,0>);
#declare transy=<-0.41639335,0.27136966,0.86881305>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603769151443 rotate -160.81185877965746*z rotate -96.623555696289*y Axis_Rotate_Trans(Victor,provi)  translate <0.41639335,-0.27136966,-0.86881305>};
#declare trans[84]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-108.00000092186424>);
#declare Victor=vrotate(Victor,<0,-20.076756792741552,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-108.00000092186424>);
#declare Hugo=vrotate(Hugo,<0,-20.076756792741552,0>);
#declare transy=<-0.10088705,0.486669,0.86881305>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603554513465 rotate -108.00000092186424*z rotate -20.076756792741552*y Axis_Rotate_Trans(Victor,provi)  translate <0.10088705,-0.486669,-0.86881305>};
#declare trans[85]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-111.38128008039882>);
#declare Victor=vrotate(Victor,<0,-156.7185534147008,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-111.38128008039882>);
#declare Hugo=vrotate(Hugo,<0,-156.7185534147008,0>);
#declare transy=<0.49159010000000003,-0.17215934,0.8547288500000001>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603013486484 rotate -111.38128008039882*z rotate -156.7185534147008*y Axis_Rotate_Trans(Victor,provi)  translate <-0.49159010000000003,0.17215934,-0.8547288500000001>};
#declare trans[86]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-55.690638553939834>);
#declare Victor=vrotate(Victor,<0,-156.7185534147008,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-55.690638553939834>);
#declare Hugo=vrotate(Hugo,<0,-156.7185534147008,0>);
#declare transy=<0.49159010000000003,0.16666666000000002,0.8547288500000001>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026011283714 rotate -55.690638553939834*z rotate -156.7185534147008*y Axis_Rotate_Trans(Victor,provi)  translate <-0.49159010000000003,-0.16666666000000002,-0.8547288500000001>};
#declare trans[87]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-111.3812790132159>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-111.3812790132159>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.1137322,-0.17215934,0.9794321>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.8870603435490628 rotate -111.3812790132159*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.1137322,0.17215934,-0.9794321>};
#declare trans[88]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-55.69064001754826>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-55.69064001754826>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<-0.1137322,0.16666666000000002,0.9794321>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 1.0000026385625864 rotate -55.69064001754826*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <0.1137322,-0.16666666000000002,-0.9794321>};
#declare trans[89]=
#declare Victor=<0,1,0>; 
#declare Victor=vrotate(Victor,<0,0,-0.0>);
#declare Victor=vrotate(Victor,<0,-0.0,0>);
#declare Hugo=<0,0,1>;
#declare Hugo=vrotate(Hugo,<0,0,-0.0>);
#declare Hugo=vrotate(Hugo,<0,-0.0,0>);
#declare transy=<0.2017741,0.04314000000000001,0.9794321>;
#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));#declare provi=acos(provi)*180/pi;#if(transy.y>0) #declare provi=-provi; #end transform{translate 0.0*y scale 0.887060332753001 rotate -0.0*z rotate -0.0*y Axis_Rotate_Trans(Victor,provi)  translate <-0.2017741,-0.04314000000000001,-0.9794321>};
