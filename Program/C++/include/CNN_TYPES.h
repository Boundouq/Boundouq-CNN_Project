/////////////////////////////////////////////////////////////////////////////////////
///                                     CNN_TYPES                                 ///
/////////////////////////////////////////////////////////////////////////////////////

#ifndef __CNN_TYPES_H__
#define __CNN_TYPES_H__
#include "ac_fixed.h"

#define N_TAPS 63
#define DATA_WIDTH 8
// 16-bit coefficients with rounding to +/- infinity are needed for +/- 0.5 LSB accuracy against floating point
// Feel free to change this to trade off area vs precision
#define COEFF_WIDTH 16
// This headroom determines the additional accuracy of the accumulator. Here we make it full precision for numerical safety
#define HEADROOM 6

typedef ac_fixed<DATA_WIDTH,DATA_WIDTH,true,AC_RND_INF,AC_SAT> d_type ;
typedef ac_fixed<COEFF_WIDTH,1,true,AC_RND_INF,AC_SAT> c_type ;
typedef ac_fixed<DATA_WIDTH+COEFF_WIDTH+HEADROOM,DATA_WIDTH+HEADROOM+1,true> a_type ;


// Functions


#endif
