/////////////////////////////////////////////////////////////////////////////////////
///                                 NORMALIZATION.CPP                             ///
/////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <cmath>
#include <fstream>

#include "Normalization.h"

using namespace std;

#define SIZE (WEIGHT_1_NUM) * (IMAGE_1_WIDTH - 2) * (IMAGE_1_WIDTH - 2)

void normalization(
  img_in_type    image_in[IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2][WEIGHT_1_NUM],
  img_out_type    image_out[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH]
){
  sum_img_type sum = 0;
  avg_img_type average = 0;
  dev_img_type deviation = 0;
  dev_img_type maxi = 0;
  for (int y = 0; y < IMAGE_1_WIDTH; y++){
    image_out[0][0][y] = 0.0;
    image_out[0][IMAGE_1_WIDTH - 1][y] = 0.0;
    image_out[1][0][y] = 0.0;
    image_out[1][IMAGE_1_WIDTH - 1][y] = 0.0;
    image_out[2][0][y] = 0.0;
    image_out[2][IMAGE_1_WIDTH - 1][y] = 0.0;
  }
  for (int i = 0; i < IMAGE_1_WIDTH - 2; i++){
    for(int j = 0; j < IMAGE_1_WIDTH - 2; j++){
      for (int  l = 0; l < WEIGHT_1_NUM; l++){
        sum += image_in[i][j][l];
      }
    }
  }
  average = sum / (SIZE * 1);

  for (int i = 0; i < IMAGE_1_WIDTH - 2; i++){
    for(int j = 0; j < IMAGE_1_WIDTH - 2; j++){
      for (int  l = 0; l < WEIGHT_1_NUM; l++){
        deviation += (image_in[i][j][l] - average)*(image_in[i][j][l] - average);
      }
    }
  }

  //deviation = sqrt(deviation / (SIZE * 1));

  //maxi = max(deviation, 1/sqrt(SIZE * 1));
  if(deviation> 1/sqrt(SIZE * 1)) maxi = deviation;
  else maxi= 1/sqrt(SIZE * 1);
  for (int  l = 0; l < WEIGHT_1_NUM; l++){
    for (int i = 0; i < IMAGE_1_WIDTH - 2; i++){
      image_out[l][i+1][0] = 0.0;
      image_out[l][i+1][IMAGE_1_WIDTH - 1] = 0.0;
      for(int j = 0; j < IMAGE_1_WIDTH - 2; j++){
        image_out[l][i+1][j+1] = ((image_in[i][j][l] - average) / maxi);
      }
    }
  }
}
