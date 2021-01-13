/////////////////////////////////////////////////////////////////////////////////////
///                                     CNN.h                                ///
/////////////////////////////////////////////////////////////////////////////////////

#ifndef __CNN_H__
#define __CNN_H__
#include "KERNEL.h"
#include "CNN_TYPES.h"

void cnn(
  d_type norm_image[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH],
  d_type perce_out[BIASE_4_NUM]
);
#endif
