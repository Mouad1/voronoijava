package atomes;

public enum Element {
	ACTINIUM("ac","actinium",89),
	ALUMINIUM("al","aluminium",13),
	AMERICIUM("am","americium",95),
	ANTIMOINE("sb","antimoine","antimony",51), 
	ARGENT("ag","argent","silver",47),
	ARGON("ar","argon",18),
	ARSENIC("as","arsenic",33),
	ASTATE("at","astate","astatine",85),
	AZOTE("n","azote","nitrogen",7),
	BARYUM("ba","baryum","barium",56), 
	BERKELIUM("bk","berkelium",97), 
	BISMUTH("bi","bismuth",83),
	BOHRIUM("bh","bohrium",107),
	BORE("b","bore","boron",5),
	BROME("br","brome","bromine",35), 
	BERYLLIUM("be","beryllium",4), 
	CADMIUM("cd","cadmium",48),
	CALCIUM("ca","calcium",20), 
	CALIFORNIUM("cf","californium",98), 
	CARBONE("c","carbone","carbon",6),
	CHLORE("cl","chlore","chlorine",17),
	CHROME("cr","chrome","chromium",24),
	COBALT("co","cobalt",27), 
	COPERNICIUM("cn","copernicium",112), 
	CUIVRE("cu","cuivre","copper",29),
	CURIUM("cm","curium",96), 
	CERIUM("ce","cerium",58), 
	CESIUM("cs","cesium","caesium",55), 
	DARMSTADTIUM("ds","darmstadtium",110),
	DUBNIUM("db","dubnium",105),
	DYSPROSIUM("dy","dysprosium",66),
	EINSTEINIUM("es","einsteinium",99), 
	ERBIUM("er","erbium",68),
	EUROPIUM("eu","europium",63), 
	FER("fr","fer","iron",26),
	FERMIUM("fm","fermium",100),
	FLUOR("f","fluor","fluorine",9),
	FLEVORIUM("fl","flevorium",114),
	FRANCIUM("fr","francium",87),
	GADOLINIUM("gd","gadolinium",64), 
	GALLIUM("ga","gallium",31),
	GERMANIUM("ge","germanium",32),
	HAFNIUM("hf","hafnium",72),
	HASSIUM("hs","hassium",108),
	HOLMIUM("ho","holmium",67),
	HYDROGENE("h","hydrogene","hydrogen",1),
	HELIUM("he","helium",2),
	INDIUM("in","indium",49),
	IODE("i","iode","iodine",53),
	IRIDIUM("ir","iridium",77),
	KRYPTON("kr","krypton",36),
	LANTHANE("la","lanthane",57),
	LAWRENCIUM("lr","lawrencium",103),
	LITHIUM("li","lithium",3),
	LIVERMORIUM("lv","livermorium",116),
	LUTECIUM("lu","lutecium",71),
	MAGNESIUM("mg","magensium",12),
	MANGANESE("mn","manganèse",25),
	MEITNERIUM("mt","meitnerium",109),
	MENDELEVIUM("md","mendelevium",101),
	MERCURE("hg","mercure","mercury",80),
	MOLYBDENE("mo","molybdene",42),
	NEPTUNIUM("np","neptunium",93),
	NICKEL("ni","nickel",28),
	NIOBIUM("nb","niobium",41),
	NOBELIUM("no","nobelium",102),
	NEODYME("nd","neodyme",60),
	NEON("ne","neon",10),
	OR("au","or","gold",79),
	OSMIUM("os","osmium",76),
	OXYGENE("o","oxygene","oxygen",8),
	PALLADIUM("pd","palladium",46),
	PHOSPHORE("p","phosphore","phosphorus",15),
	PLATINE("pt","platine","platinum",78),
	PLOMB("pb","plomb","lead",82),
	PLUTONIUM("pu","plutonium",94),
	POLONIUM("po","polonium",84),
	POTASSIUM("k","potassium",109),
	PRASEODYME("pr","praseodyme","praesodymium",59),
	PROMETHIUM("pm","promethium",61),
	PROTACTINIUM("pa","protactinium",91),
	RADIUM("ra","radium",88),
	RADON("rn","radon",86),
	RHODIUM("rh","rhodium",45),
	RHENIUM("re","rhenium",75),
	ROENTGENIUM("rg","roentgenium",111),
	RUBIDIUM("rb","rubidium",37),
	RUTHERFORDIUM("rf","rutherfordium",104),
	RUTHENIUM("ru","ruthenium",44),
	SAMARIUM("sm","samarium",62),
	SCANDIUM("sc","scandium",21),
	SEABORGIUM("sg","seaborgium",106),
	SILICIUM("si","silicium","silicon",14),
	SODIUM("na","sodium",11),
	SOUFRE("s","soufre","sulfur",16),
	STRONTIUM("sr","strontium",38),
	SELENIUM("se","selenium",34),
	TANTALE("ta","tantale","tantalum",73),
	TECHNETIUM("tc","technetium",43),
	TELLURE("te","tellure",52),
	TERBIUM("tb","terbium",65),
	THALLIUM("tl","thallium",81),
	THORIUM("th","thorium",90),
	THULIUM("tm","thulium",69),
	TITANE("ti","titane","titanium",22),
	TUNGSTENE("w","tungstene","tungsten",74),
	URANIUM("u","uranium",92),
	VANADIUM("v","vanadium",23),
	XENON("xe","xenon",54),
	YTTERBIUM("yb","ytterbium",70),
	YTTRIUM("y","yttrium",39),
	ZINC("zn","zinc",30),
	ZIRCONIUM("zr","zirconium",40),
	ETAIN("sn","etain","tin",50); 
	
			
	
	
	
	 private final String symbole; 
	 private final String nomFrancais;
	 private  final String nomAnglais; 
	 private final int numero; 
	 
	 private Element(String s,String p,String q,int n){
		 this.symbole=s; 
		 this.nomFrancais=p; 
		 this.nomAnglais=q; 
		 this.numero=n; 
	 }
	 
	 private Element(String s,String p,int n){
		 this.symbole=s; 
		 this.nomFrancais=p; 
		 this.nomAnglais=p; 
		 this.numero=n; 
	 }

	public int getNumero() {
		return numero;
	}

	public String getSymbole() {
		return symbole;
	}

	public String getNomFrancais() {
		return nomFrancais;
	}
	 
	public String getNomAnglais() {
		return nomAnglais;
	}
	
}
