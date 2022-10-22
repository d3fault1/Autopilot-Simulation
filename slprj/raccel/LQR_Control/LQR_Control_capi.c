#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "LQR_Control_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "LQR_Control.h"
#include "LQR_Control_capi.h"
#include "LQR_Control_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"LQR_Control/0" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 ,
TARGET_STRING ( "LQR_Control/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
1 } , { 2 , 0 , TARGET_STRING ( "LQR_Control/Drift Z' to Z" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"LQR_Control/T*sin to Z" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 4
, 0 , TARGET_STRING ( "LQR_Control/h' to height" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 5 , 0 , TARGET_STRING ( "LQR_Control/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"LQR_Control/Product1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 7 ,
0 , TARGET_STRING ( "LQR_Control/State-Space" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 8 , 0 , TARGET_STRING ( "LQR_Control/Add" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"LQR_Control/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 10 , 0 ,
TARGET_STRING ( "LQR_Control/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
1 } , { 11 , 0 , TARGET_STRING ( "LQR_Control/Flat Earth to LLA/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 1 } , { 13 , 0 , TARGET_STRING ( "LQR_Control/Subsystem/K_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 14 , 0 , TARGET_STRING (
"LQR_Control/Subsystem/K_2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } ,
{ 15 , 0 , TARGET_STRING ( "LQR_Control/Subsystem/K_3" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 16 , 0 , TARGET_STRING (
"LQR_Control/Subsystem/Add" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } ,
{ 17 , 0 , TARGET_STRING ( "LQR_Control/Flat Earth to LLA/LatLong wrap/Sum" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 18 , 0 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Switch1" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 2 } , { 19 , 0 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LongLat_offset/y*cos" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LongLat_offset/y*sin" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LongLat_offset/SinCos" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LongLat_offset/SinCos" ) , TARGET_STRING ( ""
) , 1 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Abs1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Sign1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 25 , 0 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Switch" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 26 , 0 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Wrap Longitude/Abs" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 27 , 0 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Wrap Longitude/Switch" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 28 , 0 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap1/Latitude Wrap 90/Switch" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap1/Wrap Longitude/Switch" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LongLat_offset/Find Radian//Distance/Trigonometric Function1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LongLat_offset/Find Radian//Distance/Trigonometric Function2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 33 , 0 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Wrap Angle 180/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 34 , 0 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Wrap Angle 180/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 35 , 0 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LatLong wrap/Wrap Longitude/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 36 , 0 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Wrap Angle 180/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 37 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA" ) , TARGET_STRING ( "LL0" ) , 0 , 3 , 0 } , {
38 , TARGET_STRING ( "LQR_Control/Flat Earth to LLA" ) , TARGET_STRING (
"psi" ) , 0 , 0 , 0 } , { 39 , TARGET_STRING (
"LQR_Control/FlightGear Preconfigured 6DoF Animation" ) , TARGET_STRING (
"DestinationPort" ) , 2 , 0 , 0 } , { 40 , TARGET_STRING ( "LQR_Control/0" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 41 , TARGET_STRING (
"LQR_Control/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 42 ,
TARGET_STRING ( "LQR_Control/Ref. Height" ) , TARGET_STRING ( "Value" ) , 0 ,
0 , 0 } , { 43 , TARGET_STRING ( "LQR_Control/Thrust" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 44 , TARGET_STRING ( "LQR_Control/tvc" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 45 , TARGET_STRING (
"LQR_Control/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 46 ,
TARGET_STRING ( "LQR_Control/Drift Z' to Z" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 47 , TARGET_STRING (
"LQR_Control/T*sin to Z" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0
} , { 48 , TARGET_STRING ( "LQR_Control/h' to height" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 49 , TARGET_STRING (
"LQR_Control/State-Space" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 ,
0 } , { 50 , TARGET_STRING (
"LQR_Control/FlightGear Preconfigured 6DoF Animation/PacketSize" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 51 , TARGET_STRING (
 "LQR_Control/FlightGear Preconfigured 6DoF Animation/Pack net_fdm Packet for FlightGear"
) , TARGET_STRING ( "P1" ) , 3 , 3 , 0 } , { 52 , TARGET_STRING (
 "LQR_Control/FlightGear Preconfigured 6DoF Animation/Pack net_fdm Packet for FlightGear"
) , TARGET_STRING ( "P2" ) , 3 , 3 , 0 } , { 53 , TARGET_STRING (
 "LQR_Control/FlightGear Preconfigured 6DoF Animation/Pack net_fdm Packet for FlightGear"
) , TARGET_STRING ( "P3" ) , 3 , 4 , 0 } , { 54 , TARGET_STRING (
 "LQR_Control/FlightGear Preconfigured 6DoF Animation/Pack net_fdm Packet for FlightGear"
) , TARGET_STRING ( "P4" ) , 3 , 4 , 0 } , { 55 , TARGET_STRING (
 "LQR_Control/FlightGear Preconfigured 6DoF Animation/Pack net_fdm Packet for FlightGear"
) , TARGET_STRING ( "P5" ) , 3 , 4 , 0 } , { 56 , TARGET_STRING (
 "LQR_Control/FlightGear Preconfigured 6DoF Animation/Pack net_fdm Packet for FlightGear"
) , TARGET_STRING ( "P6" ) , 3 , 4 , 0 } , { 57 , TARGET_STRING (
 "LQR_Control/FlightGear Preconfigured 6DoF Animation/Pack net_fdm Packet for FlightGear"
) , TARGET_STRING ( "P7" ) , 3 , 4 , 0 } , { 58 , TARGET_STRING (
 "LQR_Control/FlightGear Preconfigured 6DoF Animation/Pack net_fdm Packet for FlightGear"
) , TARGET_STRING ( "P8" ) , 0 , 0 , 0 } , { 59 , TARGET_STRING (
"LQR_Control/FlightGear Preconfigured 6DoF Animation/Simulation Pace" ) ,
TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 60 , TARGET_STRING (
"LQR_Control/FlightGear Preconfigured 6DoF Animation/Simulation Pace" ) ,
TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 61 , TARGET_STRING (
"LQR_Control/FlightGear Preconfigured 6DoF Animation/Simulation Pace" ) ,
TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 62 , TARGET_STRING (
"LQR_Control/FlightGear Preconfigured 6DoF Animation/Simulation Pace" ) ,
TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 63 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 64 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 65 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap1/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 66 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap1/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 67 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 68 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Bias" ) ,
TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 69 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Bias1" ) ,
TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 70 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 71 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Wrap Longitude/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 72 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Wrap Longitude/Bias" ) ,
TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 73 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Wrap Longitude/Bias1" ) ,
TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap/Wrap Longitude/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 75 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LatLong wrap1/Latitude Wrap 90/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 76 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap1/Latitude Wrap 90/Bias" ) ,
TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 77 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap1/Latitude Wrap 90/Bias1" ) ,
TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 78 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap1/Latitude Wrap 90/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 79 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap1/Wrap Longitude/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 80 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap1/Wrap Longitude/Bias" ) ,
TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 81 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap1/Wrap Longitude/Bias1" ) ,
TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 82 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LatLong wrap1/Wrap Longitude/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 83 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LongLat_offset/Find Radian//Distance/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 84 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LongLat_offset/Find Radian//Distance/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 85 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LongLat_offset/Find Radian//Distance/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 86 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LongLat_offset/Find Radian//Distance/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 87 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Wrap Angle 180/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 88 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Wrap Angle 180/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 89 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Wrap Angle 180/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 90 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Wrap Angle 180/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 91 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LatLong wrap1/Latitude Wrap 90/Wrap Angle 180/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 92 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LatLong wrap1/Latitude Wrap 90/Wrap Angle 180/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 93 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LatLong wrap1/Latitude Wrap 90/Wrap Angle 180/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 94 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LatLong wrap1/Latitude Wrap 90/Wrap Angle 180/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 95 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LongLat_offset/Find Radian//Distance/denom/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 96 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LongLat_offset/Find Radian//Distance/e/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 97 , TARGET_STRING (
"LQR_Control/Flat Earth to LLA/LongLat_offset/Find Radian//Distance/e/f" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 98 , TARGET_STRING (
 "LQR_Control/Flat Earth to LLA/LongLat_offset/Find Radian//Distance/e^4/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 99 , TARGET_STRING (
"A_m" ) , 0 , 5 , 0 } , { 100 , TARGET_STRING ( "B_m" ) , 0 , 1 , 0 } , { 101
, TARGET_STRING ( "C_m" ) , 0 , 5 , 0 } , { 102 , TARGET_STRING ( "K_1" ) , 0
, 0 , 0 } , { 103 , TARGET_STRING ( "K_2" ) , 0 , 0 , 0 } , { 104 ,
TARGET_STRING ( "K_3" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . g1v1kclnd1 , & rtB . mdcyfy5sbr ,
& rtB . c41y42f4pq , & rtB . dx5kot32nu , & rtB . b2qt2zwcjk , & rtB .
lvnkzvb434 , & rtB . oa2jvz2byz , & rtB . fdjsfe3455 [ 0 ] , & rtB .
fs433snqu4 , & rtB . nmipyggopu [ 0 ] , & rtB . lykqzvo40l , & rtB .
hiuttdyv3u [ 0 ] , & rtB . ath5qesj3d , & rtB . dytsioegcl , & rtB .
jbxlgmlnzi , & rtB . mkw1wo3qto , & rtB . a4tmas2p4h , & rtB . odgj0hyah3 , &
rtB . omipsfdeoc , & rtB . fqzacaysgt , & rtB . f0lgj3lzwh , & rtB .
mhuwizvckh , & rtB . ecfo0yj40c , & rtB . mos0g315ut , & rtB . btgzr13vly , &
rtB . pi13qlj4xm , & rtB . eqoe5lq4kx , & rtB . e03qaanqok , & rtB .
nudtcdmd30 , & rtB . nfs4sew3oz , & rtB . ozm2txwfmw , & rtB . myh1s5kqti , &
rtB . pfi0xe3ebg , & rtB . nxucqy4vpf , & rtB . adn1bcbxce , & rtB .
oebjxibg1n , & rtB . k3efpdq54g , & rtP . FlatEarthtoLLA_LL0 [ 0 ] , & rtP .
FlatEarthtoLLA_psi , & rtP .
FlightGearPreconfigured6DoFAnimation_DestinationPort , & rtP . u_Value , &
rtP . Constant_Value , & rtP . RefHeight_Value , & rtP . Thrust_Value , & rtP
. tvc_Value , & rtP . Gain_Gain_ibloah5cgl , & rtP . DriftZtoZ_IC , & rtP .
TsintoZ_IC , & rtP . htoheight_IC , & rtP . StateSpace_InitialCondition [ 0 ]
, & rtP . PacketSize_Value , & rtP . Packnet_fdmPacketforFlightGear_P1 [ 0 ]
, & rtP . Packnet_fdmPacketforFlightGear_P2 [ 0 ] , & rtP .
Packnet_fdmPacketforFlightGear_P3 [ 0 ] , & rtP .
Packnet_fdmPacketforFlightGear_P4 [ 0 ] , & rtP .
Packnet_fdmPacketforFlightGear_P5 [ 0 ] , & rtP .
Packnet_fdmPacketforFlightGear_P6 [ 0 ] , & rtP .
Packnet_fdmPacketforFlightGear_P7 [ 0 ] , & rtP .
Packnet_fdmPacketforFlightGear_P8 , & rtP . SimulationPace_P1 , & rtP .
SimulationPace_P2 , & rtP . SimulationPace_P3 , & rtP . SimulationPace_P4 , &
rtP . Constant_Value_ewu5lv2vwe , & rtP . Constant1_Value , & rtP .
Constant_Value_ntz3dz1fnv , & rtP . Constant1_Value_e5l3bdifud , & rtP .
CompareToConstant_const , & rtP . Bias_Bias , & rtP . Bias1_Bias , & rtP .
Gain_Gain , & rtP . CompareToConstant_const_k24jnylgrb , & rtP .
Bias_Bias_kwgsxmywwt , & rtP . Bias1_Bias_np4cqimful , & rtP .
Constant2_Value_ilk1ktfw3v , & rtP . CompareToConstant_const_at0zaa4bgo , &
rtP . Bias_Bias_he1ot2gcw5 , & rtP . Bias1_Bias_p5104vrjel , & rtP .
Gain_Gain_dwpmjrnu55 , & rtP . CompareToConstant_const_dd2pjof1v0 , & rtP .
Bias_Bias_mgwwxvy23p , & rtP . Bias1_Bias_puweleon02 , & rtP .
Constant2_Value_fum1q5qrto , & rtP . Constant_Value_hb1abxfq0g , & rtP .
Constant1_Value_pjsncnza25 , & rtP . Constant2_Value_ixgzrgf4bw , & rtP .
Constant3_Value , & rtP . CompareToConstant_const_e0pd32tlkk , & rtP .
Bias_Bias_o2r4jtpow0 , & rtP . Bias1_Bias_jutkmsfubq , & rtP .
Constant2_Value , & rtP . CompareToConstant_const_lhkfefce1w , & rtP .
Bias_Bias_i0hfwhm31e , & rtP . Bias1_Bias_curknxed4d , & rtP .
Constant2_Value_med0nruw3y , & rtP . Constant_Value_bka2acpd1h , & rtP .
Constant_Value_f3dsia01as , & rtP . f_Value , & rtP .
Constant_Value_i24sigwmyq , & rtP . A_m [ 0 ] , & rtP . B_m [ 0 ] , & rtP .
C_m [ 0 ] , & rtP . K_1 , & rtP . K_2 , & rtP . K_3 , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 , 0 } , { "int" , "int32_T" , 0 , 0 , sizeof ( int32_T ) , SS_INT32 , 0 ,
0 , 0 } , { "unsigned short" , "uint16_T" , 0 , 0 , sizeof ( uint16_T ) ,
SS_UINT16 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 10 , 2 , 0 } } ;
static const uint_T rtDimensionArray [ ] = { 1 , 1 , 3 , 1 , 2 , 1 , 1 , 2 ,
1 , 3 , 3 , 3 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 , 1.0 }
; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 3 , 0 } , { ( const void * )
& rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 0
, 0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 1 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 37 , rtRootInputs , 0 , rtRootOutputs , 0 }
, { rtBlockParameters , 62 , rtModelParameters , 6 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 4274542035U , 2355859094U , 1289446516U ,
3884530962U } , ( NULL ) , 0 , 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * LQR_Control_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void LQR_Control_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void LQR_Control_host_InitializeDataMapInfo ( LQR_Control_host_DataMapInfo_T
* dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
