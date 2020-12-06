/////////////////////////////////////////////////////////////////////////////////////
///                                   RESHAPE.H                                   ///
/////////////////////////////////////////////////////////////////////////////////////
#ifndef __RESHAPE_H__
#define __RESHAPE_H__

#include "KERNEL.h"

void reshape(
  double tab_in[BIASE_3_NUM][MAXPOOL_SIZE][MAXPOOL_SIZE],
  double tab_out[WEIGHT_4_NUM]
);

#endif
