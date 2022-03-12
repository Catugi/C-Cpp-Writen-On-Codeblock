#include <stdio.h>
#include <stdlib.h>
#define NLIN 3
#define NCOL 2
void maxMat(float y[], float a[][NCOL]);
float maxVec(float *vec, int n);
void printVec(float mat[], int TAM);

int main()
{
    //Declaração de uma matriz
    float m_f[3][2];
    float m_f1[3][2] =
    {
        {1.1, 2.2},
        {3.3,4.4},
        {5.5,6.6}
    };

    float y[3];
    printf("===========================================================\n");

    maxMat(y, m_f1);
    printf("Os maiores valores de cada linha são:\n");
    printVec(y, 3);
    putchar('\n');
    printf("===========================================================\n");

    for(int i = 0; i < 3; i++)
        for(int y = 0; y < 2; y++)
            m_f[i][y] = 0.0;

    for(int i = 0; i < 3; i++)
    {
        printVec(m_f[i], 2);
        putchar('\n');
    }

    for(int i = 0; i < 3; i++)
    {
        printVec(m_f1[i], 2);
        putchar('\n');
    }
    return 0;
}

void maxMat(float y[], float a[][NCOL])
{
    for(int k = 0; k < NLIN; k++)
    {
        y[k] = maxVec(a[k], NCOL);
    }
}

float maxVec(float *vec, int n)
{
    float m;
    m = vec[0];
    for(int i = 1; i < n; ++i)
    {
        m = (vec[i] > m ? vec[i] : m);
    }
    return m;
}
void printVec(float mat[], int TAM)
{
    for(int i = 0; i < TAM; i++)
    {
        printf("%.1f ", mat[i]);
    }
}
