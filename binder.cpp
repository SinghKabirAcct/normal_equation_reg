#include <iostream>
#include "linker.h"
using namespace std;

int main(){
  double inputArray[5][5] = {
    {7, 2, 3, 4, 5},
    {2, 2, 2, 3, 17},
	  {1, 1, 5, 6, 8},
	  {9, 10, 11, 13, 7},
	  {6, 7, 8, 10, 23}
  };
  double invTemplate[5][5] = {
    {1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0},
	  {0, 0, 1, 0, 0},
	  {0, 0, 0, 1, 0},
    {0, 0, 0, 0, 1}
  };
  multTwoMatricesExt(inputArray, invTemplate);
  for(int i = 0; i<5; i++){
    cout << "[";
    for(int j = 0; j<5; j++){
      cout << inputArray[i][j] << ", ";
    }
    cout << "]" << endl;
  }
  return 0;
}
