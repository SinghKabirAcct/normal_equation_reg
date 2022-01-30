#include <iostream>
#include "../linker.h"
using namespace std;

void multExt(double inputArr[5][5], int multiplier){
  for(int i=0; i<5; i++){
    cout << "[";
    for(int j=0; j<5; j++){
      inputArr[i][j] = inputArr[i][j] * multiplier;
      cout << inputArr[i][j] << ", ";
	  }
    cout << "]" << endl;
  }
  cout << "MULTIPLICATION COMPLETE" << endl;
}
