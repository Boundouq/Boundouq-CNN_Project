/////////////////////////////////////////////////////////////////////////////////////
///                                   RESHAPE.H                                   ///
/////////////////////////////////////////////////////////////////////////////////////
#ifndef __RESHAPE_H__
#define __RESHAPE_H__

#include "KERNEL.h"
#include "CNN_TYPES.h"

void reshape(
  s_type tab_in[BIASE_3_NUM][MAXPOOL_SIZE][MAXPOOL_SIZE],
  s_type tab_out[WEIGHT_4_NUM]
);

#endif
