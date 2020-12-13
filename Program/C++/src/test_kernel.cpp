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
#include "Convolution.h"
#include "Maxpool.h"
#include "Reshape.h"
#include "Perception.h"

#define NB_IMAGE 10000

using namespace std;

vector<string> split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}

int main(int argc, char **argv) {
  cout << "begin test" << endl;
  string image_ppm;
  image_ppm = "Image_0_3.ppm";
  string image = "test_batch.txt";
  fstream file;
  file.open(image);
  int classe[1];
  double pass_1 = 0.0;
  double pass_2 = 0.0;
  double pass_3 = 0.0;
  double maxi = 0;
  double results [10];
  double sort [10];

  double image_in[IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2][WEIGHT_1_NUM];
  double norm_image[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH];
  double nimage[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH];
  double conv_1_out[BIASE_1_NUM][IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2];
  double maxp_1_out[WEIGHT_2_NUM][IMAGE_2_WIDTH][IMAGE_2_WIDTH];
  double conv_2_out[BIASE_2_NUM][IMAGE_2_WIDTH - 2][IMAGE_2_WIDTH - 2];
  double maxp_2_out[WEIGHT_3_NUM][IMAGE_3_WIDTH][IMAGE_3_WIDTH];
  double conv_3_out[BIASE_3_NUM][IMAGE_3_WIDTH - 2][IMAGE_3_WIDTH - 2];
  double maxp_3_out[BIASE_3_NUM][MAXPOOL_SIZE][MAXPOOL_SIZE];
  double resh_out[WEIGHT_4_NUM];
  double perce_out[BIASE_4_NUM];
  for (int i = 0; i < NB_IMAGE; i++)
  {
    cout << i << endl;
    read_test_batch(file,i,classe,image_in);
    cout << "classe: " << classe[0] << endl;
    //read_image(image_ppm,image_in);
    normalization(image_in,norm_image);
    convolution_1(norm_image,weight_1_double,biase_1_double,conv_1_out);
    maxpool_1(conv_1_out, maxp_1_out);
    convolution_2(maxp_1_out,weight_2_double,biase_2_double,conv_2_out);
    maxpool_2(conv_2_out,maxp_2_out);
    convolution_3(maxp_2_out,weight_3_double,biase_3_double,conv_3_out);
    maxpool_3(conv_3_out,maxp_3_out);
    reshape(maxp_3_out,resh_out);
    perception(resh_out,weight_4_double,biase_4_double,perce_out);

    for (int i = 0; i < 10; i++){
      results[i] =  perce_out[i];
    }
    for (int c = 0; c < BIASE_4_NUM; c++){
      maxi = *std::max_element(results,results+10);
      int i = 0;
      while(maxi != results[i]) i++;
      sort[c] = i;
      results[i] = -100;
    }

    if (classe[0] == sort[0]) pass_1++;
    if (classe[0] == sort[1]) pass_2++;
    if (classe[0] == sort[2]) pass_3++;

    // for (int i = 0; i < 10; i++){
    //   cout << perce_out[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < 10; i++){
    //   cout << sort[i] << " ";
    // }
    // cout << endl;
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
