#include "ac_fixed.h"
#ifndef IMGPROCTEST
#define IMGPROCTEST
#define DATA_WIDTH 4
#define IMG_SIZE_0 320
#define IMG_SIZE_1 240
#define IMG_SIZE IMG_SIZE_0*IMG_SIZE_1

typedef ac_fixed<2*DATA_WIDTH,2*DATA_WIDTH,false,AC_RND_INF,AC_SAT> i_type;

void DispProcTest ( i_type img_out[IMG_SIZE]
                  );
#endif
