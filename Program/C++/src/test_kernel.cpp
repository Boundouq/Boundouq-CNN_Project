// #include "KERNEL.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Read_image.h"
#include "Normalization.h"
#include "Convolution.h"
#include "Maxpool.h"
#include "Reshape.h"
#include "Perception.h"


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
  fstream file;
  string caract;
  string delimiter = " ";
  vector<string> v ;
  string image_ppm;
  image_ppm = "Image_0_3.ppm";
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

  // read_image(image,image_in);
  // ofstream f;
  // f.open("out_f.txt");
  // for (int i = 0; i < IMAGE_1_WIDTH - 2; i++){
  //   for(int j = 0; j < IMAGE_1_WIDTH - 2; j++){
  //     for (int  l = 0; l < WEIGHT_1_NUM; l++){
  //         f << image_in[i][j][l] << ' ';
  //     }
  //     f << endl;
  //   }
  //   f << endl;
  // }
  // f.close();
  //
  //
  // 3*24*24
  // file.open("out.txt");
  // for (int cnt = 0;cnt <3;cnt++){
  //   for (int i =0;i <26; i++){
  //     getline(file, caract);
  //     v = split (caract, delimiter);
  //     for (int j = 0;j<26;j ++){
  //       stringstream(v[j]) >> norm_image[cnt][i][j];
  //     }
  //     v.clear();
  //   }
  //   getline(file, caract);
  // }
  // file.close();

  // 24*24*3
  // file.open("out_f.txt");
  // for (int i =0;i <24; i++){
  //   for (int j = 0;j<24;j ++){
  //     getline(file, caract);
  //     v = split (caract, delimiter);
  //     for (int cnt = 0;cnt <3;cnt++){
  //       stringstream(v[cnt]) >> image_in[i][j][cnt];
  //     }
  //     v.clear();
  //   }
  //   getline(file, caract);
  // }
  // file.close();

  fstream image;
  image.open(image_ppm);
  char  type[128], tmp[128];
  int sx, sy;
  // ac_fixed<DATA_WIDTH,DATA_WIDTH,false,AC_RND_INF,AC_SAT> image_out[IMG_SIZE];
  // ac_fixed<DATA_WIDTH,DATA_WIDTH,false,AC_RND_INF,AC_SAT> img_out[IMG_SIZE];
  double img_out[24*24*3];
  /*
  Lecture fichier entree
  */
  if (image.is_open()) printf("file opened\n");
  image.getline(type, 128);
  image.getline(tmp, 128);
  cout << tmp << endl;
  while (tmp[0]== '#') image.getline(tmp, 128);
  sscanf(tmp, "%d %d\n", &sx, &sy);
  printf( "%d %d\n", sx, sy);
  int level;
  image>>level;
  int data;
  for(int i=0; i<sx*sy*3;i++)
   {
     image >> data;
     img_out[i] = (int)data;
   }
   // int l = 96 * 4;
   int l = 0;
   for (int i = 0; i < IMAGE_1_WIDTH - 2; i++){
     // l += 12;
     for(int j = 0; j < IMAGE_1_WIDTH - 2; j++){
       image_in[i][j][0] = img_out[l];
       image_in[i][j][1] = img_out[l+1];
       image_in[i][j][2] = img_out[l+2];
       l += 3;
     }
     // l += 12;
  }
  ofstream f;
  f.open("out_f.txt");
  for (int i = 0; i < IMAGE_1_WIDTH - 2; i++){
    for(int j = 0; j < IMAGE_1_WIDTH - 2; j++){
      for (int  l = 0; l < WEIGHT_1_NUM; l++){
          f << image_in[i][j][l] << ' ';
      }
      f << endl;
    }
    f << endl;
  }
  f.close();

  normalization(image_in,norm_image);
  convolution_1(norm_image,weight_1_double,biase_1_double,conv_1_out);
  maxpool_1(conv_1_out, maxp_1_out);
  convolution_2(maxp_1_out,weight_2_double,biase_2_double,conv_2_out);
  maxpool_2(conv_2_out,maxp_2_out);
  convolution_3(maxp_2_out,weight_3_double,biase_3_double,conv_3_out);
  maxpool_3(conv_3_out,maxp_3_out);
  reshape(maxp_3_out,resh_out);
  perception(resh_out,weight_4_double,biase_4_double,perce_out);

  for (int c = 0; c < BIASE_4_NUM; c++){
          cout << perce_out[c] << ' ';
  }
  cout << endl;

  cout << "test pass" << endl;
  return 0;
}
