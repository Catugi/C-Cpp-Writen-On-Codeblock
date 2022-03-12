#include "parameter.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *first, int *second)
{
    int tmp;
    tmp = *first;
    *first = *second;
    *second = tmp;

}

int *pointer(int n)
{
    int *P = (int*)calloc(n, sizeof(int));
    memset(P, 0, sizeof(int));
    return P;
}

void fun(int *arrayInt, int quantity)
{
    for(int i =0; i<quantity; i++)
    {
        printf("%d\n", arrayInt[i]);
    }
}
