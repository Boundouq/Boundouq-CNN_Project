// #include "KERNEL.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include "Read_image.h"
#include "Read_test_batch.h"
#include "Normalization.h"
#include "CNN.h"
#include "ac_fixed.h"

// #include "mc_scverify.h"


#define CCS_MAIN main
#define CCS_DESIGN(d) d
#define NB_IMAGE 100

using namespace std;

int CCS_MAIN(int argc, char **argv) {
  cout << "begin test" << endl;
  string image_ppm;
  image_ppm = "Image_0_3.ppm";
  string image = "test_batch.txt";
  fstream file;
  file.open(image);
  if (file.is_open()) cout << "file is open" << endl;
  int classe[1];
  double pass_1 = 0.0;
  double pass_2 = 0.0;
  double pass_3 = 0.0;
  d_type maxi = 0;
  d_type results [10];
  int sort [10];

  int image_in[IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2][WEIGHT_1_NUM];
  d_type norm_image[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH];
  d_type perce_out[BIASE_4_NUM];
  for (int i = 0; i < NB_IMAGE; i++)
  {
    cout << i << endl;
    read_test_batch(file,i,classe,image_in);
    normalization(image_in,norm_image);
    //cout << "classe: " << classe[0] << endl;
    //read_image(image_ppm,image_in);
    //cnn(image_in,perce_out);
    CCS_DESIGN(cnn)(norm_image, perce_out) ;

    for (int i = 0; i < 10; i++){
      results[i] = perce_out[i];
      //cout << "perce "<<perce_out[i] << endl;
    }
    for (int c = 0; c < BIASE_4_NUM; c++){
      maxi = 0;
      for(int i =0; i< BIASE_4_NUM; i++){
        if(maxi < results[i]) maxi = results[i];
      }
      int i = 0;
      while(maxi != results[i]) i++;
      sort[c] = i;
      results[i] = -100;
    }

    if (classe[0] == sort[0]) pass_1++;
    else if (classe[0] == sort[1]) pass_2++;
    else if (classe[0] == sort[2]) pass_3++;

    // for (int i = 0; i < 10; i++){
    //   cout << perce_out[i] << " ";
    // }
    // cout << endl;
  //   for (int i = 0; i < 10; i++){
  //     cout << sort[i] << " ";
  //   }
  //   cout << endl;
   }
  file.close();
  pass_1 *= (100./NB_IMAGE*1);
  pass_2 *= (100./NB_IMAGE*1);
  pass_3 *= (100./NB_IMAGE*1);

  cout << "Number of image: "<< NB_IMAGE << endl;
  cout << "Passed as first class detected: " << pass_1 << "%" << endl;
  cout << "Passed as second class detected: " << pass_2 << "%" << endl;
  cout << "Passed as third class detected: " << pass_3 << "%" << endl;

  cout << "test pass" << endl;
  return 0;
}
