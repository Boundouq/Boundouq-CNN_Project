
#include "CNN.h"

void sort_classe(
	d_type perce_out[BIASE_4_NUM],
	int sort[10]
){
	static d_type results [10];
	d_type maxi = 0;
	for (int i = 0; i < 10; i++){
	       results[i] =  perce_out[i];
	     }
	for (int c = 0; c < BIASE_4_NUM; c++){
		maxi = results[0];
		for (int k =0; k<10;k++){
			if (results[k] > maxi) maxi  = results[k];
		}
	       int i = 0;
	       while(maxi != results[i]) i++;
	       sort[c] = i;
	       results[i] = -100;
   	  }
}
void classed_image(
  i_type resised_image[320*320*3],
  i_type classification[10][80*40*3],
  i_type classified_image[320*320*3],
  int classe
)
  {
  for (int i = 0; i < 320; i++){
    for (int j = 0; j < 320; j++){
      for (int k = 0; k < 3; k++){
        classified_image[i*320*3+j*3+k] = resized_image[i*320*3+j*3+k];
      }
    }
  }
  for (int j = 0; j < 40; j++){
    for (int i = 0; i < 80; i++){
      for (int k = 0; k < 3; k++){
        classified_image[i*3+j*320*3+k] = classification[classe][i*3+j*80*3+k];
      }
    }
  }
}


/*int main(int argc, char **argv){

  cout << "begin test" << endl;
  classed_image(resized_image_in,classification,classified_image,CLASSE);
  ofstream simg_out("img_out.pgm");

  simg_out << "P3" << endl;
  simg_out << 320 << " ";
  simg_out << 320 << endl;
  simg_out << 255 << endl;
  for(int i=0; i< 320*320*3;i++)
    {
     simg_out << classified_image[i] << endl;
    }
  simg_out.close();

}*/
