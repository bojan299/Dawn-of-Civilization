//Rhye
#ifndef CVRHYES_H
#define CVRHYES_H

using namespace std;
typedef list<char*> LISTCHAR;

// rhyes.h
#define EARTH_X					(124)
#define EARTH_Y					(68)

#define MAX_COM_SHRINE			(20)

#define GREATPALACE				(1)
#define SUMMERPALACE			(1)
//#define VERSAILLES				(2)
#define FORBIDDENPALACE			(2)

#define PAGAN_TEMPLE			(GC.getInfoTypeForString("BUILDING_OBELISK"))

#define BEGIN_WONDERS				(129) // increment if normal building (not for wonders) is added
//#define NUM_WONDERS				(186)
#define NUM_BUILDINGS_PLAGUE		(203) // always increment when a building is added except embassies
#define NUM_BUILDINGTYPES_PLAGUE	(129) // increment when a building class is created except embassies

#define NUM_MAJOR_PLAYERS		(41)
#define NUM_PL					(41)
#define NUM_MINORS				(6)	 // Independent, Indpendent2, Natives, Celtia, Seljuks, Barbarians
#define NUM_CIVS				(49)
#define NUM_BONUS_ISLANDS		(11)

enum MyTechs
{
 MYSTICISM,
 MEDITATION,
 POLYTHEISM,
 PRIESTHOOD,
 MONOTHEISM,
 MONARCHY,
 LITERATURE,
 CODEOFLAWS,
 DRAMA,
 FEUDALISM,
 THEOLOGY,
 MUSIC,
 CIVIL_SERVICE,
 GUILDS,
 DIVINERIGHT,
 PATRONAGE,
 NATIONALISM,
 MILITARY_TRADITION,
 CONSTITUTION,
 LIBERALISM,
 DEMOCRACY,
 CORPORATION,
 FASCISM,
 COMMUNISM,
 MASS_MEDIA,
 ECOLOGY,
 FISHING,
 THE_WHEEL,
 AGRICULTURE,
 POTTERY,
 AESTHETICS,
 SAILING,
 WRITING,
 MATHEMATICS,
 ALPHABET,
 CALENDAR,
 CURRENCY,
 PHILOSOPHY,
 PAPER,
 BANKING,
 EDUCATION,
 PRINTING_PRESS,
 ECONOMICS,
 ASTRONOMY,
 CHEMISTRY,
 SCIENTIFIC_METHOD,
 PHYSICS,
 BIOLOGY,
 MEDICINE,
 ELECTRICITY,
 COMBUSTION,
 FISSION,
 FLIGHT,
 ADVANCED_FLIGHT,
 PLASTICS,
 COMPOSITES,
 STEALTH,
 GENETICS,
 FIBER_OPTICS,
 FUSION,
 HUNTING,
 MINING,
 ARCHERY,
 MASONRY,
 ANIMAL_HUSBANDRY,
 BRONZEWORKING,
 HORSEBACK_RIDING,
 IRONWORKING,
 METALCASTING,
 COMPASS,
 CONSTRUCTION,
 MACHINERY,
 ENGINEERING,
 OPTICS,
 GUNPOWDER,
 REPLACEABLE_PARTS,
 MILITARY_SCIENCE,
 RIFLING,
 STEAM_POWER,
 STEEL,
 ASSEMBLY_LINE,
 RAILROAD,
 ARTILLERY,
 INDUSTRIALISM,
 RADIO,
 REFRIGERATION,
 SUPERCONDUCTORS,
 COMPUTERS,
 LASER,
 ROCKETRY,
 SATELLITES,
 ROBOTICS
};

enum MyBuildings
{
  HEROICEPIC = BEGIN_WONDERS,
  FLAVIANAMPHITHEATRE = BEGIN_WONDERS,
  NATIONALEPIC = BEGIN_WONDERS+1,
  TRIUMPHALARCH = BEGIN_WONDERS+1,
  GLOBETHEATRE = BEGIN_WONDERS+2,
  HERMITAGE = BEGIN_WONDERS+4,
  NATIONALGALLERY = BEGIN_WONDERS+4,
  CHANNELTUNNEL = BEGIN_WONDERS+5,
  WALLSTREET = BEGIN_WONDERS+6,
  IRONWORKS = BEGIN_WONDERS+7,
  TRADINGCOMPANY = BEGIN_WONDERS+8,
  MTRUSHMORE = BEGIN_WONDERS+9,
  REDCROSS = BEGIN_WONDERS+10,
  INTERPOL = BEGIN_WONDERS+11,
  SCOTLANDYARD = BEGIN_WONDERS+11,
  PYRAMID = BEGIN_WONDERS+12,
  STONEHENGE = BEGIN_WONDERS+13,
  GREATLIBRARY = BEGIN_WONDERS+14,
  GREATLIGHTHOUSE = BEGIN_WONDERS+15,
  HANGINGGARDEN = BEGIN_WONDERS+16,
  COLOSSUS = BEGIN_WONDERS+17,
  ORACLE = BEGIN_WONDERS+18,
  PARTHENON = BEGIN_WONDERS+19,
  ANGKORWAT = BEGIN_WONDERS+20,
  CHICHENITZA = BEGIN_WONDERS+21,
  TEMPLEOFKUKULKAN = BEGIN_WONDERS+21,
  SISTINECHAPEL = BEGIN_WONDERS+22,
  SPIRALMINARET = BEGIN_WONDERS+23,
  NOTREDAME = BEGIN_WONDERS+24,
  TAJMAHAL = BEGIN_WONDERS+25,
  KREMLIN = BEGIN_WONDERS+26,
  EIFFELTOWER = BEGIN_WONDERS+27,
  STATUEOFLIBERTY = BEGIN_WONDERS+28,
  BROADWAY = BEGIN_WONDERS+29,
  WEMBLEY = BEGIN_WONDERS+29,
  ROCKNROLL = BEGIN_WONDERS+30,
  GRACELAND = BEGIN_WONDERS+30,
  HOLLYWOOD = BEGIN_WONDERS+31,
  GREATDAM = BEGIN_WONDERS+32,
  PENTAGON = BEGIN_WONDERS+33,
  UNITEDNATIONS = BEGIN_WONDERS+34,
  SPACEELEVATOR = BEGIN_WONDERS+35,
  ARTEMIS = BEGIN_WONDERS+37,
  SANKORE = BEGIN_WONDERS+38,
  GREATWALL = BEGIN_WONDERS+39,
  ZEUS = BEGIN_WONDERS+40,
  MAUSOLLOS = BEGIN_WONDERS+41,
  CRISTO = BEGIN_WONDERS+42,
  PAYA = BEGIN_WONDERS+43,
  MOAI = BEGIN_WONDERS+44,
  APOSTOLIC = BEGIN_WONDERS+45,
  LEANINGTOWER = BEGIN_WONDERS+46,
  OLYMPICPARK = BEGIN_WONDERS+47,
  SOLOMON = BEGIN_WONDERS+48,
  ISHTAR = BEGIN_WONDERS+49,
  THEODOSIAN = BEGIN_WONDERS+50,
  TERRACOTTA = BEGIN_WONDERS+51,
  MEZQUITA = BEGIN_WONDERS+52,
  DOMEROCK = BEGIN_WONDERS+53,
  TOPKAPI = BEGIN_WONDERS+54,
  BRANDENBURG = BEGIN_WONDERS+55,
  SANMARCO = BEGIN_WONDERS+56,
  WESTMINSTER = BEGIN_WONDERS+57,
  BOROBUDUR = BEGIN_WONDERS+59,
  KHAJURAHO = BEGIN_WONDERS+60,
  HIMEJI = BEGIN_WONDERS+61,
  PORCELAIN = BEGIN_WONDERS+62,
  HARMANDIR_SAHIB = BEGIN_WONDERS+63,
  BLUE_MOSQUE = BEGIN_WONDERS+64,
  RED_FORT = BEGIN_WONDERS+65,
  VERSAILLES = BEGIN_WONDERS+66,
  TRAFALGAR = BEGIN_WONDERS+67,
  EMPIRE_STATE = BEGIN_WONDERS+68,
  GRAND_CANAL = BEGIN_WONDERS+69,
  FLOATING_GARDENS = BEGIN_WONDERS+70,
  LUBYANKA = BEGIN_WONDERS+71,
  MACHU_PICCHU = BEGIN_WONDERS+72,
};

enum MyReligions
{
	PROTESTANTISM,
	CATHOLICISM,
	ORTHODOXY,
	ISLAM,
	HINDUISM,
	BUDDHISM,
	CONFUCIANISM,
	TAOISM,
	ZOROASTRIANISM,
	NUM_RELIGIONS
};

enum MyCivics
{
	TYRANNY,
	DYNASTICISM,
	CITY_STATES,
	THEOCRACY,
	AUTOCRACY,
	REPUBLIC,
	DIRECT_RULE,
	VASSALAGE,
	ABSOLUTISM,
	REPRESENTATION,
	SUPREME_COUNCIL,
	UNIVERSAL_SUFFRAGE,
	TRIBALISM,
	AGRARIANISM,
	URBANIZATION,
	CAPITALISM,
	TOTALITARIANISM,
	EGALITARIANISM,
	SELF_SUFFICIENCY,
	FORCED_LABOR,
	MERCANTILISM,
	FREE_MARKET,
	STATE_PROPERTY,
	ENVIRONMENTALISM,
	ANIMISM,
	PANTHEON,
	ORGANIZED_RELIGION,
	SCHOLASTICISM,
	PATRIARCHATE,
	SECULARISM
};

enum MyEras
{
	ERA_ANCIENT,
	ERA_CLASSICAL,
	ERA_MEDIEVAL,
	ERA_RENAISSANCE,
	ERA_INDUSTRIAL,
	ERA_MODERN,
	ERA_FUTURE,
	ERA_MIDDLE_EAST,
	ERA_EAST_ASIA,
	ERA_SOUTH_ASIA,
};

enum Regions
{
	REGION_BRITAIN,
	REGION_IBERIA,
	REGION_ITALY,
	REGION_BALKANS,
	REGION_EUROPE,
	REGION_SCANDINAVIA,
	REGION_RUSSIA,
	REGION_ANATOLIA,
	REGION_MESOPOTAMIA,
	REGION_ARABIA,
	REGION_EGYPT,
	REGION_MAGHREB,
	REGION_PERSIA,
	REGION_INDIA,
	REGION_DECCAN,
	REGION_INDOCHINA,
	REGION_INDONESIA,
	REGION_CHINA,
	REGION_KOREA,
	REGION_JAPAN,
	REGION_MANCHURIA,
	REGION_TIBET,
	REGION_CENTRAL_ASIA,
	REGION_SIBERIA,
	REGION_AUSTRALIA,
	REGION_OCEANIA,
	REGION_ETHIOPIA,
	REGION_WEST_AFRICA,
	REGION_SOUTH_AFRICA,
	REGION_CANADA,
	REGION_ALASKA,
	REGION_UNITED_STATES,
	REGION_CARIBBEAN,
	REGION_MESOAMERICA,
	REGION_BRAZIL,
	REGION_ARGENTINA,
	REGION_PERU,
	REGION_COLOMBIA
};

enum ECSArtStyles
{
	ARTSTYLE_AFRICA,
	ARTSTYLE_ANGLO_AMERICA,
	ARTSTYLE_ARABIA,
	ARTSTYLE_ASIA,
	ARTSTYLE_BARBARIAN,
	ARTSTYLE_CRESCENT,
	ARTSTYLE_EGYPT,
	ARTSTYLE_EUROPE,
	ARTSTYLE_GRECO_ROMAN,
	ARTSTYLE_INDIA,
	ARTSTYLE_IBERIA,
	ARTSTYLE_JAPAN,
	ARTSTYLE_MESO_AMERICA,
	ARTSTYLE_MONGOLIA,
	ARTSTYLE_NATIVE_AMERICA,
	ARTSTYLE_NORSE,
	ARTSTYLE_RUSSIA,
	ARTSTYLE_SOUTH_AMERICA,
	ARTSTYLE_SOUTH_EAST_ASIA,
	ARTSTYLE_SOUTH_PACIFIC,
};

#endif	// CVRHYES_H


extern int startingTurn[];
extern int startingTurnYear[]; // edead
//extern int fallTurnYear[];
extern char loadingTime[NUM_CIVS][4];
extern char loadingTime600AD[NUM_CIVS][4];
extern char loadingTime1700AD[NUM_CIVS][4];
extern char startingYear[NUM_CIVS][6];
extern bool startingEra[NUM_CIVS];
extern char startingYear600AD[NUM_CIVS][6];
extern bool startingEra600AD[NUM_CIVS];
extern char startingYear1700AD[NUM_CIVS][6];
extern bool startingEra1700AD[NUM_CIVS];

extern int takenTiles[NUM_PL];
extern int distanceSubtrahend[NUM_PL];
extern int distanceSubtrahendAstronomy[NUM_PL];
extern int distanceMultiply[NUM_PL];
extern int distanceMultiplyAstronomy[NUM_PL];
extern int compactEmpireModifierArray[NUM_PL];
extern int compactEmpireModifierAstronomy[NUM_PL];
extern int targetCityValueDivisor[NUM_PL];

extern int eraModifierInit[NUM_PL];
extern int eraModifierInitAstronomy[NUM_PL];
extern int cultureModifier[NUM_PL];

extern int unitCostModifier[NUM_PL];
extern int researchModifier[NUM_PL];
extern int distanceMaintenanceModifier[NUM_PL];
extern int numMaintenanceModifier[NUM_PL];
extern int civicUpkeepModifier[NUM_PL];
extern int healthMultiplier[NUM_PL];

extern int startingEraFound[NUM_PL];
extern int startingEraFound600AD[NUM_PL];
extern int startingEraFound1700AD[NUM_PL];
extern int startingEraFoundAstronomy[NUM_PL];
extern int startingEraRespawn[NUM_PL];
extern int unitCostModifier2[NUM_PL];
extern int wonderCostModifier[NUM_PL];
extern int buildingCostModifier[NUM_PL];
extern int inflationRateModifier[NUM_PL];
extern int greatPeopleThresholdArray[NUM_PL];
extern int currentEra[NUM_PL];
extern int currentEra600AD[NUM_PL];
extern int currentEra1700AD[NUM_PL];
extern int growthThreshold[NUM_PL];

extern int bonusIslandsX[NUM_BONUS_ISLANDS];
extern int bonusIslandsY[NUM_BONUS_ISLANDS];

//extern int militaryBonus[2][18];
extern char uniquePower[NUM_CIVS][2][16];
extern char uniqueGoals[NUM_CIVS][3][18];
extern char rating[NUM_CIVS][6][15];

extern int turnPlayed[NUM_PL+NUM_MINORS]; // modify for new player
extern int civSpreadFactor[NUM_PL+NUM_MINORS][9]; // s.o.
extern int borders[NUM_PL][NUM_PL];
extern int regionMap[68][124];
extern int settlersMaps[2][NUM_PL][68][124];
extern int warMaps[2][NUM_PL][68][124];


