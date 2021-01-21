#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include "CNN.h"

//#include "mc_scverify.h"

#define CCS_MAIN main
#define CCS_DESIGN(d) d
#define NUM_IMAGE 0

using namespace std;

int CCS_MAIN(int argc, char **argv) {
   cout << "begin test" << endl;

   CCS_DESIGN(cnn)(img_out);

   ofstream simg_out("img_out.ppm");
   simg_out << "P3" << endl;
   simg_out << 320 << " ";
   simg_out << 320 << endl;
   simg_out << 255 << endl;

   for(int i=0; i< 320*320*3;i++)
     {
      simg_out << img_out[i].to_int() << endl;
      //simg_out << classified_image_out[i] << endl;
     }
   simg_out.close();

   cout << "test pass" << endl;
   return 0;
 }
