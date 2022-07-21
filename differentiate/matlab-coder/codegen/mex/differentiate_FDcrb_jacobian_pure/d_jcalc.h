//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// d_jcalc.h
//
// Code generation for function 'd_jcalc'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void d_jcalc(const emlrtStack *sp, const char_T jtyp_data[],
             const int32_T jtyp_size[2], real_T q, real_T Xj[36],
             real_T dXjdq[36], real_T ddXjddq[36], real_T S[6]);

// End of code generation (d_jcalc.h)
