#include <iostream>
#include "linker.h"
using namespace std;

void prompts(){
  cout << "Welcome to the Claire Normal Equation Calculator that replaces gradient desecent analytically" << endl;
  cout << endl;
  cout << "This process will start with the creation of your input. Please enter the values for each line and seperate the values by commas and a space, make sure to use 5 numbers per index." << endl;
  cout << "Index 1 of Input" << endl;
}
int main(){
  prompts();
  double inputArray[5][5] = {
    {0, 7, 5, 4, 4},
    {2, 2, 7, 8, 9},
    {1, 90, 11, 43, 32},
    {1, 2, 7, 8, 10},
    {1, 19, 27, 31, 22}
  };
  double results[5][5] = {
    {100000000, 3, 6, 4, 4},
    {2, 2, 4, 8, 9},
    {1, 9, 1, 56, 32},
    {1, 21, 7, 98, 10},
    {1, 190, 27, 31, 22}
  };
  double transposedArr[5][5];
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      transposedArr[i][j] = inputArray[i][j];
    }
  }
  double transTimesInputArr[5][5];
  double inverseResult[5][5];
  double inverseTimesTransposed[5][5];
  double finalResult[5][5];
  transposeExt(inputArray, transposedArr);
  multTwoMatricesExt(transposedArr, inputArray, transTimesInputArr);
  inverseExt(transTimesInputArr, inverseResult);
  multTwoMatricesExt(inverseResult, transposedArr, inverseTimesTransposed);
  multTwoMatricesExt(inverseTimesTransposed, results, finalResult);

  for(int i = 0; i<5; i++){
    cout << "[";
    for(int j = 0; j<5; j++){
      string tempVal = to_string(finalResult[i][j]);
      cout << finalResult[i][j] << ", ";
    }
    cout << "]" << endl;
  }
  return 0;
}
