
// Include files for data types

#include <fstream>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std ;
#include "math.h"
// #include "mc_scverify.h"
#include "ac_fixed.h"
#include "DispProcTest.h"

/* Pour  Compilation et ex�cution sur PC */
#define CCS_MAIN main
#define CCS_DESIGN(d) d

int CCS_MAIN(int argc, char **argv) {

  ifstream simg_in("img_in.pgm");
  ofstream simg_out("img_out.pgm");
  // char  type[128], tmp[128];
  // int sx=32, sy=IMG_SIZE_1;
i_type img_in[IMG_SIZE];
i_type img_out[IMG_SIZE];
  printf( "Start verification DispProcTest\n");
/* Execute traitement */
CCS_DESIGN(DispProcTest)(img_out) ;

/*
 Fichier sortie
*/
simg_out << "P2" << endl;
simg_out << IMG_SIZE_0 << " ";
simg_out << IMG_SIZE_1 << endl;
simg_out << 255 << endl;

for(int i=0; i< IMG_SIZE ;i++)
  {
   simg_out << img_out[i].to_int() << endl;
   //simg_out << classified_image_out[i] << endl;
  }
simg_out.close();
return 0;

}
