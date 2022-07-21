//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// differentiate_FDcrb_jacobian_pure_initialize.cpp
//
// Code generation for function 'differentiate_FDcrb_jacobian_pure_initialize'
//

// Include files
#include "differentiate_FDcrb_jacobian_pure_initialize.h"
#include "_coder_differentiate_FDcrb_jacobian_pure_mex.h"
#include "differentiate_FDcrb_jacobian_pure_data.h"
#include "rt_nonfinite.h"

// Function Definitions
void differentiate_FDcrb_jacobian_pure_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

// End of code generation (differentiate_FDcrb_jacobian_pure_initialize.cpp)
