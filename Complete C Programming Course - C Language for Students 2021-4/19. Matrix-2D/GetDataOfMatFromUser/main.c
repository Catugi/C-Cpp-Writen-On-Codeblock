#include <stdio.h>
#include <stdlib.h>

#define SIZE_X 3
#define SIZE_Y 2

int main()
{
    int mat[SIZE_X][SIZE_Y];
    for(int x = 0; x < SIZE_X; ++x)
    {
        for(int y = 0; y < SIZE_Y; ++y)
        {
            printf("Enter the element [%d][%d]: ", x, y);
            scanf("%d", &mat[x][y]);
        }
    }

    printf("Printing values: \n");
    for(int x = 0; x < SIZE_X; ++x)
    {
        for(int y = 0; y < SIZE_Y; ++y)
        {
            printf("Element [%d][%d] is %d\n", x, y, mat[x][y]);
        }
        printf("\n");
    }
    return 0;
}
