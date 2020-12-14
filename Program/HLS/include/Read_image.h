/////////////////////////////////////////////////////////////////////////////////////
///                                  READ_IMAGE.H                                 ///
/////////////////////////////////////////////////////////////////////////////////////

#ifndef __READ_IMAGE_H__
#define __READ_IMAGE_H__

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "KERNEL.h"

using namespace std;

void read_image(
  string    image_in,
  int    image_out[IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2][WEIGHT_1_NUM]
);


#endif
