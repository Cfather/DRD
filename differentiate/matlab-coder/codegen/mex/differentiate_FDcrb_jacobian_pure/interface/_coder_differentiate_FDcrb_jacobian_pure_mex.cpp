//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_differentiate_FDcrb_jacobian_pure_mex.cpp
//
// Code generation for function '_coder_differentiate_FDcrb_jacobian_pure_mex'
//

// Include files
#include "_coder_differentiate_FDcrb_jacobian_pure_mex.h"
#include "_coder_differentiate_FDcrb_jacobian_pure_api.h"
#include "differentiate_FDcrb_jacobian_pure_data.h"
#include "differentiate_FDcrb_jacobian_pure_initialize.h"
#include "differentiate_FDcrb_jacobian_pure_terminate.h"
#include "rt_nonfinite.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void differentiate_FDcrb_jacobian_pure_mexFunction(int32_T nlhs,
                                                   mxArray *plhs[4],
                                                   int32_T nrhs,
                                                   const mxArray *prhs[8])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs[4];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 8) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 8, 4,
                        33, "differentiate_FDcrb_jacobian_pure");
  }
  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 33,
                        "differentiate_FDcrb_jacobian_pure");
  }
  // Call the function.
  c_differentiate_FDcrb_jacobian_(prhs, nlhs, outputs);
  // Copy over outputs to the caller.
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&differentiate_FDcrb_jacobian_pure_atexit);
  // Module initialization.
  differentiate_FDcrb_jacobian_pure_initialize();
  try {
    emlrtShouldCleanupOnError((emlrtCTX *)emlrtRootTLSGlobal, false);
    // Dispatch the entry-point.
    differentiate_FDcrb_jacobian_pure_mexFunction(nlhs, plhs, nrhs, prhs);
    // Module termination.
    differentiate_FDcrb_jacobian_pure_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_differentiate_FDcrb_jacobian_pure_mex.cpp)
