/////////////////////////////////////////////////////////////////////////////////////
///                               CONVOLUTION.CPP                                 ///
/////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

#include "Convolution.h"

using namespace std;

void convolution_1(
  double    image_in[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH],
  double    weight_1_double[KERNEL_SIZE][KERNEL_SIZE][WEIGHT_1_NUM][BIASE_1_NUM],
  double    biase_1_double[BIASE_1_NUM],
  double    image_out[BIASE_1_NUM][IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2]
){
  double s;
  for (int c = 0; c < BIASE_1_NUM; c++){
    for (int i = 0; i < IMAGE_1_WIDTH - 2; i++){
      for (int j = 0; j < IMAGE_1_WIDTH - 2; j++){
        s = biase_1_double[c];
        for (int l = 0; l < WEIGHT_1_NUM; l++){
          for (int m = 0; m < KERNEL_SIZE; m++){
            for (int n = 0; n < KERNEL_SIZE; n++){
              s += image_in[l][i+m][j+n] * weight_1_double[m][n][l][c];
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
  double    image_in[WEIGHT_2_NUM][IMAGE_2_WIDTH][IMAGE_2_WIDTH],
  double    weight_2_double[KERNEL_SIZE][KERNEL_SIZE][WEIGHT_2_NUM][BIASE_2_NUM],
  double    biase_2_double[BIASE_2_NUM],
  double    image_out[BIASE_2_NUM][IMAGE_2_WIDTH - 2][IMAGE_2_WIDTH - 2]
){
  double s;
  for (int c = 0; c < BIASE_2_NUM; c++){
    for (int i = 0; i < IMAGE_2_WIDTH - 2; i++){
      for (int j = 0; j < IMAGE_2_WIDTH - 2; j++){
        s = biase_2_double[c];
        for (int l = 0; l < WEIGHT_2_NUM; l++){
          for (int m = 0; m < KERNEL_SIZE; m++){
            for (int n = 0; n < KERNEL_SIZE; n++){
              s += image_in[l][i+m][j+n] * weight_2_double[m][n][l][c];
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
  double    image_in[WEIGHT_3_NUM][IMAGE_3_WIDTH][IMAGE_3_WIDTH],
  double    weight_3_double[KERNEL_SIZE][KERNEL_SIZE][WEIGHT_3_NUM][BIASE_3_NUM],
  double    biase_3_double[BIASE_3_NUM],
  double    image_out[BIASE_3_NUM][IMAGE_3_WIDTH - 2][IMAGE_3_WIDTH - 2]
){
  double s;
  for (int c = 0; c < BIASE_3_NUM; c++){
    for (int i = 0; i < IMAGE_3_WIDTH - 2; i++){
      for (int j = 0; j < IMAGE_3_WIDTH - 2; j++){
        s = biase_3_double[c];
        for (int l = 0; l < WEIGHT_3_NUM; l++){
          for (int m = 0; m < KERNEL_SIZE; m++){
            for (int n = 0; n < KERNEL_SIZE; n++){
              s += image_in[l][i+m][j+n] * weight_3_double[m][n][l][c];
            }
          }
        }
        if (s < 0) s = 0;
        image_out[c][i][j] = s;
      }
    }
  }
}
