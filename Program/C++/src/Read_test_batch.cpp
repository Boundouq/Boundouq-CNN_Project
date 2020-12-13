/////////////////////////////////////////////////////////////////////////////////////
///                               READ_TEST_BATCH.CPP                             ///
/////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Read_test_batch.h"

using namespace std;

#include <limits>


void read_test_batch(
  fstream    & image,
  int       num_image,
  int       classe[1],
  double    image_out[IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2][WEIGHT_1_NUM]
){
  // fstream image;
  // string im_out = "Results/img_out_";
  // im_out += to_string(num_image);
  // im_out += ".ppm";
  // ofstream simg_out(im_out);
  // image.open(image_in);

  int pointer = 3073 * num_image ;
  string clss;
  string lum;
  double val;

  int img_out [32*32*3];
  int cnt = -1;
  int cntr = 1;


  if (image.is_open()){
    // while (cntr - 1 < pointer) {
    //   getline(image, clss);
    //   cntr++;
    // }
    getline(image, clss);
    stringstream(clss) >> classe[0];
    for (int l = 0; l < 3; l++){
      cnt = l;
      for (int i = 0; i < 32; i++){
        for (int j = 0; j < 32; j++){
          val = 0;
          getline(image, lum);
          stringstream(lum) >> val;
          img_out[cnt] = (int)val;
          if (i > 3 && i < 28 && j > 3 && j < 28){
            image_out[i-4][j-4][l] = (int)val;
          }
          cnt += 3;
        }
      }
    }
    // simg_out << "P3" << endl;
    // simg_out << 32 << " ";
    // simg_out << 32 << endl;
    // simg_out << 255 << endl;
    // for(int i=0; i< 32*32*3;i++)
    // {
    //  simg_out << img_out[i] << endl;
    // }
    //image.close();
    // simg_out.close();
  }
}
