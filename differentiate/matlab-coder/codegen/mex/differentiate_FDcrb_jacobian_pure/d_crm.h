//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// d_crm.h
//
// Code generation for function 'd_crm'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void d_crm(const emlrtStack *sp, const coder::array<real_T, 2U> &dvdq,
           const coder::array<real_T, 2U> &dvdqd, real_T NB,
           coder::array<real_T, 3U> &dcrmvdq,
           coder::array<real_T, 3U> &dcrmvdqd);

// End of code generation (d_crm.h)
