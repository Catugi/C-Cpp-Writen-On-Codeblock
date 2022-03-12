#include <stdio.h>
#include <stdlib.h>

#define SIZE_X 3
#define SIZE_Y 3

typedef long unsigned int lui;

void print_mat(int mat[SIZE_X][SIZE_Y]);
void print_address(int mat[SIZE_X][SIZE_Y]);

int main()
{
    /*int mat1[SIZE_X][SIZE_Y] =
    {
        {5, 6},
        {7},
    };*/
    int mat2[SIZE_X][SIZE_Y] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    /*
    double mat3[SIZE_X][SIZE_Y] = {
        {},
        {5.2, 1.0},
        {3.3},
    };*/
    //int mat4[SIZE_X][SIZE_Y] = {1, 2, 3, 4, 5, 7}; //This not a good aproach
    //print_mat(mat4);
    print_address(mat2);
    return 0;
}

void print_mat(int mat[SIZE_X][SIZE_Y])
{
    int x = 0;
    while(x < SIZE_X)
    {
        for(int y = 0; y < SIZE_Y; ++y)
        {
            printf("%d ", mat[x][y]);
        }
        printf("\n");
        ++x;
    }
}

void print_address(int mat[SIZE_X][SIZE_Y])
{
    int x;
    for(x = 0; x < SIZE_Y; x++)
    {
        for(int y = 0; y < SIZE_Y; y++)
        {
            printf("The address of mat[%d][%d] = %lu\n", x, y, (lui)&mat[x][y]);
        }
        printf("\n");
    }
}
