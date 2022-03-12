#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

void swap_array_O1(int **, int **);
void print_array(int *, int);

int *generate_array_of_ints(int);

int main()
{
    int array_size1,
        array_size2,
        *arr1, *arr2;
    //printf("\n\n%.2lf %.2lf %.2lf\n\n", sqrt(4), pow(2,4), sin(45));
    printf("Enter the size of array 1: ");
    scanf("%d", &array_size1);
    printf("Enter the elements of array 1\n");
    arr1 = generate_array_of_ints(array_size1);

    if(arr1 == NULL)
    {
        printf("Unable to alocate memory\n");
        exit(-1);
    }

    printf("Enter the size of array 2 (must be the same as previous): ");
    scanf("%d", &array_size2);
    printf("Enter the elements of array 1\n");
    arr2 = generate_array_of_ints(array_size2);
    if(arr2 == NULL)
    {
        printf("Unable to alocate memory\n");
        exit(-1);
    }


    printf("Before Swapping:\n");
    print_array(arr1, array_size1);
    print_array(arr2, array_size2);

    swap_array_O1(&arr1, &arr2);

    printf("After Swapping:\n");
    print_array(arr1, array_size1);
    print_array(arr2, array_size2);
    return 0;
}

void swap_array_O1(int **ptr_array1, int **ptr_array2)
{
    void *temp;
    temp = *ptr_array1;
    *ptr_array1 = *ptr_array2;
    *ptr_array2 = temp;
}


void print_array(int *arr, int size)
{
    int i = 0;
    for(; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int *generate_array_of_ints(int size)
{
    int *arr = (int *)calloc(size, sizeof(*arr));
    if(arr == NULL)
        return NULL;
    int i = 0;
    for(; i < size; i++)
    {
        printf("Enter the %dº element: ", (i + 1));
        scanf("%d", &arr[i]);
    }
    return arr;
}
