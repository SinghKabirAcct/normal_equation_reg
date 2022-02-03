#include <iostream>
#include "../linker.h"
using namespace std;

void multTwoMatricesExt(double inputArr[5][5], double inputArrMult[5][5], double newArr[5][5]){
  for(int i=0; i<5; i++){
      for(int j=0; j<5; j++){
          newArr[i][j] = 0;
          for(int k=0; k<5; k++){
              newArr[i][j] += inputArrMult[i][k] * inputArr[k][j];
          }
      }
  }
}

void multToStripMatr(double inputMatr[5][5], double stripMatr[5][1], double resultArr[5][1]){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            inputMatr[i][j] *= stripMatr[j][0];
            resultArr[i][1] += inputMatr[i][j];
        }
    }
}