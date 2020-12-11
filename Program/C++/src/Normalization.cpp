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
  double    image_in[IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2][WEIGHT_1_NUM],
  double    image_out[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH]
){
  double sum = 0;
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
        deviation += pow((image_in[i][j][l] - average), 2);
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

  ofstream simg_out("img_out_n.ppm");

  simg_out << "P3" << endl;
  simg_out << 24<< " ";
  simg_out <<  24<< endl;
  simg_out <<  255 << endl;
  for (int i = 1; i < IMAGE_1_WIDTH - 1; i++){
    for(int j = 1 ; j < IMAGE_1_WIDTH - 1; j++){
      simg_out << (int)image_out[0][i][j] <<endl;
      simg_out << (int)image_out[1][i][j] <<endl;
      simg_out << (int)image_out[2][i][j] <<endl;
    }
  }
}
