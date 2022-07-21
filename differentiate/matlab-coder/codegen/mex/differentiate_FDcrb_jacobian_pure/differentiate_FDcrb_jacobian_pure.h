//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// differentiate_FDcrb_jacobian_pure.h
//
// Code generation for function 'differentiate_FDcrb_jacobian_pure'
//

#pragma once

// Include files
#include "differentiate_FDcrb_jacobian_pure_types.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void differentiate_FDcrb_jacobian_pure(
    const emlrtStack *sp, real_T N, const char_T jtype[34],
    const cell_wrap_0 Xtree[34], const real_T parent[34],
    const cell_wrap_0 b_I[34], const real_T transmissionInertia[34],
    const real_T q[34], const real_T qd[34], coder::array<real_T, 2U> &H,
    coder::array<real_T, 1U> &C, coder::array<real_T, 3U> &dHdq,
    coder::array<real_T, 2U> &dCdx);

// End of code generation (differentiate_FDcrb_jacobian_pure.h)
