#include <iostream>
#include "linker.h"
using namespace std;

int main(){
  double inputArray[5][5] = {
    {0, 7, 5, 4, 4},
    {2, 2, 7, 8, 9},
    {1, 90, 11, 43, 32},
    {1, 2, 7, 8, 10},
    {1, 19, 27, 31, 22}
  };
  double invTemplate[5][5] = {
    {1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 1, 0},
    {0, 0, 0, 0, 1}
  };
  double results[5][5] = {
    {0, 7, 5, 4, 4},
    {2, 2, 7, 8, 9},
    {1, 90, 11, 43, 32},
    {1, 2, 7, 8, 10},
    {1, 19, 27, 31, 22}
  };
  double transposedArr[5][5];
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      transposedArr[i][j] = inputArray[i][j];
    }
  }
  double transTimesInputArr[5][5];
  double inverseResult[5][5];
  transposeExt(inputArray, transposedArr);
  multTwoMatricesExt(transposedArr, inputArray, transTimesInputArr);
  inverseExt(transTimesInputArr, inverseResult);
  for(int i = 0; i<5; i++){
    cout << "[";
    for(int j = 0; j<5; j++){
      cout << invTemplate[i][j] << ", ";
    }
    cout << "]" << endl;
  }
  return 0;
}
