/////////////////////////////////////////////////////////////////////////////////////
///                                 PERCEPTION.H                                  ///
/////////////////////////////////////////////////////////////////////////////////////
#ifndef __PERCEPTION_H__
#define __PERCEPTION_H__

#include "KERNEL.h"

void perception(
  double tab_in[WEIGHT_4_NUM],
  double weight_4_double[WEIGHT_4_NUM][BIASE_4_NUM],
  double biase_4_double[BIASE_4_NUM],
  double tab_out[BIASE_4_NUM]
);

#endif
