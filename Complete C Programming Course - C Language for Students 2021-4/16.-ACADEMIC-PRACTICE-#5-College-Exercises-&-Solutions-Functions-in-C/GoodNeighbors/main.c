#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 5

bool check_good_neighbors(int *, int);


int main()
{
    bool has_good_n;
    int i, arr[SIZE];
    for(i = 0; i < SIZE; i++)
    {
        printf("Enter the %dº Element: ", (i+1));
        scanf("%d", &arr[i]);
    }
    has_good_n = check_good_neighbors(arr, 5);
    if(has_good_n)
        printf("This array has a good neighbors\n");
    else
        printf("This array does not have any good neighbors\n");

    return 0;
}


bool check_good_neighbors(int *array, int size)
{
    bool has_good_neighbors = false;
    int i = 1,
        length = size - 1;
    for(; i < length; i++)
    {
        if(array[i] == (array[i-1]*array[i+1]))
        {
            has_good_neighbors = true;
            break;
        }
    }
    return has_good_neighbors;

}
