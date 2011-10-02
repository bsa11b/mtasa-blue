/*****************************************************************************
*
*  PROJECT:     Multi Theft Auto v1.0
*  LICENSE:     See LICENSE in the top level directory
*  FILE:        mods/deathmatch/logic/CCommon.h
*  PURPOSE:     Common definitions and enumerations header
*
*  Multi Theft Auto is available from http://www.multitheftauto.com/
*
*****************************************************************************/

#ifndef __CCOMMON_H
#define __CCOMMON_H

#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <list>
#include <vector>
#include <algorithm>
#include <CVector.h>
#include <core/CServerInterface.h>

// Globals
extern CServerInterface* g_pServerInterface;
extern CNetServer* g_pNetServer;

#define REMOTE_ADMIN_ID 254
#define CONSOLE_ID 255

#define MAX_HTTP_DOWNLOAD_URL 512

enum eHTTPDownloadType
{
    HTTP_DOWNLOAD_DISABLED = 0,
    HTTP_DOWNLOAD_ENABLED_PORT,
    HTTP_DOWNLOAD_ENABLED_URL
};

enum eVehicleTypes
{
    VT_LANDSTAL = 400,
    VT_BRAVURA,
    VT_BUFFALO,
    VT_LINERUN,
    VT_PEREN,
    VT_SENTINEL,
    VT_DUMPER,
    VT_FIRETRUK,
    VT_TRASH,
    VT_STRETCH,
    VT_MANANA,
    VT_INFERNUS,
    VT_VOODOO,
    VT_PONY,
    VT_MULE,
    VT_CHEETAH,
    VT_AMBULAN,
    VT_LEVIATHN,
    VT_MOONBEAM,
    VT_ESPERANT,
    VT_TAXI,
    VT_WASHING,
    VT_BOBCAT,
    VT_MRWHOOP,
    VT_BFINJECT,
    VT_HUNTER,
    VT_PREMIER,
    VT_ENFORCER,
    VT_SECURICA,
    VT_BANSHEE,
    VT_PREDATOR,
    VT_BUS,
    VT_RHINO,
    VT_BARRACKS,
    VT_HOTKNIFE,
    VT_ARTICT1,
    VT_PREVION,
    VT_COACH,
    VT_CABBIE,
    VT_STALLION,
    VT_RUMPO,
    VT_RCBANDIT,
    VT_ROMERO,
    VT_PACKER,
    VT_MONSTER,
    VT_ADMIRAL,
    VT_SQUALO,
    VT_SEASPAR,
    VT_PIZZABOY,
    VT_TRAM,
    VT_ARTICT2,
    VT_TURISMO,
    VT_SPEEDER,
    VT_REEFER,
    VT_TROPIC,
    VT_FLATBED,
    VT_YANKEE,
    VT_CADDY,
    VT_SOLAIR,
    VT_TOPFUN,
    VT_SKIMMER,
    VT_PCJ600,
    VT_FAGGIO,
    VT_FREEWAY, 
    VT_RCBARON,
    VT_RCRAIDER,
    VT_GLENDALE,
    VT_OCEANIC,
    VT_SANCHEZ,
    VT_SPARROW,
    VT_PATRIOT,
    VT_QUAD,
    VT_COASTG,
    VT_DINGHY,
    VT_HERMES,
    VT_SABRE,
    VT_RUSTLER,
    VT_ZR350,
    VT_WALTON,
    VT_REGINA,
    VT_COMET,
    VT_BMX,
    VT_BURRITO,
    VT_CAMPER,
    VT_MARQUIS,
    VT_BAGGAGE,
    VT_DOZER,   
    VT_MAVERICK,
    VT_VCNMAV,
    VT_RANCHER,
    VT_FBIRANCH,
    VT_VIRGO,
    VT_GREENWOO,
    VT_JETMAX,
    VT_HOTRING,
    VT_SANDKING,
    VT_BLISTAC,
    VT_POLMAV,
    VT_BOXVILLE,
    VT_BENSON,
    VT_MESA,
    VT_RCGOBLIN,
    VT_HOTRINA,
    VT_HOTRINB,
    VT_BLOODRA,
    VT_RNCHLURE,
    VT_SUPERGT,
    VT_ELEGANT,
    VT_JOURNEY,
    VT_BIKE,
    VT_MTBIKE,
    VT_BEAGLE,
    VT_CROPDUST,
    VT_STUNT,
    VT_PETRO,
    VT_RDTRAIN,
    VT_NEBULA,
    VT_MAJESTIC,
    VT_BUCCANEE,
    VT_SHAMAL,
    VT_HYDRA,
    VT_FCR900,
    VT_NRG500,
    VT_COPBIKE,
    VT_CEMENT,
    VT_TOWTRUCK,
    VT_FORTUNE,
    VT_CADRONA,
    VT_FBITRUCK,
    VT_WILLARD,
    VT_FORKLIFT,
    VT_TRACTOR,
    VT_COMBINE,
    VT_FELTZER,
    VT_REMINGTN,
    VT_SLAMVAN,
    VT_BLADE,
    VT_FREIGHT,
    VT_STREAK,
    VT_VORTEX,
    VT_VINCENT,
    VT_BULLET,
    VT_CLOVER,
    VT_SADLER,
    VT_FIRELA,
    VT_HUSTLER,
    VT_INTRUDER,
    VT_PRIMO,
    VT_CARGOBOB,
    VT_TAMPA,
    VT_SUNRISE,
    VT_MERIT,
    VT_UTILITY,
    VT_NEVADA,
    VT_YOSEMITE,
    VT_WINDSOR,
    VT_MONSTERA,
    VT_MONSTERB,
    VT_URANUS,
    VT_JESTER,
    VT_SULTAN,
    VT_STRATUM,
    VT_ELEGY,
    VT_RAINDANC,
    VT_RCTIGER,
    VT_FLASH,
    VT_TAHOMA,
    VT_SAVANNA,
    VT_BANDITO,
    VT_FREIFLAT,
    VT_STREAKC,
    VT_KART,
    VT_MOWER,
    VT_DUNERIDE,
    VT_SWEEPER,
    VT_BROADWAY,
    VT_TORNADO,
    VT_AT400,
    VT_DFT30,
    VT_HUNTLEY,
    VT_STAFFORD,
    VT_BF400,
    VT_NEWSVAN,
    VT_TUG,
    VT_PETROTR,
    VT_EMPEROR,
    VT_WAYFARER,
    VT_EUROS,
    VT_HOTDOG,
    VT_CLUB,
    VT_FREIBOX,
    VT_ARTICT3,
    VT_ANDROM,
    VT_DODO,
    VT_RCCAM,
    VT_LAUNCH,
    VT_COPCARLA,
    VT_COPCARSF,
    VT_COPCARVG,
    VT_COPCARRU,
    VT_PICADOR,
    VT_SWATVAN,
    VT_ALPHA,
    VT_PHOENIX,
    VT_GLENSHIT,
    VT_SADLSHIT,
    VT_BAGBOXA,
    VT_BAGBOXB,
    VT_TUGSTAIR,
    VT_BOXBURG,
    VT_FARMTR1,
    VT_UTILTR1,
    VT_MAX
};

enum eHandlingTypes
{
    HT_LANDSTAL,
    HT_BRAVURA,
    HT_BUFFALO,
    HT_LINERUN,
    HT_PEREN,
    HT_SENTINEL,
    HT_DUMPER,
    HT_FIRETRUK,
    HT_TRASH,
    HT_STRETCH,
    HT_MANANA,
    HT_INFERNUS,
    HT_VOODOO,
    HT_PONY,
    HT_MULE,
    HT_CHEETAH,
    HT_AMBULAN,
    HT_MOONBEAM,
    HT_ESPERANT,
    HT_TAXI,
    HT_WASHING,
    HT_BOBCAT,
    HT_MRWHOOP,
    HT_BFINJECT,
    HT_PREMIER,
    HT_ENFORCER,
    HT_SECURICA,
    HT_BANSHEE,
    HT_BUS,
    HT_RHINO,
    HT_BARRACKS,
    HT_HOTKNIFE,
    HT_ARTICT1,
    HT_PREVION,
    HT_COACH,
    HT_CABBIE,
    HT_STALLION,
    HT_RUMPO,
    HT_RCBANDIT,
    HT_ROMERO,
    HT_PACKER,
    HT_MONSTER,
    HT_ADMIRAL,
    HT_TRAM,
    HT_AIRTRAIN,
    HT_ARTICT2,
    HT_TURISMO,
    HT_FLATBED,
    HT_YANKEE,
    HT_GOLFCART,
    HT_SOLAIR,
    HT_TOPFUN,
    HT_GLENDALE,
    HT_OCEANIC,
    HT_PATRIOT,
    HT_HERMES,
    HT_SABRE,
    HT_ZR350,
    HT_WALTON,
    HT_REGINA,
    HT_COMET,
    HT_BURRITO,
    HT_CAMPER,
    HT_BAGGAGE,
    HT_DOZER,
    HT_RANCHER,
    HT_FBIRANCH,
    HT_VIRGO,
    HT_GREENWOO,
    HT_HOTRING,
    HT_SANDKING,
    HT_BLISTAC,
    HT_BOXVILLE,
    HT_BENSON,
    HT_MESA,
    HT_BLOODRA,
    HT_BLOODRB,
    HT_SUPERGT,
    HT_ELEGANT,
    HT_JOURNEY,
    HT_PETROL,
    HT_RDTRAIN,
    HT_NEBULA,
    HT_MAJESTIC,
    HT_BUCCANEE,
    HT_CEMENT,
    HT_TOWTRUCK,
    HT_FORTUNE,
    HT_CADRONA,
    HT_FBITRUCK,
    HT_WILLARD,
    HT_FORKLIFT,
    HT_TRACTOR,
    HT_COMBINE,
    HT_FELTZER,
    HT_REMINGTN,
    HT_SLAMVAN,
    HT_BLADE,
    HT_FREIGHT,
    HT_STREAK,
    HT_VINCENT,
    HT_BULLET,
    HT_CLOVER,
    HT_SADLER,
    HT_RANGER,
    HT_HUSTLER,
    HT_INTRUDER,
    HT_PRIMO,
    HT_TAMPA,
    HT_SUNRISE,
    HT_MERIT,
    HT_UTILITY,
    HT_YOSEMITE,
    HT_WINDSOR,
    HT_MTRUCK_A,
    HT_MTRUCK_B,
    HT_URANUS,
    HT_JESTER,
    HT_SULTAN,
    HT_STRATUM,
    HT_ELEGY,
    HT_RCTIGER,
    HT_FLASH,
    HT_TAHOMA,
    HT_SAVANNA,
    HT_BANDITO,
    HT_FREIFLAT,
    HT_CSTREAK,
    HT_KART,
    HT_MOWER,
    HT_DUNE,
    HT_SWEEPER,
    HT_BROADWAY,
    HT_TORNADO,
    HT_DFT30,
    HT_HUNTLEY,
    HT_STAFFORD,
    HT_NEWSVAN,
    HT_TUG,
    HT_PETROTR,
    HT_EMPEROR,
    HT_FLOAT,
    HT_EUROS,
    HT_HOTDOG,
    HT_CLUB,
    HT_ARTICT3,
    HT_RCCAM,
    HT_POLICE_LA,
    HT_POLICE_SF,
    HT_POLICE_VG,
    HT_POLRANGER,
    HT_PICADOR,
    HT_SWATVAN,
    HT_ALPHA,
    HT_PHOENIX,
    HT_BAGBOXA,
    HT_BAGBOXB,
    HT_STAIRS,
    HT_BOXBURG,
    HT_FARM_TR1,
    HT_UTIL_TR1,
    HT_ROLLER,
    HT_BIKE,
    HT_MOPED,
    HT_DIRTBIKE,
    HT_FCR900,
    HT_NRG500,
    HT_HPV1000,
    HT_BF400,
    HT_WAYFARER,
    HT_QUADBIKE,
    HT_BMX,
    HT_CHOPPERB,
    HT_MTB,
    HT_FREEWAY,
    HT_PREDATOR,
    HT_SPEEDER,
    HT_REEFER,
    HT_RIO,
    HT_SQUALO,
    HT_TROPIC,
    HT_COASTGRD,
    HT_DINGHY,
    HT_MARQUIS,
    HT_CUPBOAT,
    HT_LAUNCH,
    HT_SEAPLANE,
    HT_VORTEX,
    HT_RUSTLER,
    HT_BEAGLE,
    HT_CROPDUST,
    HT_STUNT,
    HT_SHAMAL,
    HT_HYDRA,
    HT_NEVADA,
    HT_AT400,
    HT_ANDROM,
    HT_DODO,
    HT_SPARROW,
    HT_SEASPAR,
    HT_MAVERICK,
    HT_COASTMAV,
    HT_POLMAV,
    HT_HUNTER,
    HT_LEVIATHN,
    HT_CARGOBOB,
    HT_RAINDANC,
    HT_RCBARON,
    HT_RCGOBLIN,
    HT_RCRAIDER,
    HT_MAX
};

enum eHandlingProperty
{
    HANDLING_MASS = 1,
    HANDLING_TURNMASS,
    HANDLING_DRAGCOEFF,
    HANDLING_CENTEROFMASS,
    HANDLING_PERCENTSUBMERGED,
    HANDLING_TRACTIONMULTIPLIER,
    HANDLING_DRIVETYPE,
    HANDLING_ENGINETYPE,
    HANDLING_NUMOFGEARS,
    HANDLING_ENGINEACCELERATION,
    HANDLING_ENGINEINERTIA,
    HANDLING_MAXVELOCITY,
    HANDLING_BRAKEDECELERATION,
    HANDLING_BRAKEBIAS,
    HANDLING_ABS,
    HANDLING_STEERINGLOCK,
    HANDLING_TRACTIONLOSS,
    HANDLING_TRACTIONBIAS,
    HANDLING_SUSPENSION_FORCELEVEL,
    HANDLING_SUSPENSION_DAMPING,
    HANDLING_SUSPENSION_HIGHSPEEDDAMPING,
    HANDLING_SUSPENSION_UPPER_LIMIT,
    HANDLING_SUSPENSION_LOWER_LIMIT,
    HANDLING_SUSPENSION_FRONTREARBIAS,
    HANDLING_SUSPENSION_ANTIDIVEMULTIPLIER,
    HANDLING_COLLISIONDAMAGEMULTIPLIER,
    HANDLING_SEATOFFSETDISTANCE,
    HANDLING_MONETARY,
    HANDLING_HANDLINGFLAGS,
    HANDLING_MODELFLAGS,
    HANDLING_HEADLIGHT,
    HANDLING_TAILLIGHT,
    HANDLING_ANIMGROUP,
    HANDLING_MAX,
};
enum eWeaponProperty
{
    WEAPON_INVALID_PROPERTY = 0,
    WEAPON_WEAPON_RANGE,
    WEAPON_TARGET_RANGE,
    WEAPON_ACCURACY,
    WEAPON_DAMAGE,
    WEAPON_LIFE_SPAN,
    WEAPON_FIRING_SPEED,
    WEAPON_SPREAD,
    WEAPON_MAX_CLIP_AMMO,
    WEAPON_MOVE_SPEED,
    WEAPON_FLAGS,
    WEAPON_ANIM_GROUP,
};

enum eWeaponSkill
{
    WEAPONSKILL_POOR = 0,
    WEAPONSKILL_STD,
    WEAPONSKILL_PRO,
    WEAPONSKILL_SPECIAL,    // for cops using pistols differently for example
    WEAPONSKILL_MAX_NUMBER
};

enum eFireType
{
    FIRETYPE_MELEE,
    FIRETYPE_INSTANT_HIT,
    FIRETYPE_PROJECTILE,
    FIRETYPE_AREA_EFFECT,
    FIRETYPE_CAMERA,
    FIRETYPE_USE,

    FIRETYPE_LAST_FIRETYPE
};

enum eWeaponState
{
    WEAPONSTATE_READY,
    WEAPONSTATE_FIRING,
    WEAPONSTATE_RELOADING,
    WEAPONSTATE_OUT_OF_AMMO,
    WEAPONSTATE_MELEE_MADECONTACT
};
enum eWeaponType
{
    WEAPONTYPE_UNARMED=0,
    WEAPONTYPE_BRASSKNUCKLE, 
    WEAPONTYPE_GOLFCLUB,
    WEAPONTYPE_NIGHTSTICK,
    WEAPONTYPE_KNIFE,
    WEAPONTYPE_BASEBALLBAT,
    WEAPONTYPE_SHOVEL,
    WEAPONTYPE_POOL_CUE,
    WEAPONTYPE_KATANA,
    WEAPONTYPE_CHAINSAW,
    
    // gifts
    WEAPONTYPE_DILDO1, // 10
    WEAPONTYPE_DILDO2,
    WEAPONTYPE_VIBE1,
    WEAPONTYPE_VIBE2,
    WEAPONTYPE_FLOWERS,
    WEAPONTYPE_CANE,

    WEAPONTYPE_GRENADE,
    WEAPONTYPE_TEARGAS,
    WEAPONTYPE_MOLOTOV,
    WEAPONTYPE_ROCKET,
    WEAPONTYPE_ROCKET_HS, // 20
    WEAPONTYPE_FREEFALL_BOMB,

    // FIRST SKILL WEAPON
    WEAPONTYPE_PISTOL,          // handguns
    WEAPONTYPE_PISTOL_SILENCED,
    WEAPONTYPE_DESERT_EAGLE,
    WEAPONTYPE_SHOTGUN,         // shotguns
    WEAPONTYPE_SAWNOFF_SHOTGUN, // one handed
    WEAPONTYPE_SPAS12_SHOTGUN,
    WEAPONTYPE_MICRO_UZI,       // submachine guns
    WEAPONTYPE_MP5,
    WEAPONTYPE_AK47, // 30      // machine guns 
    WEAPONTYPE_M4,          
    WEAPONTYPE_TEC9,            // this uses stat from the micro_uzi
    // END SKILL WEAPONS
    
    WEAPONTYPE_COUNTRYRIFLE,    // rifles
    WEAPONTYPE_SNIPERRIFLE, 
    WEAPONTYPE_ROCKETLAUNCHER,  // specials
    WEAPONTYPE_ROCKETLAUNCHER_HS,
    WEAPONTYPE_FLAMETHROWER,
    WEAPONTYPE_MINIGUN,
    WEAPONTYPE_REMOTE_SATCHEL_CHARGE,
    WEAPONTYPE_DETONATOR, // 40 // plastic explosive
    WEAPONTYPE_SPRAYCAN,
    WEAPONTYPE_EXTINGUISHER,
    WEAPONTYPE_CAMERA,
    WEAPONTYPE_NIGHTVISION,
    WEAPONTYPE_INFRARED,
    WEAPONTYPE_PARACHUTE,
    WEAPONTYPE_LAST_WEAPONTYPE,

    WEAPONTYPE_ARMOUR,
    // these are possible ways to die
    WEAPONTYPE_RAMMEDBYCAR,
    WEAPONTYPE_RUNOVERBYCAR, // 50
    WEAPONTYPE_EXPLOSION,
    WEAPONTYPE_UZI_DRIVEBY,
    WEAPONTYPE_DROWNING,
    WEAPONTYPE_FALL,
    WEAPONTYPE_UNIDENTIFIED,    // Used for damage being done
    WEAPONTYPE_ANYMELEE,
    WEAPONTYPE_ANYWEAPON,
    WEAPONTYPE_FLARE,

    // Added by us
    WEAPONTYPE_TANK_GRENADE,
};
enum eWeaponSlot
{
    WEAPONSLOT_TYPE_UNARMED = 0,
    WEAPONSLOT_TYPE_MELEE,
    WEAPONSLOT_TYPE_HANDGUN,
    WEAPONSLOT_TYPE_SHOTGUN,
    WEAPONSLOT_TYPE_SMG,        //4
    WEAPONSLOT_TYPE_MG, 
    WEAPONSLOT_TYPE_RIFLE,
    WEAPONSLOT_TYPE_HEAVY,
    WEAPONSLOT_TYPE_THROWN,
    WEAPONSLOT_TYPE_SPECIAL,    //9
    WEAPONSLOT_TYPE_GIFT,       //10
    WEAPONSLOT_TYPE_PARACHUTE,  //11
    WEAPONSLOT_TYPE_DETONATOR,  //12

    WEAPONSLOT_MAX
};
enum eWeaponModel
{
    WEAPONMODEL_CELLPHONE=258,
    WEAPONMODEL_BRASSKNUCKLE,
    WEAPONMODEL_SCREWDRIVER,
    WEAPONMODEL_GOLFCLUB,
    WEAPONMODEL_NITESTICK,
    WEAPONMODEL_KNIFECUR,
    WEAPONMODEL_BASEBALL_BAT,
    WEAPONMODEL_HAMMER,
    WEAPONMODEL_CLEAVER,
    WEAPONMODEL_MACHETE,
    WEAPONMODEL_KATANA,
    WEAPONMODEL_CHAINSAW,
    WEAPONMODEL_GRENADE,
    WEAPONMODEL_TEARGAS,
    WEAPONMODEL_MOLOTOV,
    WEAPONMODEL_MISSILE,
    WEAPONMODEL_COLT45,
    WEAPONMODEL_PYTHON,
    WEAPONMODEL_RUGER,
    WEAPONMODEL_CHROMEGUN,
    WEAPONMODEL_SHOTGSPA,
    WEAPONMODEL_BUDDYSHOT,
    WEAPONMODEL_M4,
    WEAPONMODEL_TEC9,
    WEAPONMODEL_UZI,
    WEAPONMODEL_INGRAMSL,
    WEAPONMODEL_MP5LNG,
    WEAPONMODEL_SNIPER,
    WEAPONMODEL_LASER,
    WEAPONMODEL_ROCKETLA,
    WEAPONMODEL_FLAME,
    WEAPONMODEL_M60,
    WEAPONMODEL_MINIGUN,
    WEAPONMODEL_BOMB,
    WEAPONMODEL_CAMERA,
    WEAPONMODEL_FINGERS,
    WEAPONMODEL_MINIGUN2
};
enum eWeaponStats
{
    WEAPONTYPE_MIN = WEAPONTYPE_GRENADE,
    WEAPONTYPE_MAX = WEAPONTYPE_EXTINGUISHER,
};

#endif
