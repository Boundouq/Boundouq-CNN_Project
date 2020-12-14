/////////////////////////////////////////////////////////////////////////////////////
///                               CNN.CPP                                 ///
/////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Convolution.h"
#include "Maxpool.h"
#include "Reshape.h"
#include "Perception.h"
#include "CNN.h"


using namespace std;

#pragma hls_design top

void cnn(
  d_type norm_image[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH],
  d_type perce_out[BIASE_4_NUM]
){

  d_type conv_1_out[BIASE_1_NUM][IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2];
  d_type maxp_1_out[WEIGHT_2_NUM][IMAGE_2_WIDTH][IMAGE_2_WIDTH];
  d_type conv_2_out[BIASE_2_NUM][IMAGE_2_WIDTH - 2][IMAGE_2_WIDTH - 2];
  d_type maxp_2_out[WEIGHT_3_NUM][IMAGE_3_WIDTH][IMAGE_3_WIDTH];
  d_type conv_3_out[BIASE_3_NUM][IMAGE_3_WIDTH - 2][IMAGE_3_WIDTH - 2];
  d_type maxp_3_out[BIASE_3_NUM][MAXPOOL_SIZE][MAXPOOL_SIZE];
  d_type resh_out[WEIGHT_4_NUM];

  convolution_1(norm_image,weight_1_double,biase_1_double,conv_1_out);
  maxpool_1(conv_1_out, maxp_1_out);
  convolution_2(maxp_1_out,weight_2_double,biase_2_double,conv_2_out);
  maxpool_2(conv_2_out,maxp_2_out);
  convolution_3(maxp_2_out,weight_3_double,biase_3_double,conv_3_out);
  maxpool_3(conv_3_out,maxp_3_out);
  reshape(maxp_3_out,resh_out);
  perception(resh_out,weight_4_double,biase_4_double,perce_out);
}
