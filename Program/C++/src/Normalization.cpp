/////////////////////////////////////////////////////////////////////////////////////
///                                 NORMALIZATION.CPP                             ///
/////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <math.h>
#include <fstream>


#include "Normalization.h"

using namespace std;

#define SIZE (WEIGHT_1_NUM) * (IMAGE_1_WIDTH - 2) * (IMAGE_1_WIDTH - 2)

void normalization(
  double    image_in[WEIGHT_1_NUM][IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2],
  double    image_out[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH]
){
  double sum = 0;
  double average = 0;
  double deviation = 0;
  for (int y = 0; y < IMAGE_1_WIDTH; y++){
    image_out[0][0][y] = 0.0;
    image_out[0][IMAGE_1_WIDTH - 1][y] = 0.0;
    image_out[1][0][y] = 0.0;
    image_out[1][IMAGE_1_WIDTH - 1][y] = 0.0;
    image_out[2][0][y] = 0.0;
    image_out[2][IMAGE_1_WIDTH - 1][y] = 0.0;
  }
  for (int  l = 0; l < WEIGHT_1_NUM; l++){
    for (int i = 0; i < IMAGE_1_WIDTH - 2; i++){
      for(int j = 0; j < IMAGE_1_WIDTH - 2; j++){
        sum += image_in[l][i][j];
      }
    }
  }
  average = sum / (SIZE * 1);

  for (int  l = 0; l < WEIGHT_1_NUM; l++){
    for (int i = 0; i < IMAGE_1_WIDTH - 2; i++){
      for(int j = 0; j < IMAGE_1_WIDTH - 2; j++){
        deviation += pow((image_in[l][i][j] - average), 2);
      }
    }
  }
  deviation = sqrt(deviation / SIZE);
  double maxi = max(deviation, 1/sqrt(SIZE));
  for (int  l = 0; l < WEIGHT_1_NUM; l++){
    for (int i = 0; i < IMAGE_1_WIDTH - 2; i++){
      image_out[l][i+1][0] = 0.0;
      image_out[l][i+1][IMAGE_1_WIDTH - 1] = 0.0;
      for(int j = 0; j < IMAGE_1_WIDTH - 2; j++){
        image_out[l][i+1][j+1] = ((image_in[l][i][j] - average) / maxi);
      }
    }
  }
}
