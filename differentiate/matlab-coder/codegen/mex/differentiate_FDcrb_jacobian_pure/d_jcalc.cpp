//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// d_jcalc.cpp
//
// Code generation for function 'd_jcalc'
//

// Include files
#include "d_jcalc.h"
#include "differentiate_FDcrb_jacobian_pure_data.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo f_emlrtRSI{
    71,                                                           // lineNo
    "d_jcalc",                                                    // fcnName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/d_jcalc.m" // pathName
};

// Function Declarations
static void b_error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location);

// Function Definitions
static void b_error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, nullptr, 2, &pArrays[0],
                        (const char_T *)"error", true, location);
}

void d_jcalc(const emlrtStack *sp, const char_T jtyp_data[],
             const int32_T jtyp_size[2], real_T q, real_T Xj[36],
             real_T dXjdq[36], real_T ddXjddq[36], real_T S[6])
{
  static const int32_T iv[2]{1, 28};
  static const char_T varargin_1[28]{
      'u', 'n', 'r', 'e', 'c', 'o', 'g', 'n', 'i', 's', 'e',  'd', ' ', 'j',
      'o', 'i', 'n', 't', ' ', 'c', 'o', 'd', 'e', ' ', '\'', '%', 's', '\''};
  static const char_T t1_f2[3]{'-', 'R', 'z'};
  static const char_T cv[2]{'R', 'x'};
  static const char_T cv1[2]{'R', 'y'};
  static const char_T t0_f2[2]{'R', 'z'};
  static const char_T t1_f1[2]{'-', 'R'};
  static const char_T t2_f2[2]{'P', 'z'};
  static const int8_T iv10[36]{0, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0,
                               0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0,
                               0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0};
  static const int8_T iv8[36]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
                              0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  static const int8_T iv9[36]{0, 0, 0, 0,  0, 1, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0};
  static const int8_T iv11[6]{0, 0, 0, 1, 0, 0};
  static const int8_T iv12[6]{0, 0, 0, 0, 1, 0};
  static const int8_T iv13[6]{0, 0, 0, 0, 0, 1};
  static const int8_T iv14[6]{0, 0, 0, 1, 0, 0};
  static const int8_T iv15[6]{0, 0, 0, 0, 1, 0};
  static const int8_T iv16[6]{0, 0, 0, 0, 0, 1};
  static const int8_T iv17[6]{1, 0, 0, 0, 0, 0};
  static const int8_T iv18[6]{-1, 0, 0, 0, 0, 0};
  static const int8_T iv19[6]{0, 1, 0, 0, 0, 0};
  static const int8_T iv2[6]{1, 0, 0, 0, 0, 0};
  static const int8_T iv20[6]{0, 0, 1, 0, 0, 0};
  static const int8_T iv21[6]{0, -1, 0, 0, 0, 0};
  static const int8_T iv22[6]{0, 0, -1, 0, 0, 0};
  static const int8_T iv3[6]{0, 1, 0, 0, 0, 0};
  static const int8_T iv4[6]{0, 0, 1, 0, 0, 0};
  static const int8_T iv5[6]{0, 0, 0, 1, 0, 0};
  static const int8_T iv6[6]{0, 0, 0, 0, 1, 0};
  static const int8_T iv7[6]{0, 0, 0, 0, 0, 1};
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv1[2];
  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  //  jcalc  joint transform and motion subspace matrices.
  //  [Xj,S]=jcalc(type,q)  returns the joint transform and motion subspace
  //  matrices for a joint of the given type.  jtyp can be either a string or a
  //  structure containing a string-valued field called 'code'.  Either way,
  //  the string contains the joint type code.  For joints that take
  //  parameters (e.g. helical), jtyp must be a structure, and it must contain
  //  a field called 'pars', which in turn is a structure containing one or
  //  more parameters.  (For a helical joint, pars contains a parameter called
  //  'pitch'.)  q is the joint's position variable.
  b_bool = false;
  if (jtyp_size[1] == 2) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 2) {
        if (jtyp_data[kstr] != cv[kstr]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  if (b_bool) {
    kstr = 0;
  } else {
    b_bool = false;
    if (jtyp_size[1] == 2) {
      kstr = 0;
      do {
        exitg1 = 0;
        if (kstr < 2) {
          if (jtyp_data[kstr] != cv1[kstr]) {
            exitg1 = 1;
          } else {
            kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      kstr = 1;
    } else {
      b_bool = false;
      if (jtyp_size[1] == 2) {
        kstr = 0;
        do {
          exitg1 = 0;
          if (kstr < 2) {
            if (jtyp_data[kstr] != t0_f2[kstr]) {
              exitg1 = 1;
            } else {
              kstr++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }
      if (b_bool) {
        kstr = 2;
      } else if (coder::internal::b_strcmp(jtyp_data, jtyp_size)) {
        kstr = 3;
      } else if (coder::internal::c_strcmp(jtyp_data, jtyp_size)) {
        kstr = 4;
      } else {
        b_bool = false;
        if (jtyp_size[1] == 2) {
          kstr = 0;
          do {
            exitg1 = 0;
            if (kstr < 2) {
              if (jtyp_data[kstr] != t1_f1[kstr]) {
                exitg1 = 1;
              } else {
                kstr++;
              }
            } else {
              b_bool = true;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }
        if (b_bool) {
          kstr = 5;
        } else {
          b_bool = false;
          if (jtyp_size[1] == 3) {
            kstr = 0;
            do {
              exitg1 = 0;
              if (kstr < 3) {
                if (jtyp_data[kstr] != t1_f2[kstr]) {
                  exitg1 = 1;
                } else {
                  kstr++;
                }
              } else {
                b_bool = true;
                exitg1 = 1;
              }
            } while (exitg1 == 0);
          }
          if (b_bool) {
            kstr = 5;
          } else if (coder::internal::d_strcmp(jtyp_data, jtyp_size)) {
            kstr = 6;
          } else if (coder::internal::e_strcmp(jtyp_data, jtyp_size)) {
            kstr = 7;
          } else {
            b_bool = false;
            if (jtyp_size[1] == 2) {
              kstr = 0;
              do {
                exitg1 = 0;
                if (kstr < 2) {
                  if (jtyp_data[kstr] != t2_f2[kstr]) {
                    exitg1 = 1;
                  } else {
                    kstr++;
                  }
                } else {
                  b_bool = true;
                  exitg1 = 1;
                }
              } while (exitg1 == 0);
            }
            if (b_bool) {
              kstr = 8;
            } else {
              kstr = -1;
            }
          }
        }
      }
    }
  }
  switch (kstr) {
  case 0: {
    real_T c_tmp;
    real_T s_tmp;
    //  revolute X axis
    //  rotx  spatial coordinate transform (X-axis rotation).
    //  rotx(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common X axis.
    c_tmp = muDoubleScalarCos(q);
    s_tmp = muDoubleScalarSin(q);
    Xj[1] = 0.0;
    Xj[7] = c_tmp;
    Xj[13] = s_tmp;
    Xj[19] = 0.0;
    Xj[25] = 0.0;
    Xj[31] = 0.0;
    Xj[2] = 0.0;
    Xj[8] = -s_tmp;
    Xj[14] = c_tmp;
    Xj[20] = 0.0;
    Xj[26] = 0.0;
    Xj[32] = 0.0;
    Xj[4] = 0.0;
    Xj[10] = 0.0;
    Xj[16] = 0.0;
    Xj[22] = 0.0;
    Xj[28] = c_tmp;
    Xj[34] = s_tmp;
    Xj[5] = 0.0;
    Xj[11] = 0.0;
    Xj[17] = 0.0;
    Xj[23] = 0.0;
    Xj[29] = -s_tmp;
    Xj[35] = c_tmp;
    //  rotx  spatial coordinate transform (X-axis rotation).
    //  rotx(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common X axis.
    //  X = [ 1  0  0  0  0  0 ;
    //        0  c  s  0  0  0 ;
    //        0 -s  c  0  0  0 ;
    //        0  0  0  1  0  0 ;
    //        0  0  0  0  c  s ;
    //        0  0  0  0 -s  c
    //      ];
    dXjdq[1] = 0.0;
    dXjdq[7] = -s_tmp;
    dXjdq[13] = c_tmp;
    dXjdq[19] = 0.0;
    dXjdq[25] = 0.0;
    dXjdq[31] = 0.0;
    dXjdq[2] = 0.0;
    dXjdq[8] = -c_tmp;
    dXjdq[14] = -s_tmp;
    dXjdq[20] = 0.0;
    dXjdq[26] = 0.0;
    dXjdq[32] = 0.0;
    dXjdq[4] = 0.0;
    dXjdq[10] = 0.0;
    dXjdq[16] = 0.0;
    dXjdq[22] = 0.0;
    dXjdq[28] = -s_tmp;
    dXjdq[34] = c_tmp;
    dXjdq[5] = 0.0;
    dXjdq[11] = 0.0;
    dXjdq[17] = 0.0;
    dXjdq[23] = 0.0;
    dXjdq[29] = -c_tmp;
    dXjdq[35] = -s_tmp;
    //  rotx  spatial coordinate transform (X-axis rotation).
    //  rotx(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common X axis.
    //  X = [ 1  0  0  0  0  0 ;
    //        0  c  s  0  0  0 ;
    //        0 -s  c  0  0  0 ;
    //        0  0  0  1  0  0 ;
    //        0  0  0  0  c  s ;
    //        0  0  0  0 -s  c
    //      ];
    ddXjddq[1] = 0.0;
    ddXjddq[7] = -c_tmp;
    ddXjddq[13] = -s_tmp;
    ddXjddq[19] = 0.0;
    ddXjddq[25] = 0.0;
    ddXjddq[31] = 0.0;
    ddXjddq[2] = 0.0;
    ddXjddq[8] = s_tmp;
    ddXjddq[14] = -c_tmp;
    ddXjddq[20] = 0.0;
    ddXjddq[26] = 0.0;
    ddXjddq[32] = 0.0;
    ddXjddq[4] = 0.0;
    ddXjddq[10] = 0.0;
    ddXjddq[16] = 0.0;
    ddXjddq[22] = 0.0;
    ddXjddq[28] = -c_tmp;
    ddXjddq[34] = -s_tmp;
    ddXjddq[5] = 0.0;
    ddXjddq[11] = 0.0;
    ddXjddq[17] = 0.0;
    ddXjddq[23] = 0.0;
    ddXjddq[29] = s_tmp;
    ddXjddq[35] = -c_tmp;
    for (int32_T i{0}; i < 6; i++) {
      Xj[6 * i] = iv2[i];
      kstr = 6 * i + 3;
      Xj[kstr] = iv14[i];
      dXjdq[6 * i] = 0.0;
      dXjdq[kstr] = 0.0;
      ddXjddq[6 * i] = 0.0;
      ddXjddq[kstr] = 0.0;
      S[i] = iv17[i];
    }
  } break;
  case 1: {
    real_T c_tmp;
    real_T s_tmp;
    //  revolute Y axis
    //  roty  spatial coordinate transform (Y-axis rotation).
    //  roty(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common Y axis.
    c_tmp = muDoubleScalarCos(q);
    s_tmp = muDoubleScalarSin(q);
    Xj[0] = c_tmp;
    Xj[6] = 0.0;
    Xj[12] = -s_tmp;
    Xj[18] = 0.0;
    Xj[24] = 0.0;
    Xj[30] = 0.0;
    Xj[2] = s_tmp;
    Xj[8] = 0.0;
    Xj[14] = c_tmp;
    Xj[20] = 0.0;
    Xj[26] = 0.0;
    Xj[32] = 0.0;
    Xj[3] = 0.0;
    Xj[9] = 0.0;
    Xj[15] = 0.0;
    Xj[21] = c_tmp;
    Xj[27] = 0.0;
    Xj[33] = -s_tmp;
    Xj[5] = 0.0;
    Xj[11] = 0.0;
    Xj[17] = 0.0;
    Xj[23] = s_tmp;
    Xj[29] = 0.0;
    Xj[35] = c_tmp;
    //  roty  spatial coordinate transform (Y-axis rotation).
    //  roty(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common Y axis.
    //  X = [ c  0 -s  0  0  0 ;
    //        0  1  0  0  0  0 ;
    //        s  0  c  0  0  0 ;
    //        0  0  0  c  0 -s ;
    //        0  0  0  0  1  0 ;
    //        0  0  0  s  0  c
    //      ];
    dXjdq[0] = -s_tmp;
    dXjdq[6] = 0.0;
    dXjdq[12] = -c_tmp;
    dXjdq[18] = 0.0;
    dXjdq[24] = 0.0;
    dXjdq[30] = 0.0;
    dXjdq[2] = c_tmp;
    dXjdq[8] = 0.0;
    dXjdq[14] = -s_tmp;
    dXjdq[20] = 0.0;
    dXjdq[26] = 0.0;
    dXjdq[32] = 0.0;
    dXjdq[3] = 0.0;
    dXjdq[9] = 0.0;
    dXjdq[15] = 0.0;
    dXjdq[21] = -s_tmp;
    dXjdq[27] = 0.0;
    dXjdq[33] = -c_tmp;
    dXjdq[5] = 0.0;
    dXjdq[11] = 0.0;
    dXjdq[17] = 0.0;
    dXjdq[23] = c_tmp;
    dXjdq[29] = 0.0;
    dXjdq[35] = -s_tmp;
    //  roty  spatial coordinate transform (Y-axis rotation).
    //  roty(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common Y axis.
    //  X = [ c  0 -s  0  0  0 ;
    //        0  1  0  0  0  0 ;
    //        s  0  c  0  0  0 ;
    //        0  0  0  c  0 -s ;
    //        0  0  0  0  1  0 ;
    //        0  0  0  s  0  c
    //      ];
    ddXjddq[0] = -c_tmp;
    ddXjddq[6] = 0.0;
    ddXjddq[12] = s_tmp;
    ddXjddq[18] = 0.0;
    ddXjddq[24] = 0.0;
    ddXjddq[30] = 0.0;
    ddXjddq[2] = -s_tmp;
    ddXjddq[8] = 0.0;
    ddXjddq[14] = -c_tmp;
    ddXjddq[20] = 0.0;
    ddXjddq[26] = 0.0;
    ddXjddq[32] = 0.0;
    ddXjddq[3] = 0.0;
    ddXjddq[9] = 0.0;
    ddXjddq[15] = 0.0;
    ddXjddq[21] = -c_tmp;
    ddXjddq[27] = 0.0;
    ddXjddq[33] = s_tmp;
    ddXjddq[5] = 0.0;
    ddXjddq[11] = 0.0;
    ddXjddq[17] = 0.0;
    ddXjddq[23] = -s_tmp;
    ddXjddq[29] = 0.0;
    ddXjddq[35] = -c_tmp;
    for (int32_T i{0}; i < 6; i++) {
      int32_T Xj_tmp;
      kstr = 6 * i + 1;
      Xj[kstr] = iv3[i];
      Xj_tmp = 6 * i + 4;
      Xj[Xj_tmp] = iv15[i];
      dXjdq[kstr] = 0.0;
      dXjdq[Xj_tmp] = 0.0;
      ddXjddq[kstr] = 0.0;
      ddXjddq[Xj_tmp] = 0.0;
      S[i] = iv19[i];
    }
  } break;
  case 2: {
    real_T c_tmp;
    real_T s_tmp;
    //  revolute Z axis
    //  rotz  spatial coordinate transform (Z-axis rotation).
    //  rotz(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common Z axis.
    c_tmp = muDoubleScalarCos(q);
    s_tmp = muDoubleScalarSin(q);
    Xj[0] = c_tmp;
    Xj[6] = s_tmp;
    Xj[12] = 0.0;
    Xj[18] = 0.0;
    Xj[24] = 0.0;
    Xj[30] = 0.0;
    Xj[1] = -s_tmp;
    Xj[7] = c_tmp;
    Xj[13] = 0.0;
    Xj[19] = 0.0;
    Xj[25] = 0.0;
    Xj[31] = 0.0;
    Xj[3] = 0.0;
    Xj[9] = 0.0;
    Xj[15] = 0.0;
    Xj[21] = c_tmp;
    Xj[27] = s_tmp;
    Xj[33] = 0.0;
    Xj[4] = 0.0;
    Xj[10] = 0.0;
    Xj[16] = 0.0;
    Xj[22] = -s_tmp;
    Xj[28] = c_tmp;
    Xj[34] = 0.0;
    //  rotz  spatial coordinate transform (Z-axis rotation).
    //  rotz(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common Z axis.
    //  X = [  c  s  0  0  0  0 ;
    //        -s  c  0  0  0  0 ;
    //         0  0  1  0  0  0 ;
    //         0  0  0  c  s  0 ;
    //         0  0  0 -s  c  0 ;
    //         0  0  0  0  0  1
    //      ];
    dXjdq[0] = -s_tmp;
    dXjdq[6] = c_tmp;
    dXjdq[12] = 0.0;
    dXjdq[18] = 0.0;
    dXjdq[24] = 0.0;
    dXjdq[30] = 0.0;
    dXjdq[1] = -c_tmp;
    dXjdq[7] = -s_tmp;
    dXjdq[13] = 0.0;
    dXjdq[19] = 0.0;
    dXjdq[25] = 0.0;
    dXjdq[31] = 0.0;
    dXjdq[3] = 0.0;
    dXjdq[9] = 0.0;
    dXjdq[15] = 0.0;
    dXjdq[21] = -s_tmp;
    dXjdq[27] = c_tmp;
    dXjdq[33] = 0.0;
    dXjdq[4] = 0.0;
    dXjdq[10] = 0.0;
    dXjdq[16] = 0.0;
    dXjdq[22] = -c_tmp;
    dXjdq[28] = -s_tmp;
    dXjdq[34] = 0.0;
    //  rotz  spatial coordinate transform (Z-axis rotation).
    //  rotz(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common Z axis.
    //  X = [  c  s  0  0  0  0 ;
    //        -s  c  0  0  0  0 ;
    //         0  0  1  0  0  0 ;
    //         0  0  0  c  s  0 ;
    //         0  0  0 -s  c  0 ;
    //         0  0  0  0  0  1
    //      ];
    ddXjddq[0] = -c_tmp;
    ddXjddq[6] = -s_tmp;
    ddXjddq[12] = 0.0;
    ddXjddq[18] = 0.0;
    ddXjddq[24] = 0.0;
    ddXjddq[30] = 0.0;
    ddXjddq[1] = s_tmp;
    ddXjddq[7] = -c_tmp;
    ddXjddq[13] = 0.0;
    ddXjddq[19] = 0.0;
    ddXjddq[25] = 0.0;
    ddXjddq[31] = 0.0;
    ddXjddq[3] = 0.0;
    ddXjddq[9] = 0.0;
    ddXjddq[15] = 0.0;
    ddXjddq[21] = -c_tmp;
    ddXjddq[27] = -s_tmp;
    ddXjddq[33] = 0.0;
    ddXjddq[4] = 0.0;
    ddXjddq[10] = 0.0;
    ddXjddq[16] = 0.0;
    ddXjddq[22] = s_tmp;
    ddXjddq[28] = -c_tmp;
    ddXjddq[34] = 0.0;
    for (int32_T i{0}; i < 6; i++) {
      int32_T Xj_tmp;
      kstr = 6 * i + 2;
      Xj[kstr] = iv4[i];
      Xj_tmp = 6 * i + 5;
      Xj[Xj_tmp] = iv16[i];
      dXjdq[kstr] = 0.0;
      dXjdq[Xj_tmp] = 0.0;
      ddXjddq[kstr] = 0.0;
      ddXjddq[Xj_tmp] = 0.0;
      S[i] = iv20[i];
    }
  } break;
  case 3: {
    real_T c_tmp;
    real_T s_tmp;
    //  reversed revolute X axis
    //  rotx  spatial coordinate transform (X-axis rotation).
    //  rotx(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common X axis.
    c_tmp = muDoubleScalarCos(-q);
    s_tmp = muDoubleScalarSin(-q);
    Xj[1] = 0.0;
    Xj[7] = c_tmp;
    Xj[13] = s_tmp;
    Xj[19] = 0.0;
    Xj[25] = 0.0;
    Xj[31] = 0.0;
    Xj[2] = 0.0;
    Xj[8] = -s_tmp;
    Xj[14] = c_tmp;
    Xj[20] = 0.0;
    Xj[26] = 0.0;
    Xj[32] = 0.0;
    Xj[4] = 0.0;
    Xj[10] = 0.0;
    Xj[16] = 0.0;
    Xj[22] = 0.0;
    Xj[28] = c_tmp;
    Xj[34] = s_tmp;
    Xj[5] = 0.0;
    Xj[11] = 0.0;
    Xj[17] = 0.0;
    Xj[23] = 0.0;
    Xj[29] = -s_tmp;
    Xj[35] = c_tmp;
    //  rotx  spatial coordinate transform (X-axis rotation).
    //  rotx(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common X axis.
    //  X = [ 1  0  0  0  0  0 ;
    //        0  c  s  0  0  0 ;
    //        0 -s  c  0  0  0 ;
    //        0  0  0  1  0  0 ;
    //        0  0  0  0  c  s ;
    //        0  0  0  0 -s  c
    //      ];
    dXjdq[1] = -0.0;
    dXjdq[7] = s_tmp;
    dXjdq[13] = -c_tmp;
    dXjdq[19] = -0.0;
    dXjdq[25] = -0.0;
    dXjdq[31] = -0.0;
    dXjdq[2] = -0.0;
    dXjdq[8] = c_tmp;
    dXjdq[14] = s_tmp;
    dXjdq[20] = -0.0;
    dXjdq[26] = -0.0;
    dXjdq[32] = -0.0;
    dXjdq[4] = -0.0;
    dXjdq[10] = -0.0;
    dXjdq[16] = -0.0;
    dXjdq[22] = -0.0;
    dXjdq[28] = s_tmp;
    dXjdq[34] = -c_tmp;
    dXjdq[5] = -0.0;
    dXjdq[11] = -0.0;
    dXjdq[17] = -0.0;
    dXjdq[23] = -0.0;
    dXjdq[29] = c_tmp;
    dXjdq[35] = s_tmp;
    //  rotx  spatial coordinate transform (X-axis rotation).
    //  rotx(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common X axis.
    //  X = [ 1  0  0  0  0  0 ;
    //        0  c  s  0  0  0 ;
    //        0 -s  c  0  0  0 ;
    //        0  0  0  1  0  0 ;
    //        0  0  0  0  c  s ;
    //        0  0  0  0 -s  c
    //      ];
    ddXjddq[1] = 0.0;
    ddXjddq[7] = -c_tmp;
    ddXjddq[13] = -s_tmp;
    ddXjddq[19] = 0.0;
    ddXjddq[25] = 0.0;
    ddXjddq[31] = 0.0;
    ddXjddq[2] = 0.0;
    ddXjddq[8] = s_tmp;
    ddXjddq[14] = -c_tmp;
    ddXjddq[20] = 0.0;
    ddXjddq[26] = 0.0;
    ddXjddq[32] = 0.0;
    ddXjddq[4] = 0.0;
    ddXjddq[10] = 0.0;
    ddXjddq[16] = 0.0;
    ddXjddq[22] = 0.0;
    ddXjddq[28] = -c_tmp;
    ddXjddq[34] = -s_tmp;
    ddXjddq[5] = 0.0;
    ddXjddq[11] = 0.0;
    ddXjddq[17] = 0.0;
    ddXjddq[23] = 0.0;
    ddXjddq[29] = s_tmp;
    ddXjddq[35] = -c_tmp;
    for (int32_T i{0}; i < 6; i++) {
      Xj[6 * i] = iv2[i];
      kstr = 6 * i + 3;
      Xj[kstr] = iv14[i];
      dXjdq[6 * i] = -0.0;
      dXjdq[kstr] = -0.0;
      ddXjddq[6 * i] = 0.0;
      ddXjddq[kstr] = 0.0;
      S[i] = iv18[i];
    }
  } break;
  case 4: {
    real_T c_tmp;
    real_T s_tmp;
    //  reversed revolute Y axis
    //  roty  spatial coordinate transform (Y-axis rotation).
    //  roty(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common Y axis.
    c_tmp = muDoubleScalarCos(-q);
    s_tmp = muDoubleScalarSin(-q);
    Xj[0] = c_tmp;
    Xj[6] = 0.0;
    Xj[12] = -s_tmp;
    Xj[18] = 0.0;
    Xj[24] = 0.0;
    Xj[30] = 0.0;
    Xj[2] = s_tmp;
    Xj[8] = 0.0;
    Xj[14] = c_tmp;
    Xj[20] = 0.0;
    Xj[26] = 0.0;
    Xj[32] = 0.0;
    Xj[3] = 0.0;
    Xj[9] = 0.0;
    Xj[15] = 0.0;
    Xj[21] = c_tmp;
    Xj[27] = 0.0;
    Xj[33] = -s_tmp;
    Xj[5] = 0.0;
    Xj[11] = 0.0;
    Xj[17] = 0.0;
    Xj[23] = s_tmp;
    Xj[29] = 0.0;
    Xj[35] = c_tmp;
    //  roty  spatial coordinate transform (Y-axis rotation).
    //  roty(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common Y axis.
    //  X = [ c  0 -s  0  0  0 ;
    //        0  1  0  0  0  0 ;
    //        s  0  c  0  0  0 ;
    //        0  0  0  c  0 -s ;
    //        0  0  0  0  1  0 ;
    //        0  0  0  s  0  c
    //      ];
    dXjdq[0] = s_tmp;
    dXjdq[6] = -0.0;
    dXjdq[12] = c_tmp;
    dXjdq[18] = -0.0;
    dXjdq[24] = -0.0;
    dXjdq[30] = -0.0;
    dXjdq[2] = -c_tmp;
    dXjdq[8] = -0.0;
    dXjdq[14] = s_tmp;
    dXjdq[20] = -0.0;
    dXjdq[26] = -0.0;
    dXjdq[32] = -0.0;
    dXjdq[3] = -0.0;
    dXjdq[9] = -0.0;
    dXjdq[15] = -0.0;
    dXjdq[21] = s_tmp;
    dXjdq[27] = -0.0;
    dXjdq[33] = c_tmp;
    dXjdq[5] = -0.0;
    dXjdq[11] = -0.0;
    dXjdq[17] = -0.0;
    dXjdq[23] = -c_tmp;
    dXjdq[29] = -0.0;
    dXjdq[35] = s_tmp;
    //  roty  spatial coordinate transform (Y-axis rotation).
    //  roty(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common Y axis.
    //  X = [ c  0 -s  0  0  0 ;
    //        0  1  0  0  0  0 ;
    //        s  0  c  0  0  0 ;
    //        0  0  0  c  0 -s ;
    //        0  0  0  0  1  0 ;
    //        0  0  0  s  0  c
    //      ];
    ddXjddq[0] = -c_tmp;
    ddXjddq[6] = 0.0;
    ddXjddq[12] = s_tmp;
    ddXjddq[18] = 0.0;
    ddXjddq[24] = 0.0;
    ddXjddq[30] = 0.0;
    ddXjddq[2] = -s_tmp;
    ddXjddq[8] = 0.0;
    ddXjddq[14] = -c_tmp;
    ddXjddq[20] = 0.0;
    ddXjddq[26] = 0.0;
    ddXjddq[32] = 0.0;
    ddXjddq[3] = 0.0;
    ddXjddq[9] = 0.0;
    ddXjddq[15] = 0.0;
    ddXjddq[21] = -c_tmp;
    ddXjddq[27] = 0.0;
    ddXjddq[33] = s_tmp;
    ddXjddq[5] = 0.0;
    ddXjddq[11] = 0.0;
    ddXjddq[17] = 0.0;
    ddXjddq[23] = -s_tmp;
    ddXjddq[29] = 0.0;
    ddXjddq[35] = -c_tmp;
    for (int32_T i{0}; i < 6; i++) {
      int32_T Xj_tmp;
      kstr = 6 * i + 1;
      Xj[kstr] = iv3[i];
      Xj_tmp = 6 * i + 4;
      Xj[Xj_tmp] = iv15[i];
      dXjdq[kstr] = -0.0;
      dXjdq[Xj_tmp] = -0.0;
      ddXjddq[kstr] = 0.0;
      ddXjddq[Xj_tmp] = 0.0;
      S[i] = iv21[i];
    }
  } break;
  case 5: {
    real_T c_tmp;
    real_T s_tmp;
    //  reversed revolute Z axis
    //  rotz  spatial coordinate transform (Z-axis rotation).
    //  rotz(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common Z axis.
    c_tmp = muDoubleScalarCos(-q);
    s_tmp = muDoubleScalarSin(-q);
    Xj[0] = c_tmp;
    Xj[6] = s_tmp;
    Xj[12] = 0.0;
    Xj[18] = 0.0;
    Xj[24] = 0.0;
    Xj[30] = 0.0;
    Xj[1] = -s_tmp;
    Xj[7] = c_tmp;
    Xj[13] = 0.0;
    Xj[19] = 0.0;
    Xj[25] = 0.0;
    Xj[31] = 0.0;
    Xj[3] = 0.0;
    Xj[9] = 0.0;
    Xj[15] = 0.0;
    Xj[21] = c_tmp;
    Xj[27] = s_tmp;
    Xj[33] = 0.0;
    Xj[4] = 0.0;
    Xj[10] = 0.0;
    Xj[16] = 0.0;
    Xj[22] = -s_tmp;
    Xj[28] = c_tmp;
    Xj[34] = 0.0;
    //  rotz  spatial coordinate transform (Z-axis rotation).
    //  rotz(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common Z axis.
    //  X = [  c  s  0  0  0  0 ;
    //        -s  c  0  0  0  0 ;
    //         0  0  1  0  0  0 ;
    //         0  0  0  c  s  0 ;
    //         0  0  0 -s  c  0 ;
    //         0  0  0  0  0  1
    //      ];
    dXjdq[0] = s_tmp;
    dXjdq[6] = -c_tmp;
    dXjdq[12] = -0.0;
    dXjdq[18] = -0.0;
    dXjdq[24] = -0.0;
    dXjdq[30] = -0.0;
    dXjdq[1] = c_tmp;
    dXjdq[7] = s_tmp;
    dXjdq[13] = -0.0;
    dXjdq[19] = -0.0;
    dXjdq[25] = -0.0;
    dXjdq[31] = -0.0;
    dXjdq[3] = -0.0;
    dXjdq[9] = -0.0;
    dXjdq[15] = -0.0;
    dXjdq[21] = s_tmp;
    dXjdq[27] = -c_tmp;
    dXjdq[33] = -0.0;
    dXjdq[4] = -0.0;
    dXjdq[10] = -0.0;
    dXjdq[16] = -0.0;
    dXjdq[22] = c_tmp;
    dXjdq[28] = s_tmp;
    dXjdq[34] = -0.0;
    //  rotz  spatial coordinate transform (Z-axis rotation).
    //  rotz(theta)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, where coordinate frame B is
    //  rotated by an angle theta (radians) relative to frame A about their
    //  common Z axis.
    //  X = [  c  s  0  0  0  0 ;
    //        -s  c  0  0  0  0 ;
    //         0  0  1  0  0  0 ;
    //         0  0  0  c  s  0 ;
    //         0  0  0 -s  c  0 ;
    //         0  0  0  0  0  1
    //      ];
    ddXjddq[0] = -c_tmp;
    ddXjddq[6] = -s_tmp;
    ddXjddq[12] = 0.0;
    ddXjddq[18] = 0.0;
    ddXjddq[24] = 0.0;
    ddXjddq[30] = 0.0;
    ddXjddq[1] = s_tmp;
    ddXjddq[7] = -c_tmp;
    ddXjddq[13] = 0.0;
    ddXjddq[19] = 0.0;
    ddXjddq[25] = 0.0;
    ddXjddq[31] = 0.0;
    ddXjddq[3] = 0.0;
    ddXjddq[9] = 0.0;
    ddXjddq[15] = 0.0;
    ddXjddq[21] = -c_tmp;
    ddXjddq[27] = -s_tmp;
    ddXjddq[33] = 0.0;
    ddXjddq[4] = 0.0;
    ddXjddq[10] = 0.0;
    ddXjddq[16] = 0.0;
    ddXjddq[22] = s_tmp;
    ddXjddq[28] = -c_tmp;
    ddXjddq[34] = 0.0;
    for (int32_T i{0}; i < 6; i++) {
      int32_T Xj_tmp;
      kstr = 6 * i + 2;
      Xj[kstr] = iv4[i];
      Xj_tmp = 6 * i + 5;
      Xj[Xj_tmp] = iv16[i];
      dXjdq[kstr] = -0.0;
      dXjdq[Xj_tmp] = -0.0;
      ddXjddq[kstr] = 0.0;
      ddXjddq[Xj_tmp] = 0.0;
      S[i] = iv22[i];
    }
  } break;
  case 6:
    //  prismatic X axis
    //  xlt  spatial coordinate transform (translation of origin).
    //  xlt(r)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, in which frame B is translated
    //  by an amount r (3D vector) relative to frame A.  r can be a row or
    //  column vector.
    for (kstr = 0; kstr < 6; kstr++) {
      Xj[6 * kstr] = iv2[kstr];
      Xj[6 * kstr + 1] = iv3[kstr];
      Xj[6 * kstr + 2] = iv4[kstr];
      Xj[6 * kstr + 3] = iv5[kstr];
    }
    Xj[4] = -0.0;
    Xj[10] = 0.0;
    Xj[16] = q;
    Xj[22] = 0.0;
    Xj[28] = 1.0;
    Xj[34] = 0.0;
    Xj[5] = 0.0;
    Xj[11] = -q;
    Xj[17] = 0.0;
    Xj[23] = 0.0;
    Xj[29] = 0.0;
    Xj[35] = 1.0;
    //  xlt  spatial coordinate transform (translation of origin).
    //  xlt(r)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, in which frame B is translated
    //  by an amount r (3D vector) relative to frame A.  r can be a row or
    //  column vector. X = [  1     0     0    0  0  0 ;
    //         0     1     0    0  0  0 ;
    //         0     0     1    0  0  0 ;
    //         0     r(3) -r(2) 1  0  0 ;
    //        -r(3)  0     r(1) 0  1  0 ;
    //         r(2) -r(1)  0    0  0  1
    //      ];
    for (kstr = 0; kstr < 36; kstr++) {
      dXjdq[kstr] = iv8[kstr];
      ddXjddq[kstr] = 0.0;
    }
    for (int32_T i{0}; i < 6; i++) {
      S[i] = iv11[i];
    }
    break;
  case 7:
    //  prismatic Y axis
    //  xlt  spatial coordinate transform (translation of origin).
    //  xlt(r)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, in which frame B is translated
    //  by an amount r (3D vector) relative to frame A.  r can be a row or
    //  column vector.
    Xj[3] = 0.0;
    Xj[9] = 0.0;
    Xj[15] = -q;
    Xj[21] = 1.0;
    Xj[27] = 0.0;
    Xj[33] = 0.0;
    for (kstr = 0; kstr < 6; kstr++) {
      Xj[6 * kstr] = iv2[kstr];
      Xj[6 * kstr + 1] = iv3[kstr];
      Xj[6 * kstr + 2] = iv4[kstr];
      Xj[6 * kstr + 4] = iv6[kstr];
    }
    Xj[5] = q;
    Xj[11] = -0.0;
    Xj[17] = 0.0;
    Xj[23] = 0.0;
    Xj[29] = 0.0;
    Xj[35] = 1.0;
    //  xlt  spatial coordinate transform (translation of origin).
    //  xlt(r)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, in which frame B is translated
    //  by an amount r (3D vector) relative to frame A.  r can be a row or
    //  column vector. X = [  1     0     0    0  0  0 ;
    //         0     1     0    0  0  0 ;
    //         0     0     1    0  0  0 ;
    //         0     r(3) -r(2) 1  0  0 ;
    //        -r(3)  0     r(1) 0  1  0 ;
    //         r(2) -r(1)  0    0  0  1
    //      ];
    for (kstr = 0; kstr < 36; kstr++) {
      dXjdq[kstr] = iv9[kstr];
      ddXjddq[kstr] = 0.0;
    }
    for (int32_T i{0}; i < 6; i++) {
      S[i] = iv12[i];
    }
    break;
  case 8:
    //  prismatic Z axis
    //  xlt  spatial coordinate transform (translation of origin).
    //  xlt(r)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, in which frame B is translated
    //  by an amount r (3D vector) relative to frame A.  r can be a row or
    //  column vector.
    Xj[3] = 0.0;
    Xj[9] = q;
    Xj[15] = -0.0;
    Xj[21] = 1.0;
    Xj[27] = 0.0;
    Xj[33] = 0.0;
    Xj[4] = -q;
    Xj[10] = 0.0;
    Xj[16] = 0.0;
    Xj[22] = 0.0;
    Xj[28] = 1.0;
    Xj[34] = 0.0;
    for (kstr = 0; kstr < 6; kstr++) {
      Xj[6 * kstr] = iv2[kstr];
      Xj[6 * kstr + 1] = iv3[kstr];
      Xj[6 * kstr + 2] = iv4[kstr];
      Xj[6 * kstr + 5] = iv7[kstr];
    }
    //  xlt  spatial coordinate transform (translation of origin).
    //  xlt(r)  calculates the coordinate transform matrix from A to B
    //  coordinates for spatial motion vectors, in which frame B is translated
    //  by an amount r (3D vector) relative to frame A.  r can be a row or
    //  column vector. X = [  1     0     0    0  0  0 ;
    //         0     1     0    0  0  0 ;
    //         0     0     1    0  0  0 ;
    //         0     r(3) -r(2) 1  0  0 ;
    //        -r(3)  0     r(1) 0  1  0 ;
    //         r(2) -r(1)  0    0  0  1
    //      ];
    for (kstr = 0; kstr < 36; kstr++) {
      dXjdq[kstr] = iv10[kstr];
      ddXjddq[kstr] = 0.0;
    }
    for (int32_T i{0}; i < 6; i++) {
      S[i] = iv13[i];
    }
    //    case 'r'				% planar revolute
    //      Xj = plnr( q, [0 0] );
    //      dXjdq = d_plnr(q, [0 0] );
    //      ddXjddq = dd_plnr(q, [0 0] );
    //      S = [1;0;0];
    break;
  default:
    st.site = &f_emlrtRSI;
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 28, m, &varargin_1[0]);
    emlrtAssign(&y, m);
    b_y = nullptr;
    iv1[0] = 1;
    iv1[1] = jtyp_size[1];
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, jtyp_size[1], m, &jtyp_data[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &m_emlrtRSI;
    b_error(&b_st, y, b_y, &emlrtMCI);
    break;
  }
}

// End of code generation (d_jcalc.cpp)
