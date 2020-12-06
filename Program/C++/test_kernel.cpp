#include KERNEL

int main(int argc, char *argv) {
  cout << "begin test" << endl;
  for (int i=0;i<KERNEL_SIZE;i++) {
    for(int j =0;j<KERNEL_SIZE;j++){
      for(int l = 0; l<WEIGHT_1_NUM; l++){
        for(int c = 0; c<BIASE_1_NUM; c++){
          cout << weight_1_double [i][j][l][c] << endl;
        }
      }
    }
  }
  cout << "test pass" << endl;
  return 0;
}
