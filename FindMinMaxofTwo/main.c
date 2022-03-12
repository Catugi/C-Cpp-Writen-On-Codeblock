#include <stdio.h>
#include <stdlib.h>

//Redox OS

void findMinMax(int, int, int *, int*);

int main()
{
    int x = 1, y = 10, max, min;
    findMinMax(x, y, &min, &max);
    printf("O maximo entre %d e %d eh %d\n", x, y, max);
    printf("O minimo entre %d e %d eh %d\n", x, y, min);
    return 0;
}

void findMinMax(int p_x, int p_y, int * p_ptrMin, int* p_ptrMax)
{

    if(p_x > p_y)
    {
        *p_ptrMax = p_x;
        *p_ptrMin = p_y;
    }
    else
    {
        *p_ptrMax = p_y;
        *p_ptrMin = p_x;
    }

}
