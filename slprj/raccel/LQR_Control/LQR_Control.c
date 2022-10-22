#include "rt_logging_mmi.h"
#include "LQR_Control_capi.h"
#include <math.h>
#include "LQR_Control.h"
#include "LQR_Control_private.h"
#include "LQR_Control_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "9.5 (R2021a) 14-Nov-2020" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void MdlInitialize ( void ) { rtX . dd1ojttvhe = rtP . TsintoZ_IC
; rtX . m5evkfq5r2 = rtP . DriftZtoZ_IC ; rtX . mb5dcmzdni = rtP .
htoheight_IC ; rtX . izyke4eg2x [ 0 ] = rtP . StateSpace_InitialCondition [ 0
] ; rtX . izyke4eg2x [ 1 ] = rtP . StateSpace_InitialCondition [ 1 ] ; rtX .
izyke4eg2x [ 2 ] = rtP . StateSpace_InitialCondition [ 2 ] ; } void MdlStart
( void ) { { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} rtDW . pnl1uxwkak = 0 ; rtDW . h3yautre5e = 0 ; MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { int_T iy ; rtB . dx5kot32nu = rtX . dd1ojttvhe ;
rtB . c41y42f4pq = rtX . m5evkfq5r2 ; rtB . fs433snqu4 = rtB . dx5kot32nu +
rtB . c41y42f4pq ; rtB . hiuttdyv3u [ 0 ] = ( rtB . fs433snqu4 * rtB .
ecfo0yj40c - rtB . f0lgj3lzwh ) * rtB . ozm2txwfmw * 57.295779513082323 + rtB
. nudtcdmd30 ; rtB . hiuttdyv3u [ 1 ] = ( rtB . fs433snqu4 * rtB . mhuwizvckh
+ rtB . fqzacaysgt ) * rtB . myh1s5kqti * 57.295779513082323 + rtB .
nfs4sew3oz ; if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . k5skyzwlvv = (
rtB . hiuttdyv3u [ 0 ] >= 0.0 ) ; } rtB . nxucqy4vpf = rtDW . k5skyzwlvv > 0
? rtB . hiuttdyv3u [ 0 ] : - rtB . hiuttdyv3u [ 0 ] ; if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . mmih2li0td
= ( rtB . nxucqy4vpf > rtP . CompareToConstant_const_e0pd32tlkk ) ; } rtB .
k3efpdq54g = rtDW . mmih2li0td ; } if ( rtB . k3efpdq54g ) { rtB . adn1bcbxce
= muDoubleScalarMod ( rtB . hiuttdyv3u [ 0 ] + rtP . Bias_Bias_o2r4jtpow0 ,
rtP . Constant2_Value ) + rtP . Bias1_Bias_jutkmsfubq ; } else { rtB .
adn1bcbxce = rtB . hiuttdyv3u [ 0 ] ; } if ( ssGetIsOkayToUpdateMode ( rtS )
) { rtDW . dj1jippoe2 = ( rtB . adn1bcbxce >= 0.0 ) ; } rtB . mos0g315ut =
rtDW . dj1jippoe2 > 0 ? rtB . adn1bcbxce : - rtB . adn1bcbxce ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) {
rtDW . hcleow32pe = ( rtB . mos0g315ut > rtP . CompareToConstant_const ) ; }
rtB . pfi0xe3ebg = rtDW . hcleow32pe ; if ( rtB . pfi0xe3ebg ) { rtB .
omipsfdeoc = rtP . Constant_Value_ewu5lv2vwe ; } else { rtB . omipsfdeoc =
rtP . Constant1_Value ; } } rtB . odgj0hyah3 = rtB . omipsfdeoc + rtB .
hiuttdyv3u [ 1 ] ; if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . fmauy44y0p
= ( rtB . odgj0hyah3 >= 0.0 ) ; } rtB . eqoe5lq4kx = rtDW . fmauy44y0p > 0 ?
rtB . odgj0hyah3 : - rtB . odgj0hyah3 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) )
{ if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . hqw5v1u3hy = ( rtB .
eqoe5lq4kx > rtP . CompareToConstant_const_k24jnylgrb ) ; } rtB . oebjxibg1n
= rtDW . hqw5v1u3hy ; if ( rtB . adn1bcbxce > 0.0 ) { rtDW . gwczvjml24 = 1 ;
} else if ( rtB . adn1bcbxce < 0.0 ) { rtDW . gwczvjml24 = - 1 ; } else {
rtDW . gwczvjml24 = 0 ; } rtB . btgzr13vly = rtDW . gwczvjml24 ; } if ( rtB .
oebjxibg1n ) { rtB . e03qaanqok = muDoubleScalarMod ( rtB . odgj0hyah3 + rtP
. Bias_Bias_kwgsxmywwt , rtP . Constant2_Value_ilk1ktfw3v ) + rtP .
Bias1_Bias_np4cqimful ; } else { rtB . e03qaanqok = rtB . odgj0hyah3 ; } if (
rtB . pfi0xe3ebg ) { rtB . pi13qlj4xm = ( ( rtB . mos0g315ut + rtP .
Bias_Bias ) * rtP . Gain_Gain + rtP . Bias1_Bias ) * rtB . btgzr13vly ; }
else { rtB . pi13qlj4xm = rtB . adn1bcbxce ; } rtB . b2qt2zwcjk = rtX .
mb5dcmzdni ; rtB . mdcyfy5sbr = rtP . Gain_Gain_ibloah5cgl * rtB . b2qt2zwcjk
; rtB . ath5qesj3d = - rtB . mdcyfy5sbr - rtP . RefHeight_Value ; for ( iy =
0 ; iy < 3 ; iy ++ ) { rtB . fdjsfe3455 [ iy ] = 0.0 ; rtB . fdjsfe3455 [ iy
] += rtP . C_m [ iy ] * rtX . izyke4eg2x [ 0 ] ; rtB . fdjsfe3455 [ iy ] +=
rtP . C_m [ iy + 3 ] * rtX . izyke4eg2x [ 1 ] ; rtB . fdjsfe3455 [ iy ] +=
rtP . C_m [ iy + 6 ] * rtX . izyke4eg2x [ 2 ] ; } rtB . lykqzvo40l = rtB .
fdjsfe3455 [ 0 ] - rtP . Constant_Value ; rtB . lvnkzvb434 =
muDoubleScalarCos ( rtB . fdjsfe3455 [ 0 ] ) * rtP . Thrust_Value ; rtB .
oa2jvz2byz = rtP . Thrust_Value * muDoubleScalarSin ( rtB . fdjsfe3455 [ 0 ]
) ; rtB . nmipyggopu [ 0 ] = rtP . tvc_Value - rtB . fdjsfe3455 [ 0 ] ; rtB .
nmipyggopu [ 1 ] = rtP . tvc_Value - rtB . fdjsfe3455 [ 1 ] ; rtB .
nmipyggopu [ 2 ] = rtP . tvc_Value - rtB . fdjsfe3455 [ 2 ] ; rtB .
dytsioegcl = rtP . K_1 * rtB . nmipyggopu [ 0 ] ; rtB . jbxlgmlnzi = rtP .
K_2 * rtB . nmipyggopu [ 1 ] ; rtB . mkw1wo3qto = rtP . K_3 * rtB .
nmipyggopu [ 2 ] ; rtB . a4tmas2p4h = ( rtB . dytsioegcl + rtB . jbxlgmlnzi )
+ rtB . mkw1wo3qto ; UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID3 ( int_T
tid ) { real_T a5xnafxhwu ; real_T ennirtje4z ; real_T fphrybuvy2 ; real_T
pfqi5bl1we ; rtB . g1v1kclnd1 = rtP . u_Value ; if ( muDoubleScalarAbs ( rtP
. FlatEarthtoLLA_LL0 [ 0 ] ) > rtP . CompareToConstant_const_lhkfefce1w ) {
a5xnafxhwu = muDoubleScalarMod ( rtP . FlatEarthtoLLA_LL0 [ 0 ] + rtP .
Bias_Bias_i0hfwhm31e , rtP . Constant2_Value_med0nruw3y ) + rtP .
Bias1_Bias_curknxed4d ; } else { a5xnafxhwu = rtP . FlatEarthtoLLA_LL0 [ 0 ]
; } pfqi5bl1we = muDoubleScalarAbs ( a5xnafxhwu ) ; if ( pfqi5bl1we > rtP .
CompareToConstant_const_at0zaa4bgo ) { rtB . nudtcdmd30 = ( ( pfqi5bl1we +
rtP . Bias_Bias_he1ot2gcw5 ) * rtP . Gain_Gain_dwpmjrnu55 + rtP .
Bias1_Bias_p5104vrjel ) * muDoubleScalarSign ( a5xnafxhwu ) ; a5xnafxhwu =
rtP . Constant_Value_ntz3dz1fnv ; } else { rtB . nudtcdmd30 = a5xnafxhwu ;
a5xnafxhwu = rtP . Constant1_Value_e5l3bdifud ; } a5xnafxhwu += rtP .
FlatEarthtoLLA_LL0 [ 1 ] ; if ( muDoubleScalarAbs ( a5xnafxhwu ) > rtP .
CompareToConstant_const_dd2pjof1v0 ) { rtB . nfs4sew3oz = muDoubleScalarMod (
a5xnafxhwu + rtP . Bias_Bias_mgwwxvy23p , rtP . Constant2_Value_fum1q5qrto )
+ rtP . Bias1_Bias_puweleon02 ; } else { rtB . nfs4sew3oz = a5xnafxhwu ; }
a5xnafxhwu = 0.017453292519943295 * rtB . nudtcdmd30 ; pfqi5bl1we = rtP .
f_Value - rtP . Constant_Value_f3dsia01as ; ennirtje4z = rtP .
Constant_Value_i24sigwmyq - pfqi5bl1we * pfqi5bl1we ; if ( ssIsMajorTimeStep
( rtS ) ) { if ( rtDW . pnl1uxwkak != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . pnl1uxwkak = 0 ;
} pfqi5bl1we = muDoubleScalarSqrt ( ennirtje4z ) ; } else if ( ennirtje4z <
0.0 ) { pfqi5bl1we = - muDoubleScalarSqrt ( muDoubleScalarAbs ( ennirtje4z )
) ; rtDW . pnl1uxwkak = 1 ; } else { pfqi5bl1we = muDoubleScalarSqrt (
ennirtje4z ) ; } ennirtje4z = muDoubleScalarSin ( a5xnafxhwu ) ; ennirtje4z =
rtP . Constant_Value_bka2acpd1h - pfqi5bl1we * pfqi5bl1we * ennirtje4z *
ennirtje4z ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . h3yautre5e != 0 )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . h3yautre5e = 0
; } fphrybuvy2 = muDoubleScalarSqrt ( ennirtje4z ) ; } else if ( ennirtje4z <
0.0 ) { fphrybuvy2 = - muDoubleScalarSqrt ( muDoubleScalarAbs ( ennirtje4z )
) ; rtDW . h3yautre5e = 1 ; } else { fphrybuvy2 = muDoubleScalarSqrt (
ennirtje4z ) ; } fphrybuvy2 = rtP . Constant1_Value_pjsncnza25 / fphrybuvy2 ;
rtB . ozm2txwfmw = muDoubleScalarAtan2 ( rtP . Constant2_Value_ixgzrgf4bw , (
rtP . Constant_Value_hb1abxfq0g - pfqi5bl1we * pfqi5bl1we ) * fphrybuvy2 /
ennirtje4z ) ; rtB . myh1s5kqti = muDoubleScalarAtan2 ( rtP . Constant3_Value
, fphrybuvy2 * muDoubleScalarCos ( a5xnafxhwu ) ) ; muDoubleScalarSinCos (
0.017453292519943295 * rtP . FlatEarthtoLLA_psi , & rtB . mhuwizvckh , & rtB
. ecfo0yj40c ) ; rtB . fqzacaysgt = rtB . g1v1kclnd1 * rtB . ecfo0yj40c ; rtB
. f0lgj3lzwh = rtB . g1v1kclnd1 * rtB . mhuwizvckh ; UNUSED_PARAMETER ( tid )
; } void MdlUpdate ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID3 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; int_T is ; _rtXdot = ( ( XDot * )
ssGetdX ( rtS ) ) ; _rtXdot -> dd1ojttvhe = rtB . oa2jvz2byz ; _rtXdot ->
m5evkfq5r2 = rtB . fdjsfe3455 [ 2 ] ; _rtXdot -> mb5dcmzdni = rtB .
lvnkzvb434 ; for ( is = 0 ; is < 3 ; is ++ ) { _rtXdot -> izyke4eg2x [ is ] =
0.0 ; _rtXdot -> izyke4eg2x [ is ] += rtP . A_m [ is ] * rtX . izyke4eg2x [ 0
] ; _rtXdot -> izyke4eg2x [ is ] += rtP . A_m [ is + 3 ] * rtX . izyke4eg2x [
1 ] ; _rtXdot -> izyke4eg2x [ is ] += rtP . A_m [ is + 6 ] * rtX . izyke4eg2x
[ 2 ] ; _rtXdot -> izyke4eg2x [ is ] += rtP . B_m [ is ] * rtB . a4tmas2p4h ;
} } void MdlProjection ( void ) { } void MdlZeroCrossings ( void ) { ZCV *
_rtZCSV ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV
-> bcd5jbprle = rtB . hiuttdyv3u [ 0 ] ; _rtZCSV -> jll3d4hjim = rtB .
nxucqy4vpf - rtP . CompareToConstant_const_e0pd32tlkk ; _rtZCSV -> duvnbrbtt2
= rtB . adn1bcbxce ; _rtZCSV -> nb10xth4rg = rtB . mos0g315ut - rtP .
CompareToConstant_const ; _rtZCSV -> pse3klnjl3 = rtB . odgj0hyah3 ; _rtZCSV
-> jedbyxnu4w = rtB . eqoe5lq4kx - rtP . CompareToConstant_const_k24jnylgrb ;
_rtZCSV -> eapye0visl = rtB . adn1bcbxce ; } void MdlTerminate ( void ) { }
static void mr_LQR_Control_cacheDataAsMxArray ( mxArray * destArray , mwIndex
i , int j , const void * srcData , size_t numBytes ) ; static void
mr_LQR_Control_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_LQR_Control_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_LQR_Control_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_LQR_Control_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_LQR_Control_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int
j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_LQR_Control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_LQR_Control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_LQR_Control_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static
void mr_LQR_Control_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
{ uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber (
destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes
] , ( const uint8_T * ) srcData , numBytes ) ; } static void
mr_LQR_Control_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_LQR_Control_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_LQR_Control_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_LQR_Control_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_LQR_Control_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_LQR_Control_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_LQR_Control_GetDWork ( ) { static const char *
ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW
= mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_LQR_Control_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB )
, sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 10 ] = {
"rtDW.k5skyzwlvv" , "rtDW.dj1jippoe2" , "rtDW.fmauy44y0p" , "rtDW.gwczvjml24"
, "rtDW.pnl1uxwkak" , "rtDW.h3yautre5e" , "rtDW.fhr0pa3woj" ,
"rtDW.mmih2li0td" , "rtDW.hcleow32pe" , "rtDW.hqw5v1u3hy" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 10 , rtdwDataFieldNames ) ;
mr_LQR_Control_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & (
rtDW . k5skyzwlvv ) , sizeof ( rtDW . k5skyzwlvv ) ) ;
mr_LQR_Control_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & (
rtDW . dj1jippoe2 ) , sizeof ( rtDW . dj1jippoe2 ) ) ;
mr_LQR_Control_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
rtDW . fmauy44y0p ) , sizeof ( rtDW . fmauy44y0p ) ) ;
mr_LQR_Control_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
rtDW . gwczvjml24 ) , sizeof ( rtDW . gwczvjml24 ) ) ;
mr_LQR_Control_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
rtDW . pnl1uxwkak ) , sizeof ( rtDW . pnl1uxwkak ) ) ;
mr_LQR_Control_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
rtDW . h3yautre5e ) , sizeof ( rtDW . h3yautre5e ) ) ;
mr_LQR_Control_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
rtDW . fhr0pa3woj ) , sizeof ( rtDW . fhr0pa3woj ) ) ;
mr_LQR_Control_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
rtDW . mmih2li0td ) , sizeof ( rtDW . mmih2li0td ) ) ;
mr_LQR_Control_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
rtDW . hcleow32pe ) , sizeof ( rtDW . hcleow32pe ) ) ;
mr_LQR_Control_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
rtDW . hqw5v1u3hy ) , sizeof ( rtDW . hqw5v1u3hy ) ) ; mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void mr_LQR_Control_SetDWork (
const mxArray * ssDW ) { ( void ) ssDW ;
mr_LQR_Control_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0 ,
sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0
, 1 ) ; mr_LQR_Control_restoreDataFromMxArray ( ( void * ) & ( rtDW .
k5skyzwlvv ) , rtdwData , 0 , 0 , sizeof ( rtDW . k5skyzwlvv ) ) ;
mr_LQR_Control_restoreDataFromMxArray ( ( void * ) & ( rtDW . dj1jippoe2 ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . dj1jippoe2 ) ) ;
mr_LQR_Control_restoreDataFromMxArray ( ( void * ) & ( rtDW . fmauy44y0p ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . fmauy44y0p ) ) ;
mr_LQR_Control_restoreDataFromMxArray ( ( void * ) & ( rtDW . gwczvjml24 ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . gwczvjml24 ) ) ;
mr_LQR_Control_restoreDataFromMxArray ( ( void * ) & ( rtDW . pnl1uxwkak ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . pnl1uxwkak ) ) ;
mr_LQR_Control_restoreDataFromMxArray ( ( void * ) & ( rtDW . h3yautre5e ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . h3yautre5e ) ) ;
mr_LQR_Control_restoreDataFromMxArray ( ( void * ) & ( rtDW . fhr0pa3woj ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . fhr0pa3woj ) ) ;
mr_LQR_Control_restoreDataFromMxArray ( ( void * ) & ( rtDW . mmih2li0td ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . mmih2li0td ) ) ;
mr_LQR_Control_restoreDataFromMxArray ( ( void * ) & ( rtDW . hcleow32pe ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . hcleow32pe ) ) ;
mr_LQR_Control_restoreDataFromMxArray ( ( void * ) & ( rtDW . hqw5v1u3hy ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . hqw5v1u3hy ) ) ; } } mxArray *
mr_LQR_Control_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 3 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 3 ] = { "Scope" , "Scope" , "Scope" , } ; static const
char * blockPath [ 3 ] = { "LQR_Control/Scope" , "LQR_Control/Scope1" ,
"LQR_Control/Scope2" , } ; static const int reason [ 3 ] = { 0 , 0 , 0 , } ;
for ( subs [ 0 ] = 0 ; subs [ 0 ] < 3 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0
; offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } }
return data ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
6 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ;
ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 138 ) ;
ssSetNumBlockIO ( rtS , 44 ) ; ssSetNumBlockParams ( rtS , 101 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 ,
0.033333333333333333 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime
( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void
raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 4274542035U ) ;
ssSetChecksumVal ( rtS , 1 , 2355859094U ) ; ssSetChecksumVal ( rtS , 2 ,
1289446516U ) ; ssSetChecksumVal ( rtS , 3 , 3884530962U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 14 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
LQR_Control_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS ,
true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "LQR_Control" ) ;
ssSetPath ( rtS , "LQR_Control" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal (
rtS , 100.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo .
loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ;
} { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 3 } ; static
int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 3 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0
} ; static RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = {
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T *
rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" } ;
static const char_T * rt_LoggedStateBlockNames [ ] = {
"LQR_Control/T*sin to Z" , "LQR_Control/Drift Z' to Z" ,
"LQR_Control/h' to height" , "LQR_Control/State-Space" } ; static const
char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 4 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 4 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . dd1ojttvhe ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . m5evkfq5r2 ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . mb5dcmzdni ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . izyke4eg2x [ 0 ] ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 6 ] ;
static real_T absTol [ 6 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 } ; static uint8_T absTolControl [ 6 ] = { 0U , 0U , 0U , 0U , 0U , 0U
} ; static real_T contStateJacPerturbBoundMinVec [ 6 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 6 ] ; static uint8_T zcAttributes [ 7 ] = {
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ; { int i ; for ( i =
0 ; i < 6 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.033333333333333333 ) ; ssSetSolverMaxOrder ( rtS ,
- 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL
) ) ; ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "VariableStepAuto" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector ( rtS , absTol )
; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 7 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 7 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 4274542035U ) ; ssSetChecksumVal ( rtS , 1 ,
2355859094U ) ; ssSetChecksumVal ( rtS , 2 , 1289446516U ) ; ssSetChecksumVal
( rtS , 3 , 3884530962U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 5 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_LQR_Control_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP (
rtS , mr_LQR_Control_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_LQR_Control_SetDWork ) ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if (
ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
