/////////////////////////////////////////////////////////////////////////////////////
///                                READ_TEST_BATCH.H                              ///
/////////////////////////////////////////////////////////////////////////////////////

#ifndef __READ_TEST_BATCH_H__
#define __READ_TEST_BATCH_H__

#include <iostream>
#include <string>
#include "KERNEL.h"

using namespace std;

void read_test_batch(
  fstream    & image,
  int       num_image,
  int       classe[1],
  int    image_out[IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2][WEIGHT_1_NUM]
);

#endif
