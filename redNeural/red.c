#include <stdio.h>
#include "varcore.h"

#define N 2
#define M 4

int main(){
    float X[N][M] = {{0,0,1,1},{0,1,0,1}};
    float Y[M] = {0,1,1,0};
    
    return 0;
}

float multiMat(float *X, float *B, int n, int m){
    return 0;
}

float sumMat(float *X, float *Y,float *Z, int n, int m){
    int i, j;

    for(i = 0; i<n; i++){
        for(j = 0; j<m; j++){
            Z[i][j] = X[i][j] + Y[i][j];
        }
    }
}
