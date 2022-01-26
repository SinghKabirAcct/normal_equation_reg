#include <iostream>
#include "linker.h"
using namespace std;

int main(){
  float inputArray[5][5] = {
    {1, 2, 3, 4, 5},
    {2, 2, 2, 3, 17},
	  {1, 1, 5, 6, 8},
	  {9, 10, 11, 13, 7},
	  {6, 7, 8, 10, 23}
  };
  transposeExt(inputArray);
  return 0;
}
