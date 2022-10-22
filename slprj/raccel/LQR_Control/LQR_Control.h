#ifndef RTW_HEADER_LQR_Control_h_
#define RTW_HEADER_LQR_Control_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef LQR_Control_COMMON_INCLUDES_
#define LQR_Control_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "LQR_Control_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME LQR_Control
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (44) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (6)   
#elif NCSTATES != 6
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T dx5kot32nu ; real_T c41y42f4pq ; real_T fs433snqu4 ;
real_T hiuttdyv3u [ 2 ] ; real_T nxucqy4vpf ; real_T adn1bcbxce ; real_T
mos0g315ut ; real_T omipsfdeoc ; real_T odgj0hyah3 ; real_T eqoe5lq4kx ;
real_T e03qaanqok ; real_T btgzr13vly ; real_T pi13qlj4xm ; real_T b2qt2zwcjk
; real_T mdcyfy5sbr ; real_T ath5qesj3d ; real_T fdjsfe3455 [ 3 ] ; real_T
lykqzvo40l ; real_T lvnkzvb434 ; real_T oa2jvz2byz ; real_T nmipyggopu [ 3 ]
; real_T dytsioegcl ; real_T jbxlgmlnzi ; real_T mkw1wo3qto ; real_T
a4tmas2p4h ; real_T g1v1kclnd1 ; real_T nudtcdmd30 ; real_T nfs4sew3oz ;
real_T ozm2txwfmw ; real_T myh1s5kqti ; real_T mhuwizvckh ; real_T ecfo0yj40c
; real_T fqzacaysgt ; real_T f0lgj3lzwh ; real_T noyxldjrkq [ 6 ] ; real_T
d2aog2hjnr ; real_T da0rdfyx3q ; real32_T azautin2vg ; real32_T jrm0tfuxn1 ;
real32_T g0fgmgmpjp ; uint8_T mbsxjymmde [ 408 ] ; boolean_T k3efpdq54g ;
boolean_T pfi0xe3ebg ; boolean_T oebjxibg1n ; } B ; typedef struct { struct {
void * LoggedData ; } azf154mrb3 ; struct { void * LoggedData ; } ijgfntvcnv
; struct { void * LoggedData ; } armhlzamvx ; int_T k5skyzwlvv ; int_T
dj1jippoe2 ; int_T fmauy44y0p ; int_T gwczvjml24 ; int8_T pnl1uxwkak ; int8_T
h3yautre5e ; uint8_T fhr0pa3woj [ 20 ] ; boolean_T mmih2li0td ; boolean_T
hcleow32pe ; boolean_T hqw5v1u3hy ; } DW ; typedef struct { real_T dd1ojttvhe
; real_T m5evkfq5r2 ; real_T mb5dcmzdni ; real_T izyke4eg2x [ 3 ] ; } X ;
typedef struct { real_T dd1ojttvhe ; real_T m5evkfq5r2 ; real_T mb5dcmzdni ;
real_T izyke4eg2x [ 3 ] ; } XDot ; typedef struct { boolean_T dd1ojttvhe ;
boolean_T m5evkfq5r2 ; boolean_T mb5dcmzdni ; boolean_T izyke4eg2x [ 3 ] ; }
XDis ; typedef struct { real_T dd1ojttvhe ; real_T m5evkfq5r2 ; real_T
mb5dcmzdni ; real_T izyke4eg2x [ 3 ] ; } CStateAbsTol ; typedef struct {
real_T dd1ojttvhe ; real_T m5evkfq5r2 ; real_T mb5dcmzdni ; real_T izyke4eg2x
[ 3 ] ; } CXPtMin ; typedef struct { real_T dd1ojttvhe ; real_T m5evkfq5r2 ;
real_T mb5dcmzdni ; real_T izyke4eg2x [ 3 ] ; } CXPtMax ; typedef struct {
real_T bcd5jbprle ; real_T jll3d4hjim ; real_T duvnbrbtt2 ; real_T nb10xth4rg
; real_T pse3klnjl3 ; real_T jedbyxnu4w ; real_T eapye0visl ; } ZCV ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
A_m [ 9 ] ; real_T B_m [ 3 ] ; real_T C_m [ 9 ] ; real_T K_1 ; real_T K_2 ;
real_T K_3 ; real_T FlatEarthtoLLA_LL0 [ 2 ] ; real_T CompareToConstant_const
; real_T CompareToConstant_const_e0pd32tlkk ; real_T
CompareToConstant_const_k24jnylgrb ; real_T
CompareToConstant_const_lhkfefce1w ; real_T
CompareToConstant_const_at0zaa4bgo ; real_T
CompareToConstant_const_dd2pjof1v0 ; real_T FlatEarthtoLLA_psi ; int32_T
FlightGearPreconfigured6DoFAnimation_DestinationPort ; real_T Bias_Bias ;
real_T Gain_Gain ; real_T Bias1_Bias ; real_T Bias_Bias_o2r4jtpow0 ; real_T
Bias1_Bias_jutkmsfubq ; real_T Bias_Bias_kwgsxmywwt ; real_T
Bias1_Bias_np4cqimful ; real_T Packnet_fdmPacketforFlightGear_P8 ; real_T
SimulationPace_P1 ; real_T SimulationPace_P2 ; real_T SimulationPace_P3 ;
real_T SimulationPace_P4 ; real_T PacketSize_Value ; real_T TsintoZ_IC ;
real_T DriftZtoZ_IC ; real_T htoheight_IC ; real_T Gain_Gain_ibloah5cgl ;
real_T StateSpace_InitialCondition [ 3 ] ; real_T u_Value ; real_T
Constant_Value ; real_T Constant_Value_ewu5lv2vwe ; real_T Constant1_Value ;
real_T Constant2_Value ; real_T Constant2_Value_ilk1ktfw3v ; real_T
Constant_Value_ntz3dz1fnv ; real_T Constant1_Value_e5l3bdifud ; real_T
Bias_Bias_i0hfwhm31e ; real_T Constant2_Value_med0nruw3y ; real_T
Bias1_Bias_curknxed4d ; real_T Bias_Bias_he1ot2gcw5 ; real_T
Gain_Gain_dwpmjrnu55 ; real_T Bias1_Bias_p5104vrjel ; real_T
Bias_Bias_mgwwxvy23p ; real_T Constant2_Value_fum1q5qrto ; real_T
Bias1_Bias_puweleon02 ; real_T Constant_Value_hb1abxfq0g ; real_T
Constant1_Value_pjsncnza25 ; real_T Constant2_Value_ixgzrgf4bw ; real_T
Constant3_Value ; real_T Constant_Value_bka2acpd1h ; real_T
Constant_Value_i24sigwmyq ; real_T Constant_Value_f3dsia01as ; real_T f_Value
; real_T RefHeight_Value ; real_T Thrust_Value ; real_T tvc_Value ; uint16_T
Packnet_fdmPacketforFlightGear_P1 [ 2 ] ; uint16_T
Packnet_fdmPacketforFlightGear_P2 [ 2 ] ; uint16_T
Packnet_fdmPacketforFlightGear_P3 [ 3 ] ; uint16_T
Packnet_fdmPacketforFlightGear_P4 [ 3 ] ; uint16_T
Packnet_fdmPacketforFlightGear_P5 [ 3 ] ; uint16_T
Packnet_fdmPacketforFlightGear_P6 [ 3 ] ; uint16_T
Packnet_fdmPacketforFlightGear_P7 [ 3 ] ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_LQR_Control_GetDWork ( ) ; extern void
mr_LQR_Control_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_LQR_Control_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * LQR_Control_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
