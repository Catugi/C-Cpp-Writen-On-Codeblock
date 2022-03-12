#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int main()
{
    int mat[SIZE][SIZE];
    int x, y;
    for(x = 0; x < SIZE; ++x)
    {
        for(y = 0; y < SIZE; ++y)
        {
            mat[x][y] = (x+1)*(y+1);
        }
    }

    for(x = 0; x < SIZE; ++x)
    {
        for(y = 0; y < SIZE; ++y)
        {
            printf("%10d x %d = %d\n",(x+1), (y+1),mat[x][y]);
        }
        printf("\n");
    }

    return 0;
}

