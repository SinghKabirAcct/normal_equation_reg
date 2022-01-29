#include <iostream>
#include "../linker.h"
using namespace std;

void transposeExt(float inputArr[5][5]){
  for(int i=0; i<5; i++){
    cout << "[";
    for(int j=0; j<5; j++){
      inputArr[i][j] = inputArr[j][i];
      cout << inputArr[j][i] << ", ";
		}
    cout << "]" << endl;
	}
  cout << " TRANSPOSITION COMPLETE \n" << endl;
}
