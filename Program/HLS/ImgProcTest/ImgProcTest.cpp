
// Include files for data types
#include "ac_fixed.h"
#define DATA_WIDTH 8
#define IMG_SIZE_0 320
#define IMG_SIZE_1 240
#define IMG_SIZE IMG_SIZE_0*IMG_SIZE_1
// optional pragma to specify the top level of the design

#pragma hls_design top
void ImgProcTest (
                  ac_fixed<DATA_WIDTH,DATA_WIDTH,false,AC_RND_INF,AC_SAT> img_in[IMG_SIZE],
                  ac_fixed<DATA_WIDTH,DATA_WIDTH,false,AC_RND_INF,AC_SAT> img_out[IMG_SIZE]

                  )
{
ac_fixed<DATA_WIDTH+3,DATA_WIDTH,true,AC_RND_INF,AC_SAT> kernel[9] = {0,1,0,0,0,0,0,-1,0};
ac_fixed<DATA_WIDTH*4,DATA_WIDTH*2,true,AC_RND_INF,AC_SAT> sum;

 lx : for(int x=0; x < IMG_SIZE_0; x++)
  ly : for(int y=0; y < IMG_SIZE_1; y++)
      {
	sum = 0;
	lw: for(int w=0; w < 3; w++)
		ll: for(int l=0; l < 3; l++){
		sum = sum +img_in[x+w+(y+l)*IMG_SIZE_0] * kernel[w+l*3];
		}
         img_out[x+y*IMG_SIZE_0]=sum / 2 +128;
      }
} 

