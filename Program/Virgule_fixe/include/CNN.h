/////////////////////////////////////////////////////////////////////////////////////
///                                     CNN.h                                ///
/////////////////////////////////////////////////////////////////////////////////////

#ifndef __CNN_H__
#define __CNN_H__
#include "KERNEL.h"
#include "normImg0.h"
#include "classification.h"
#include "resized_image_0.h"
#include "CNN_TYPES.h"

static d_type conv_1_out[BIASE_1_NUM][IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2];
static d_type maxp_1_out[WEIGHT_2_NUM][IMAGE_2_WIDTH][IMAGE_2_WIDTH];
static d_type conv_2_out[BIASE_2_NUM][IMAGE_2_WIDTH - 2][IMAGE_2_WIDTH - 2];
static d_type maxp_2_out[WEIGHT_3_NUM][IMAGE_3_WIDTH][IMAGE_3_WIDTH];
static d_type conv_3_out[BIASE_3_NUM][IMAGE_3_WIDTH - 2][IMAGE_3_WIDTH - 2];
static d_type maxp_3_out[BIASE_3_NUM][MAXPOOL_SIZE][MAXPOOL_SIZE];
static d_type resh_out[WEIGHT_4_NUM];
static d_type perce_out[BIASE_4_NUM];
static int sort_out[10];
static i_type img_out[320*320*3];



/////////////////////////////////////////////////////////////////////////////////////
///                                     CONVOLUTION                               ///
/////////////////////////////////////////////////////////////////////////////////////

void convolution_1(
  d_type    image_in[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH],
  c_type    weight_1_double[KERNEL_SIZE][KERNEL_SIZE][WEIGHT_1_NUM][BIASE_1_NUM],
  c_type    biase_1_double[BIASE_1_NUM],
  d_type    image_out[BIASE_1_NUM][IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2]
);

void convolution_2(
  d_type    image_in[WEIGHT_2_NUM][IMAGE_2_WIDTH][IMAGE_2_WIDTH],
  c_type    weight_2[KERNEL_SIZE][KERNEL_SIZE][WEIGHT_2_NUM][BIASE_2_NUM],
  c_type    biase_2[BIASE_2_NUM],
  d_type    image_out[BIASE_2_NUM][IMAGE_2_WIDTH - 2][IMAGE_2_WIDTH - 2]
);

void convolution_3(
  d_type    image_in[WEIGHT_3_NUM][IMAGE_3_WIDTH][IMAGE_3_WIDTH],
  c_type    weight_3[KERNEL_SIZE][KERNEL_SIZE][WEIGHT_3_NUM][BIASE_3_NUM],
  c_type    biase_3[BIASE_3_NUM],
  d_type    image_out[BIASE_3_NUM][IMAGE_3_WIDTH - 2][IMAGE_3_WIDTH - 2]
);


/////////////////////////////////////////////////////////////////////////////////////
///                                     MAXPOOL                               ///
/////////////////////////////////////////////////////////////////////////////////////

void maxpool_1(
  d_type tab_in[BIASE_1_NUM][IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2],
  d_type tab_out[WEIGHT_2_NUM][IMAGE_2_WIDTH][IMAGE_2_WIDTH]
);

void maxpool_2(
  d_type tab_in[BIASE_2_NUM][IMAGE_2_WIDTH - 2][IMAGE_2_WIDTH - 2],
  d_type tab_out[WEIGHT_3_NUM][IMAGE_3_WIDTH][IMAGE_3_WIDTH]
);

void maxpool_3(
  d_type tab_in[BIASE_3_NUM][IMAGE_3_WIDTH - 2][IMAGE_3_WIDTH - 2],
  d_type tab_out[BIASE_3_NUM][MAXPOOL_SIZE][MAXPOOL_SIZE]
);


/////////////////////////////////////////////////////////////////////////////////////
///                                     PERCEPTRON                              ///
/////////////////////////////////////////////////////////////////////////////////////

void perception(
  d_type tab_in[WEIGHT_4_NUM],
  c_type weight_4_double[WEIGHT_4_NUM][BIASE_4_NUM],
  c_type biase_4_double[BIASE_4_NUM],
  d_type tab_out[BIASE_4_NUM]
);


/////////////////////////////////////////////////////////////////////////////////////
///                                     RESHAPE                                  ///
/////////////////////////////////////////////////////////////////////////////////////

void reshape(
  d_type tab_in[BIASE_3_NUM][MAXPOOL_SIZE][MAXPOOL_SIZE],
  d_type tab_out[WEIGHT_4_NUM]
);


void sort_classe(d_type perce_out[BIASE_4_NUM],int sort[10]);

void classed_image(
  i_type resized_image[320*320*3],
  i_type classification[10][80*40*3],
  i_type classified_image[320*320*3],
  int classe
);


/////////////////////////////////////////////////////////////////////////////////////
///                                     CNN                                  ///
/////////////////////////////////////////////////////////////////////////////////////

void cnn(
  i_type img_out[320*320*3]
);
#endif
