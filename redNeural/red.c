#include <stdio.h>
#include "varcore.h"

#define N 2
#define M 4

float **initialize(int f, int c);
float **sumMatrix(float **A, float **B, int f, int c);
float **multMatrix(float **A, float **B, int fa, int fb, int ca, int cb);

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

float **multMatrix(float **A, float **B, int fa, int fb, int ca, int cb){
    float **C = initialize(fa,cb);
    if(ca != fb){
        printf("Por favor introduzca valores de ca y fb iguales para hacer la multiplicacion \n");
    }else{

        for (int a = 0; a < cb; a++){
            for (int i = 0; i < fa; i++){
                int sum = 0;
                for (int j = 0; j < ca; j++){
                    sum += A[i][j] * B[j][a];
                }
                C[i][a] = sum;
            } 
        } 

    }
    
    return C;
}

