//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_differentiate_FDcrb_jacobian_pure_api.cpp
//
// Code generation for function '_coder_differentiate_FDcrb_jacobian_pure_api'
//

// Include files
#include "_coder_differentiate_FDcrb_jacobian_pure_api.h"
#include "differentiate_FDcrb_jacobian_pure.h"
#include "differentiate_FDcrb_jacobian_pure_data.h"
#include "differentiate_FDcrb_jacobian_pure_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Declarations
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[34];

static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *parent,
                                   const char_T *identifier))[34];

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[34]);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[34]);

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[34];

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *q,
                                   const char_T *identifier))[34];

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[36]);

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[34];

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *N,
                               const char_T *identifier);

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *transmissionInertia,
                             const char_T *identifier, real_T y[34]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *jtype,
                             const char_T *identifier, char_T y[34]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[34]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, real_T y[36]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             cell_wrap_0 y[34]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *Xtree,
                             const char_T *identifier, cell_wrap_0 y[34]);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 3U> &u);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 1U> &u);

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[34];

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[34])
{
  emlrtMsgIdentifier thisId;
  int32_T iv[2];
  char_T str[11];
  boolean_T bv[2];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  bv[0] = false;
  iv[0] = 1;
  bv[1] = false;
  iv[1] = 34;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 2U, &iv[0], &bv[0]);
  for (int32_T i{0}; i < 34; i++) {
    sprintf(&str[0], "%d", i + 1);
    thisId.fIdentifier = &str[0];
    y[i] = emlrt_marshallIn(
        sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, i)), &thisId);
  }
  emlrtDestroyArray(&u);
}

static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[34]
{
  real_T(*y)[34];
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *parent,
                                   const char_T *identifier))[34]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[34];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(parent), &thisId);
  emlrtDestroyArray(&parent);
  return y;
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[34])
{
  static const int32_T dims[2]{1, 34};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 2U, (void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtCTX)sp, src, &ret[0], 34);
  emlrtDestroyArray(&src);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[36])
{
  static const int32_T dims[2]{6, 6};
  real_T(*r)[36];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 2U, (void *)&dims[0]);
  r = (real_T(*)[36])emlrtMxGetData(src);
  for (int32_T i{0}; i < 36; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *q,
                                   const char_T *identifier))[34]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[34];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(sp, emlrtAlias(q), &thisId);
  emlrtDestroyArray(&q);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[34]
{
  real_T(*y)[34];
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 0U, (void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[34]
{
  static const int32_T dims[2]{1, 34};
  real_T(*ret)[34];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 2U, (void *)&dims[0]);
  ret = (real_T(*)[34])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *Xtree,
                             const char_T *identifier, cell_wrap_0 y[34])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(Xtree), &thisId, y);
  emlrtDestroyArray(&Xtree);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             cell_wrap_0 y[34])
{
  emlrtMsgIdentifier thisId;
  int32_T iv[2];
  char_T str[11];
  boolean_T bv[2];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  bv[0] = false;
  iv[0] = 1;
  bv[1] = false;
  iv[1] = 34;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 2U, &iv[0], &bv[0]);
  for (int32_T i{0}; i < 34; i++) {
    sprintf(&str[0], "%d", i + 1);
    thisId.fIdentifier = &str[0];
    emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, i)),
                     &thisId, y[i].f1);
  }
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, real_T y[36])
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *transmissionInertia,
                             const char_T *identifier, real_T y[34])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(transmissionInertia), &thisId, y);
  emlrtDestroyArray(&transmissionInertia);
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *N,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(N), &thisId);
  emlrtDestroyArray(&N);
  return y;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = d_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *jtype,
                             const char_T *identifier, char_T y[34])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(jtype), &thisId, y);
  emlrtDestroyArray(&jtype);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[34])
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 1U> &u)
{
  static const int32_T i{0};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &(((coder::array<real_T, 1U> *)&u)->data())[0]);
  emlrtSetDimensions((mxArray *)m, ((coder::array<real_T, 1U> *)&u)->size(), 1);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u)
{
  static const int32_T iv[2]{0, 0};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &(((coder::array<real_T, 2U> *)&u)->data())[0]);
  emlrtSetDimensions((mxArray *)m, ((coder::array<real_T, 2U> *)&u)->size(), 2);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 3U> &u)
{
  static const int32_T iv[3]{0, 0, 0};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(3, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &(((coder::array<real_T, 3U> *)&u)->data())[0]);
  emlrtSetDimensions((mxArray *)m, ((coder::array<real_T, 3U> *)&u)->size(), 3);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[34]
{
  static const int32_T dims{34};
  real_T(*ret)[34];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 1U, (void *)&dims);
  ret = (real_T(*)[34])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void c_differentiate_FDcrb_jacobian_(const mxArray *const prhs[8], int32_T nlhs,
                                     const mxArray *plhs[4])
{
  coder::array<real_T, 3U> dHdq;
  coder::array<real_T, 2U> H;
  coder::array<real_T, 2U> dCdx;
  coder::array<real_T, 1U> C;
  cell_wrap_0 Xtree[34];
  cell_wrap_0 b_I[34];
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T transmissionInertia[34];
  real_T(*parent)[34];
  real_T(*q)[34];
  real_T(*qd)[34];
  real_T N;
  char_T jtype[34];
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  // Marshall function inputs
  N = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "N");
  emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "jtype", jtype);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "Xtree", Xtree);
  parent = b_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "parent");
  emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "I", b_I);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "transmissionInertia",
                   transmissionInertia);
  q = c_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "q");
  qd = c_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "qd");
  // Invoke the target function
  differentiate_FDcrb_jacobian_pure(&st, N, jtype, Xtree, *parent, b_I,
                                    transmissionInertia, *q, *qd, H, C, dHdq,
                                    dCdx);
  // Marshall function outputs
  H.no_free();
  plhs[0] = emlrt_marshallOut(H);
  if (nlhs > 1) {
    C.no_free();
    plhs[1] = emlrt_marshallOut(C);
  }
  if (nlhs > 2) {
    dHdq.no_free();
    plhs[2] = emlrt_marshallOut(dHdq);
  }
  if (nlhs > 3) {
    dCdx.no_free();
    plhs[3] = emlrt_marshallOut(dCdx);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

// End of code generation (_coder_differentiate_FDcrb_jacobian_pure_api.cpp)
