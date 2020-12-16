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
  int   image_in[IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2][WEIGHT_1_NUM],
  d_type    image_out[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH]
){
  int sum = 0;
  double average = 0;
  double deviation = 0;
  double maxi = 0;
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

  deviation = sqrt(deviation / (SIZE * 1));

  maxi = max(deviation, 1/sqrt(SIZE * 1));

  for (int  l = 0; l < WEIGHT_1_NUM; l++){
    for (int i = 0; i < IMAGE_1_WIDTH - 2; i++){
      image_out[l][i+1][0] = 0.0;
      image_out[l][i+1][IMAGE_1_WIDTH - 1] = 0.0;
      for(int j = 0; j < IMAGE_1_WIDTH - 2; j++){
        image_out[l][i+1][j+1] = ((image_in[i][j][l] - average) / maxi);
      }
    }
  }
  //cout << image_out[0][1][1] << endl;
}
