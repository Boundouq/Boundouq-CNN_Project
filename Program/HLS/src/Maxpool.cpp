/////////////////////////////////////////////////////////////////////////////////////
///                                  MAXPOOL.CPP                                  ///
/////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <algorithm>

#include "Maxpool.h"

using namespace std;

void maxpool_1(
  d_type tab_in[BIASE_1_NUM][IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2],
  d_type tab_out[WEIGHT_2_NUM][IMAGE_2_WIDTH][IMAGE_2_WIDTH]
){
  d_type val;
  for (int k = 0; k<BIASE_1_NUM; k++){
    int l = 1;
    for (int y = 0; y < IMAGE_2_WIDTH; y++){
      tab_out[k][0][y] = 0.0;
    }
    for (int j = 0; j < IMAGE_1_WIDTH; j+=2){
      int c = 1;
      tab_out[k][l][0] = 0.0;
      for (int i = 0; i < IMAGE_1_WIDTH; i+=2){
         val = 0;
        if (i<IMAGE_1_WIDTH-2  && j<IMAGE_1_WIDTH-2){
          val = max(max(max(max(tab_in[k][j][i],tab_in[k][j][i+1]),max(tab_in[k][j][i+2],tab_in[k][j+1][i])),max(max(tab_in[k][j+1][i+1],tab_in[k][j+1][i+2]),max(tab_in[k][j+2][i],tab_in[k][j+2][i+1]))),tab_in[k][j+2][i+2]);
          tab_out[k][l][c] = val;
        }
        else if (i==IMAGE_1_WIDTH-2 && j == IMAGE_1_WIDTH-2){
          val = max(max(tab_in[k][j][i],tab_in[k][j][i+1]),max(tab_in[k][j+1][i],tab_in[k][j+1][i+1]));
          tab_out[k][l][c] = val;
        }
        else if (i == IMAGE_1_WIDTH-2){
          val = max(max(max(tab_in[k][j][i],tab_in[k][j][i+1]),max(tab_in[k][j+1][i],tab_in[k][j+1][i+1])),max(tab_in[k][j+2][i],tab_in[k][j+2][i+1]));
          tab_out[k][l][c] = val;

        }
        else if (j == IMAGE_1_WIDTH-2){
          val = max(max(max(tab_in[k][j][i],tab_in[k][j][i+1]),max(tab_in[k][j][i+2],tab_in[k][j+1][i])),max(tab_in[k][j+1][i+1],tab_in[k][j+1][i+2]));
          tab_out[k][l][c] = val;
        }
        c += 1;
      }
      tab_out[k][l][IMAGE_2_WIDTH-1] = 0.0;
      l += 1;
    }
    for (int y = 0; y < IMAGE_2_WIDTH; y++){
      tab_out[k][IMAGE_2_WIDTH-1][y] = 0.0;
    }
  }
}

void maxpool_2(
  d_type tab_in[BIASE_2_NUM][IMAGE_2_WIDTH - 2][IMAGE_2_WIDTH - 2],
  d_type tab_out[WEIGHT_3_NUM][IMAGE_3_WIDTH][IMAGE_3_WIDTH]
){
  d_type val;
  for (int k = 0; k<BIASE_2_NUM; k++){
    int l = 1;
    for (int y = 0; y < IMAGE_3_WIDTH; y++){
      tab_out[k][0][y] = 0.0;
    }
    for (int j = 0; j < IMAGE_2_WIDTH; j+=2){
      int c = 1;
      tab_out[k][l][0] = 0.0;
      for (int i = 0; i < IMAGE_2_WIDTH; i+=2){
        val = 0;
       if (i<IMAGE_2_WIDTH-2  && j<IMAGE_2_WIDTH-2){
         val = max(max(max(max(tab_in[k][j][i],tab_in[k][j][i+1]),max(tab_in[k][j][i+2],tab_in[k][j+1][i])),max(max(tab_in[k][j+1][i+1],tab_in[k][j+1][i+2]),max(tab_in[k][j+2][i],tab_in[k][j+2][i+1]))),tab_in[k][j+2][i+2]);
         tab_out[k][l][c] = val;
       }
       else if (i==IMAGE_2_WIDTH-2 && j == IMAGE_2_WIDTH-2){
         val = max(max(tab_in[k][j][i],tab_in[k][j][i+1]),max(tab_in[k][j+1][i],tab_in[k][j+1][i+1]));
         tab_out[k][l][c] = val;
       }
       else if (i == IMAGE_2_WIDTH-2){
         val = max(max(max(tab_in[k][j][i],tab_in[k][j][i+1]),max(tab_in[k][j+1][i],tab_in[k][j+1][i+1])),max(tab_in[k][j+2][i],tab_in[k][j+2][i+1]));
         tab_out[k][l][c] = val;

       }
       else if (j == IMAGE_2_WIDTH-2){
         val = max(max(max(tab_in[k][j][i],tab_in[k][j][i+1]),max(tab_in[k][j][i+2],tab_in[k][j+1][i])),max(tab_in[k][j+1][i+1],tab_in[k][j+1][i+2]));
         tab_out[k][l][c] = val;
       }
        c += 1;
      }
      tab_out[k][l][IMAGE_3_WIDTH-1] = 0.0;
      l += 1;
    }
    for (int y = 0; y < IMAGE_3_WIDTH; y++){
      tab_out[k][IMAGE_3_WIDTH-1][y] = 0.0;
    }
  }
}

void maxpool_3(
  d_type tab_in[BIASE_3_NUM][IMAGE_3_WIDTH - 2][IMAGE_3_WIDTH - 2],
  d_type tab_out[BIASE_3_NUM][MAXPOOL_SIZE][MAXPOOL_SIZE]
){
  d_type val;
  for (int k = 0; k<BIASE_3_NUM; k++){
    int l = 0;
    for (int j = 0; j < IMAGE_3_WIDTH; j+=2){
      int c = 0;
      for (int i = 0; i < IMAGE_3_WIDTH; i+=2){
        val = 0;
       if (i<IMAGE_3_WIDTH-2  && j<IMAGE_3_WIDTH-2){
         val = max(max(max(max(tab_in[k][j][i],tab_in[k][j][i+1]),max(tab_in[k][j][i+2],tab_in[k][j+1][i])),max(max(tab_in[k][j+1][i+1],tab_in[k][j+1][i+2]),max(tab_in[k][j+2][i],tab_in[k][j+2][i+1]))),tab_in[k][j+2][i+2]);
         tab_out[k][l][c] = val;
       }
       else if (i==IMAGE_3_WIDTH-2 && j == IMAGE_3_WIDTH-2){
         val = max(max(tab_in[k][j][i],tab_in[k][j][i+1]),max(tab_in[k][j+1][i],tab_in[k][j+1][i+1]));
         tab_out[k][l][c] = val;
       }
       else if (i == IMAGE_3_WIDTH-2){
         val = max(max(max(tab_in[k][j][i],tab_in[k][j][i+1]),max(tab_in[k][j+1][i],tab_in[k][j+1][i+1])),max(tab_in[k][j+2][i],tab_in[k][j+2][i+1]));
         tab_out[k][l][c] = val;

       }
       else if (j == IMAGE_3_WIDTH-2){
         val = max(max(max(tab_in[k][j][i],tab_in[k][j][i+1]),max(tab_in[k][j][i+2],tab_in[k][j+1][i])),max(tab_in[k][j+1][i+1],tab_in[k][j+1][i+2]));
         tab_out[k][l][c] = val;
       }
        c += 1;
      }
      l += 1;
    }
  }
}
