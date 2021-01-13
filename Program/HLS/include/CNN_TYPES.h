/////////////////////////////////////////////////////////////////////////////////////
///                                     CNN_TYPES                                 ///
/////////////////////////////////////////////////////////////////////////////////////

#ifndef __CNN_TYPES_H__
#define __CNN_TYPES_H__
#include "ac_fixed.h"


#define DATA_WIDTH 4
#define COEFF_WIDTH 16
#define HEADROOM 10


typedef ac_fixed<COEFF_WIDTH+1,DATA_WIDTH,true,AC_RND_INF,AC_SAT> d_type ;
typedef ac_fixed<COEFF_WIDTH,3,true,AC_RND_INF,AC_SAT> c_type ;
typedef ac_fixed<COEFF_WIDTH+COEFF_WIDTH+1,DATA_WIDTH+3,true> m_type ;
typedef ac_fixed<DATA_WIDTH + COEFF_WIDTH+HEADROOM,DATA_WIDTH+HEADROOM+3,true> s_type ;

#endif
