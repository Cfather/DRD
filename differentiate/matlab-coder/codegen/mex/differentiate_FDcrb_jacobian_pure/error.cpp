//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// error.cpp
//
// Code generation for function 'error'
//

// Include files
#include "error.h"
#include "differentiate_FDcrb_jacobian_pure_data.h"
#include "rt_nonfinite.h"

// Function Declarations
static void b_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location);

// Function Definitions
static void b_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, nullptr, 1, &pArray,
                        (const char_T *)"error", true, location);
}

namespace coder {
void c_error(const emlrtStack *sp)
{
  static const int32_T iv[2]{1, 24};
  static const char_T varargin_1[24]{'U', 'n', 'r', 'e', 'c', 'o', 'g', 'n',
                                     'i', 'z', 'e', 'd', ' ', 'j', 'o', 'i',
                                     'n', 't', ' ', 't', 'y', 'p', 'e', '!'};
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 24, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  st.site = &m_emlrtRSI;
  b_error(&st, y, &emlrtMCI);
}

} // namespace coder

// End of code generation (error.cpp)
