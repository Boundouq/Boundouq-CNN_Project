/////////////////////////////////////////////////////////////////////////////////////
///                                   RESHAPE.H                                   ///
/////////////////////////////////////////////////////////////////////////////////////
#ifndef __RESHAPE_H__
#define __RESHAPE_H__

#include "KERNEL.h"

void reshape(
  d_type tab_in[BIASE_3_NUM][MAXPOOL_SIZE][MAXPOOL_SIZE],
  d_type tab_out[WEIGHT_4_NUM]
);

#endif
