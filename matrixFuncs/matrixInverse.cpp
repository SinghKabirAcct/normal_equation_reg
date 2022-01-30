#include <iostream>
#include "../linker.h"
using namespace std;

void inverseExt(double inputArr[5][5]){
    /*double identityMatr[5][5] = {
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 0, 0, 0, 1}
    };*/
    for(int i=0; i<5; i++){
        if(inputArr[0][0] != 1){
            double zeroVal = inputArr[0][0];
            for(int i=0; i<5; i++){
                inputArr[0][i] = inputArr[0][i] * (1/zeroVal);
            }
        }
        if(inputArr[i][0] != 0 && i != 0){
            double subtractVal = inputArr[i][0]/inputArr[0][0];
            for(int j=0; j<5; j++){
                inputArr[i][j] = inputArr[i][j] - (subtractVal*inputArr[0][j]);
            }
        }
    }
    for(int i=0; i<5; i++){
        if(inputArr[1][1] != 1){
            double zeroVal = inputArr[1][1];
            for(int i=0; i<5; i++){
                inputArr[1][i] = inputArr[1][i] * (1/zeroVal);
            }
        }
        if(inputArr[i][1] != 0 && i != 1){
            double subtractVal = inputArr[i][1]/inputArr[1][1];
            for(int j=0; j<5; j++){
                inputArr[i][j] = inputArr[i][j] - (subtractVal*inputArr[1][j]);
            }
        }
    }
    for(int i=0; i<5; i++){
        if(inputArr[2][2] != 1){
            double zeroVal = inputArr[2][2];
            for(int i=0; i<5; i++){
                inputArr[2][i] = inputArr[2][i] * (1/zeroVal);
            }
        }
        if(inputArr[i][2] != 0 && i != 2){
            double subtractVal = inputArr[i][2]/inputArr[2][2];
            for(int j=0; j<5; j++){
                inputArr[i][j] = inputArr[i][j] - (subtractVal*inputArr[2][j]);
            }
        }
    }
    for(int i=0; i<5; i++){
        if(inputArr[3][3] != 1){
            double zeroVal = inputArr[3][3];
            for(int i=0; i<5; i++){
                inputArr[3][i] = abs(inputArr[3][i] * (1/zeroVal));
            }
        }
        if(inputArr[i][3] != 0 && i != 3){
            double subtractVal = inputArr[i][3]/inputArr[3][3];
            for(int j=0; j<5; j++){
                inputArr[i][j] = inputArr[i][j] - (subtractVal*inputArr[3][j]);
            }

        }
    }
    for(int i=0; i<5; i++){
        if(inputArr[4][4] != 1){
            double zeroVal = inputArr[4][4];
            for(int i=0; i<5; i++){
                inputArr[4][i] = inputArr[4][i] * (1/zeroVal);
            }
        }
        if(inputArr[i][4] != 0 && i != 4){
            double subtractVal = inputArr[i][4]/inputArr[4][4];
            for(int j=0; j<5; j++){
                inputArr[i][j] = inputArr[i][j] - (subtractVal*inputArr[4][j]);
            }
        }
    }
};