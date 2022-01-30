#include <iostream>
#include "../linker.h"
using namespace std;

void transposeExt(double inputArr[5][5]){
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      inputArr[i][j] = inputArr[j][i];
		}
	}
  cout << " TRANSPOSITION COMPLETE \n" << endl;
}
