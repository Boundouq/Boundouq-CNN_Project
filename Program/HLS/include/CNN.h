/////////////////////////////////////////////////////////////////////////////////////
///                                     CNN.h                                ///
/////////////////////////////////////////////////////////////////////////////////////

#ifndef __CNN_H__
#define __CNN_H__
#include "KERNEL.h"
#include "CNN_TYPES.h"

void cnn(
  img_in_type image_in[IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2][WEIGHT_1_NUM],
  s_type perce_out[BIASE_4_NUM]
);


#endif
