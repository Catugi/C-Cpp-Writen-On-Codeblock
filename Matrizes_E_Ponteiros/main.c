#include <stdio.h>
#include <stdlib.h>

#define LIN 4
#define COL 3

void printMat(int (*x)[COL]);

int main()
{
    int x[4][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9},  {10, 11, 12}};
    printMat(x);
    return 0;
}

void printMat(int (*x)[COL])
{
    for(int i = 0; i < LIN; ++i)
    {
        for(int y = 0; y < COL; ++y)
        {
            if(x[i][y] < 10)
                printf("0%d ", (*x+i)[y]);
            else
                printf("%d ", x[i][y]);
        }
        putchar('\n');
    }
}
