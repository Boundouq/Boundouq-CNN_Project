/////////////////////////////////////////////////////////////////////////////////////
///                                 PERCEPTION.H                                  ///
/////////////////////////////////////////////////////////////////////////////////////
#ifndef __PERCEPTION_H__
#define __PERCEPTION_H__

#include "KERNEL.h"

void perception(
  d_type tab_in[WEIGHT_4_NUM],
  c_type weight_4_double[WEIGHT_4_NUM][BIASE_4_NUM],
  c_type biase_4_double[BIASE_4_NUM],
  d_type tab_out[BIASE_4_NUM]
);

#endif
