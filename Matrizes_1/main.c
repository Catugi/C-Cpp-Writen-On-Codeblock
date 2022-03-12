#include <stdio.h>
#include <stdlib.h>

#define M_LIN 3
#define M_COL 2
void printVec(float mat[], int TAM);

void matVecProd(float y[],float A[][M_COL],float x[]);
float prodInt(float a[],float b[],int n);

int main()
{
    float A[M_LIN][M_COL] = {{1,2},{3,4},{5,6}};
    float x[M_COL] = {10,20};
    float y[M_LIN];
    matVecProd(y, A, x);
    printVec(y, M_LIN);
    return 0;
}

void matVecProd(float y[],float A[][M_COL],float x[])
{
    for(int i = 0; i < M_LIN; ++i)
    {
        y[i] = prodInt(A[i], x, M_COL);
    }
}
float prodInt(float a[],float b[],int n)
{
    float sum = 0.0;
    for(int i = 0; i < n; ++i)
    {
        sum += a[i] * b[i];
    }
    return sum;
}

void printVec(float mat[], int TAM)
{
    for(int i = 0; i < TAM; i++)
    {
        printf("%.1f ", mat[i]);
    }
}

