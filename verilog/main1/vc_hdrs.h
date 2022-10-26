#ifndef _VC_HDRS_H
#define _VC_HDRS_H

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include <dlfcn.h>
#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _VC_TYPES_
#define _VC_TYPES_
/* common definitions shared with DirectC.h */

typedef unsigned int U;
typedef unsigned char UB;
typedef unsigned char scalar;
typedef struct { U c; U d;} vec32;

#define scalar_0 0
#define scalar_1 1
#define scalar_z 2
#define scalar_x 3

extern long long int ConvUP2LLI(U* a);
extern void ConvLLI2UP(long long int a1, U* a2);
extern long long int GetLLIresult();
extern void StoreLLIresult(const unsigned int* data);
typedef struct VeriC_Descriptor *vc_handle;

#ifndef SV_3_COMPATIBILITY
#define SV_STRING const char*
#else
#define SV_STRING char*
#endif

#endif /* _VC_TYPES_ */


 extern void inst_log(/* INPUT */int instruction);

 extern void reg_monitor(/* INPUT */unsigned char alu_valid, /* INPUT */unsigned char lsu_valid, /* INPUT */int alu_data_in, /* INPUT */int lsu_data_in, /* INPUT */int alu_address, /* INPUT */int lsu_address);

 extern void rcu_monitor(/* INPUT */unsigned char rob_cm_valid, /* INPUT */int rob_cm_exp_pc, /* INPUT */int co_rob_rd, /* INPUT */int co_prf_name);

#ifdef __cplusplus
}
#endif


#endif //#ifndef _VC_HDRS_H

