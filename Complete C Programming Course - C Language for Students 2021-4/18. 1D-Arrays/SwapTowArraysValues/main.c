#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void swap(int *, int *);
void swap_array_ON(int *, int *, int);
void print_array(int *,  int);

int main()
{
    int arr1[SIZE] = {1, 2, 3, 4, 6};
    int arr2[SIZE] = {3, 5, 8, 7, 9};

    printf("Before swapping: \nArray1: ");
    print_array(arr1, SIZE);
    printf("\nArray2: ");
    print_array(arr2, SIZE);
    printf("\n");
    swap_array_ON(arr1, arr2, SIZE);
    printf("After swapping: \nArray1: ");
    print_array(arr1, SIZE);
    printf("\nArray2: ");
    print_array(arr2, SIZE);
    printf("\n");
    return 0;
}

void swap(int *first, int *second)
{
    *first += *second;
    *second = *first - *second;
    *first -= *second;
}

void swap_array_ON(int *arr1, int *arr2, int size)
{
    for(int i = 0; i < size; i++)
    {
        swap(&arr1[i], &arr2[i]);
    }
}


void print_array(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
