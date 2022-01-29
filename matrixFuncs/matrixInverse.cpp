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
    for(int i=1; i<5; i++){
        if(inputArr[i][0] != 0){
            cout << "[";
            float subtractVal = inputArr[i][0]/inputArr[0][0];
            for(int j=0; j<5; j++){
                inputArr[i][j] = inputArr[i][j] - (subtractVal*inputArr[0][j]);
                cout << inputArr[i][j] << ", ";
            }
            cout << "]" << endl;
        }
    }
};