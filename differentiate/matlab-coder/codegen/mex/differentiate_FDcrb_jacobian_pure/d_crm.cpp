//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// d_crm.cpp
//
// Code generation for function 'd_crm'
//

// Include files
#include "d_crm.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo g_emlrtRSI{
    23,      // lineNo
    "d_crm", // fcnName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    44,      // lineNo
    "d_crm", // fcnName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pathName
};

static emlrtECInfo b_emlrtECI{
    -1,      // nDims
    25,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo c_emlrtECI{
    -1,      // nDims
    26,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo d_emlrtECI{
    -1,      // nDims
    27,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo e_emlrtECI{
    -1,      // nDims
    28,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo f_emlrtECI{
    -1,      // nDims
    29,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo g_emlrtECI{
    -1,      // nDims
    30,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo h_emlrtECI{
    -1,      // nDims
    31,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo i_emlrtECI{
    -1,      // nDims
    32,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo j_emlrtECI{
    -1,      // nDims
    33,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo k_emlrtECI{
    -1,      // nDims
    34,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo l_emlrtECI{
    -1,      // nDims
    35,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo m_emlrtECI{
    -1,      // nDims
    36,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo n_emlrtECI{
    -1,      // nDims
    37,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo o_emlrtECI{
    -1,      // nDims
    38,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo p_emlrtECI{
    -1,      // nDims
    39,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo q_emlrtECI{
    -1,      // nDims
    40,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo r_emlrtECI{
    -1,      // nDims
    41,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo s_emlrtECI{
    -1,      // nDims
    42,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo t_emlrtECI{
    -1,      // nDims
    46,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo u_emlrtECI{
    -1,      // nDims
    47,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo v_emlrtECI{
    -1,      // nDims
    48,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo w_emlrtECI{
    -1,      // nDims
    49,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo x_emlrtECI{
    -1,      // nDims
    50,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo y_emlrtECI{
    -1,      // nDims
    51,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo ab_emlrtECI{
    -1,      // nDims
    52,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo bb_emlrtECI{
    -1,      // nDims
    53,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo cb_emlrtECI{
    -1,      // nDims
    54,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo db_emlrtECI{
    -1,      // nDims
    55,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo eb_emlrtECI{
    -1,      // nDims
    56,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo fb_emlrtECI{
    -1,      // nDims
    57,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo gb_emlrtECI{
    -1,      // nDims
    58,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo hb_emlrtECI{
    -1,      // nDims
    59,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo ib_emlrtECI{
    -1,      // nDims
    60,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo jb_emlrtECI{
    -1,      // nDims
    61,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo kb_emlrtECI{
    -1,      // nDims
    62,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtECInfo lb_emlrtECI{
    -1,      // nDims
    63,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtDCInfo qb_emlrtDCI{
    6,                  // lineNo
    25,                 // colNo
    "initialize_array", // fName
    "/home/roahmlab/Documents/ROAHM_Robust_Control/robustControlMatlab/"
    "matlabModels/helperFuncs/initialize_array.m", // pName
    1                                              // checkKind
};

static emlrtRTEInfo nb_emlrtRTEI{
    23,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo ob_emlrtRTEI{
    25,      // lineNo
    22,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo pb_emlrtRTEI{
    26,      // lineNo
    22,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo qb_emlrtRTEI{
    27,      // lineNo
    22,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo rb_emlrtRTEI{
    28,      // lineNo
    22,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo sb_emlrtRTEI{
    29,      // lineNo
    22,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo tb_emlrtRTEI{
    30,      // lineNo
    22,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo ub_emlrtRTEI{
    31,      // lineNo
    26,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo vb_emlrtRTEI{
    32,      // lineNo
    26,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo wb_emlrtRTEI{
    33,      // lineNo
    26,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo xb_emlrtRTEI{
    34,      // lineNo
    26,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo yb_emlrtRTEI{
    35,      // lineNo
    26,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo ac_emlrtRTEI{
    36,      // lineNo
    26,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo bc_emlrtRTEI{
    37,      // lineNo
    24,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo cc_emlrtRTEI{
    38,      // lineNo
    24,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo dc_emlrtRTEI{
    39,      // lineNo
    24,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo ec_emlrtRTEI{
    40,      // lineNo
    24,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo fc_emlrtRTEI{
    41,      // lineNo
    24,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo gc_emlrtRTEI{
    42,      // lineNo
    24,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo hc_emlrtRTEI{
    44,      // lineNo
    5,       // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo ic_emlrtRTEI{
    46,      // lineNo
    23,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo jc_emlrtRTEI{
    47,      // lineNo
    23,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo kc_emlrtRTEI{
    48,      // lineNo
    23,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo lc_emlrtRTEI{
    49,      // lineNo
    23,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo mc_emlrtRTEI{
    50,      // lineNo
    23,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo nc_emlrtRTEI{
    51,      // lineNo
    23,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo oc_emlrtRTEI{
    52,      // lineNo
    27,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo pc_emlrtRTEI{
    53,      // lineNo
    27,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo qc_emlrtRTEI{
    54,      // lineNo
    27,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo rc_emlrtRTEI{
    55,      // lineNo
    27,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo sc_emlrtRTEI{
    56,      // lineNo
    27,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo tc_emlrtRTEI{
    57,      // lineNo
    27,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo uc_emlrtRTEI{
    58,      // lineNo
    25,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo vc_emlrtRTEI{
    59,      // lineNo
    25,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo wc_emlrtRTEI{
    60,      // lineNo
    25,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo xc_emlrtRTEI{
    61,      // lineNo
    25,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo yc_emlrtRTEI{
    62,      // lineNo
    25,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

static emlrtRTEInfo ad_emlrtRTEI{
    63,      // lineNo
    25,      // colNo
    "d_crm", // fName
    "/home/roahmlab/Documents/DRD/differentiate/matlab/spatial_differentiate/"
    "d_crm.m" // pName
};

// Function Definitions
void d_crm(const emlrtStack *sp, const coder::array<real_T, 2U> &dvdq,
           const coder::array<real_T, 2U> &dvdqd, real_T NB,
           coder::array<real_T, 3U> &dcrmvdq,
           coder::array<real_T, 3U> &dcrmvdqd)
{
  coder::array<real_T, 2U> b_dvdq;
  emlrtStack st;
  int32_T iv[3];
  int32_T b_loop_ub_tmp;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  //  crm  spatial/planar cross-product operator (motion).
  //  crm(v)  calculates the 6x6 (or 3x3) matrix such that the expression
  //  crm(v)*m is the cross product of the motion vectors v and m.  If
  //  length(v)==6 then it is taken to be a spatial vector, and the return
  //  value is a 6x6 matrix.  Otherwise, v is taken to be a planar vector, and
  //  the return value is 3x3.
  //    vcross = [0    -v(3)  v(2)   0     0     0    ;
  //      	      v(3)  0    -v(1)   0     0     0    ;
  //      	     -v(2)  v(1)  0      0     0     0    ;
  //      	      0    -v(6)  v(5)   0    -v(3)  v(2) ;
  //      	      v(6)  0    -v(4)   v(3)  0    -v(1) ;
  //      	     -v(5)  v(4)  0     -v(2)  v(1)  0 ];
  st.site = &g_emlrtRSI;
  i = static_cast<int32_T>(muDoubleScalarFloor(NB));
  if (NB != i) {
    emlrtIntegerCheckR2012b(NB, &qb_emlrtDCI, &st);
  }
  loop_ub_tmp = static_cast<int32_T>(NB);
  dcrmvdq.set_size(&nb_emlrtRTEI, &st, 6, 6, loop_ub_tmp);
  b_loop_ub_tmp = 36 * loop_ub_tmp;
  for (i1 = 0; i1 < b_loop_ub_tmp; i1++) {
    dcrmvdq[i1] = 0.0;
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&ob_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = -dvdq[6 * i1 + 2];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = loop_ub_tmp;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &b_emlrtECI,
                                (emlrtCTX)sp);
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    dcrmvdq[36 * i1 + 6] = b_dvdq[i1];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&pb_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = dvdq[6 * i1 + 2];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &c_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 1] = dvdq[6 * i1 + 2];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&qb_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = dvdq[6 * i1 + 1];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &d_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 12] = dvdq[6 * i1 + 1];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&rb_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = -dvdq[6 * i1 + 1];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &e_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 2] = b_dvdq[i1];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&sb_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = -dvdq[6 * i1];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &f_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 13] = b_dvdq[i1];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&tb_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = dvdq[6 * i1];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &g_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 8] = dvdq[6 * i1];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&ub_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = -dvdq[6 * i1 + 2];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &h_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 27] = b_dvdq[i1];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&vb_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = dvdq[6 * i1 + 2];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &i_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 22] = dvdq[6 * i1 + 2];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&wb_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = dvdq[6 * i1 + 1];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &j_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 33] = dvdq[6 * i1 + 1];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&xb_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = -dvdq[6 * i1 + 1];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &k_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 23] = b_dvdq[i1];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&yb_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = -dvdq[6 * i1];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &l_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 34] = b_dvdq[i1];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&ac_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = dvdq[6 * i1];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &m_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 29] = dvdq[6 * i1];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&bc_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = -dvdq[6 * i1 + 5];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &n_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 9] = b_dvdq[i1];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&cc_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = dvdq[6 * i1 + 5];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &o_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 4] = dvdq[6 * i1 + 5];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&dc_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = dvdq[6 * i1 + 4];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &p_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 15] = dvdq[6 * i1 + 4];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&ec_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = -dvdq[6 * i1 + 4];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &q_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 5] = b_dvdq[i1];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&fc_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = -dvdq[6 * i1 + 3];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &r_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 16] = b_dvdq[i1];
  }
  loop_ub = dvdq.size(1);
  b_dvdq.set_size(&gc_emlrtRTEI, sp, 1, dvdq.size(1));
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_dvdq[i1] = dvdq[6 * i1 + 3];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdq.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &s_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdq.size(2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    dcrmvdq[36 * i1 + 11] = dvdq[6 * i1 + 3];
  }
  st.site = &h_emlrtRSI;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(NB, &qb_emlrtDCI, &st);
  }
  dcrmvdqd.set_size(&hc_emlrtRTEI, &st, 6, 6, loop_ub_tmp);
  for (i = 0; i < b_loop_ub_tmp; i++) {
    dcrmvdqd[i] = 0.0;
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&ic_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = -dvdqd[6 * i + 2];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = loop_ub_tmp;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &t_emlrtECI,
                                (emlrtCTX)sp);
  for (i = 0; i < loop_ub_tmp; i++) {
    dcrmvdqd[36 * i + 6] = b_dvdq[i];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&jc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = dvdqd[6 * i + 2];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &u_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 1] = dvdqd[6 * i + 2];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&kc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = dvdqd[6 * i + 1];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &v_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 12] = dvdqd[6 * i + 1];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&lc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = -dvdqd[6 * i + 1];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &w_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 2] = b_dvdq[i];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&mc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = -dvdqd[6 * i];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &x_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 13] = b_dvdq[i];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&nc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = dvdqd[6 * i];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &y_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 8] = dvdqd[6 * i];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&oc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = -dvdqd[6 * i + 2];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &ab_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 27] = b_dvdq[i];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&pc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = dvdqd[6 * i + 2];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &bb_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 22] = dvdqd[6 * i + 2];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&qc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = dvdqd[6 * i + 1];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &cb_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 33] = dvdqd[6 * i + 1];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&rc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = -dvdqd[6 * i + 1];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &db_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 23] = b_dvdq[i];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&sc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = -dvdqd[6 * i];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &eb_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 34] = b_dvdq[i];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&tc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = dvdqd[6 * i];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &fb_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 29] = dvdqd[6 * i];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&uc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = -dvdqd[6 * i + 5];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &gb_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 9] = b_dvdq[i];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&vc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = dvdqd[6 * i + 5];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &hb_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 4] = dvdqd[6 * i + 5];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&wc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = dvdqd[6 * i + 4];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &ib_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 15] = dvdqd[6 * i + 4];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&xc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = -dvdqd[6 * i + 4];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &jb_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 5] = b_dvdq[i];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&yc_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = -dvdqd[6 * i + 3];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &kb_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 16] = b_dvdq[i];
  }
  loop_ub = dvdqd.size(1);
  b_dvdq.set_size(&ad_emlrtRTEI, sp, 1, dvdqd.size(1));
  for (i = 0; i < loop_ub; i++) {
    b_dvdq[i] = dvdqd[6 * i + 3];
  }
  iv[0] = 1;
  iv[1] = 1;
  iv[2] = dcrmvdqd.size(2);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 3, b_dvdq.size(), 2, &lb_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = dcrmvdqd.size(2);
  for (i = 0; i < loop_ub; i++) {
    dcrmvdqd[36 * i + 11] = dvdqd[6 * i + 3];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

// End of code generation (d_crm.cpp)
