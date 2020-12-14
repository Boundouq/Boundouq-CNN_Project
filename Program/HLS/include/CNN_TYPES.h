/////////////////////////////////////////////////////////////////////////////////////
///                                     CNN_TYPES                                 ///
/////////////////////////////////////////////////////////////////////////////////////

#ifndef __CNN_TYPES_H__
#define __CNN_TYPES_H__
#include "ac_fixed.h"


#define DATA_WIDTH 5
#define COEFF_WIDTH 16
#define HEADROOM 10
//#define HEADROOM_SUM 12
//#define DIV 4

// //NOMRMALISATION
// typedef ac_fixed<DATA_WIDTH,DATA_WIDTH,false,AC_RND_INF,AC_SAT> img_in_type;
// typedef ac_fixed<DATA_WIDTH+HEADROOM_SUM,DATA_WIDTH+HEADROOM_SUM+1,false> sum_img_type;
// typedef ac_fixed<DATA_WIDTH+DIV,DATA_WIDTH,false,AC_RND_INF,AC_SAT> avg_img_type;
// typedef ac_fixed<DATA_WIDTH+DATA_WIDTH+DIV+DIV+2,DATA_WIDTH+DATA_WIDTH,false,AC_RND_INF,AC_SAT> dev_img_type;
// typedef ac_fixed<DATA_WIDTH+DIV,DIV,true,AC_RND_INF,AC_SAT> img_out_type;
//
// //CONVOLUTION
// typedef ac_fixed<COEFF_WIDTH,1,true,AC_RND_INF,AC_SAT> w_type ;
// typedef ac_fixed<COEFF_WIDTH+2,3,true,AC_RND_INF,AC_SAT> b_type ;
// typedef ac_fixed<COEFF_WIDTH+HEADROOM,HEADROOM+1,true> s_type ;


typedef ac_fixed<COEFF_WIDTH+2,DATA_WIDTH,true,AC_RND_INF,AC_SAT> d_type ;
typedef ac_fixed<COEFF_WIDTH,3,true,AC_RND_INF,AC_SAT> c_type ;
typedef ac_fixed<COEFF_WIDTH+COEFF_WIDTH+1,DATA_WIDTH+3,true> m_type ;
typedef ac_fixed<DATA_WIDTH+COEFF_WIDTH+HEADROOM,DATA_WIDTH+HEADROOM+3,true> s_type ;

#endif
