#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "array.h"


int main()
{
    struct Array arr1 = {{2,6,10,15,25},10,5};
//    int a;
//    fscanf(stdin, "%d", &a);
    struct Array arr2 = {{3,6,7,15, 20},10,5};
//    struct Array *arr3;
//    arr3=Union(&arr1,&arr2);
//    Display(*arr3);
//    arr3 = Intersection(&arr1, &arr2);
//    Display(*arr3);
//
//    arr3 = Difference(&arr1, &arr2);
//    Display(*arr3);
//
//    InsertSort(&arr1, 13);
//    Display(arr1);
//
//    Rearrange(&arr2);
//    Display(arr2);
    fprintf(stdout, "%d\n", getpid());
    sleep(5);
    return 0;
}
