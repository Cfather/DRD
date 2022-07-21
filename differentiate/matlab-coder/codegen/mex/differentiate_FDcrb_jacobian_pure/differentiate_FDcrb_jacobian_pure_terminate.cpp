//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// differentiate_FDcrb_jacobian_pure_terminate.cpp
//
// Code generation for function 'differentiate_FDcrb_jacobian_pure_terminate'
//

// Include files
#include "differentiate_FDcrb_jacobian_pure_terminate.h"
#include "_coder_differentiate_FDcrb_jacobian_pure_mex.h"
#include "differentiate_FDcrb_jacobian_pure_data.h"
#include "rt_nonfinite.h"

// Function Definitions
void differentiate_FDcrb_jacobian_pure_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void differentiate_FDcrb_jacobian_pure_terminate()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (differentiate_FDcrb_jacobian_pure_terminate.cpp)
