#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int *, int*);

typedef unsigned long int uli;

int main()
{
    int a = 5,
        b = 7;
    int *ptr_a = &a,
         *ptr_b = &b;
    printf("\n%.lf\n", pow(2, 10));
    printf("Before swap a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap a = %d, b = %d\n", a, b);

    printf("Value of a using ptr_a = %d\n", *ptr_a);
    printf("Value of b using ptr_b = %d\n", *ptr_b);

    printf("Address of a using ptr_a = %p\n", ptr_a);
    printf("Address of b using ptr_b = %p\n", ptr_b);

    //Here (this computer) a pointer teke 8 bytes
    printf("A point is also a variable: Address of ptr_a: %lu\n", (uli)&ptr_a);
    printf("A point is also a variable: Address of ptr_b: %lu\n", (uli)&ptr_b);

    printf("Address of a using &a = %p\n", &a);
    printf("Address of b using &b = %p\n", &b);

    if(ptr_a == &a && (a == *ptr_a))
        printf("Yes the address are the same.\nAnd a and *ptr_a hold the same values of course\n");
    if(ptr_b == &b && (b == *ptr_b))
        printf("Yes the address are the same.\nAnd b and *ptr_b hold the same values of course\n");
    return 0;
}

void swap(int *p_first, int *p_second)
{
    int temp = *p_first;
    *p_first = *p_second;
    *p_second = temp;
}
