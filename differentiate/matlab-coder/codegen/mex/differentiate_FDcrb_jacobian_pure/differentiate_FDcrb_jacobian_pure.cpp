//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// differentiate_FDcrb_jacobian_pure.cpp
//
// Code generation for function 'differentiate_FDcrb_jacobian_pure'
//

// Include files
#include "differentiate_FDcrb_jacobian_pure.h"
#include "d_crf.h"
#include "d_crm.h"
#include "d_jcalc.h"
#include "differentiate_FDcrb_jacobian_pure_data.h"
#include "differentiate_FDcrb_jacobian_pure_types.h"
#include "error.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>

// Type Definitions
struct cell_wrap_1 {
  real_T f1[6];
};

struct cell_wrap_2 {
  coder::array<real_T, 2U> f1;
};

struct cell_wrap_3 {
  coder::array<real_T, 3U> f1;
};

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    72,                                  // lineNo
    "differentiate_FDcrb_jacobian_pure", // fcnName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    75,                                  // lineNo
    "differentiate_FDcrb_jacobian_pure", // fcnName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    106,                                 // lineNo
    "differentiate_FDcrb_jacobian_pure", // fcnName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    120,                                 // lineNo
    "differentiate_FDcrb_jacobian_pure", // fcnName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    134,                                 // lineNo
    "differentiate_FDcrb_jacobian_pure", // fcnName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pathName
};

static emlrtRSInfo
    j_emlrtRSI{
        90,                  // lineNo
        "eml_mtimes_helper", // fcnName
        "/usr/local/MATLAB/R2021b/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" // pathName
    };

static emlrtRTEInfo emlrtRTEI{
    21,                                  // lineNo
    9,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo b_emlrtRTEI{
    25,                                  // lineNo
    9,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo c_emlrtRTEI{
    29,                                  // lineNo
    9,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo d_emlrtRTEI{
    33,                                  // lineNo
    9,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo e_emlrtRTEI{
    37,                                  // lineNo
    9,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo f_emlrtRTEI{
    41,                                  // lineNo
    9,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo g_emlrtRTEI{
    45,                                  // lineNo
    9,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo h_emlrtRTEI{
    49,                                  // lineNo
    9,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo i_emlrtRTEI{
    57,                                  // lineNo
    9,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtBCInfo emlrtBCI{
    1,                                   // iFirst
    34,                                  // iLast
    58,                                  // lineNo
    18,                                  // colNo
    "jtype",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    80,                                  // lineNo
    12,                                  // colNo
    "S",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    89,                                  // lineNo
    28,                                  // colNo
    "S",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    89,                                  // lineNo
    15,                                  // colNo
    "dvdx{i}",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo emlrtDCI{
    92,                                  // lineNo
    21,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtRTEInfo j_emlrtRTEI{
    94,                                  // lineNo
    13,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtDCInfo b_emlrtDCI{
    96,                                  // lineNo
    36,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    96,                                  // lineNo
    61,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo e_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    96,                                  // lineNo
    74,                                  // colNo
    "dvdx{parent(i)}",                   // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    96,                                  // lineNo
    19,                                  // colNo
    "dvdx{i}",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    97,                                  // lineNo
    40,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    97,                                  // lineNo
    53,                                  // colNo
    "dvdx{parent(i)}",                   // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    97,                                  // lineNo
    66,                                  // colNo
    "S",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    97,                                  // lineNo
    19,                                  // colNo
    "dvdx{i}",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo e_emlrtDCI{
    99,                                  // lineNo
    36,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    99,                                  // lineNo
    49,                                  // colNo
    "dvdx{parent(i)}",                   // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo f_emlrtDCI{
    100,                                 // lineNo
    40,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo k_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    100,                                 // lineNo
    53,                                  // colNo
    "dvdx{parent(i)}",                   // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo g_emlrtDCI{
    104,                                 // lineNo
    25,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo l_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    106,                                 // lineNo
    50,                                  // colNo
    "dvdx{i}",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo m_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    106,                                 // lineNo
    52,                                  // colNo
    "dvdx{i}",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo n_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    106,                                 // lineNo
    67,                                  // colNo
    "dvdx{i}",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo o_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    106,                                 // lineNo
    73,                                  // colNo
    "dvdx{i}",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo h_emlrtDCI{
    109,                                 // lineNo
    40,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtDCInfo i_emlrtDCI{
    109,                                 // lineNo
    67,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo p_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    109,                                 // lineNo
    80,                                  // colNo
    "davpdx{parent(i)}",                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo q_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    109,                                 // lineNo
    97,                                  // colNo
    "dcrmvdq",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo r_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    109,                                 // lineNo
    21,                                  // colNo
    "davpdx{i}",                         // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo j_emlrtDCI{
    110,                                 // lineNo
    44,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo s_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    110,                                 // lineNo
    57,                                  // colNo
    "davpdx{parent(i)}",                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo t_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    110,                                 // lineNo
    79,                                  // colNo
    "dcrmvdqd",                          // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    110,                                 // lineNo
    101,                                 // colNo
    "S",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo v_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    110,                                 // lineNo
    21,                                  // colNo
    "davpdx{i}",                         // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo k_emlrtDCI{
    112,                                 // lineNo
    40,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    112,                                 // lineNo
    53,                                  // colNo
    "davpdx{parent(i)}",                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo x_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    112,                                 // lineNo
    70,                                  // colNo
    "dcrmvdq",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo y_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    112,                                 // lineNo
    21,                                  // colNo
    "davpdx{i}",                         // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo l_emlrtDCI{
    113,                                 // lineNo
    44,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo ab_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    113,                                 // lineNo
    57,                                  // colNo
    "davpdx{parent(i)}",                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    113,                                 // lineNo
    79,                                  // colNo
    "dcrmvdqd",                          // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo cb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    113,                                 // lineNo
    21,                                  // colNo
    "davpdx{i}",                         // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo db_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    120,                                 // lineNo
    48,                                  // colNo
    "dvdx{i}",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo eb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    120,                                 // lineNo
    50,                                  // colNo
    "dvdx{i}",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo fb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    120,                                 // lineNo
    65,                                  // colNo
    "dvdx{i}",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo gb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    120,                                 // lineNo
    71,                                  // colNo
    "dvdx{i}",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo hb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    123,                                 // lineNo
    39,                                  // colNo
    "davpdx{i}",                         // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ib_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    123,                                 // lineNo
    56,                                  // colNo
    "dcrfvdq",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo jb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    123,                                 // lineNo
    96,                                  // colNo
    "dvdx{i}",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo kb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    123,                                 // lineNo
    17,                                  // colNo
    "dfvpdx{i}",                         // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo lb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    124,                                 // lineNo
    43,                                  // colNo
    "davpdx{i}",                         // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo mb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    124,                                 // lineNo
    65,                                  // colNo
    "dcrfvdqd",                          // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo nb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    124,                                 // lineNo
    105,                                 // colNo
    "dvdx{i}",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ob_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    124,                                 // lineNo
    17,                                  // colNo
    "dfvpdx{i}",                         // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtRTEInfo k_emlrtRTEI{
    131,                                 // lineNo
    9,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtBCInfo pb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    132,                                 // lineNo
    14,                                  // colNo
    "S",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo qb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    134,                                 // lineNo
    19,                                  // colNo
    "S",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtRTEInfo l_emlrtRTEI{
    139,                                 // lineNo
    13,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtDCInfo m_emlrtDCI{
    141,                                 // lineNo
    41,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo rb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    141,                                 // lineNo
    54,                                  // colNo
    "dfvpdx{parent(i)}",                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo sb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    141,                                 // lineNo
    99,                                  // colNo
    "dfvpdx{i}",                         // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo n_emlrtDCI{
    141,                                 // lineNo
    16,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo tb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    141,                                 // lineNo
    29,                                  // colNo
    "dfvpdx{parent(i)}",                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo o_emlrtDCI{
    143,                                 // lineNo
    41,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo ub_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    143,                                 // lineNo
    54,                                  // colNo
    "dfvpdx{parent(i)}",                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo vb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    143,                                 // lineNo
    79,                                  // colNo
    "dfvpdx{i}",                         // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo p_emlrtDCI{
    143,                                 // lineNo
    16,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo wb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    143,                                 // lineNo
    29,                                  // colNo
    "dfvpdx{parent(i)}",                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo q_emlrtDCI{
    145,                                 // lineNo
    43,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo xb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    145,                                 // lineNo
    56,                                  // colNo
    "dfvpdx{parent(i)}",                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo yb_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    145,                                 // lineNo
    85,                                  // colNo
    "dfvpdx{i}",                         // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo r_emlrtDCI{
    145,                                 // lineNo
    14,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo ac_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    145,                                 // lineNo
    27,                                  // colNo
    "dfvpdx{parent(i)}",                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtRTEInfo m_emlrtRTEI{
    154,                                 // lineNo
    9,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo n_emlrtRTEI{
    158,                                 // lineNo
    9,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo o_emlrtRTEI{
    162,                                 // lineNo
    13,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtDCInfo s_emlrtDCI{
    164,                                 // lineNo
    45,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo bc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    164,                                 // lineNo
    60,                                  // colNo
    "dICdq{parent(i)}",                  // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo cc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    164,                                 // lineNo
    112,                                 // colNo
    "dICdq{i}",                          // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo t_emlrtDCI{
    164,                                 // lineNo
    19,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo dc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    164,                                 // lineNo
    34,                                  // colNo
    "dICdq{parent(i)}",                  // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo u_emlrtDCI{
    166,                                 // lineNo
    45,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo ec_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    166,                                 // lineNo
    60,                                  // colNo
    "dICdq{parent(i)}",                  // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo fc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    166,                                 // lineNo
    86,                                  // colNo
    "dICdq{i}",                          // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo v_emlrtDCI{
    166,                                 // lineNo
    19,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo gc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    166,                                 // lineNo
    34,                                  // colNo
    "dICdq{parent(i)}",                  // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtRTEInfo p_emlrtRTEI{
    175,                                 // lineNo
    9,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtBCInfo hc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    176,                                 // lineNo
    20,                                  // colNo
    "S",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtRTEInfo q_emlrtRTEI{
    180,                                 // lineNo
    11,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtBCInfo ic_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    181,                                 // lineNo
    31,                                  // colNo
    "dICdq{i}",                          // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo jc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    181,                                 // lineNo
    40,                                  // colNo
    "S",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo kc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    184,                                 // lineNo
    16,                                  // colNo
    "S",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtRTEInfo r_emlrtRTEI{
    186,                                 // lineNo
    11,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtBCInfo lc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    187,                                 // lineNo
    23,                                  // colNo
    "S",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo mc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    187,                                 // lineNo
    37,                                  // colNo
    "dfhdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtRTEInfo s_emlrtRTEI{
    192,                                 // lineNo
    13,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtBCInfo nc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    194,                                 // lineNo
    58,                                  // colNo
    "dfhdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo oc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    194,                                 // lineNo
    17,                                  // colNo
    "dfhdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo pc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    196,                                 // lineNo
    40,                                  // colNo
    "dfhdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo w_emlrtDCI{
    202,                                 // lineNo
    18,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo qc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    202,                                 // lineNo
    18,                                  // colNo
    "S",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtRTEInfo t_emlrtRTEI{
    205,                                 // lineNo
    13,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtBCInfo rc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    206,                                 // lineNo
    25,                                  // colNo
    "S",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo sc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    206,                                 // lineNo
    39,                                  // colNo
    "dfhdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo tc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    134,                                 // lineNo
    8,                                   // colNo
    "dCdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtECInfo emlrtECI{
    -1,                                  // nDims
    134,                                 // lineNo
    3,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtBCInfo uc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    132,                                 // lineNo
    24,                                  // colNo
    "fvp",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo vc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    92,                                  // lineNo
    16,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo wc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    92,                                  // lineNo
    21,                                  // colNo
    "v",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo xc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    87,                                  // lineNo
    18,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo yc_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    89,                                  // lineNo
    10,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ad_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    134,                                 // lineNo
    32,                                  // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo bd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    90,                                  // lineNo
    29,                                  // colNo
    "dXupdq",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo cd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    104,                                 // lineNo
    18,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo dd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    104,                                 // lineNo
    25,                                  // colNo
    "avp",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ed_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    104,                                 // lineNo
    44,                                  // colNo
    "v",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo fd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    118,                                 // lineNo
    21,                                  // colNo
    "avp",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo gd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    118,                                 // lineNo
    32,                                  // colNo
    "v",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo hd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    118,                                 // lineNo
    43,                                  // colNo
    "v",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo id_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    106,                                 // lineNo
    45,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo jd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    120,                                 // lineNo
    43,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo kd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    137,                                 // lineNo
    43,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ld_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    99,                                  // lineNo
    36,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo md_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    96,                                  // lineNo
    61,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo nd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    137,                                 // lineNo
    51,                                  // colNo
    "fvp",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo od_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    99,                                  // lineNo
    28,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo pd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    96,                                  // lineNo
    14,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo qd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    96,                                  // lineNo
    31,                                  // colNo
    "dXupdq",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo rd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    96,                                  // lineNo
    36,                                  // colNo
    "v",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo sd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    96,                                  // lineNo
    53,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo td_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    100,                                 // lineNo
    40,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ud_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    97,                                  // lineNo
    40,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo vd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    100,                                 // lineNo
    32,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo wd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    97,                                  // lineNo
    14,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo xd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    97,                                  // lineNo
    32,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo yd_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    160,                                 // lineNo
    41,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ae_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    143,                                 // lineNo
    41,                                  // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo be_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    141,                                 // lineNo
    41,                                  // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ce_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    143,                                 // lineNo
    74,                                  // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo de_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    141,                                 // lineNo
    66,                                  // colNo
    "dXupdq",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ee_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    106,                                 // lineNo
    61,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo fe_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    120,                                 // lineNo
    59,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ge_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    160,                                 // lineNo
    55,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo he_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    143,                                 // lineNo
    63,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ie_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    141,                                 // lineNo
    94,                                  // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo je_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    141,                                 // lineNo
    83,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ke_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    143,                                 // lineNo
    16,                                  // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo le_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    145,                                 // lineNo
    43,                                  // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo me_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    141,                                 // lineNo
    16,                                  // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ne_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    141,                                 // lineNo
    74,                                  // colNo
    "fvp",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo oe_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    145,                                 // lineNo
    80,                                  // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo pe_emlrtBCI{
    0,                                   // iFirst
    33,                                  // iLast
    176,                                 // lineNo
    11,                                  // colNo
    "IC",                                // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo qe_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    145,                                 // lineNo
    69,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo re_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    166,                                 // lineNo
    45,                                  // colNo
    "dICdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo se_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    164,                                 // lineNo
    45,                                  // colNo
    "dICdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo te_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    166,                                 // lineNo
    79,                                  // colNo
    "dICdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ue_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    164,                                 // lineNo
    72,                                  // colNo
    "dXupdq",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ve_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    145,                                 // lineNo
    14,                                  // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo we_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    166,                                 // lineNo
    69,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo xe_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    164,                                 // lineNo
    105,                                 // colNo
    "dICdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ye_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    164,                                 // lineNo
    95,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo af_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    166,                                 // lineNo
    19,                                  // colNo
    "dICdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo bf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    166,                                 // lineNo
    93,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo cf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    106,                                 // lineNo
    36,                                  // colNo
    "v",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo df_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    120,                                 // lineNo
    34,                                  // colNo
    "v",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ef_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    164,                                 // lineNo
    128,                                 // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ff_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    181,                                 // lineNo
    24,                                  // colNo
    "dICdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo gf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    164,                                 // lineNo
    19,                                  // colNo
    "dICdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo hf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    164,                                 // lineNo
    86,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo if_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    164,                                 // lineNo
    119,                                 // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo jf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    164,                                 // lineNo
    145,                                 // colNo
    "dXupdq",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo kf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    123,                                 // lineNo
    34,                                  // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo lf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    112,                                 // lineNo
    40,                                  // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo mf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    109,                                 // lineNo
    67,                                  // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo nf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    123,                                 // lineNo
    91,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo of_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    112,                                 // lineNo
    16,                                  // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo pf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    112,                                 // lineNo
    30,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo qf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    109,                                 // lineNo
    16,                                  // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo rf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    109,                                 // lineNo
    33,                                  // colNo
    "dXupdq",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo sf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    109,                                 // lineNo
    40,                                  // colNo
    "avp",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo tf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    109,                                 // lineNo
    57,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo uf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    123,                                 // lineNo
    12,                                  // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo vf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    123,                                 // lineNo
    66,                                  // colNo
    "v",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo wf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    113,                                 // lineNo
    44,                                  // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo xf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    110,                                 // lineNo
    44,                                  // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo yf_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    124,                                 // lineNo
    38,                                  // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ag_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    124,                                 // lineNo
    100,                                 // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo bg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    113,                                 // lineNo
    16,                                  // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo cg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    113,                                 // lineNo
    34,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo dg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    110,                                 // lineNo
    16,                                  // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo eg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    110,                                 // lineNo
    34,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo fg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    110,                                 // lineNo
    93,                                  // colNo
    "v",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo gg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    124,                                 // lineNo
    12,                                  // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo hg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    124,                                 // lineNo
    75,                                  // colNo
    "v",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ig_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    200,                                 // lineNo
    14,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo jg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    196,                                 // lineNo
    26,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo kg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    194,                                 // lineNo
    29,                                  // colNo
    "dXupdq",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo lg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    194,                                 // lineNo
    44,                                  // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo mg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    90,                                  // lineNo
    17,                                  // colNo
    "davpdx{i}",                         // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ng_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    90,                                  // lineNo
    12,                                  // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo og_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    99,                                  // lineNo
    19,                                  // colNo
    "dvdx{i}",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo pg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    99,                                  // lineNo
    14,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo qg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    100,                                 // lineNo
    19,                                  // colNo
    "dvdx{i}",                           // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo rg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    100,                                 // lineNo
    14,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo sg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    181,                                 // lineNo
    13,                                  // colNo
    "dfhdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo tg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    196,                                 // lineNo
    17,                                  // colNo
    "dfhdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo x_emlrtDCI{
    14,                                  // lineNo
    19,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo ug_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    42,                                  // lineNo
    10,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo vg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    46,                                  // lineNo
    12,                                  // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo wg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    50,                                  // lineNo
    12,                                  // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo xg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    155,                                 // lineNo
    11,                                  // colNo
    "dICdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo y_emlrtDCI{
    11,                                  // lineNo
    12,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtDCInfo ab_emlrtDCI{
    10,                                  // lineNo
    14,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtDCInfo bb_emlrtDCI{
    10,                                  // lineNo
    14,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    4                                      // checkKind
};

static emlrtDCInfo cb_emlrtDCI{
    14,                                  // lineNo
    1,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo yg_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    17,                                  // lineNo
    15,                                  // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ah_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    17,                                  // lineNo
    15,                                  // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo bh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    17,                                  // lineNo
    15,                                  // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ch_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    22,                                  // lineNo
    5,                                   // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo dh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    26,                                  // lineNo
    5,                                   // colNo
    "v",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo eh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    30,                                  // lineNo
    5,                                   // colNo
    "avp",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo fh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    34,                                  // lineNo
    5,                                   // colNo
    "fvp",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo gh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    38,                                  // lineNo
    5,                                   // colNo
    "dXupdq",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo db_emlrtDCI{
    42,                                  // lineNo
    21,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtDCInfo eb_emlrtDCI{
    46,                                  // lineNo
    23,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtDCInfo fb_emlrtDCI{
    50,                                  // lineNo
    23,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo hh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    42,                                  // lineNo
    5,                                   // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo gb_emlrtDCI{
    128,                                 // lineNo
    11,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo ih_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    46,                                  // lineNo
    5,                                   // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo hb_emlrtDCI{
    129,                                 // lineNo
    14,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo jh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    50,                                  // lineNo
    5,                                   // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo kh_emlrtBCI{
    1,                                   // iFirst
    34,                                  // iLast
    75,                                  // lineNo
    45,                                  // colNo
    "q",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo lh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    75,                                  // lineNo
    24,                                  // colNo
    "S",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo mh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    17,                                  // lineNo
    15,                                  // colNo
    "dICdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo nh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    132,                                 // lineNo
    5,                                   // colNo
    "C",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo ib_emlrtDCI{
    155,                                 // lineNo
    22,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo oh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    86,                                  // lineNo
    5,                                   // colNo
    "v",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo jb_emlrtDCI{
    172,                                 // lineNo
    11,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo ph_emlrtBCI{
    1,                                   // iFirst
    34,                                  // iLast
    159,                                 // lineNo
    13,                                  // colNo
    "parent",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo qh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    92,                                  // lineNo
    5,                                   // colNo
    "v",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo rh_emlrtBCI{
    1,                                   // iFirst
    34,                                  // iLast
    136,                                 // lineNo
    13,                                  // colNo
    "parent",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo sh_emlrtBCI{
    0,                                   // iFirst
    33,                                  // iLast
    160,                                 // lineNo
    21,                                  // colNo
    "IC",                                // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo kb_emlrtDCI{
    160,                                 // lineNo
    21,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo th_emlrtBCI{
    0,                                   // iFirst
    33,                                  // iLast
    160,                                 // lineNo
    5,                                   // colNo
    "IC",                                // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    3                                      // checkKind
};

static emlrtDCInfo lb_emlrtDCI{
    160,                                 // lineNo
    5,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtDCInfo mb_emlrtDCI{
    173,                                 // lineNo
    14,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo uh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    89,                                  // lineNo
    5,                                   // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo vh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    137,                                 // lineNo
    22,                                  // colNo
    "fvp",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo nb_emlrtDCI{
    137,                                 // lineNo
    22,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo wh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    137,                                 // lineNo
    5,                                   // colNo
    "fvp",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo ob_emlrtDCI{
    137,                                 // lineNo
    5,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo xh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    155,                                 // lineNo
    5,                                   // colNo
    "dICdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo yh_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    90,                                  // lineNo
    5,                                   // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ai_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    99,                                  // lineNo
    9,                                   // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo bi_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    104,                                 // lineNo
    5,                                   // colNo
    "avp",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ci_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    96,                                  // lineNo
    9,                                   // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtDCInfo pb_emlrtDCI{
    178,                                 // lineNo
    17,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    1                                      // checkKind
};

static emlrtBCInfo di_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    100,                                 // lineNo
    9,                                   // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ei_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    166,                                 // lineNo
    13,                                  // colNo
    "dICdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo fi_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    143,                                 // lineNo
    9,                                   // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo gi_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    97,                                  // lineNo
    9,                                   // colNo
    "dvdx",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo hi_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    141,                                 // lineNo
    9,                                   // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ii_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    164,                                 // lineNo
    13,                                  // colNo
    "dICdq",                             // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ji_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    184,                                 // lineNo
    5,                                   // colNo
    "H",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ki_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    184,                                 // lineNo
    7,                                   // colNo
    "H",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo li_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    118,                                 // lineNo
    3,                                   // colNo
    "fvp",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo mi_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    145,                                 // lineNo
    7,                                   // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ni_emlrtBCI{
    1,                                   // iFirst
    34,                                  // iLast
    191,                                 // lineNo
    16,                                  // colNo
    "parent",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo oi_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    187,                                 // lineNo
    10,                                  // colNo
    "dHdq",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo pi_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    187,                                 // lineNo
    12,                                  // colNo
    "dHdq",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo qi_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    187,                                 // lineNo
    14,                                  // colNo
    "dHdq",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ri_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    112,                                 // lineNo
    9,                                   // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo si_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    109,                                 // lineNo
    9,                                   // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ti_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    202,                                 // lineNo
    7,                                   // colNo
    "H",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ui_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    202,                                 // lineNo
    9,                                   // colNo
    "H",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo vi_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    203,                                 // lineNo
    16,                                  // colNo
    "H",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo wi_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    203,                                 // lineNo
    18,                                  // colNo
    "H",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo xi_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    203,                                 // lineNo
    7,                                   // colNo
    "H",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo yi_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    203,                                 // lineNo
    9,                                   // colNo
    "H",                                 // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo aj_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    113,                                 // lineNo
    9,                                   // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo bj_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    206,                                 // lineNo
    12,                                  // colNo
    "dHdq",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo cj_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    206,                                 // lineNo
    14,                                  // colNo
    "dHdq",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo dj_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    206,                                 // lineNo
    16,                                  // colNo
    "dHdq",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ej_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    207,                                 // lineNo
    26,                                  // colNo
    "dHdq",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo fj_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    207,                                 // lineNo
    28,                                  // colNo
    "dHdq",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo gj_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    207,                                 // lineNo
    30,                                  // colNo
    "dHdq",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo hj_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    207,                                 // lineNo
    12,                                  // colNo
    "dHdq",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ij_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    207,                                 // lineNo
    14,                                  // colNo
    "dHdq",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo jj_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    207,                                 // lineNo
    16,                                  // colNo
    "dHdq",                              // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo kj_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    110,                                 // lineNo
    9,                                   // colNo
    "davpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo lj_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    123,                                 // lineNo
    5,                                   // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo mj_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    124,                                 // lineNo
    5,                                   // colNo
    "dfvpdx",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo nj_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    87,                                  // lineNo
    5,                                   // colNo
    "avp",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo oj_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    83,                                  // lineNo
    3,                                   // colNo
    "dXupdq",                            // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo pj_emlrtBCI{
    -1,                                  // iFirst
    -1,                                  // iLast
    81,                                  // lineNo
    3,                                   // colNo
    "Xup",                               // aName
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m", // pName
    0                                      // checkKind
};

static emlrtRTEInfo v_emlrtRTEI{
    10,                                  // lineNo
    14,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo w_emlrtRTEI{
    14,                                  // lineNo
    1,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo x_emlrtRTEI{
    1,                                   // lineNo
    28,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo y_emlrtRTEI{
    152,                                 // lineNo
    16,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo ab_emlrtRTEI{
    42,                                  // lineNo
    5,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo bb_emlrtRTEI{
    46,                                  // lineNo
    5,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo cb_emlrtRTEI{
    50,                                  // lineNo
    5,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    106,                                 // lineNo
    40,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo eb_emlrtRTEI{
    106,                                 // lineNo
    56,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo fb_emlrtRTEI{
    120,                                 // lineNo
    38,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo gb_emlrtRTEI{
    120,                                 // lineNo
    54,                                  // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo hb_emlrtRTEI{
    128,                                 // lineNo
    1,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo ib_emlrtRTEI{
    129,                                 // lineNo
    1,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo jb_emlrtRTEI{
    155,                                 // lineNo
    5,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo kb_emlrtRTEI{
    172,                                 // lineNo
    1,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo lb_emlrtRTEI{
    173,                                 // lineNo
    1,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

static emlrtRTEInfo mb_emlrtRTEI{
    178,                                 // lineNo
    3,                                   // colNo
    "differentiate_FDcrb_jacobian_pure", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab-coder/"
    "differentiate_FDcrb_jacobian_pure.m" // pName
};

// Function Definitions
void differentiate_FDcrb_jacobian_pure(
    const emlrtStack *sp, real_T N, const char_T jtype[34],
    const cell_wrap_0 Xtree[34], const real_T parent[34],
    const cell_wrap_0 b_I[34], const real_T transmissionInertia[34],
    const real_T q[34], const real_T qd[34], coder::array<real_T, 2U> &H,
    coder::array<real_T, 1U> &C, coder::array<real_T, 3U> &dHdq,
    coder::array<real_T, 2U> &dCdx)
{
  static const real_T b[6]{-0.0, -0.0, -0.0, -0.0, -0.0, 9.806};
  coder::array<cell_wrap_0, 2U> Xup;
  coder::array<cell_wrap_0, 2U> dXupdq;
  coder::array<cell_wrap_1, 2U> avp;
  coder::array<cell_wrap_1, 2U> fvp;
  coder::array<cell_wrap_1, 2U> v;
  coder::array<cell_wrap_2, 2U> davpdx;
  coder::array<cell_wrap_2, 2U> dfvpdx;
  coder::array<cell_wrap_2, 2U> dvdx;
  coder::array<cell_wrap_3, 2U> dICdq;
  coder::array<real_T, 3U> dcrmvdq;
  coder::array<real_T, 3U> dcrmvdqd;
  coder::array<real_T, 2U> S;
  coder::array<real_T, 2U> c_dvdx;
  coder::array<real_T, 2U> dfhdq;
  coder::array<real_T, 2U> r;
  cell_wrap_0 IC[34];
  emlrtStack b_st;
  emlrtStack st;
  real_T XJ[36];
  real_T a__1[36];
  real_T dXJdq[36];
  real_T b_Xup[6];
  real_T b_b[6];
  real_T b_dXupdq[6];
  real_T vJ[6];
  real_T b_S;
  real_T d;
  real_T d1;
  real_T j;
  int32_T iv[2];
  int32_T jt_size[2];
  int32_T b_dvdx;
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i4;
  int32_T i6;
  int32_T i7;
  int32_T k;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T unnamed_idx_1_tmp_tmp;
  uint32_T unnamed_idx_1;
  char_T jt_data[3];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  //  N = model.NB;
  //  size(I{1},1);
  //  get_gravity(model);
  Xup.set_size(&v_emlrtRTEI, sp, 1, Xup.size(1));
  if (!(N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N, &bb_emlrtDCI, (emlrtCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(N));
  if (N != i) {
    emlrtIntegerCheckR2012b(N, &ab_emlrtDCI, (emlrtCTX)sp);
  }
  Xup.set_size(&v_emlrtRTEI, sp, Xup.size(0), static_cast<int32_T>(N));
  if (N != i) {
    emlrtIntegerCheckR2012b(N, &y_emlrtDCI, (emlrtCTX)sp);
  }
  unnamed_idx_1_tmp_tmp = static_cast<int32_T>(N);
  S.set_size(&w_emlrtRTEI, sp, 6, S.size(1));
  if (unnamed_idx_1_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(N, &x_emlrtDCI, (emlrtCTX)sp);
  }
  S.set_size(&w_emlrtRTEI, sp, S.size(0), unnamed_idx_1_tmp_tmp);
  if (unnamed_idx_1_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(N, &cb_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub_tmp = 6 * unnamed_idx_1_tmp_tmp;
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    S[i1] = 0.0;
  }
  dvdx.set_size(&x_emlrtRTEI, sp, 1, unnamed_idx_1_tmp_tmp);
  for (i1 = 0; i1 < unnamed_idx_1_tmp_tmp; i1++) {
    b_dvdx = dvdx.size(1) - 1;
    if (i1 > dvdx.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, dvdx.size(1) - 1, &yg_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    dvdx[dvdx.size(0) * i1].f1.set_size(&x_emlrtRTEI, sp, 6,
                                        dvdx[dvdx.size(0) * i1].f1.size(1));
    if (i1 > b_dvdx) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, b_dvdx, &yg_emlrtBCI, (emlrtCTX)sp);
    }
    dvdx[dvdx.size(0) * i1].f1.set_size(&x_emlrtRTEI, sp,
                                        dvdx[dvdx.size(0) * i1].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  davpdx.set_size(&x_emlrtRTEI, sp, 1, unnamed_idx_1_tmp_tmp);
  for (i1 = 0; i1 < unnamed_idx_1_tmp_tmp; i1++) {
    b_dvdx = davpdx.size(1) - 1;
    if (i1 > davpdx.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, davpdx.size(1) - 1, &ah_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    davpdx[davpdx.size(0) * i1].f1.set_size(
        &x_emlrtRTEI, sp, 6, davpdx[davpdx.size(0) * i1].f1.size(1));
    if (i1 > b_dvdx) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, b_dvdx, &ah_emlrtBCI, (emlrtCTX)sp);
    }
    davpdx[davpdx.size(0) * i1].f1.set_size(
        &x_emlrtRTEI, sp, davpdx[davpdx.size(0) * i1].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  dfvpdx.set_size(&x_emlrtRTEI, sp, 1, unnamed_idx_1_tmp_tmp);
  for (i1 = 0; i1 < unnamed_idx_1_tmp_tmp; i1++) {
    b_dvdx = dfvpdx.size(1) - 1;
    if (i1 > dfvpdx.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, dfvpdx.size(1) - 1, &bh_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    dfvpdx[dfvpdx.size(0) * i1].f1.set_size(
        &x_emlrtRTEI, sp, 6, dfvpdx[dfvpdx.size(0) * i1].f1.size(1));
    if (i1 > b_dvdx) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, b_dvdx, &bh_emlrtBCI, (emlrtCTX)sp);
    }
    dfvpdx[dfvpdx.size(0) * i1].f1.set_size(
        &x_emlrtRTEI, sp, dfvpdx[dfvpdx.size(0) * i1].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &emlrtRTEI,
                                (emlrtCTX)sp);
  for (b_i = 0; b_i < unnamed_idx_1_tmp_tmp; b_i++) {
    b_dvdx = Xup.size(1) - 1;
    for (i1 = 0; i1 < 36; i1++) {
      if (b_i > b_dvdx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &ch_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      Xup[b_i].f1[i1] = 0.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &b_emlrtRTEI,
                                (emlrtCTX)sp);
  v.set_size(&y_emlrtRTEI, sp, 1, unnamed_idx_1_tmp_tmp);
  for (b_i = 0; b_i < unnamed_idx_1_tmp_tmp; b_i++) {
    b_dvdx = v.size(1) - 1;
    for (i1 = 0; i1 < 6; i1++) {
      if (b_i > b_dvdx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &dh_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      v[b_i].f1[i1] = 0.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &c_emlrtRTEI,
                                (emlrtCTX)sp);
  avp.set_size(&y_emlrtRTEI, sp, 1, unnamed_idx_1_tmp_tmp);
  for (b_i = 0; b_i < unnamed_idx_1_tmp_tmp; b_i++) {
    b_dvdx = avp.size(1) - 1;
    for (i1 = 0; i1 < 6; i1++) {
      if (b_i > b_dvdx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &eh_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      avp[b_i].f1[i1] = 0.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &d_emlrtRTEI,
                                (emlrtCTX)sp);
  fvp.set_size(&y_emlrtRTEI, sp, 1, unnamed_idx_1_tmp_tmp);
  for (b_i = 0; b_i < unnamed_idx_1_tmp_tmp; b_i++) {
    b_dvdx = fvp.size(1) - 1;
    for (i1 = 0; i1 < 6; i1++) {
      if (b_i > b_dvdx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &fh_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      fvp[b_i].f1[i1] = 0.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &e_emlrtRTEI,
                                (emlrtCTX)sp);
  dXupdq.set_size(&y_emlrtRTEI, sp, 1, unnamed_idx_1_tmp_tmp);
  for (b_i = 0; b_i < unnamed_idx_1_tmp_tmp; b_i++) {
    b_dvdx = dXupdq.size(1) - 1;
    for (i1 = 0; i1 < 36; i1++) {
      if (b_i > b_dvdx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &gh_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      dXupdq[b_i].f1[i1] = 0.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &f_emlrtRTEI,
                                (emlrtCTX)sp);
  dvdx.set_size(&y_emlrtRTEI, sp, 1, unnamed_idx_1_tmp_tmp);
  for (b_i = 0; b_i < unnamed_idx_1_tmp_tmp; b_i++) {
    unnamed_idx_1 = 2U * static_cast<uint32_T>(N);
    if (static_cast<real_T>(unnamed_idx_1) !=
        static_cast<int32_T>(unnamed_idx_1)) {
      emlrtIntegerCheckR2012b(static_cast<real_T>(unnamed_idx_1), &db_emlrtDCI,
                              (emlrtCTX)sp);
    }
    loop_ub = 6 * static_cast<int32_T>(unnamed_idx_1) - 1;
    if (b_i > dvdx.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, dvdx.size(1) - 1, &ug_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    dvdx[dvdx.size(0) * b_i].f1.set_size(&ab_emlrtRTEI, sp, 6,
                                         dvdx[dvdx.size(0) * b_i].f1.size(1));
    if (b_i > dvdx.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, dvdx.size(1) - 1, &ug_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    dvdx[dvdx.size(0) * b_i].f1.set_size(&ab_emlrtRTEI, sp,
                                         dvdx[dvdx.size(0) * b_i].f1.size(0),
                                         static_cast<int32_T>(unnamed_idx_1));
    i1 = dvdx.size(1);
    if (b_i > dvdx.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, dvdx.size(1) - 1, &ug_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (i2 = 0; i2 <= loop_ub; i2++) {
      if (b_i > i1 - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i1 - 1, &hh_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      dvdx[b_i].f1[i2] = 0.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &g_emlrtRTEI,
                                (emlrtCTX)sp);
  davpdx.set_size(&y_emlrtRTEI, sp, 1, unnamed_idx_1_tmp_tmp);
  for (b_i = 0; b_i < unnamed_idx_1_tmp_tmp; b_i++) {
    unnamed_idx_1 = 2U * static_cast<uint32_T>(N);
    if (static_cast<real_T>(unnamed_idx_1) !=
        static_cast<int32_T>(unnamed_idx_1)) {
      emlrtIntegerCheckR2012b(static_cast<real_T>(unnamed_idx_1), &eb_emlrtDCI,
                              (emlrtCTX)sp);
    }
    loop_ub = 6 * static_cast<int32_T>(unnamed_idx_1) - 1;
    if (b_i > davpdx.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, davpdx.size(1) - 1, &vg_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    davpdx[davpdx.size(0) * b_i].f1.set_size(
        &bb_emlrtRTEI, sp, 6, davpdx[davpdx.size(0) * b_i].f1.size(1));
    if (b_i > davpdx.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, davpdx.size(1) - 1, &vg_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    davpdx[davpdx.size(0) * b_i].f1.set_size(
        &bb_emlrtRTEI, sp, davpdx[davpdx.size(0) * b_i].f1.size(0),
        static_cast<int32_T>(unnamed_idx_1));
    i1 = davpdx.size(1);
    if (b_i > davpdx.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, davpdx.size(1) - 1, &vg_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (i2 = 0; i2 <= loop_ub; i2++) {
      if (b_i > i1 - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i1 - 1, &ih_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      davpdx[b_i].f1[i2] = 0.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &h_emlrtRTEI,
                                (emlrtCTX)sp);
  dfvpdx.set_size(&y_emlrtRTEI, sp, 1, unnamed_idx_1_tmp_tmp);
  for (b_i = 0; b_i < unnamed_idx_1_tmp_tmp; b_i++) {
    unnamed_idx_1 = 2U * static_cast<uint32_T>(N);
    if (static_cast<real_T>(unnamed_idx_1) !=
        static_cast<int32_T>(unnamed_idx_1)) {
      emlrtIntegerCheckR2012b(static_cast<real_T>(unnamed_idx_1), &fb_emlrtDCI,
                              (emlrtCTX)sp);
    }
    loop_ub = 6 * static_cast<int32_T>(unnamed_idx_1) - 1;
    if (b_i > dfvpdx.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, dfvpdx.size(1) - 1, &wg_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    dfvpdx[dfvpdx.size(0) * b_i].f1.set_size(
        &cb_emlrtRTEI, sp, 6, dfvpdx[dfvpdx.size(0) * b_i].f1.size(1));
    if (b_i > dfvpdx.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, dfvpdx.size(1) - 1, &wg_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    dfvpdx[dfvpdx.size(0) * b_i].f1.set_size(
        &cb_emlrtRTEI, sp, dfvpdx[dfvpdx.size(0) * b_i].f1.size(0),
        static_cast<int32_T>(unnamed_idx_1));
    i1 = dfvpdx.size(1);
    if (b_i > dfvpdx.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, dfvpdx.size(1) - 1, &wg_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (i2 = 0; i2 <= loop_ub; i2++) {
      if (b_i > i1 - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i1 - 1, &jh_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      dfvpdx[b_i].f1[i2] = 0.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &i_emlrtRTEI,
                                (emlrtCTX)sp);
  fvp.set_size(&y_emlrtRTEI, sp, 1, unnamed_idx_1_tmp_tmp);
  for (b_i = 0; b_i < unnamed_idx_1_tmp_tmp; b_i++) {
    char_T c;
    if (b_i + 1 > 34) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, 34, &emlrtBCI, (emlrtCTX)sp);
    }
    c = jtype[b_i];
    if (!(c != 'x')) {
      b_dvdx = 0;
    } else if (!(c != 'y')) {
      b_dvdx = 1;
    } else if (!(c != 'z')) {
      b_dvdx = 2;
    } else if (!(c != 'a')) {
      b_dvdx = 3;
    } else if (!(c != 'b')) {
      b_dvdx = 4;
    } else if (!(c != 'c')) {
      b_dvdx = 5;
    } else {
      b_dvdx = -1;
    }
    switch (b_dvdx) {
    case 0:
      jt_size[0] = 1;
      jt_size[1] = 2;
      jt_data[0] = 'R';
      jt_data[1] = 'x';
      break;
    case 1:
      jt_size[0] = 1;
      jt_size[1] = 2;
      jt_data[0] = 'R';
      jt_data[1] = 'y';
      break;
    case 2:
      jt_size[0] = 1;
      jt_size[1] = 2;
      jt_data[0] = 'R';
      jt_data[1] = 'z';
      break;
    case 3:
      jt_size[0] = 1;
      jt_size[1] = 3;
      jt_data[0] = '-';
      jt_data[1] = 'R';
      jt_data[2] = 'x';
      break;
    case 4:
      jt_size[0] = 1;
      jt_size[1] = 3;
      jt_data[0] = '-';
      jt_data[1] = 'R';
      jt_data[2] = 'y';
      break;
    case 5:
      jt_size[0] = 1;
      jt_size[1] = 3;
      jt_data[0] = '-';
      jt_data[1] = 'R';
      jt_data[2] = 'z';
      break;
    default:
      st.site = &emlrtRSI;
      coder::c_error(&st);
      break;
    }
    if (static_cast<int32_T>(b_i + 1U) > 34) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_i + 1U), 1, 34,
                                    &kh_emlrtBCI, (emlrtCTX)sp);
    }
    if (static_cast<int32_T>(b_i + 1U) > S.size(1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_i + 1U), 1,
                                    S.size(1), &lh_emlrtBCI, (emlrtCTX)sp);
    }
    st.site = &b_emlrtRSI;
    d_jcalc(&st, jt_data, jt_size, q[b_i], XJ, dXJdq, a__1, vJ);
    for (int32_T i3{0}; i3 < 6; i3++) {
      (*(real_T(*)[6]) & S[6 * b_i])[i3] = vJ[i3];
    }
    //    [ XJ, dXJdq, ~, S(:,i) ] = d_jcalc( jtype{i}, q(i) );
    if (b_i + 1 > S.size(1)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, S.size(1), &b_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (i1 = 0; i1 < 6; i1++) {
      vJ[i1] = S[i1 + 6 * b_i] * qd[b_i];
    }
    b_dvdx = Xup.size(1) - 1;
    for (i1 = 0; i1 < 6; i1++) {
      for (i2 = 0; i2 < 6; i2++) {
        d = 0.0;
        for (i4 = 0; i4 < 6; i4++) {
          d += XJ[i1 + 6 * i4] * Xtree[b_i].f1[i4 + 6 * i2];
        }
        if (b_i > b_dvdx) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &pj_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        Xup[b_i].f1[i1 + 6 * i2] = d;
      }
    }
    b_dvdx = dXupdq.size(1) - 1;
    for (i1 = 0; i1 < 6; i1++) {
      for (i2 = 0; i2 < 6; i2++) {
        d = 0.0;
        for (i4 = 0; i4 < 6; i4++) {
          d += dXJdq[i1 + 6 * i4] * Xtree[b_i].f1[i4 + 6 * i2];
        }
        if (b_i > b_dvdx) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &oj_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        dXupdq[b_i].f1[i1 + 6 * i2] = d;
      }
    }
    d = parent[b_i];
    if (d == 0.0) {
      b_dvdx = v.size(1) - 1;
      for (i1 = 0; i1 < 6; i1++) {
        if (b_i > b_dvdx) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &oh_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        v[b_i].f1[i1] = vJ[i1];
      }
      if (b_i > Xup.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, Xup.size(1) - 1, &xc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      b_dvdx = avp.size(1) - 1;
      for (i1 = 0; i1 < 6; i1++) {
        d = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          d += Xup[b_i].f1[i1 + 6 * i2] * b[i2];
        }
        if (b_i > b_dvdx) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &nj_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        avp[b_i].f1[i1] = d;
      }
      if (b_i + 1 > S.size(1)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, S.size(1), &c_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i1 = dvdx.size(1);
      if (b_i > dvdx.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, dvdx.size(1) - 1, &yc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = dvdx[b_i].f1.size(1);
      c_i = (b_i + unnamed_idx_1_tmp_tmp) + 1;
      if ((c_i < 1) || (c_i > i2)) {
        emlrtDynamicBoundsCheckR2012b(c_i, 1, i2, &d_emlrtBCI, (emlrtCTX)sp);
      }
      for (i2 = 0; i2 < 6; i2++) {
        if (b_i > i1 - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i1 - 1, &uh_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        dvdx[b_i].f1[i2 + 6 * (c_i - 1)] = S[i2 + 6 * b_i];
      }
      if (b_i > dXupdq.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, dXupdq.size(1) - 1, &bd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i1 = davpdx.size(1);
      if (b_i > davpdx.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, davpdx.size(1) - 1, &ng_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = davpdx[b_i].f1.size(1);
      if (b_i + 1 > i2) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i2, &mg_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      for (i2 = 0; i2 < 6; i2++) {
        if (b_i > i1 - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i1 - 1, &yh_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        davpdx[b_i].f1[i2 + 6 * b_i] = 0.0;
        for (i4 = 0; i4 < 6; i4++) {
          if (b_i > i1 - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i1 - 1, &yh_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          davpdx[b_i].f1[i2 + 6 * b_i] = davpdx[b_i].f1[i2 + 6 * b_i] +
                                         dXupdq[b_i].f1[i2 + 6 * i4] * b[i4];
        }
      }
    } else {
      uint32_T u;
      if (b_i > Xup.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, Xup.size(1) - 1, &vc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i1 = v.size(1);
      i2 = static_cast<int32_T>(muDoubleScalarFloor(d));
      if (d != i2) {
        emlrtIntegerCheckR2012b(d, &emlrtDCI, (emlrtCTX)sp);
      }
      i4 = static_cast<int32_T>(d) - 1;
      if ((i4 < 0) || (i4 > v.size(1) - 1)) {
        emlrtDynamicBoundsCheckR2012b(i4, 0, v.size(1) - 1, &wc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      for (i6 = 0; i6 < 6; i6++) {
        d = 0.0;
        for (i7 = 0; i7 < 6; i7++) {
          d += Xup[b_i].f1[i6 + 6 * i7] * v[i4].f1[i7];
        }
        b_Xup[i6] = d + vJ[i6];
      }
      for (i6 = 0; i6 < 6; i6++) {
        if (b_i > i1 - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i1 - 1, &qh_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        v[b_i].f1[i6] = b_Xup[i6];
      }
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                    static_cast<int32_T>(N), &j_emlrtRTEI,
                                    (emlrtCTX)sp);
      for (k = 0; k < unnamed_idx_1_tmp_tmp; k++) {
        if (k + 1U == static_cast<uint32_T>(b_i + 1)) {
          d = parent[b_i];
          if (d != i2) {
            emlrtIntegerCheckR2012b(d, &c_emlrtDCI, (emlrtCTX)sp);
          }
          if (i4 > dvdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(i4, 0, dvdx.size(1) - 1, &md_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (b_i > dXupdq.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, dXupdq.size(1) - 1,
                                          &qd_emlrtBCI, (emlrtCTX)sp);
          }
          if (static_cast<int32_T>(d) != i2) {
            emlrtIntegerCheckR2012b(d, &b_emlrtDCI, (emlrtCTX)sp);
          }
          if (i4 > v.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(i4, 0, v.size(1) - 1, &rd_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (b_i > Xup.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, Xup.size(1) - 1, &sd_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          i1 = dvdx[static_cast<int32_T>(d) - 1].f1.size(1);
          if (k + 1 > i1) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &e_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          d = parent[b_i];
          for (i1 = 0; i1 < 6; i1++) {
            b_S = 0.0;
            d1 = 0.0;
            for (i6 = 0; i6 < 6; i6++) {
              i7 = i1 + 6 * i6;
              b_S += dXupdq[b_i].f1[i7] * v[static_cast<int32_T>(d) - 1].f1[i6];
              d1 += Xup[b_i].f1[i7] *
                    dvdx[static_cast<int32_T>(d) - 1].f1[i6 + 6 * k];
            }
            b_Xup[i1] = d1;
            b_dXupdq[i1] = b_S;
          }
          b_dvdx = dvdx.size(1) - 1;
          if (b_i > dvdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, dvdx.size(1) - 1,
                                          &pd_emlrtBCI, (emlrtCTX)sp);
          }
          i1 = dvdx[b_i].f1.size(1);
          if (static_cast<int32_T>(k + 1U) > i1) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1, i1,
                                          &f_emlrtBCI, (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            if (b_i > b_dvdx) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &ci_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            dvdx[b_i].f1[i1 + 6 * k] = b_dXupdq[i1] + b_Xup[i1];
          }
          d = parent[b_i];
          if (d != i2) {
            emlrtIntegerCheckR2012b(d, &d_emlrtDCI, (emlrtCTX)sp);
          }
          if (i4 > dvdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(i4, 0, dvdx.size(1) - 1, &ud_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (b_i > Xup.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, Xup.size(1) - 1, &xd_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          i1 = dvdx[static_cast<int32_T>(d) - 1].f1.size(1);
          loop_ub = (k + static_cast<int32_T>(N)) + 1;
          if ((loop_ub < 1) || (loop_ub > i1)) {
            emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &g_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            b_b[i1] = dvdx[i4].f1[i1 + 6 * (loop_ub - 1)];
          }
          if (b_i + 1 > S.size(1)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, S.size(1), &h_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          b_dvdx = dvdx.size(1) - 1;
          if (b_i > dvdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, dvdx.size(1) - 1,
                                          &wd_emlrtBCI, (emlrtCTX)sp);
          }
          i1 = dvdx[b_i].f1.size(1);
          loop_ub = (k + static_cast<int32_T>(N)) + 1;
          if ((loop_ub < 1) || (loop_ub > i1)) {
            emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &i_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            d = 0.0;
            for (i6 = 0; i6 < 6; i6++) {
              d += Xup[b_i].f1[i1 + 6 * i6] * b_b[i6];
            }
            if (b_i > b_dvdx) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &gi_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            dvdx[b_i].f1[i1 + 6 * (loop_ub - 1)] = d + S[i1 + 6 * b_i];
          }
        } else {
          d = parent[b_i];
          if (d != i2) {
            emlrtIntegerCheckR2012b(d, &e_emlrtDCI, (emlrtCTX)sp);
          }
          if (i4 > dvdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(i4, 0, dvdx.size(1) - 1, &ld_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (b_i > Xup.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, Xup.size(1) - 1, &od_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          i1 = dvdx[static_cast<int32_T>(d) - 1].f1.size(1);
          if (k + 1 > i1) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &j_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          b_dvdx = dvdx.size(1) - 1;
          if (b_i > dvdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, dvdx.size(1) - 1,
                                          &pg_emlrtBCI, (emlrtCTX)sp);
          }
          i1 = dvdx[b_i].f1.size(1);
          if (static_cast<int32_T>(k + 1U) > i1) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1, i1,
                                          &og_emlrtBCI, (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            b_S = 0.0;
            for (i6 = 0; i6 < 6; i6++) {
              b_S += Xup[b_i].f1[i1 + 6 * i6] * dvdx[i4].f1[i6 + 6 * k];
            }
            b_Xup[i1] = b_S;
          }
          for (i1 = 0; i1 < 6; i1++) {
            if (b_i > b_dvdx) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &ai_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            dvdx[b_i].f1[i1 + 6 * k] = b_Xup[i1];
          }
          if (static_cast<int32_T>(d) != i2) {
            emlrtIntegerCheckR2012b(d, &f_emlrtDCI, (emlrtCTX)sp);
          }
          if (i4 > dvdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(i4, 0, dvdx.size(1) - 1, &td_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (b_i > Xup.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, Xup.size(1) - 1, &vd_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          i1 = dvdx[static_cast<int32_T>(d) - 1].f1.size(1);
          loop_ub = (k + unnamed_idx_1_tmp_tmp) + 1;
          if ((loop_ub < 1) || (loop_ub > i1)) {
            emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &k_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            b_b[i1] = dvdx[i4].f1[i1 + 6 * (loop_ub - 1)];
          }
          b_dvdx = dvdx.size(1) - 1;
          if (b_i > dvdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, dvdx.size(1) - 1,
                                          &rg_emlrtBCI, (emlrtCTX)sp);
          }
          i1 = dvdx[b_i].f1.size(1);
          if (loop_ub > i1) {
            emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &qg_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            if (b_i > b_dvdx) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &di_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            dvdx[b_i].f1[i1 + 6 * (loop_ub - 1)] = 0.0;
            for (i6 = 0; i6 < 6; i6++) {
              if (b_i > b_dvdx) {
                emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &di_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              dvdx[b_i].f1[i1 + 6 * (loop_ub - 1)] =
                  dvdx[b_i].f1[i1 + 6 * (loop_ub - 1)] +
                  Xup[b_i].f1[i1 + 6 * i6] * b_b[i6];
            }
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }
      if (b_i > Xup.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, Xup.size(1) - 1, &cd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      d = parent[b_i];
      if (d != i2) {
        emlrtIntegerCheckR2012b(d, &g_emlrtDCI, (emlrtCTX)sp);
      }
      if (i4 > avp.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(i4, 0, avp.size(1) - 1, &dd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (b_i > v.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, v.size(1) - 1, &ed_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      //  crm  spatial/planar cross-product operator (motion).
      //  crm(v)  calculates the 6x6 (or 3x3) matrix such that the expression
      //  crm(v)*m is the cross product of the motion vectors v and m.  If
      //  length(v)==6 then it is taken to be a spatial vector, and the return
      //  value is a 6x6 matrix.  Otherwise, v is taken to be a planar vector,
      //  and the return value is 3x3.
      XJ[0] = 0.0;
      XJ[6] = -v[b_i].f1[2];
      XJ[12] = v[b_i].f1[1];
      XJ[18] = 0.0;
      XJ[24] = 0.0;
      XJ[30] = 0.0;
      XJ[1] = v[b_i].f1[2];
      XJ[7] = 0.0;
      XJ[13] = -v[b_i].f1[0];
      XJ[19] = 0.0;
      XJ[25] = 0.0;
      XJ[31] = 0.0;
      XJ[2] = -v[b_i].f1[1];
      XJ[8] = v[b_i].f1[0];
      XJ[14] = 0.0;
      XJ[20] = 0.0;
      XJ[26] = 0.0;
      XJ[32] = 0.0;
      XJ[3] = 0.0;
      XJ[9] = -v[b_i].f1[5];
      XJ[15] = v[b_i].f1[4];
      XJ[21] = 0.0;
      XJ[27] = -v[b_i].f1[2];
      XJ[33] = v[b_i].f1[1];
      XJ[4] = v[b_i].f1[5];
      XJ[10] = 0.0;
      XJ[16] = -v[b_i].f1[3];
      XJ[22] = v[b_i].f1[2];
      XJ[28] = 0.0;
      XJ[34] = -v[b_i].f1[0];
      XJ[5] = -v[b_i].f1[4];
      XJ[11] = v[b_i].f1[3];
      XJ[17] = 0.0;
      XJ[23] = -v[b_i].f1[1];
      XJ[29] = v[b_i].f1[0];
      XJ[35] = 0.0;
      for (i1 = 0; i1 < 6; i1++) {
        d = 0.0;
        b_S = 0.0;
        for (i6 = 0; i6 < 6; i6++) {
          i7 = i1 + 6 * i6;
          d += Xup[b_i].f1[i7] * avp[i4].f1[i6];
          b_S += XJ[i7] * vJ[i6];
        }
        b_dXupdq[i1] = b_S;
        b_Xup[i1] = d;
      }
      b_dvdx = avp.size(1) - 1;
      for (i1 = 0; i1 < 6; i1++) {
        if (b_i > b_dvdx) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &bi_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        avp[b_i].f1[i1] = b_Xup[i1] + b_dXupdq[i1];
      }
      if (b_i > dvdx.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, dvdx.size(1) - 1, &id_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (1.0 > N) {
        loop_ub = 0;
      } else {
        i1 = dvdx[b_i].f1.size(1);
        if (1 > i1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i1, &l_emlrtBCI, (emlrtCTX)sp);
        }
        i1 = dvdx[b_i].f1.size(1);
        if (unnamed_idx_1_tmp_tmp > i1) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(N), 1, i1,
                                        &m_emlrtBCI, (emlrtCTX)sp);
        }
        loop_ub = static_cast<int32_T>(N);
      }
      if (b_i > dvdx.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, dvdx.size(1) - 1, &ee_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      unnamed_idx_1 = static_cast<uint32_T>(N);
      u = unnamed_idx_1 << 1;
      if (unnamed_idx_1 + 1U > u) {
        i1 = 0;
        i6 = 0;
      } else {
        i1 = dvdx[b_i].f1.size(1);
        i6 = static_cast<int32_T>(static_cast<uint32_T>(N) + 1U);
        if ((i6 < 1) || (i6 > i1)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(N) + 1U), 1, i1,
              &n_emlrtBCI, (emlrtCTX)sp);
        }
        i1 = unnamed_idx_1_tmp_tmp;
        i6 = dvdx[b_i].f1.size(1);
        if ((static_cast<int32_T>(u) < 1) || (static_cast<int32_T>(u) > i6)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1, i6,
                                        &o_emlrtBCI, (emlrtCTX)sp);
        }
        i6 = static_cast<int32_T>(u);
      }
      if (b_i > v.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, v.size(1) - 1, &cf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      dfhdq.set_size(&db_emlrtRTEI, sp, 6, loop_ub);
      for (i7 = 0; i7 < loop_ub; i7++) {
        for (b_dvdx = 0; b_dvdx < 6; b_dvdx++) {
          dfhdq[b_dvdx + 6 * i7] = dvdx[b_i].f1[b_dvdx + 6 * i7];
        }
      }
      loop_ub = i6 - i1;
      c_dvdx.set_size(&eb_emlrtRTEI, sp, 6, loop_ub);
      for (i6 = 0; i6 < loop_ub; i6++) {
        for (i7 = 0; i7 < 6; i7++) {
          c_dvdx[i7 + 6 * i6] = dvdx[b_i].f1[i7 + 6 * (i1 + i6)];
        }
      }
      st.site = &c_emlrtRSI;
      d_crm(&st, dfhdq, c_dvdx, N, dcrmvdq, dcrmvdqd);
      for (k = 0; k < unnamed_idx_1_tmp_tmp; k++) {
        if (k == b_i) {
          d = parent[b_i];
          if (d != i2) {
            emlrtIntegerCheckR2012b(d, &i_emlrtDCI, (emlrtCTX)sp);
          }
          if (i4 > davpdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(i4, 0, davpdx.size(1) - 1,
                                          &mf_emlrtBCI, (emlrtCTX)sp);
          }
          if (b_i > dXupdq.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, dXupdq.size(1) - 1,
                                          &rf_emlrtBCI, (emlrtCTX)sp);
          }
          if (static_cast<int32_T>(d) != i2) {
            emlrtIntegerCheckR2012b(d, &h_emlrtDCI, (emlrtCTX)sp);
          }
          if (i4 > avp.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(i4, 0, avp.size(1) - 1, &sf_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (b_i > Xup.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, Xup.size(1) - 1, &tf_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          i1 = davpdx[static_cast<int32_T>(d) - 1].f1.size(1);
          if (k + 1 > i1) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &p_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (k + 1 > dcrmvdq.size(2)) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, dcrmvdq.size(2),
                                          &q_emlrtBCI, (emlrtCTX)sp);
          }
          d = parent[b_i];
          for (i1 = 0; i1 < 6; i1++) {
            b_S = 0.0;
            d1 = 0.0;
            for (i6 = 0; i6 < 6; i6++) {
              i7 = i1 + 6 * i6;
              b_S +=
                  dXupdq[b_i].f1[i7] * avp[static_cast<int32_T>(d) - 1].f1[i6];
              d1 += Xup[b_i].f1[i7] *
                    davpdx[static_cast<int32_T>(d) - 1].f1[i6 + 6 * k];
            }
            b_Xup[i1] = d1;
            b_dXupdq[i1] = b_S;
          }
          b_dvdx = davpdx.size(1) - 1;
          if (b_i > davpdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, davpdx.size(1) - 1,
                                          &qf_emlrtBCI, (emlrtCTX)sp);
          }
          i1 = davpdx[b_i].f1.size(1);
          if (k + 1 > i1) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &r_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            d = 0.0;
            for (i6 = 0; i6 < 6; i6++) {
              d += dcrmvdq[(i1 + 6 * i6) + 36 * k] * vJ[i6];
            }
            if (b_i > b_dvdx) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &si_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            davpdx[b_i].f1[i1 + 6 * k] = (b_dXupdq[i1] + b_Xup[i1]) + d;
          }
          d = parent[b_i];
          if (d != i2) {
            emlrtIntegerCheckR2012b(d, &j_emlrtDCI, (emlrtCTX)sp);
          }
          if (i4 > davpdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(i4, 0, davpdx.size(1) - 1,
                                          &xf_emlrtBCI, (emlrtCTX)sp);
          }
          if (b_i > Xup.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, Xup.size(1) - 1, &eg_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          i1 = davpdx[static_cast<int32_T>(d) - 1].f1.size(1);
          loop_ub = static_cast<int32_T>((k + static_cast<uint32_T>(N)) + 1U);
          if ((loop_ub < 1) || (loop_ub > i1)) {
            emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &s_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            b_b[i1] = davpdx[i4].f1[i1 + 6 * (loop_ub - 1)];
          }
          if (k + 1 > dcrmvdqd.size(2)) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, dcrmvdqd.size(2),
                                          &t_emlrtBCI, (emlrtCTX)sp);
          }
          if (b_i > v.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, v.size(1) - 1, &fg_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          //  crm  spatial/planar cross-product operator (motion).
          //  crm(v)  calculates the 6x6 (or 3x3) matrix such that the
          //  expression crm(v)*m is the cross product of the motion vectors v
          //  and m.  If length(v)==6 then it is taken to be a spatial vector,
          //  and the return value is a 6x6 matrix.  Otherwise, v is taken to be
          //  a planar vector, and the return value is 3x3.
          if (b_i + 1 > S.size(1)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, S.size(1), &u_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            d = 0.0;
            b_S = 0.0;
            for (i6 = 0; i6 < 6; i6++) {
              d += Xup[b_i].f1[i1 + 6 * i6] * b_b[i6];
              b_S += dcrmvdqd[(i1 + 6 * i6) + 36 * k] * vJ[i6];
            }
            b_dXupdq[i1] = b_S;
            b_Xup[i1] = d;
          }
          XJ[0] = 0.0;
          XJ[6] = -v[b_i].f1[2];
          XJ[12] = v[b_i].f1[1];
          XJ[18] = 0.0;
          XJ[24] = 0.0;
          XJ[30] = 0.0;
          XJ[1] = v[b_i].f1[2];
          XJ[7] = 0.0;
          XJ[13] = -v[b_i].f1[0];
          XJ[19] = 0.0;
          XJ[25] = 0.0;
          XJ[31] = 0.0;
          XJ[2] = -v[b_i].f1[1];
          XJ[8] = v[b_i].f1[0];
          XJ[14] = 0.0;
          XJ[20] = 0.0;
          XJ[26] = 0.0;
          XJ[32] = 0.0;
          XJ[3] = 0.0;
          XJ[9] = -v[b_i].f1[5];
          XJ[15] = v[b_i].f1[4];
          XJ[21] = 0.0;
          XJ[27] = -v[b_i].f1[2];
          XJ[33] = v[b_i].f1[1];
          XJ[4] = v[b_i].f1[5];
          XJ[10] = 0.0;
          XJ[16] = -v[b_i].f1[3];
          XJ[22] = v[b_i].f1[2];
          XJ[28] = 0.0;
          XJ[34] = -v[b_i].f1[0];
          XJ[5] = -v[b_i].f1[4];
          XJ[11] = v[b_i].f1[3];
          XJ[17] = 0.0;
          XJ[23] = -v[b_i].f1[1];
          XJ[29] = v[b_i].f1[0];
          XJ[35] = 0.0;
          b_dvdx = davpdx.size(1) - 1;
          if (b_i > davpdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, davpdx.size(1) - 1,
                                          &dg_emlrtBCI, (emlrtCTX)sp);
          }
          i1 = davpdx[b_i].f1.size(1);
          loop_ub = static_cast<int32_T>((k + static_cast<uint32_T>(N)) + 1U);
          if ((loop_ub < 1) || (loop_ub > i1)) {
            emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &v_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            d = 0.0;
            for (i6 = 0; i6 < 6; i6++) {
              d += XJ[i1 + 6 * i6] * S[i6 + 6 * b_i];
            }
            if (b_i > b_dvdx) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &kj_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            davpdx[b_i].f1[i1 + 6 * (loop_ub - 1)] =
                (b_Xup[i1] + b_dXupdq[i1]) + d;
          }
        } else {
          d = parent[b_i];
          if (d != i2) {
            emlrtIntegerCheckR2012b(d, &k_emlrtDCI, (emlrtCTX)sp);
          }
          if (i4 > davpdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(i4, 0, davpdx.size(1) - 1,
                                          &lf_emlrtBCI, (emlrtCTX)sp);
          }
          if (b_i > Xup.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, Xup.size(1) - 1, &pf_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          i1 = davpdx[static_cast<int32_T>(d) - 1].f1.size(1);
          if (k + 1 > i1) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &w_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (k + 1 > dcrmvdq.size(2)) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, dcrmvdq.size(2),
                                          &x_emlrtBCI, (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            b_S = 0.0;
            d1 = 0.0;
            for (i6 = 0; i6 < 6; i6++) {
              b_S += Xup[b_i].f1[i1 + 6 * i6] * davpdx[i4].f1[i6 + 6 * k];
              d1 += dcrmvdq[(i1 + 6 * i6) + 36 * k] * vJ[i6];
            }
            b_dXupdq[i1] = d1;
            b_Xup[i1] = b_S;
          }
          b_dvdx = davpdx.size(1) - 1;
          if (b_i > davpdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, davpdx.size(1) - 1,
                                          &of_emlrtBCI, (emlrtCTX)sp);
          }
          i1 = davpdx[b_i].f1.size(1);
          if (k + 1 > i1) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &y_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            if (b_i > b_dvdx) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &ri_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            davpdx[b_i].f1[i1 + 6 * k] = b_Xup[i1] + b_dXupdq[i1];
          }
          if (static_cast<int32_T>(d) != i2) {
            emlrtIntegerCheckR2012b(d, &l_emlrtDCI, (emlrtCTX)sp);
          }
          if (i4 > davpdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(i4, 0, davpdx.size(1) - 1,
                                          &wf_emlrtBCI, (emlrtCTX)sp);
          }
          if (b_i > Xup.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, Xup.size(1) - 1, &cg_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          i1 = davpdx[static_cast<int32_T>(d) - 1].f1.size(1);
          loop_ub = static_cast<int32_T>((k + unnamed_idx_1) + 1U);
          if ((loop_ub < 1) || (loop_ub > i1)) {
            emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &ab_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            b_b[i1] = davpdx[i4].f1[i1 + 6 * (loop_ub - 1)];
          }
          if (k + 1 > dcrmvdqd.size(2)) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, dcrmvdqd.size(2),
                                          &bb_emlrtBCI, (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            d = 0.0;
            b_S = 0.0;
            for (i6 = 0; i6 < 6; i6++) {
              d += Xup[b_i].f1[i1 + 6 * i6] * b_b[i6];
              b_S += dcrmvdqd[(i1 + 6 * i6) + 36 * k] * vJ[i6];
            }
            b_dXupdq[i1] = b_S;
            b_Xup[i1] = d;
          }
          b_dvdx = davpdx.size(1) - 1;
          if (b_i > davpdx.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, davpdx.size(1) - 1,
                                          &bg_emlrtBCI, (emlrtCTX)sp);
          }
          i1 = davpdx[b_i].f1.size(1);
          if (loop_ub > i1) {
            emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &cb_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            if (b_i > b_dvdx) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &aj_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            davpdx[b_i].f1[i1 + 6 * (loop_ub - 1)] = b_Xup[i1] + b_dXupdq[i1];
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }
    }
    if (b_i > avp.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, avp.size(1) - 1, &fd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (b_i > v.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, v.size(1) - 1, &gd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    //  crf  spatial/planar cross-product operator (force).
    //  crf(v)  calculates the 6x6 (or 3x3) matrix such that the expression
    //  crf(v)*f is the cross product of the motion vector v with the force
    //  vector f.  If length(v)==6 then it is taken to be a spatial vector, and
    //  the return value is a 6x6 matrix.  Otherwise, v is taken to be a planar
    //  vector, and the return value is 3x3.
    //  crm  spatial/planar cross-product operator (motion).
    //  crm(v)  calculates the 6x6 (or 3x3) matrix such that the expression
    //  crm(v)*m is the cross product of the motion vectors v and m.  If
    //  length(v)==6 then it is taken to be a spatial vector, and the return
    //  value is a 6x6 matrix.  Otherwise, v is taken to be a planar vector, and
    //  the return value is 3x3.
    if (b_i > v.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, v.size(1) - 1, &hd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    XJ[0] = -0.0;
    XJ[1] = v[b_i].f1[2];
    XJ[2] = -v[b_i].f1[1];
    XJ[3] = -0.0;
    XJ[4] = -0.0;
    XJ[5] = -0.0;
    XJ[6] = -v[b_i].f1[2];
    XJ[7] = -0.0;
    XJ[8] = v[b_i].f1[0];
    XJ[9] = -0.0;
    XJ[10] = -0.0;
    XJ[11] = -0.0;
    XJ[12] = v[b_i].f1[1];
    XJ[13] = -v[b_i].f1[0];
    XJ[14] = -0.0;
    XJ[15] = -0.0;
    XJ[16] = -0.0;
    XJ[17] = -0.0;
    XJ[18] = -0.0;
    XJ[19] = v[b_i].f1[5];
    XJ[20] = -v[b_i].f1[4];
    XJ[21] = -0.0;
    XJ[22] = v[b_i].f1[2];
    XJ[23] = -v[b_i].f1[1];
    XJ[24] = -v[b_i].f1[5];
    XJ[25] = -0.0;
    XJ[26] = v[b_i].f1[3];
    XJ[27] = -v[b_i].f1[2];
    XJ[28] = -0.0;
    XJ[29] = v[b_i].f1[0];
    XJ[30] = v[b_i].f1[4];
    XJ[31] = -v[b_i].f1[3];
    XJ[32] = -0.0;
    XJ[33] = v[b_i].f1[1];
    XJ[34] = -v[b_i].f1[0];
    XJ[35] = -0.0;
    for (i1 = 0; i1 < 6; i1++) {
      b_Xup[i1] = 0.0;
      b_dXupdq[i1] = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        d = 0.0;
        for (i4 = 0; i4 < 6; i4++) {
          d += XJ[i1 + 6 * i4] * b_I[b_i].f1[i4 + 6 * i2];
        }
        b_Xup[i1] += b_I[b_i].f1[i1 + 6 * i2] * avp[b_i].f1[i2];
        b_dXupdq[i1] += d * v[b_i].f1[i2];
      }
    }
    b_dvdx = fvp.size(1) - 1;
    for (i1 = 0; i1 < 6; i1++) {
      if (b_i > b_dvdx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dvdx, &li_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      fvp[b_i].f1[i1] = b_Xup[i1] + b_dXupdq[i1];
    }
    if (b_i > dvdx.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, dvdx.size(1) - 1, &jd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (1.0 > N) {
      loop_ub = 0;
    } else {
      i1 = dvdx[b_i].f1.size(1);
      if (1 > i1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i1, &db_emlrtBCI, (emlrtCTX)sp);
      }
      i1 = dvdx[b_i].f1.size(1);
      if (unnamed_idx_1_tmp_tmp > i1) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(N), 1, i1,
                                      &eb_emlrtBCI, (emlrtCTX)sp);
      }
      loop_ub = static_cast<int32_T>(N);
    }
    if (b_i > dvdx.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, dvdx.size(1) - 1, &fe_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    unnamed_idx_1 = static_cast<uint32_T>(N) << 1;
    if (static_cast<uint32_T>(N) + 1U > unnamed_idx_1) {
      i1 = 0;
      i2 = 0;
    } else {
      i1 = dvdx[b_i].f1.size(1);
      i2 = static_cast<int32_T>(static_cast<uint32_T>(N) + 1U);
      if ((i2 < 1) || (i2 > i1)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(N) + 1U), 1, i1,
            &fb_emlrtBCI, (emlrtCTX)sp);
      }
      i1 = unnamed_idx_1_tmp_tmp;
      i2 = dvdx[b_i].f1.size(1);
      if ((static_cast<int32_T>(unnamed_idx_1) < 1) ||
          (static_cast<int32_T>(unnamed_idx_1) > i2)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(unnamed_idx_1), 1,
                                      i2, &gb_emlrtBCI, (emlrtCTX)sp);
      }
      i2 = static_cast<int32_T>(unnamed_idx_1);
    }
    if (b_i > v.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, v.size(1) - 1, &df_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    dfhdq.set_size(&fb_emlrtRTEI, sp, 6, loop_ub);
    for (i4 = 0; i4 < loop_ub; i4++) {
      for (i6 = 0; i6 < 6; i6++) {
        dfhdq[i6 + 6 * i4] = dvdx[b_i].f1[i6 + 6 * i4];
      }
    }
    loop_ub = i2 - i1;
    c_dvdx.set_size(&gb_emlrtRTEI, sp, 6, loop_ub);
    for (i2 = 0; i2 < loop_ub; i2++) {
      for (i4 = 0; i4 < 6; i4++) {
        c_dvdx[i4 + 6 * i2] = dvdx[b_i].f1[i4 + 6 * (i1 + i2)];
      }
    }
    st.site = &d_emlrtRSI;
    d_crf(&st, dfhdq, c_dvdx, N, dcrmvdq, dcrmvdqd);
    for (k = 0; k < unnamed_idx_1_tmp_tmp; k++) {
      if (b_i > davpdx.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, davpdx.size(1) - 1, &kf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (b_i > dvdx.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, dvdx.size(1) - 1, &nf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i1 = davpdx[b_i].f1.size(1);
      if (k + 1 > i1) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &hb_emlrtBCI, (emlrtCTX)sp);
      }
      if (k + 1 > dcrmvdq.size(2)) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, dcrmvdq.size(2), &ib_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (b_i > v.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, v.size(1) - 1, &vf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      //  crf  spatial/planar cross-product operator (force).
      //  crf(v)  calculates the 6x6 (or 3x3) matrix such that the expression
      //  crf(v)*f is the cross product of the motion vector v with the force
      //  vector f.  If length(v)==6 then it is taken to be a spatial vector,
      //  and the return value is a 6x6 matrix.  Otherwise, v is taken to be a
      //  planar vector, and the return value is 3x3. crm  spatial/planar
      //  cross-product operator (motion). crm(v)  calculates the 6x6 (or 3x3)
      //  matrix such that the expression crm(v)*m is the cross product of the
      //  motion vectors v and m.  If length(v)==6 then it is taken to be a
      //  spatial vector, and the return value is a 6x6 matrix.  Otherwise, v is
      //  taken to be a planar vector, and the return value is 3x3.
      i1 = dvdx[b_i].f1.size(1);
      if (k + 1 > i1) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &jb_emlrtBCI, (emlrtCTX)sp);
      }
      XJ[0] = -0.0;
      XJ[1] = v[b_i].f1[2];
      XJ[2] = -v[b_i].f1[1];
      XJ[3] = -0.0;
      XJ[4] = -0.0;
      XJ[5] = -0.0;
      XJ[6] = -v[b_i].f1[2];
      XJ[7] = -0.0;
      XJ[8] = v[b_i].f1[0];
      XJ[9] = -0.0;
      XJ[10] = -0.0;
      XJ[11] = -0.0;
      XJ[12] = v[b_i].f1[1];
      XJ[13] = -v[b_i].f1[0];
      XJ[14] = -0.0;
      XJ[15] = -0.0;
      XJ[16] = -0.0;
      XJ[17] = -0.0;
      XJ[18] = -0.0;
      XJ[19] = v[b_i].f1[5];
      XJ[20] = -v[b_i].f1[4];
      XJ[21] = -0.0;
      XJ[22] = v[b_i].f1[2];
      XJ[23] = -v[b_i].f1[1];
      XJ[24] = -v[b_i].f1[5];
      XJ[25] = -0.0;
      XJ[26] = v[b_i].f1[3];
      XJ[27] = -v[b_i].f1[2];
      XJ[28] = -0.0;
      XJ[29] = v[b_i].f1[0];
      XJ[30] = v[b_i].f1[4];
      XJ[31] = -v[b_i].f1[3];
      XJ[32] = -0.0;
      XJ[33] = v[b_i].f1[1];
      XJ[34] = -v[b_i].f1[0];
      XJ[35] = -0.0;
      for (i1 = 0; i1 < 6; i1++) {
        b_Xup[i1] = 0.0;
        b_dXupdq[i1] = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          d = 0.0;
          b_dvdx = i1 + 6 * i2;
          b_Xup[i1] += b_I[b_i].f1[b_dvdx] * davpdx[b_i].f1[i2 + 6 * k];
          b_S = 0.0;
          for (i4 = 0; i4 < 6; i4++) {
            d1 = b_I[b_i].f1[i4 + 6 * i2];
            d += dcrmvdq[(i1 + 6 * i4) + 36 * k] * d1;
            b_S += XJ[i1 + 6 * i4] * d1;
          }
          b_dXupdq[i1] += d * v[b_i].f1[i2];
          dXJdq[b_dvdx] = b_S;
        }
      }
      i1 = dfvpdx.size(1);
      if (b_i > dfvpdx.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, dfvpdx.size(1) - 1, &uf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = dfvpdx[b_i].f1.size(1);
      if (k + 1 > i2) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i2, &kb_emlrtBCI, (emlrtCTX)sp);
      }
      for (i2 = 0; i2 < 6; i2++) {
        d = 0.0;
        for (i4 = 0; i4 < 6; i4++) {
          d += dXJdq[i2 + 6 * i4] * dvdx[b_i].f1[i4 + 6 * k];
        }
        if (b_i > i1 - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i1 - 1, &lj_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        dfvpdx[b_i].f1[i2 + 6 * k] = (b_Xup[i2] + b_dXupdq[i2]) + d;
      }
      if (b_i > davpdx.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, davpdx.size(1) - 1, &yf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (b_i > dvdx.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, dvdx.size(1) - 1, &ag_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i1 = davpdx[b_i].f1.size(1);
      loop_ub = static_cast<int32_T>((k + static_cast<uint32_T>(N)) + 1U);
      if ((loop_ub < 1) || (loop_ub > i1)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &lb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      for (i1 = 0; i1 < 6; i1++) {
        b_b[i1] = davpdx[b_i].f1[i1 + 6 * (loop_ub - 1)];
      }
      if (k + 1 > dcrmvdqd.size(2)) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, dcrmvdqd.size(2), &mb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (b_i > v.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, v.size(1) - 1, &hg_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      //  crf  spatial/planar cross-product operator (force).
      //  crf(v)  calculates the 6x6 (or 3x3) matrix such that the expression
      //  crf(v)*f is the cross product of the motion vector v with the force
      //  vector f.  If length(v)==6 then it is taken to be a spatial vector,
      //  and the return value is a 6x6 matrix.  Otherwise, v is taken to be a
      //  planar vector, and the return value is 3x3. crm  spatial/planar
      //  cross-product operator (motion). crm(v)  calculates the 6x6 (or 3x3)
      //  matrix such that the expression crm(v)*m is the cross product of the
      //  motion vectors v and m.  If length(v)==6 then it is taken to be a
      //  spatial vector, and the return value is a 6x6 matrix.  Otherwise, v is
      //  taken to be a planar vector, and the return value is 3x3.
      i1 = dvdx[b_i].f1.size(1);
      if (loop_ub > i1) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &nb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      XJ[0] = -0.0;
      XJ[1] = v[b_i].f1[2];
      XJ[2] = -v[b_i].f1[1];
      XJ[3] = -0.0;
      XJ[4] = -0.0;
      XJ[5] = -0.0;
      XJ[6] = -v[b_i].f1[2];
      XJ[7] = -0.0;
      XJ[8] = v[b_i].f1[0];
      XJ[9] = -0.0;
      XJ[10] = -0.0;
      XJ[11] = -0.0;
      XJ[12] = v[b_i].f1[1];
      XJ[13] = -v[b_i].f1[0];
      XJ[14] = -0.0;
      XJ[15] = -0.0;
      XJ[16] = -0.0;
      XJ[17] = -0.0;
      XJ[18] = -0.0;
      XJ[19] = v[b_i].f1[5];
      XJ[20] = -v[b_i].f1[4];
      XJ[21] = -0.0;
      XJ[22] = v[b_i].f1[2];
      XJ[23] = -v[b_i].f1[1];
      XJ[24] = -v[b_i].f1[5];
      XJ[25] = -0.0;
      XJ[26] = v[b_i].f1[3];
      XJ[27] = -v[b_i].f1[2];
      XJ[28] = -0.0;
      XJ[29] = v[b_i].f1[0];
      XJ[30] = v[b_i].f1[4];
      XJ[31] = -v[b_i].f1[3];
      XJ[32] = -0.0;
      XJ[33] = v[b_i].f1[1];
      XJ[34] = -v[b_i].f1[0];
      XJ[35] = -0.0;
      for (i1 = 0; i1 < 6; i1++) {
        vJ[i1] = dvdx[b_i].f1[i1 + 6 * (loop_ub - 1)];
        b_Xup[i1] = 0.0;
        b_dXupdq[i1] = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          d = 0.0;
          b_dvdx = i1 + 6 * i2;
          b_Xup[i1] += b_I[b_i].f1[b_dvdx] * b_b[i2];
          b_S = 0.0;
          for (i4 = 0; i4 < 6; i4++) {
            d1 = b_I[b_i].f1[i4 + 6 * i2];
            d += dcrmvdqd[(i1 + 6 * i4) + 36 * k] * d1;
            b_S += XJ[i1 + 6 * i4] * d1;
          }
          b_dXupdq[i1] += d * v[b_i].f1[i2];
          dXJdq[b_dvdx] = b_S;
        }
      }
      i1 = dfvpdx.size(1);
      if (b_i > dfvpdx.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, dfvpdx.size(1) - 1, &gg_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = dfvpdx[b_i].f1.size(1);
      if (loop_ub > i2) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i2, &ob_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      for (i2 = 0; i2 < 6; i2++) {
        d = 0.0;
        for (i4 = 0; i4 < 6; i4++) {
          d += dXJdq[i2 + 6 * i4] * vJ[i4];
        }
        if (b_i > i1 - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i1 - 1, &mj_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        dfvpdx[b_i].f1[i2 + 6 * (loop_ub - 1)] = (b_Xup[i2] + b_dXupdq[i2]) + d;
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  if (unnamed_idx_1_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(N, &gb_emlrtDCI, (emlrtCTX)sp);
  }
  C.set_size(&hb_emlrtRTEI, sp, unnamed_idx_1_tmp_tmp);
  for (i1 = 0; i1 < unnamed_idx_1_tmp_tmp; i1++) {
    C[i1] = 0.0;
  }
  if (unnamed_idx_1_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(N, &hb_emlrtDCI, (emlrtCTX)sp);
  }
  unnamed_idx_1 = 2U * static_cast<uint32_T>(N);
  if (static_cast<real_T>(unnamed_idx_1) !=
      static_cast<int32_T>(unnamed_idx_1)) {
    emlrtIntegerCheckR2012b(static_cast<real_T>(unnamed_idx_1), &hb_emlrtDCI,
                            (emlrtCTX)sp);
  }
  dCdx.set_size(&ib_emlrtRTEI, sp, unnamed_idx_1_tmp_tmp,
                static_cast<int32_T>(unnamed_idx_1));
  loop_ub = unnamed_idx_1_tmp_tmp * static_cast<int32_T>(unnamed_idx_1);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dCdx[i1] = 0.0;
  }
  emlrtForLoopVectorCheckR2021a(N, -1.0, 1.0, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &k_emlrtRTEI,
                                (emlrtCTX)sp);
  if (0.0 <= -((-1.0 - N) + 1.0) - 1.0) {
    iv[0] = 1;
  }
  for (b_i = 0; b_i < unnamed_idx_1_tmp_tmp; b_i++) {
    c_i = unnamed_idx_1_tmp_tmp - b_i;
    if ((c_i < 1) || (c_i > S.size(1))) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, S.size(1), &pb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((c_i - 1 < 0) || (c_i - 1 > fvp.size(1) - 1)) {
      emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, fvp.size(1) - 1, &uc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_S = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      b_S += S[i1 + 6 * (c_i - 1)] * fvp[c_i - 1].f1[i1];
    }
    if ((c_i < 1) || (c_i > C.size(0))) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, C.size(0), &nh_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    C[c_i - 1] = b_S;
    if ((c_i < 1) || (c_i > S.size(1))) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, S.size(1), &qb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((c_i < 1) || (c_i > dCdx.size(0))) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, dCdx.size(0), &tc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &e_emlrtRSI;
    if ((c_i - 1 < 0) || (c_i - 1 > dfvpdx.size(1) - 1)) {
      emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, dfvpdx.size(1) - 1,
                                    &ad_emlrtBCI, &st);
    }
    for (int32_T i5{0}; i5 < 6; i5++) {
      vJ[i5] = (*(real_T(*)[6]) & S[6 * (c_i - 1)])[i5];
    }
    b_st.site = &j_emlrtRSI;
    coder::internal::blas::mtimes(&b_st, vJ, dfvpdx[c_i - 1].f1, r);
    iv[1] = dCdx.size(1);
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r.size(), 2, &emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = r.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      dCdx[(c_i + dCdx.size(0) * i1) - 1] = r[i1];
    }
    if ((c_i < 1) || (c_i > 34)) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, 34, &rh_emlrtBCI, (emlrtCTX)sp);
    }
    d = parent[c_i - 1];
    if (d != 0.0) {
      if ((c_i - 1 < 0) || (c_i - 1 > Xup.size(1) - 1)) {
        emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, Xup.size(1) - 1, &kd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i1 = fvp.size(1);
      if ((c_i - 1 < 0) || (c_i - 1 > fvp.size(1) - 1)) {
        emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, fvp.size(1) - 1, &nd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = static_cast<int32_T>(parent[c_i - 1]) - 1;
      for (i4 = 0; i4 < 6; i4++) {
        b_S = 0.0;
        for (i6 = 0; i6 < 6; i6++) {
          b_S += Xup[c_i - 1].f1[i6 + 6 * i4] * fvp[c_i - 1].f1[i6];
        }
        if (d != static_cast<int32_T>(muDoubleScalarFloor(parent[c_i - 1]))) {
          emlrtIntegerCheckR2012b(parent[c_i - 1], &nb_emlrtDCI, (emlrtCTX)sp);
        }
        if ((i2 < 0) || (i2 > i1 - 1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 0, i1 - 1, &vh_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        b_dXupdq[i4] = fvp[i2].f1[i4] + b_S;
      }
      i2 = static_cast<int32_T>(parent[c_i - 1]) - 1;
      for (i4 = 0; i4 < 6; i4++) {
        if (d != static_cast<int32_T>(muDoubleScalarFloor(parent[c_i - 1]))) {
          emlrtIntegerCheckR2012b(parent[c_i - 1], &ob_emlrtDCI, (emlrtCTX)sp);
        }
        if ((i2 < 0) || (i2 > i1 - 1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 0, i1 - 1, &wh_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        fvp[i2].f1[i4] = b_dXupdq[i4];
      }
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                    static_cast<int32_T>(N), &l_emlrtRTEI,
                                    (emlrtCTX)sp);
      for (k = 0; k < unnamed_idx_1_tmp_tmp; k++) {
        if (static_cast<uint32_T>(c_i) == k + 1U) {
          i1 = static_cast<int32_T>(muDoubleScalarFloor(parent[c_i - 1]));
          if (d != i1) {
            emlrtIntegerCheckR2012b(parent[c_i - 1], &m_emlrtDCI, (emlrtCTX)sp);
          }
          i2 = static_cast<int32_T>(parent[c_i - 1]) - 1;
          if ((i2 < 0) || (i2 > dfvpdx.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(i2, 0, dfvpdx.size(1) - 1,
                                          &be_emlrtBCI, (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > dXupdq.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, dXupdq.size(1) - 1,
                                          &de_emlrtBCI, (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > dfvpdx.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, dfvpdx.size(1) - 1,
                                          &ie_emlrtBCI, (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > Xup.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, Xup.size(1) - 1,
                                          &je_emlrtBCI, (emlrtCTX)sp);
          }
          if (static_cast<int32_T>(d) != i1) {
            emlrtIntegerCheckR2012b(parent[c_i - 1], &n_emlrtDCI, (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > fvp.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, fvp.size(1) - 1,
                                          &ne_emlrtBCI, (emlrtCTX)sp);
          }
          i1 = dfvpdx[c_i - 1].f1.size(1);
          if (k + 1 > i1) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &sb_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          i1 = dfvpdx[static_cast<int32_T>(parent[c_i - 1]) - 1].f1.size(1);
          if (static_cast<int32_T>(k + 1U) > i1) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1, i1,
                                          &rb_emlrtBCI, (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            b_S = 0.0;
            d1 = 0.0;
            for (i2 = 0; i2 < 6; i2++) {
              i4 = i2 + 6 * i1;
              b_S += dXupdq[c_i - 1].f1[i4] * fvp[c_i - 1].f1[i2];
              d1 += Xup[c_i - 1].f1[i4] * dfvpdx[c_i - 1].f1[i2 + 6 * k];
            }
            b_Xup[i1] = d1;
            b_dXupdq[i1] = dfvpdx[static_cast<int32_T>(parent[c_i - 1]) - 1]
                               .f1[i1 + 6 * k] +
                           b_S;
          }
          b_dvdx = dfvpdx.size(1) - 1;
          i1 = static_cast<int32_T>(parent[c_i - 1]) - 1;
          if ((i1 < 0) || (i1 > dfvpdx.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(i1, 0, dfvpdx.size(1) - 1,
                                          &me_emlrtBCI, (emlrtCTX)sp);
          }
          i1 = dfvpdx[static_cast<int32_T>(parent[c_i - 1]) - 1].f1.size(1);
          if (static_cast<int32_T>(k + 1U) > i1) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1, i1,
                                          &tb_emlrtBCI, (emlrtCTX)sp);
          }
          i1 = static_cast<int32_T>(parent[c_i - 1]) - 1;
          for (i2 = 0; i2 < 6; i2++) {
            if ((i1 < 0) || (i1 > b_dvdx)) {
              emlrtDynamicBoundsCheckR2012b(i1, 0, b_dvdx, &hi_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            dfvpdx[i1].f1[i2 + 6 * k] = b_dXupdq[i2] + b_Xup[i2];
          }
        } else {
          i1 = static_cast<int32_T>(muDoubleScalarFloor(parent[c_i - 1]));
          if (d != i1) {
            emlrtIntegerCheckR2012b(parent[c_i - 1], &o_emlrtDCI, (emlrtCTX)sp);
          }
          i2 = static_cast<int32_T>(parent[c_i - 1]) - 1;
          if ((i2 < 0) || (i2 > dfvpdx.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(i2, 0, dfvpdx.size(1) - 1,
                                          &ae_emlrtBCI, (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > dfvpdx.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, dfvpdx.size(1) - 1,
                                          &ce_emlrtBCI, (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > Xup.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, Xup.size(1) - 1,
                                          &he_emlrtBCI, (emlrtCTX)sp);
          }
          if (static_cast<int32_T>(d) != i1) {
            emlrtIntegerCheckR2012b(parent[c_i - 1], &p_emlrtDCI, (emlrtCTX)sp);
          }
          i1 = dfvpdx[c_i - 1].f1.size(1);
          if (k + 1 > i1) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &vb_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          i1 = dfvpdx[static_cast<int32_T>(parent[c_i - 1]) - 1].f1.size(1);
          if (static_cast<int32_T>(k + 1U) > i1) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1, i1,
                                          &ub_emlrtBCI, (emlrtCTX)sp);
          }
          b_dvdx = dfvpdx.size(1) - 1;
          i1 = static_cast<int32_T>(parent[c_i - 1]) - 1;
          if ((i1 < 0) || (i1 > dfvpdx.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(i1, 0, dfvpdx.size(1) - 1,
                                          &ke_emlrtBCI, (emlrtCTX)sp);
          }
          i1 = dfvpdx[static_cast<int32_T>(parent[c_i - 1]) - 1].f1.size(1);
          if (static_cast<int32_T>(k + 1U) > i1) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1, i1,
                                          &wb_emlrtBCI, (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            b_S = 0.0;
            for (i2 = 0; i2 < 6; i2++) {
              b_S +=
                  Xup[c_i - 1].f1[i2 + 6 * i1] * dfvpdx[c_i - 1].f1[i2 + 6 * k];
            }
            b_dXupdq[i1] = dfvpdx[static_cast<int32_T>(parent[c_i - 1]) - 1]
                               .f1[i1 + 6 * k] +
                           b_S;
          }
          i1 = static_cast<int32_T>(parent[c_i - 1]) - 1;
          for (i2 = 0; i2 < 6; i2++) {
            if ((i1 < 0) || (i1 > b_dvdx)) {
              emlrtDynamicBoundsCheckR2012b(i1, 0, b_dvdx, &fi_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            dfvpdx[i1].f1[i2 + 6 * k] = b_dXupdq[i2];
          }
        }
        i1 = static_cast<int32_T>(muDoubleScalarFloor(parent[c_i - 1]));
        i2 = static_cast<int32_T>(d);
        if (i2 != i1) {
          emlrtIntegerCheckR2012b(parent[c_i - 1], &q_emlrtDCI, (emlrtCTX)sp);
        }
        i4 = static_cast<int32_T>(parent[c_i - 1]) - 1;
        if ((i4 < 0) || (i4 > dfvpdx.size(1) - 1)) {
          emlrtDynamicBoundsCheckR2012b(i4, 0, dfvpdx.size(1) - 1, &le_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if ((c_i - 1 < 0) || (c_i - 1 > dfvpdx.size(1) - 1)) {
          emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, dfvpdx.size(1) - 1,
                                        &oe_emlrtBCI, (emlrtCTX)sp);
        }
        if ((c_i - 1 < 0) || (c_i - 1 > Xup.size(1) - 1)) {
          emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, Xup.size(1) - 1,
                                        &qe_emlrtBCI, (emlrtCTX)sp);
        }
        if (i2 != i1) {
          emlrtIntegerCheckR2012b(parent[c_i - 1], &r_emlrtDCI, (emlrtCTX)sp);
        }
        i1 = dfvpdx[c_i - 1].f1.size(1);
        loop_ub = (k + unnamed_idx_1_tmp_tmp) + 1;
        if ((loop_ub < 1) || (loop_ub > i1)) {
          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &yb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        for (i1 = 0; i1 < 6; i1++) {
          b_b[i1] = dfvpdx[c_i - 1].f1[i1 + 6 * (loop_ub - 1)];
        }
        i1 = dfvpdx[static_cast<int32_T>(parent[c_i - 1]) - 1].f1.size(1);
        if (loop_ub > i1) {
          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &xb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        b_dvdx = dfvpdx.size(1) - 1;
        i1 = static_cast<int32_T>(parent[c_i - 1]) - 1;
        if ((i1 < 0) || (i1 > dfvpdx.size(1) - 1)) {
          emlrtDynamicBoundsCheckR2012b(i1, 0, dfvpdx.size(1) - 1, &ve_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i1 = dfvpdx[static_cast<int32_T>(parent[c_i - 1]) - 1].f1.size(1);
        if (loop_ub > i1) {
          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &ac_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        for (i1 = 0; i1 < 6; i1++) {
          b_S = 0.0;
          for (i2 = 0; i2 < 6; i2++) {
            b_S += Xup[c_i - 1].f1[i2 + 6 * i1] * b_b[i2];
          }
          b_dXupdq[i1] = dfvpdx[static_cast<int32_T>(parent[c_i - 1]) - 1]
                             .f1[i1 + 6 * (loop_ub - 1)] +
                         b_S;
        }
        i1 = static_cast<int32_T>(parent[c_i - 1]) - 1;
        for (i2 = 0; i2 < 6; i2++) {
          if ((i1 < 0) || (i1 > b_dvdx)) {
            emlrtDynamicBoundsCheckR2012b(i1, 0, b_dvdx, &mi_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          dfvpdx[i1].f1[i2 + 6 * (loop_ub - 1)] = b_dXupdq[i2];
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  std::copy(&b_I[0], &b_I[34], &IC[0]);
  //  composite inertia calculation
  dICdq.set_size(&x_emlrtRTEI, sp, 1, unnamed_idx_1_tmp_tmp);
  for (i1 = 0; i1 < unnamed_idx_1_tmp_tmp; i1++) {
    b_dvdx = dICdq.size(1) - 1;
    if (i1 > dICdq.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, dICdq.size(1) - 1, &mh_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    dICdq[dICdq.size(0) * i1].f1.set_size(&x_emlrtRTEI, sp, 6,
                                          dICdq[dICdq.size(0) * i1].f1.size(1),
                                          dICdq[dICdq.size(0) * i1].f1.size(2));
    if (i1 > b_dvdx) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, b_dvdx, &mh_emlrtBCI, (emlrtCTX)sp);
    }
    dICdq[dICdq.size(0) * i1].f1.set_size(
        &x_emlrtRTEI, sp, dICdq[dICdq.size(0) * i1].f1.size(0), 6,
        dICdq[dICdq.size(0) * i1].f1.size(2));
    if (i1 > b_dvdx) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, b_dvdx, &mh_emlrtBCI, (emlrtCTX)sp);
    }
    dICdq[dICdq.size(0) * i1].f1.set_size(
        &x_emlrtRTEI, sp, dICdq[dICdq.size(0) * i1].f1.size(0),
        dICdq[dICdq.size(0) * i1].f1.size(1), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(N, -1.0, 1.0, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &m_emlrtRTEI,
                                (emlrtCTX)sp);
  dICdq.set_size(&y_emlrtRTEI, sp, 1, unnamed_idx_1_tmp_tmp);
  for (b_i = 0; b_i < unnamed_idx_1_tmp_tmp; b_i++) {
    if (unnamed_idx_1_tmp_tmp != i) {
      emlrtIntegerCheckR2012b(N, &ib_emlrtDCI, (emlrtCTX)sp);
    }
    loop_ub = 36 * unnamed_idx_1_tmp_tmp - 1;
    i1 = unnamed_idx_1_tmp_tmp - b_i;
    if ((i1 - 1 < 0) || (i1 - 1 > dICdq.size(1) - 1)) {
      emlrtDynamicBoundsCheckR2012b(i1 - 1, 0, dICdq.size(1) - 1, &xg_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    dICdq[dICdq.size(0) * (i1 - 1)].f1.set_size(
        &jb_emlrtRTEI, sp, 6, dICdq[dICdq.size(0) * (i1 - 1)].f1.size(1),
        dICdq[dICdq.size(0) * (i1 - 1)].f1.size(2));
    if ((i1 - 1 < 0) || (i1 - 1 > dICdq.size(1) - 1)) {
      emlrtDynamicBoundsCheckR2012b(i1 - 1, 0, dICdq.size(1) - 1, &xg_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    dICdq[dICdq.size(0) * (i1 - 1)].f1.set_size(
        &jb_emlrtRTEI, sp, dICdq[dICdq.size(0) * (i1 - 1)].f1.size(0), 6,
        dICdq[dICdq.size(0) * (i1 - 1)].f1.size(2));
    if ((i1 - 1 < 0) || (i1 - 1 > dICdq.size(1) - 1)) {
      emlrtDynamicBoundsCheckR2012b(i1 - 1, 0, dICdq.size(1) - 1, &xg_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    dICdq[dICdq.size(0) * (i1 - 1)].f1.set_size(
        &jb_emlrtRTEI, sp, dICdq[dICdq.size(0) * (i1 - 1)].f1.size(0),
        dICdq[dICdq.size(0) * (i1 - 1)].f1.size(1), unnamed_idx_1_tmp_tmp);
    b_dvdx = dICdq.size(1) - 1;
    if ((i1 - 1 < 0) || (i1 - 1 > dICdq.size(1) - 1)) {
      emlrtDynamicBoundsCheckR2012b(i1 - 1, 0, dICdq.size(1) - 1, &xg_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((i1 - 1 < 0) || (i1 - 1 > dICdq.size(1) - 1)) {
      emlrtDynamicBoundsCheckR2012b(i1 - 1, 0, dICdq.size(1) - 1, &xg_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((i1 - 1 < 0) || (i1 - 1 > dICdq.size(1) - 1)) {
      emlrtDynamicBoundsCheckR2012b(i1 - 1, 0, dICdq.size(1) - 1, &xg_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (i2 = 0; i2 <= loop_ub; i2++) {
      if ((i1 - 1 < 0) || (i1 - 1 > b_dvdx)) {
        emlrtDynamicBoundsCheckR2012b(i1 - 1, 0, b_dvdx, &xh_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      dICdq[i1 - 1].f1[i2] = 0.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(N, -1.0, 1.0, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &n_emlrtRTEI,
                                (emlrtCTX)sp);
  for (b_i = 0; b_i < unnamed_idx_1_tmp_tmp; b_i++) {
    c_i = unnamed_idx_1_tmp_tmp - b_i;
    if ((c_i < 1) || (c_i > 34)) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, 34, &ph_emlrtBCI, (emlrtCTX)sp);
    }
    d = parent[c_i - 1];
    if (d != 0.0) {
      if ((c_i - 1 < 0) || (c_i - 1 > Xup.size(1) - 1)) {
        emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, Xup.size(1) - 1, &yd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if ((c_i - 1 < 0) || (c_i - 1 > Xup.size(1) - 1)) {
        emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, Xup.size(1) - 1, &ge_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      for (i1 = 0; i1 < 6; i1++) {
        for (i2 = 0; i2 < 6; i2++) {
          b_S = 0.0;
          for (i4 = 0; i4 < 6; i4++) {
            b_S += Xup[c_i - 1].f1[i4 + 6 * i1] * IC[c_i - 1].f1[i4 + 6 * i2];
          }
          dXJdq[i1 + 6 * i2] = b_S;
        }
      }
      i1 = static_cast<int32_T>(muDoubleScalarFloor(d));
      i2 = static_cast<int32_T>(d) - 1;
      for (i4 = 0; i4 < 6; i4++) {
        for (i6 = 0; i6 < 6; i6++) {
          b_S = 0.0;
          for (i7 = 0; i7 < 6; i7++) {
            b_S += dXJdq[i4 + 6 * i7] * Xup[c_i - 1].f1[i7 + 6 * i6];
          }
          if (d != i1) {
            emlrtIntegerCheckR2012b(parent[c_i - 1], &kb_emlrtDCI,
                                    (emlrtCTX)sp);
          }
          if ((i2 < 0.0) || (i2 > 33.0)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d) - 1, 0, 33,
                                          &sh_emlrtBCI, (emlrtCTX)sp);
          }
          if (static_cast<int32_T>(d) != i1) {
            emlrtIntegerCheckR2012b(parent[c_i - 1], &lb_emlrtDCI,
                                    (emlrtCTX)sp);
          }
          if ((i2 < 0.0) || (i2 > 33.0)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d) - 1, 0, 33,
                                          &th_emlrtBCI, (emlrtCTX)sp);
          }
          i7 = i4 + 6 * i6;
          IC[static_cast<int32_T>(d) - 1].f1[i7] = IC[i2].f1[i7] + b_S;
        }
      }
      emlrtForLoopVectorCheckR2021a(N, -1.0, 1.0, mxDOUBLE_CLASS,
                                    static_cast<int32_T>(N), &o_emlrtRTEI,
                                    (emlrtCTX)sp);
      for (loop_ub = 0; loop_ub < unnamed_idx_1_tmp_tmp; loop_ub++) {
        j = N + -static_cast<real_T>(loop_ub);
        i1 = static_cast<int32_T>(j);
        if (c_i == i1) {
          i2 = static_cast<int32_T>(muDoubleScalarFloor(parent[c_i - 1]));
          if (d != i2) {
            emlrtIntegerCheckR2012b(parent[c_i - 1], &s_emlrtDCI, (emlrtCTX)sp);
          }
          i4 = static_cast<int32_T>(parent[c_i - 1]) - 1;
          if ((i4 < 0) || (i4 > dICdq.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(i4, 0, dICdq.size(1) - 1,
                                          &se_emlrtBCI, (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > dXupdq.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, dXupdq.size(1) - 1,
                                          &ue_emlrtBCI, (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > dICdq.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, dICdq.size(1) - 1,
                                          &xe_emlrtBCI, (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > Xup.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, Xup.size(1) - 1,
                                          &ye_emlrtBCI, (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > Xup.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, Xup.size(1) - 1,
                                          &ef_emlrtBCI, (emlrtCTX)sp);
          }
          if (static_cast<int32_T>(d) != i2) {
            emlrtIntegerCheckR2012b(parent[c_i - 1], &t_emlrtDCI, (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > Xup.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, Xup.size(1) - 1,
                                          &hf_emlrtBCI, (emlrtCTX)sp);
          }
          i2 = dICdq[c_i - 1].f1.size(2);
          if ((j < 1.0) || (i1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1, i2,
                                          &cc_emlrtBCI, (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > Xup.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, Xup.size(1) - 1,
                                          &if_emlrtBCI, (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > dXupdq.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, dXupdq.size(1) - 1,
                                          &jf_emlrtBCI, (emlrtCTX)sp);
          }
          i1 = dICdq[static_cast<int32_T>(parent[c_i - 1]) - 1].f1.size(2);
          if ((j < 1.0) || (static_cast<int32_T>(j) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1, i1,
                                          &bc_emlrtBCI, (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            for (i2 = 0; i2 < 6; i2++) {
              b_S = 0.0;
              d1 = 0.0;
              for (i6 = 0; i6 < 6; i6++) {
                i7 = i6 + 6 * i1;
                b_S += dXupdq[c_i - 1].f1[i7] * IC[c_i - 1].f1[i6 + 6 * i2];
                d1 +=
                    Xup[c_i - 1].f1[i7] *
                    dICdq[c_i - 1]
                        .f1[(i6 + 6 * i2) + 36 * (static_cast<int32_T>(j) - 1)];
              }
              b_dvdx = i1 + 6 * i2;
              dXJdq[b_dvdx] = d1;
              XJ[b_dvdx] = b_S;
            }
            for (i2 = 0; i2 < 6; i2++) {
              b_S = 0.0;
              for (i6 = 0; i6 < 6; i6++) {
                b_S += XJ[i1 + 6 * i6] * Xup[c_i - 1].f1[i6 + 6 * i2];
              }
              a__1[i1 + 6 * i2] =
                  dICdq[static_cast<int32_T>(parent[c_i - 1]) - 1]
                      .f1[(i1 + 6 * i2) + 36 * (static_cast<int32_T>(j) - 1)] +
                  b_S;
            }
            for (i2 = 0; i2 < 6; i2++) {
              b_S = 0.0;
              for (i6 = 0; i6 < 6; i6++) {
                b_S += dXJdq[i1 + 6 * i6] * Xup[c_i - 1].f1[i6 + 6 * i2];
              }
              XJ[i1 + 6 * i2] = b_S;
            }
            for (i2 = 0; i2 < 6; i2++) {
              b_S = 0.0;
              for (i6 = 0; i6 < 6; i6++) {
                b_S +=
                    Xup[c_i - 1].f1[i6 + 6 * i1] * IC[c_i - 1].f1[i6 + 6 * i2];
              }
              dXJdq[i1 + 6 * i2] = b_S;
            }
          }
          b_dvdx = dICdq.size(1) - 1;
          if ((i4 < 0) || (i4 > dICdq.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(i4, 0, dICdq.size(1) - 1,
                                          &gf_emlrtBCI, (emlrtCTX)sp);
          }
          i1 = dICdq[static_cast<int32_T>(parent[c_i - 1]) - 1].f1.size(2);
          if ((j < 1.0) || (static_cast<int32_T>(j) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1, i1,
                                          &dc_emlrtBCI, (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            for (i2 = 0; i2 < 6; i2++) {
              b_S = 0.0;
              for (i6 = 0; i6 < 6; i6++) {
                b_S += dXJdq[i1 + 6 * i6] * dXupdq[c_i - 1].f1[i6 + 6 * i2];
              }
              if ((i4 < 0) || (i4 > b_dvdx)) {
                emlrtDynamicBoundsCheckR2012b(i4, 0, b_dvdx, &ii_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              i6 = i1 + 6 * i2;
              dICdq[i4].f1[(i1 + 6 * i2) + 36 * (static_cast<int32_T>(j) - 1)] =
                  (a__1[i6] + XJ[i6]) + b_S;
            }
          }
        } else {
          i2 = static_cast<int32_T>(muDoubleScalarFloor(d));
          if (d != i2) {
            emlrtIntegerCheckR2012b(parent[c_i - 1], &u_emlrtDCI, (emlrtCTX)sp);
          }
          i4 = static_cast<int32_T>(d) - 1;
          if ((static_cast<int32_T>(d) - 1 < 0) ||
              (static_cast<int32_T>(d) - 1 > dICdq.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d) - 1, 0,
                                          dICdq.size(1) - 1, &re_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > dICdq.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, dICdq.size(1) - 1,
                                          &te_emlrtBCI, (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > Xup.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, Xup.size(1) - 1,
                                          &we_emlrtBCI, (emlrtCTX)sp);
          }
          if (static_cast<int32_T>(d) != i2) {
            emlrtIntegerCheckR2012b(parent[c_i - 1], &v_emlrtDCI, (emlrtCTX)sp);
          }
          i2 = dICdq[c_i - 1].f1.size(2);
          if ((j < 1.0) || (i1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1, i2,
                                          &fc_emlrtBCI, (emlrtCTX)sp);
          }
          if ((c_i - 1 < 0) || (c_i - 1 > Xup.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, Xup.size(1) - 1,
                                          &bf_emlrtBCI, (emlrtCTX)sp);
          }
          i2 = dICdq[static_cast<int32_T>(parent[c_i - 1]) - 1].f1.size(2);
          if ((j < 1.0) || (i1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1, i2,
                                          &ec_emlrtBCI, (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            for (i2 = 0; i2 < 6; i2++) {
              b_S = 0.0;
              for (i6 = 0; i6 < 6; i6++) {
                b_S +=
                    Xup[c_i - 1].f1[i6 + 6 * i1] *
                    dICdq[c_i - 1]
                        .f1[(i6 + 6 * i2) + 36 * (static_cast<int32_T>(j) - 1)];
              }
              dXJdq[i1 + 6 * i2] = b_S;
            }
          }
          b_dvdx = dICdq.size(1) - 1;
          if ((static_cast<int32_T>(d) - 1 < 0) ||
              (static_cast<int32_T>(d) - 1 > dICdq.size(1) - 1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d) - 1, 0,
                                          dICdq.size(1) - 1, &af_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          i1 = dICdq[static_cast<int32_T>(parent[c_i - 1]) - 1].f1.size(2);
          if ((j < 1.0) || (static_cast<int32_T>(j) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1, i1,
                                          &gc_emlrtBCI, (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 6; i1++) {
            for (i2 = 0; i2 < 6; i2++) {
              b_S = 0.0;
              for (i6 = 0; i6 < 6; i6++) {
                b_S += dXJdq[i1 + 6 * i6] * Xup[c_i - 1].f1[i6 + 6 * i2];
              }
              a__1[i1 + 6 * i2] =
                  dICdq[static_cast<int32_T>(parent[c_i - 1]) - 1]
                      .f1[(i1 + 6 * i2) + 36 * (static_cast<int32_T>(j) - 1)] +
                  b_S;
            }
          }
          for (i1 = 0; i1 < 6; i1++) {
            for (i2 = 0; i2 < 6; i2++) {
              if ((static_cast<int32_T>(d) - 1 < 0) ||
                  (static_cast<int32_T>(d) - 1 > b_dvdx)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d) - 1, 0,
                                              b_dvdx, &ei_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              dICdq[i4].f1[(i2 + 6 * i1) + 36 * (static_cast<int32_T>(j) - 1)] =
                  a__1[i2 + 6 * i1];
            }
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  if (unnamed_idx_1_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(N, &jb_emlrtDCI, (emlrtCTX)sp);
  }
  H.set_size(&kb_emlrtRTEI, sp, unnamed_idx_1_tmp_tmp, unnamed_idx_1_tmp_tmp);
  b_dvdx = unnamed_idx_1_tmp_tmp * unnamed_idx_1_tmp_tmp;
  for (i1 = 0; i1 < b_dvdx; i1++) {
    H[i1] = 0.0;
  }
  if (unnamed_idx_1_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(N, &mb_emlrtDCI, (emlrtCTX)sp);
  }
  dHdq.set_size(&lb_emlrtRTEI, sp, unnamed_idx_1_tmp_tmp, unnamed_idx_1_tmp_tmp,
                unnamed_idx_1_tmp_tmp);
  loop_ub = b_dvdx * unnamed_idx_1_tmp_tmp;
  for (i1 = 0; i1 < loop_ub; i1++) {
    dHdq[i1] = 0.0;
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &p_emlrtRTEI,
                                (emlrtCTX)sp);
  for (b_i = 0; b_i < unnamed_idx_1_tmp_tmp; b_i++) {
    if (b_i > 33) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, 33, &pe_emlrtBCI, (emlrtCTX)sp);
    }
    if (b_i + 1 > S.size(1)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, S.size(1), &hc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (i1 = 0; i1 < 6; i1++) {
      d = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        d += IC[b_i].f1[i1 + 6 * i2] * S[i2 + 6 * b_i];
      }
      vJ[i1] = d;
    }
    if (unnamed_idx_1_tmp_tmp != i) {
      emlrtIntegerCheckR2012b(N, &pb_emlrtDCI, (emlrtCTX)sp);
    }
    dfhdq.set_size(&mb_emlrtRTEI, sp, 6, unnamed_idx_1_tmp_tmp);
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      dfhdq[i1] = 0.0;
    }
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(N), &q_emlrtRTEI,
                                  (emlrtCTX)sp);
    for (k = 0; k < unnamed_idx_1_tmp_tmp; k++) {
      if (b_i > dICdq.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, dICdq.size(1) - 1, &ff_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i1 = dICdq[b_i].f1.size(2);
      if (k + 1 > i1) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &ic_emlrtBCI, (emlrtCTX)sp);
      }
      if (b_i + 1 > S.size(1)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, S.size(1), &jc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (static_cast<int32_T>(k + 1U) > dfhdq.size(1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1,
                                      dfhdq.size(1), &sg_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      for (i1 = 0; i1 < 6; i1++) {
        dfhdq[i1 + 6 * k] = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          dfhdq[i1 + 6 * k] =
              dfhdq[i1 + 6 * k] +
              dICdq[b_i].f1[(i1 + 6 * i2) + 36 * k] * S[i2 + 6 * b_i];
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    if (b_i + 1 > S.size(1)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, S.size(1), &kc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_S = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      b_S += S[i1 + 6 * b_i] * vJ[i1];
    }
    if (b_i + 1 > H.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, H.size(0), &ji_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (b_i + 1 > H.size(1)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, H.size(1), &ki_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    H[b_i + H.size(0) * b_i] = b_S + transmissionInertia[b_i];
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(N), &r_emlrtRTEI,
                                  (emlrtCTX)sp);
    for (k = 0; k < unnamed_idx_1_tmp_tmp; k++) {
      if (b_i + 1 > S.size(1)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, S.size(1), &lc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (k + 1 > dfhdq.size(1)) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, dfhdq.size(1), &mc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      b_S = 0.0;
      for (i1 = 0; i1 < 6; i1++) {
        b_S += S[i1 + 6 * b_i] * dfhdq[i1 + 6 * k];
      }
      if (b_i + 1 > dHdq.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, dHdq.size(0), &oi_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (b_i + 1 > dHdq.size(1)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, dHdq.size(1), &pi_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (static_cast<int32_T>(k + 1U) > dHdq.size(2)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1,
                                      dHdq.size(2), &qi_emlrtBCI, (emlrtCTX)sp);
      }
      dHdq[(b_i + dHdq.size(0) * b_i) + dHdq.size(0) * dHdq.size(1) * k] = b_S;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    j = static_cast<real_T>(b_i) + 1.0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
      if ((static_cast<int32_T>(j) < 1) || (static_cast<int32_T>(j) > 34)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1, 34,
                                      &ni_emlrtBCI, (emlrtCTX)sp);
      }
      d = parent[static_cast<int32_T>(j) - 1];
      if (d > 0.0) {
        emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                      static_cast<int32_T>(N), &s_emlrtRTEI,
                                      (emlrtCTX)sp);
        for (k = 0; k < unnamed_idx_1_tmp_tmp; k++) {
          if (k + 1U == static_cast<uint32_T>(j)) {
            if ((static_cast<int32_T>(j) - 1 < 0) ||
                (static_cast<int32_T>(j) - 1 > dXupdq.size(1) - 1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j) - 1, 0,
                                            dXupdq.size(1) - 1, &kg_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            if ((static_cast<int32_T>(j) - 1 < 0) ||
                (static_cast<int32_T>(j) - 1 > Xup.size(1) - 1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j) - 1, 0,
                                            Xup.size(1) - 1, &lg_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            if (k + 1 > dfhdq.size(1)) {
              emlrtDynamicBoundsCheckR2012b(k + 1, 1, dfhdq.size(1),
                                            &nc_emlrtBCI, (emlrtCTX)sp);
            }
            for (i1 = 0; i1 < 6; i1++) {
              b_S = 0.0;
              d1 = 0.0;
              for (i2 = 0; i2 < 6; i2++) {
                i4 = i2 + 6 * i1;
                b_S += dXupdq[static_cast<int32_T>(j) - 1].f1[i4] * vJ[i2];
                d1 +=
                    Xup[static_cast<int32_T>(j) - 1].f1[i4] * dfhdq[i2 + 6 * k];
              }
              b_Xup[i1] = d1;
              b_dXupdq[i1] = b_S;
            }
            if (static_cast<int32_T>(k + 1U) > dfhdq.size(1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1,
                                            dfhdq.size(1), &oc_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            for (i1 = 0; i1 < 6; i1++) {
              dfhdq[i1 + 6 * k] = b_dXupdq[i1] + b_Xup[i1];
            }
          } else {
            if ((static_cast<int32_T>(j) - 1 < 0) ||
                (static_cast<int32_T>(j) - 1 > Xup.size(1) - 1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j) - 1, 0,
                                            Xup.size(1) - 1, &jg_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            if (k + 1 > dfhdq.size(1)) {
              emlrtDynamicBoundsCheckR2012b(k + 1, 1, dfhdq.size(1),
                                            &pc_emlrtBCI, (emlrtCTX)sp);
            }
            if (static_cast<int32_T>(k + 1U) > dfhdq.size(1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1,
                                            dfhdq.size(1), &tg_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            for (i1 = 0; i1 < 6; i1++) {
              b_S = 0.0;
              for (i2 = 0; i2 < 6; i2++) {
                b_S += Xup[static_cast<int32_T>(j) - 1].f1[i2 + 6 * i1] *
                       dfhdq[i2 + 6 * k];
              }
              b_Xup[i1] = b_S;
            }
            for (i1 = 0; i1 < 6; i1++) {
              dfhdq[i1 + 6 * k] = b_Xup[i1];
            }
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
        if ((static_cast<int32_T>(j) - 1 < 0) ||
            (static_cast<int32_T>(j) - 1 > Xup.size(1) - 1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j) - 1, 0,
                                        Xup.size(1) - 1, &ig_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        for (i1 = 0; i1 < 6; i1++) {
          b_S = 0.0;
          for (i2 = 0; i2 < 6; i2++) {
            b_S += Xup[static_cast<int32_T>(j) - 1].f1[i2 + 6 * i1] * vJ[i2];
          }
          b_Xup[i1] = b_S;
        }
        for (i1 = 0; i1 < 6; i1++) {
          vJ[i1] = b_Xup[i1];
        }
        j = d;
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &w_emlrtDCI, (emlrtCTX)sp);
        }
        if ((static_cast<int32_T>(d) < 1) ||
            (static_cast<int32_T>(d) > S.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, S.size(1),
                                        &qc_emlrtBCI, (emlrtCTX)sp);
        }
        b_S = 0.0;
        for (i1 = 0; i1 < 6; i1++) {
          b_S += S[i1 + 6 * (static_cast<int32_T>(d) - 1)] * vJ[i1];
        }
        if (b_i + 1 > H.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, H.size(0), &ti_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if ((static_cast<int32_T>(d) < 1) ||
            (static_cast<int32_T>(d) > H.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, H.size(1),
                                        &ui_emlrtBCI, (emlrtCTX)sp);
        }
        H[b_i + H.size(0) * (static_cast<int32_T>(d) - 1)] = b_S;
        if (b_i + 1 > H.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, H.size(0), &vi_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if ((static_cast<int32_T>(d) < 1) ||
            (static_cast<int32_T>(d) > H.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, H.size(1),
                                        &wi_emlrtBCI, (emlrtCTX)sp);
        }
        if ((static_cast<int32_T>(d) < 1) ||
            (static_cast<int32_T>(d) > H.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, H.size(0),
                                        &xi_emlrtBCI, (emlrtCTX)sp);
        }
        if (b_i + 1 > H.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, H.size(1), &yi_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        H[(static_cast<int32_T>(d) + H.size(0) * b_i) - 1] =
            H[b_i + H.size(0) * (static_cast<int32_T>(d) - 1)];
        emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                      static_cast<int32_T>(N), &t_emlrtRTEI,
                                      (emlrtCTX)sp);
        for (k = 0; k < unnamed_idx_1_tmp_tmp; k++) {
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > S.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, S.size(1),
                                          &rc_emlrtBCI, (emlrtCTX)sp);
          }
          if (k + 1 > dfhdq.size(1)) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, dfhdq.size(1), &sc_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          b_S = 0.0;
          for (i1 = 0; i1 < 6; i1++) {
            b_S +=
                S[i1 + 6 * (static_cast<int32_T>(d) - 1)] * dfhdq[i1 + 6 * k];
          }
          if (b_i + 1 > dHdq.size(0)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, dHdq.size(0),
                                          &bj_emlrtBCI, (emlrtCTX)sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > dHdq.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          dHdq.size(1), &cj_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (static_cast<int32_T>(k + 1U) > dHdq.size(2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1,
                                          dHdq.size(2), &dj_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          dHdq[(b_i + dHdq.size(0) * (static_cast<int32_T>(d) - 1)) +
               dHdq.size(0) * dHdq.size(1) * k] = b_S;
          if (b_i + 1 > dHdq.size(0)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, dHdq.size(0),
                                          &ej_emlrtBCI, (emlrtCTX)sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > dHdq.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          dHdq.size(1), &fj_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (static_cast<int32_T>(k + 1U) > dHdq.size(2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1,
                                          dHdq.size(2), &gj_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > dHdq.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          dHdq.size(0), &hj_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (b_i + 1 > dHdq.size(1)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, dHdq.size(1),
                                          &ij_emlrtBCI, (emlrtCTX)sp);
          }
          if (static_cast<int32_T>(k + 1U) > dHdq.size(2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1,
                                          dHdq.size(2), &jj_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          dHdq[((static_cast<int32_T>(d) + dHdq.size(0) * b_i) +
                dHdq.size(0) * dHdq.size(1) * k) -
               1] = dHdq[(b_i + dHdq.size(0) * (static_cast<int32_T>(d) - 1)) +
                         dHdq.size(0) * dHdq.size(1) * k];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

// End of code generation (differentiate_FDcrb_jacobian_pure.cpp)
