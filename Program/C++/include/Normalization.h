/////////////////////////////////////////////////////////////////////////////////////
///                               NORMALIZATION.H                                 ///
/////////////////////////////////////////////////////////////////////////////////////
#ifndef __NORMALIZATION_H__
#define __NORMALIZATION_H__

#include "KERNEL.h"

void normalization(
  double    image_in[WEIGHT_1_NUM][IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2],
  double    image_out[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH]
);

#endif
