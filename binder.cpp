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
    {9, 7, 5, 0, 0},
    {0, 0, 7, 8, 9},
    {0, 0, 11, 43, 32},
    {0, 0, 7, 8, 10},
    {0, 0, 27, 31, 22}
  };
  double newArr[5][5];
  multTwoMatricesExt(invTemplate, inputArray, newArr);
  for(int i = 0; i<5; i++){
    cout << "[";
    for(int j = 0; j<5; j++){
      cout << newArr[i][j] << ", ";
    }
    cout << "]" << endl;
  }
  return 0;
}
