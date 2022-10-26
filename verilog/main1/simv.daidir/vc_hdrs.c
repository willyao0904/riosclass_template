#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include <dlfcn.h>
#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VCS error reporting routine */
extern void vcsMsgReport1(const char *, const char *, int, void *, void*, const char *);

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

#ifndef __VCS_IMPORT_DPI_STUB_inst_log
#define __VCS_IMPORT_DPI_STUB_inst_log
__attribute__((weak)) void inst_log(/* INPUT */int A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */int A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(int A_1)) dlsym(RTLD_NEXT, "inst_log");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "inst_log");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_inst_log */

#ifndef __VCS_IMPORT_DPI_STUB_reg_monitor
#define __VCS_IMPORT_DPI_STUB_reg_monitor
__attribute__((weak)) void reg_monitor(/* INPUT */unsigned char A_1, /* INPUT */unsigned char A_2, /* INPUT */int A_3, /* INPUT */int A_4, /* INPUT */int A_5, /* INPUT */int A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */unsigned char A_1, /* INPUT */unsigned char A_2, /* INPUT */int A_3, /* INPUT */int A_4, /* INPUT */int A_5, /* INPUT */int A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(unsigned char A_1, unsigned char A_2, int A_3, int A_4, int A_5, int A_6)) dlsym(RTLD_NEXT, "reg_monitor");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "reg_monitor");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_reg_monitor */

#ifndef __VCS_IMPORT_DPI_STUB_rcu_monitor
#define __VCS_IMPORT_DPI_STUB_rcu_monitor
__attribute__((weak)) void rcu_monitor(/* INPUT */unsigned char A_1, /* INPUT */int A_2, /* INPUT */int A_3, /* INPUT */int A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */unsigned char A_1, /* INPUT */int A_2, /* INPUT */int A_3, /* INPUT */int A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_fp_ = (void (*)(unsigned char A_1, int A_2, int A_3, int A_4)) dlsym(RTLD_NEXT, "rcu_monitor");
        _vcs_dpi_stub_initialized_ = 1;
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "rcu_monitor");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_rcu_monitor */


#ifdef __cplusplus
}
#endif

