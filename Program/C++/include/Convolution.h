/////////////////////////////////////////////////////////////////////////////////////
///                                 CONVOLUTION.H                                 ///
/////////////////////////////////////////////////////////////////////////////////////
#ifndef __CONVOLUTION_H__
#define __CONVOLUTION_H__

#include "KERNEL.h"

void convolution_1(
  double    image_in[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH],
  double    weight_1_double[KERNEL_SIZE][KERNEL_SIZE][WEIGHT_1_NUM][BIASE_1_NUM],
  double    biase_1_double[BIASE_1_NUM],
  double    image_out[BIASE_1_NUM][IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2]
);

void convolution_2(
  double    image_in[WEIGHT_2_NUM][IMAGE_2_WIDTH][IMAGE_2_WIDTH],
  double    weight_2[KERNEL_SIZE][KERNEL_SIZE][WEIGHT_2_NUM][BIASE_2_NUM],
  double    biase_2[BIASE_2_NUM],
  double    image_out[BIASE_2_NUM][IMAGE_2_WIDTH - 2][IMAGE_2_WIDTH - 2]
);

void convolution_3(
  double    image_in[WEIGHT_3_NUM][IMAGE_3_WIDTH][IMAGE_3_WIDTH],
  double    weight_3[KERNEL_SIZE][KERNEL_SIZE][WEIGHT_3_NUM][BIASE_3_NUM],
  double    biase_3[BIASE_3_NUM],
  double    image_out[BIASE_3_NUM][IMAGE_3_WIDTH - 2][IMAGE_3_WIDTH - 2]
);

#endif
