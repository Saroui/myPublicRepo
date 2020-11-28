#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "varcore.h"

#define N 2
#define M 4

double **initialize(int f, int c);
double **sumMatrix(double **A, double **B, int f, int c);
double **multMatrix(double **A, double **B, int fa, int fb, int ca, int cb);
double **maxMatrix(double **A, double **B, int f, int c);
double exponential(double x);
double **sigmoide(double **A, int f, int c);
int factorial(int x);
double pot(double x, double i);



int main(){
    //inicialicación de red
    double XD[N][M] = {{0,0,1,1},{0,1,0,1}};

    double **X = initialize(N,M);
     for (int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            X[i][j] = XD[i][j];
        }
    }

    double **W1 = initialize(20,2);
    for (int a = 0; a<20; a++){
        for(int b = 0; b<2; b++){
            W1[a][b] = W1D[a][b];
        }
    }

    double **B1 = initialize(20,1);
    for (int e = 0; e<20; e++){
        for(int f = 0; f<1; f++){
            B1[e][f] = b1D[e][f];
        }
    }

    double **W2 = initialize(5,20);
     for (int g = 0; g<5; g++){
        for(int h = 0; h<20; h++){
            W2[g][h] = W2D[g][h];
        }
    }

    double **B2 = initialize(5,1);
     for (int k = 0; k<5; k++){
        for(int l = 0; l<1; l++){
            B2[k][l] = b2D[k][l];
        }
    }

    double **W3 = initialize(1,5);
    for (int m = 0; m<1; m++){
        for(int n = 0; n<5; n++){
            W3[m][n] = W3D[m][n];
        }
    }

    double **B3 = initialize(1,1);
    B3[0][0] = b3D;


    double Y[M] = {0,1,1,0};
    

    //procesos de RED
    double **Z1 = initialize(20,4);
    double **A1 = initialize(20,4);
    double **cero1 = initialize(20,4);
    double **Z2 = initialize(5,4);
    double **cero2 = initialize(5,4);
    double **A2 = initialize(5,4);
    double **Z3 = initialize(1,4);
    double **A3 = initialize(1,4);


     
    Z1 = multMatrix(W1, X,20,N,2,M);
    Z1 = sumMatrix(Z1, B1, 20, 4);
    A1 = maxMatrix(cero1,Z1,20,4);
    Z2 = multMatrix(W2,A1,5,20,20,4);
    Z2 = sumMatrix(Z2,B2,5,4);
    A2 = maxMatrix(cero2,Z2,5,4);
    Z3 = multMatrix(W3,A2, 1, 5, 5, 4);
    Z3 = sumMatrix(Z3,B3,1,4);
    // A3 = sigmoide(Z3,1,4);
    for (int c = 0; c<1; c++){
        for(int d = 0; d<4; d++){
            printf("%f \n",Z3[c][d]);
        }
    }
    
    return 0;
}

double **initialize(int f, int c) {
    double **matrix =(double **)malloc(sizeof(double*)*f);
    for (int i = 0; i<f;i++){
        matrix[i] = (double*)malloc(sizeof(double)*c);
    }
    return matrix;
}

double **sumMatrix(double **A, double **B, int f, int c){
    double **sum = initialize(f,c);
    for (int i = 0; i<f; i++){
        for(int j = 0; j<c; j++){
            sum[i][j] = A[i][j] + B[i][0];
        }
    }
    return sum;
}

double **multMatrix(double **A, double **B, int fa, int fb, int ca, int cb){
    double **C = initialize(fa,cb);
    if(ca != fb){
        printf("Por favor introduzca valores de ca y fb iguales para hacer la multiplicacion \n");
    }else{

        for (int a = 0; a < cb; a++){
            for (int i = 0; i < fa; i++){
                float sum = 0;
                for (int j = 0; j < ca; j++){
                    sum += A[i][j] * B[j][a];
                }
                C[i][a] = sum;
            } 
        } 

    }

    return C;
}

double **maxMatrix(double **A, double **B, int f, int c){
    double **res = initialize(f,c);
    for(int j = 0; j<f; j++){
        for(int i = 0; i<c; i++){
            if(A[j][i] > B[j][i]){
                res[j][i] = A[j][i];
            }else{
                res[j][i] = B[j][i];
            }
        }
    }
    return res;
}


double exponential(double x){
    double out=0;
    int n=15;
    for(int i=0;i<n;i++){
        out+=(pot(x,i)/factorial(i));
    }
    return out;
}

double **sigmoide(double ** A, int f, int c){
    double **out=initialize(f,c);
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            out[i][j]=1/(1+exponential(-A[i][j]));
        }
    }
    return out;
}



int factorial(int x){
    if (x == 1){
        return 1;
    }
    
    return (x * factorial(x-1));
}

double pot(double x, double i){
    double resultado = x;
    while (i > 1)
    {
        resultado = resultado * x;
        i--;
    }
    return resultado;
}
