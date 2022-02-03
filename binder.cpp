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
    {1, 1, 1, 1, 1},
    {1, 3, 1, 1, 1},
    {1, 5, 1, 1, 1},
    {1, 8, 1, 1, 1},
    {1, 9, 1, 1, 1}
  };
  double stripMatr[5][1] = {
    {1},
    {3},
    {5},
    {8},
    {9}
  };
  double transTimesInputArr[5][5];
  double inverseResult[5][5];
  double inverseTimesTransposed[5][5];
  double finalResult[5][1];
  double transposedArr[5][5];

  transposeExt(inputArray, transposedArr);
  multTwoMatricesExt(transposedArr, inputArray, transTimesInputArr);
  inverseExt(transTimesInputArr, inverseResult);
  multTwoMatricesExt(inverseResult, transposedArr, inverseTimesTransposed);
  multToStripMatr(inverseTimesTransposed, stripMatr, finalResult);

  for(int i = 0; i<5; i++){
    cout << "[";
    cout << finalResult[i][0] << ", ";
    cout << "]" << endl;
  }
  return 0;
}