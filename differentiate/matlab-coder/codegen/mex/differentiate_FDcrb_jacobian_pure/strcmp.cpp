//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// strcmp.cpp
//
// Code generation for function 'strcmp'
//

// Include files
#include "strcmp.h"
#include "rt_nonfinite.h"

// Function Definitions
namespace coder {
namespace internal {
boolean_T b_strcmp(const char_T a_data[], const int32_T a_size[2])
{
  static const char_T cv[3]{'-', 'R', 'x'};
  boolean_T b_bool;
  b_bool = false;
  if (a_size[1] == 3) {
    int32_T kstr;
    kstr = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (kstr < 3) {
        if (a_data[kstr] != cv[kstr]) {
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
  return b_bool;
}

boolean_T c_strcmp(const char_T a_data[], const int32_T a_size[2])
{
  static const char_T cv[3]{'-', 'R', 'y'};
  boolean_T b_bool;
  b_bool = false;
  if (a_size[1] == 3) {
    int32_T kstr;
    kstr = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (kstr < 3) {
        if (a_data[kstr] != cv[kstr]) {
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
  return b_bool;
}

boolean_T d_strcmp(const char_T a_data[], const int32_T a_size[2])
{
  static const char_T cv[2]{'P', 'x'};
  boolean_T b_bool;
  b_bool = false;
  if (a_size[1] == 2) {
    int32_T kstr;
    kstr = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (kstr < 2) {
        if (a_data[kstr] != cv[kstr]) {
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
  return b_bool;
}

boolean_T e_strcmp(const char_T a_data[], const int32_T a_size[2])
{
  static const char_T cv[2]{'P', 'y'};
  boolean_T b_bool;
  b_bool = false;
  if (a_size[1] == 2) {
    int32_T kstr;
    kstr = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (kstr < 2) {
        if (a_data[kstr] != cv[kstr]) {
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
  return b_bool;
}

} // namespace internal
} // namespace coder

// End of code generation (strcmp.cpp)
