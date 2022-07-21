//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// d_crf.cpp
//
// Code generation for function 'd_crf'
//

// Include files
#include "d_crf.h"
#include "d_crm.h"
#include "differentiate_FDcrb_jacobian_pure_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo i_emlrtRSI{
    12,      // lineNo
    "d_crf", // fcnName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crf.m" // pathName
};

static emlrtRTEInfo u_emlrtRTEI{
    14,      // lineNo
    9,       // colNo
    "d_crf", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crf.m" // pName
};

static emlrtBCInfo qj_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    15,        // lineNo
    35,        // colNo
    "dcrfvdq", // aName
    "d_crf",   // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crf.m", // pName
    0          // checkKind
};

static emlrtBCInfo rj_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    16,         // lineNo
    37,         // colNo
    "dcrfvdqd", // aName
    "d_crf",    // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crf.m", // pName
    0          // checkKind
};

// Function Definitions
void d_crf(const emlrtStack *sp, const coder::array<real_T, 2U> &dvdq,
           const coder::array<real_T, 2U> &dvdqd, real_T NB,
           coder::array<real_T, 3U> &dcrfvdq,
           coder::array<real_T, 3U> &dcrfvdqd)
{
  emlrtStack st;
  real_T b_dcrfvdq[36];
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  //  crf  spatial/planar cross-product operator (force).
  //  crf(v)  calculates the 6x6 (or 3x3) matrix such that the expression
  //  crf(v)*f is the cross product of the motion vector v with the force
  //  vector f.  If length(v)==6 then it is taken to be a spatial vector, and
  //  the return value is a 6x6 matrix.  Otherwise, v is taken to be a planar
  //  vector, and the return value is 3x3.
  //  vcross = -crm(v)';
  st.site = &i_emlrtRSI;
  d_crm(&st, dvdq, dvdqd, NB, dcrfvdq, dcrfvdqd);
  i = static_cast<int32_T>(NB);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, NB, mxDOUBLE_CLASS,
                                static_cast<int32_T>(NB), &u_emlrtRTEI,
                                (emlrtCTX)sp);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    int32_T i1;
    int32_T i2;
    if ((static_cast<int32_T>(b_i + 1U) < 1) ||
        (static_cast<int32_T>(b_i + 1U) > dcrfvdq.size(2))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_i + 1U), 1,
                                    dcrfvdq.size(2), &qj_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (i1 = 0; i1 < 6; i1++) {
      for (i2 = 0; i2 < 6; i2++) {
        b_dcrfvdq[i2 + 6 * i1] = -dcrfvdq[(i1 + 6 * i2) + 36 * b_i];
      }
    }
    for (i1 = 0; i1 < 6; i1++) {
      for (i2 = 0; i2 < 6; i2++) {
        dcrfvdq[(i2 + 6 * i1) + 36 * b_i] = b_dcrfvdq[i2 + 6 * i1];
      }
    }
    if ((static_cast<int32_T>(b_i + 1U) < 1) ||
        (static_cast<int32_T>(b_i + 1U) > dcrfvdqd.size(2))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_i + 1U), 1,
                                    dcrfvdqd.size(2), &rj_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (i1 = 0; i1 < 6; i1++) {
      for (i2 = 0; i2 < 6; i2++) {
        b_dcrfvdq[i2 + 6 * i1] = -dcrfvdqd[(i1 + 6 * i2) + 36 * b_i];
      }
    }
    for (i1 = 0; i1 < 6; i1++) {
      for (i2 = 0; i2 < 6; i2++) {
        dcrfvdqd[(i2 + 6 * i1) + 36 * b_i] = b_dcrfvdq[i2 + 6 * i1];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
}

// End of code generation (d_crf.cpp)
