#include <iostream>
#include "../linker.h"
using namespace std;

void inverseExt(float inputArr[5][5]){
    /*float identityMatr[5][5] = {
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 0, 0, 0, 1}
    };*/
    if(inputArr[0][0] != 1){
        cout << "[";
        float zeroVal = inputArr[0][0];
        for(int i=0; i<5; i++){
            inputArr[0][i] = inputArr[0][i] * (1/zeroVal);
            cout << inputArr[0][i];
            cout << ", ";
        }
        cout << "]" << endl;
    }
};