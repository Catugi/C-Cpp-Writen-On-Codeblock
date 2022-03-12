#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "parameter.h"

int main()
{
    printf("Hello world!\n");
    int array[6] = {[2]=3, [4]=6};
    for(int i = 0; i<6; i++)
        printf("%d\n", array[i]);

    struct Rectangle rec = {2,5};
    printf("%d\n", calculateArea(rec));
    int first = 10;
    int second = 20;
    printf("Before swapping: first = %d and second = %d\n", first, second);
    swap(&first, &second);
    printf("After swapping: first = %d and second = %d\n", first, second);

    int arrayInt[] = {1,2,3,4,5,6,8,9,89};

    int length = sizeof(arrayInt)/sizeof(arrayInt[0]);
    fun(arrayInt, length);
    int *A = pointer(10);

    for(int i = 0; i< 10; ++i)
    {
        A[i] = i*2;
    }

    for(int i = 0; i< 10; ++i)
    {
        printf("%d\n", A[i]);
    }
    return 0;
}
