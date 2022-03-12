#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int get_sum(int *, int);
void print_array(int *, int);

int main()
{
    int sum,
        *arr, num_element;
    printf("\n%.2lf\n\n", pow(2,8)); //If not working use -lm in compiler flags
    printf("Enter the number of elements of array: ");
    scanf("%d", &num_element);

    arr = calloc(num_element, sizeof(int));
    //memset(arr, 0, sizeof(int)*num_element);//Fill all the array with 0s
    //print_array(arr, num_element);

    if(arr == NULL)
    {
        printf("Unable to alocate memory\n");
        exit(-1);
    }
    for(int i = 0; i < num_element; i++)
    {
        printf("Enter the %dº element: ", 1+i);
        scanf("%d", &arr[i]);
    }
    sum = get_sum(arr, num_element);
    printf("The sum of { ");
    print_array(arr, num_element);
    printf("} is %d\n", sum);
    free(arr);
    return 0;
}


int get_sum(int *arr, int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}


void print_array(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
