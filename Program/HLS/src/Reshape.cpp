/////////////////////////////////////////////////////////////////////////////////////
///                                  RESHAPE.CPP                                  ///
/////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

#include "Reshape.h"

using namespace std;

void reshape(
  s_type tab_in[BIASE_3_NUM][MAXPOOL_SIZE][MAXPOOL_SIZE],
  s_type tab_out[WEIGHT_4_NUM]
){
  int index = -1;
  s_type val;
  for(int c = 0; c < BIASE_3_NUM; c++){
    for(int i = 0; i < MAXPOOL_SIZE; i++){
      for(int j = 0; j < MAXPOOL_SIZE; j++){
        index += 1;
        val = tab_in[c][i][j];
        tab_out[index] = val;
        //cout << val << endl;
      }
    }
  }
}
