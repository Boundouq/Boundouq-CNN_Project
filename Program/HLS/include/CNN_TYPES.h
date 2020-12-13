/////////////////////////////////////////////////////////////////////////////////////
///                                     CNN_TYPES                                 ///
/////////////////////////////////////////////////////////////////////////////////////

#ifndef __CNN_TYPES_H__
#define __CNN_TYPES_H__
#include "ac_fixed.h"


#define DATA_WIDTH 8
// 16-bit coefficients with rounding to +/- infinity are needed for +/- 0.5 LSB accuracy against floating point
// Feel free to change this to trade off area vs precision
#define COEFF_WIDTH 16
// This headroom determines the additional accuracy of the accumulator. Here we make it full precision for numerical safety
#define HEADROOM_SUM 12
#define HEADROOM 5
#define DIV 4

//NOMRMALISATION
typedef ac_fixed<DATA_WIDTH,DATA_WIDTH,false,AC_RND_INF,AC_SAT> img_in_type;
typedef ac_fixed<DATA_WIDTH+HEADROOM_SUM,DATA_WIDTH+HEADROOM_SUM+1,false> sum_img_type;
typedef ac_fixed<DATA_WIDTH+DIV,DATA_WIDTH,false,AC_RND_INF,AC_SAT> avg_img_type;
typedef ac_fixed<DATA_WIDTH+DATA_WIDTH+DIV+DIV+2,DATA_WIDTH+DATA_WIDTH,false,AC_RND_INF,AC_SAT> dev_img_type;
typedef ac_fixed<DATA_WIDTH+DIV,DIV,true,AC_RND_INF,AC_SAT> img_out_type;

//CONVOLUTION
typedef ac_fixed<COEFF_WIDTH,1,true,AC_RND_INF,AC_SAT> w_type ;
typedef ac_fixed<COEFF_WIDTH+2,3,true,AC_RND_INF,AC_SAT> b_type ;
typedef ac_fixed<COEFF_WIDTH+HEADROOM,HEADROOM+1,true> s_type ;


// Functions


#endif
