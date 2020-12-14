/////////////////////////////////////////////////////////////////////////////////////
///                               CONVOLUTION.CPP                                 ///
/////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

#include "Convolution.h"

using namespace std;

void convolution_1(
  d_type    image_in[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH],
  c_type    weight_1_double[KERNEL_SIZE][KERNEL_SIZE][WEIGHT_1_NUM][BIASE_1_NUM],
  c_type    biase_1_double[BIASE_1_NUM],
  d_type    image_out[BIASE_1_NUM][IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2]
){
  m_type mul;
  s_type sum;
  for (int c = 0; c < BIASE_1_NUM; c++){
    for (int i = 0; i < IMAGE_1_WIDTH - 2; i++){
      for (int j = 0; j < IMAGE_1_WIDTH - 2; j++){
        sum= 0;
        for (int l = 0; l < WEIGHT_1_NUM; l++){
          for (int m = 0; m < KERNEL_SIZE; m++){
            for (int n = 0; n < KERNEL_SIZE; n++){
              mul = image_in[l][i+m][j+n] * weight_1_double[n][m][l][c];
              sum += mul;
            }
          }
        }
        sum+= biase_1_double[c];
        if (sum< 0) sum= 0;
        image_out[c][i][j] = sum;
      }
    }
  }
}

void convolution_2(
  d_type    image_in[WEIGHT_2_NUM][IMAGE_2_WIDTH][IMAGE_2_WIDTH],
  c_type    weight_2[KERNEL_SIZE][KERNEL_SIZE][WEIGHT_2_NUM][BIASE_2_NUM],
  c_type    biase_2[BIASE_2_NUM],
  d_type    image_out[BIASE_2_NUM][IMAGE_2_WIDTH - 2][IMAGE_2_WIDTH - 2]
){
  m_type mul;
  s_type sum;
  for (int c = 0; c < BIASE_2_NUM; c++){
    for (int i = 0; i < IMAGE_2_WIDTH - 2; i++){
      for (int j = 0; j < IMAGE_2_WIDTH - 2; j++){
        sum= biase_2_double[c];
        for (int l = 0; l < WEIGHT_2_NUM; l++){
          for (int m = 0; m < KERNEL_SIZE; m++){
            for (int n = 0; n < KERNEL_SIZE; n++){
              mul= image_in[l][i+m][j+n] * weight_1_double[n][m][l][c];
              sum+= mul;
            }
          }
        }
        sum+= biase_1_double[c];
        if (sum< 0) sum= 0;
        image_out[c][i][j] = sum;
      }
    }
  }
}

void convolution_3(
  d_type    image_in[WEIGHT_3_NUM][IMAGE_3_WIDTH][IMAGE_3_WIDTH],
  c_type    weight_3[KERNEL_SIZE][KERNEL_SIZE][WEIGHT_3_NUM][BIASE_3_NUM],
  c_type    biase_3[BIASE_3_NUM],
  d_type    image_out[BIASE_3_NUM][IMAGE_3_WIDTH - 2][IMAGE_3_WIDTH - 2]
){
  m_type mul;
  s_type sum;
  for (int c = 0; c < BIASE_3_NUM; c++){
    for (int i = 0; i < IMAGE_3_WIDTH - 2; i++){
      for (int j = 0; j < IMAGE_3_WIDTH - 2; j++){
        sum= biase_3_double[c];
        for (int l = 0; l < WEIGHT_3_NUM; l++){
          for (int m = 0; m < KERNEL_SIZE; m++){
            for (int n = 0; n < KERNEL_SIZE; n++){
              mul= image_in[l][i+m][j+n] * weight_1_double[n][m][l][c];
              sum+= mul;
            }
          }
        }
        sum+= biase_1_double[c];
        if (sum< 0) sum= 0;
        image_out[c][i][j] = sum;
      }
    }
  }
}
