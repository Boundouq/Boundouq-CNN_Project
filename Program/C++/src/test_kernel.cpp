// #include "KERNEL.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
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
  file.open("Normalization_Image_9.txt");
  cout << file.is_open() << endl;
  double image_in[3][26][26];
  double conv_1_out[BIASE_1_NUM][IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2];
  double maxp_1_out[WEIGHT_2_NUM][IMAGE_2_WIDTH][IMAGE_2_WIDTH];
  double conv_2_out[BIASE_2_NUM][IMAGE_2_WIDTH - 2][IMAGE_2_WIDTH - 2];
  double maxp_2_out[WEIGHT_3_NUM][IMAGE_3_WIDTH][IMAGE_3_WIDTH];
  double conv_3_out[BIASE_3_NUM][IMAGE_3_WIDTH - 2][IMAGE_3_WIDTH - 2];
  double maxp_3_out[BIASE_3_NUM][MAXPOOL_SIZE][MAXPOOL_SIZE];
  double resh_out[WEIGHT_4_NUM];
  double perce_out[BIASE_4_NUM];

  for (int cnt = 0;cnt <3;cnt++){
    for (int i =0;i <26; i++){
      getline(file, caract);

      v = split (caract, delimiter);

      for (int j = 0;j<26;j ++){
        stringstream(v[j]) >> image_in[cnt][i][j];
      }
      v.clear();
    }
    getline(file, caract);
  }
  convolution_1(image_in,weight_1_double,biase_1_double,conv_1_out);
  maxpool_1(conv_1_out, maxp_1_out);
  convolution_2(maxp_1_out,weight_2_double,biase_2_double,conv_2_out);
  maxpool_2(conv_2_out,maxp_2_out);
  convolution_3(maxp_2_out,weight_3_double,biase_3_double,conv_3_out);
  maxpool_3(conv_3_out,maxp_3_out);
  reshape(maxp_3_out,resh_out);
  // for (auto elm : resh_out) cout << elm << endl;
  perception(resh_out,weight_4_double,biase_4_double,perce_out);
  ofstream f;
  f.open("out.txt");
  for (int c = 0; c < BIASE_4_NUM; c++){
          f << perce_out[c] << ' ';
          cout << perce_out[c] << ' ';
  }
  cout << endl;
  f.close();
  file.close();

  cout << "test pass" << endl;
  return 0;
}
