/////////////////////////////////////////////////////////////////////////////////////
///                               CNN.CPP                                 ///
/////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include "CNN.h"

using namespace std;

#pragma hls_design top

void cnn(
  i_type img_out[320*320*3]
){

  convolution_1(norm_image,weight_1_double,biase_1_double,conv_1_out);
  maxpool_1(conv_1_out, maxp_1_out);
  convolution_2(maxp_1_out,weight_2_double,biase_2_double,conv_2_out);
  maxpool_2(conv_2_out,maxp_2_out);
  convolution_3(maxp_2_out,weight_3_double,biase_3_double,conv_3_out);
  maxpool_3(conv_3_out,maxp_3_out);
  reshape(maxp_3_out,resh_out);
  perception(resh_out,weight_4_double,biase_4_double,perce_out);
  sort_classe(perce_out,sort_out);
  classed_image(resized_image,classification,img_out,sort_out[0]);
}
