/////////////////////////////////////////////////////////////////////////////////////
///                                 PERCEPTION.H                                  ///
/////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

#include "Perception.h"

using namespace std;

void perception(
  d_type tab_in[WEIGHT_4_NUM],
  c_type weight_4_double[WEIGHT_4_NUM][BIASE_4_NUM],
  c_type biase_4_double[BIASE_4_NUM],
  d_type tab_out[BIASE_4_NUM]
){
  s_type sum;
  for(int i = 0; i < BIASE_4_NUM; i++){
    sum = 0;
    for (int j = 0; j < WEIGHT_4_NUM; j++){
      sum += weight_4_double[j][i] * tab_in[j];
    }
    sum += biase_4_double[i];
    tab_out[i] = sum;
  }
}
