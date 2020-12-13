/////////////////////////////////////////////////////////////////////////////////////
///                               CONVOLUTION.CPP                                 ///
/////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

#include "Convolution.h"

using namespace std;

void convolution_1(
  img_out_type    image_in[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH],
  w_type    weight_1_double[KERNEL_SIZE][KERNEL_SIZE][WEIGHT_1_NUM][BIASE_1_NUM],
  b_type    biase_1_double[BIASE_1_NUM],
  s_type    image_out[BIASE_1_NUM][IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2]
){
  s_type s;
  for (int c = 0; c < BIASE_1_NUM; c++){
    for (int i = 0; i < IMAGE_1_WIDTH - 2; i++){
      for (int j = 0; j < IMAGE_1_WIDTH - 2; j++){
        s = biase_1_double[c];
        for (int l = 0; l < WEIGHT_1_NUM; l++){
          for (int m = 0; m < KERNEL_SIZE; m++){
            for (int n = 0; n < KERNEL_SIZE; n++){
              s += image_in[l][i+m][j+n] * weight_1_double[n][m][l][c];
            }
          }
        }
        if (s < 0) s = 0;
        image_out[c][i][j] = s;
      }
    }
  }
}

void convolution_2(
  s_type    image_in[WEIGHT_2_NUM][IMAGE_2_WIDTH][IMAGE_2_WIDTH],
  w_type    weight_2[KERNEL_SIZE][KERNEL_SIZE][WEIGHT_2_NUM][BIASE_2_NUM],
  b_type    biase_2[BIASE_2_NUM],
  s_type    image_out[BIASE_2_NUM][IMAGE_2_WIDTH - 2][IMAGE_2_WIDTH - 2]
){
  s_type s;
  for (int c = 0; c < BIASE_2_NUM; c++){
    for (int i = 0; i < IMAGE_2_WIDTH - 2; i++){
      for (int j = 0; j < IMAGE_2_WIDTH - 2; j++){
        s = biase_2_double[c];
        for (int l = 0; l < WEIGHT_2_NUM; l++){
          for (int m = 0; m < KERNEL_SIZE; m++){
            for (int n = 0; n < KERNEL_SIZE; n++){
              s += image_in[l][i+m][j+n] * weight_2_double[n][m][l][c];
            }
          }
        }
        if (s < 0) s = 0;
        image_out[c][i][j] = s;
      }
    }
  }
}

void convolution_3(
  s_type    image_in[WEIGHT_3_NUM][IMAGE_3_WIDTH][IMAGE_3_WIDTH],
  w_type    weight_3[KERNEL_SIZE][KERNEL_SIZE][WEIGHT_3_NUM][BIASE_3_NUM],
  b_type    biase_3[BIASE_3_NUM],
  s_type    image_out[BIASE_3_NUM][IMAGE_3_WIDTH - 2][IMAGE_3_WIDTH - 2]
){
  s_type s;
  for (int c = 0; c < BIASE_3_NUM; c++){
    for (int i = 0; i < IMAGE_3_WIDTH - 2; i++){
      for (int j = 0; j < IMAGE_3_WIDTH - 2; j++){
        s = biase_3_double[c];
        for (int l = 0; l < WEIGHT_3_NUM; l++){
          for (int m = 0; m < KERNEL_SIZE; m++){
            for (int n = 0; n < KERNEL_SIZE; n++){
              s += image_in[l][i+m][j+n] * weight_3_double[n][m][l][c];
            }
          }
        }
        if (s < 0) s = 0;
        image_out[c][i][j] = s;
      }
    }
  }
}
