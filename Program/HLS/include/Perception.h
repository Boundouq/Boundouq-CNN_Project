/////////////////////////////////////////////////////////////////////////////////////
///                                 PERCEPTION.H                                  ///
/////////////////////////////////////////////////////////////////////////////////////
#ifndef __PERCEPTION_H__
#define __PERCEPTION_H__

#include "KERNEL.h"
#include "CNN_TYPES.h"

void perception(
  s_type tab_in[WEIGHT_4_NUM],
  w_type weight_4_double[WEIGHT_4_NUM][BIASE_4_NUM],
  b_type biase_4_double[BIASE_4_NUM],
  s_type tab_out[BIASE_4_NUM]
);

#endif
