#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define SIZE 5

int get_largest_sum(int *, int, int *, int *);
void print_array(int *, int);

int main()
{
    int arr[SIZE],
        largest_sum, neighbour_1, neighbour_2;
    for(int i = 0; i < SIZE; i++)
    {
        printf("Enter the %dº element: ", i);
        scanf("%d", &arr[i]);
    }
    largest_sum = get_largest_sum(arr, SIZE, &neighbour_1, &neighbour_2);
    printf("The largest of adjacent values sum in { ");
    print_array(arr, SIZE);
    printf("} is: %d\n", largest_sum);
    printf("The neighbours used are %d and %d\n", neighbour_1, neighbour_2);
    return 0;
}


int get_largest_sum(int *arr, int size, int *value_1, int *value_2)
{
    int sum = arr[0]+arr[1],
        i = 1;
    *value_1 = arr[0];
    *value_2 = arr[1];
    for(; i <= size-2; ++i)
    {
        if((arr[i] + arr[i+1]) > sum)
        {
            sum = arr[i] + arr[i+1];
            *value_1 = arr[i];
            *value_2 = arr[i+1];
        }
    }
    return sum;
}


void print_array(int *arr, int size)
{
    for(int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
}
