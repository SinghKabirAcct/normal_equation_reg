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
    for(int i=0; i<5; i++){
        if(inputArr[0][0] != 1){
            float zeroVal = inputArr[0][0];
            for(int i=0; i<5; i++){
                inputArr[0][i] = inputArr[0][i] * (1/zeroVal);
            }
        }
        if(inputArr[i][0] != 0 && i != 0){
            float subtractVal = inputArr[i][0]/inputArr[0][0];
            for(int j=0; j<5; j++){
                inputArr[i][j] = inputArr[i][j] - (subtractVal*inputArr[0][j]);
            }
        }
    }
    for(int i=0; i<5; i++){
        if(inputArr[1][1] != 1){
            float zeroVal = inputArr[1][1];
            for(int i=0; i<5; i++){
                inputArr[1][i] = inputArr[1][i] * (1/zeroVal);
            }
        }
        if(inputArr[i][1] != 0 && i != 1){
            float subtractVal = inputArr[i][1]/inputArr[1][1];
            for(int j=0; j<5; j++){
                inputArr[i][j] = inputArr[i][j] - (subtractVal*inputArr[1][j]);
            }
        }
    }
    for(int i=0; i<5; i++){
        if(inputArr[2][2] != 1){
            float zeroVal = inputArr[2][2];
            for(int i=0; i<5; i++){
                inputArr[2][i] = inputArr[2][i] * (1/zeroVal);
            }
        }
        if(inputArr[i][1] != 0 && i != 1){
            float subtractVal = inputArr[i][2]/inputArr[2][2];
            for(int j=0; j<5; j++){
                inputArr[i][j] = inputArr[i][j] - (subtractVal*inputArr[2][j]);
            }
        }
    }
};