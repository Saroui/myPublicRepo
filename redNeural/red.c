#include <stdio.h>
#include "varcore.h"

#define N 2
#define M 4

float **initialize(int f, int c);
float **sumMatrix(float **A, float **B, int f, int c);

int main(){
    float X[N][M] = {{0,0,1,1},{0,1,0,1}};
    float Y[M] = {0,1,1,0};
    
    return 0;
}


float **initialize(int f, int c) {
    float **matrix =(float **)malloc(sizeof(float*)*f);
    for (int i = 0; i<f;i++){
        matrix[i] = (float*)malloc(sizeof(float)*c);
    }
    return matrix;
}

float **sumMatrix(float **A, float **B, int f, int c){
    float **sum = initialize(f,c);
    for (int i = 0; i<f; i++){
        for(int j = 0; j<c; j++){
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    return sum;
}

