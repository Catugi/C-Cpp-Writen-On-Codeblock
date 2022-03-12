#include <stdio.h>
#include <stdlib.h>

int main()
{

    const int age = 26;
    int number = 23;
    const float height = 1.65f;

    int *const ptr = &number;
    const int *ptr1;
    const int *const ptr2 = &number;
    ptr1 = &number;
    //ptr = &age; //Error
    //*ptr1 = 27; //Error
    //*ptr2 = 25; //Error
    //ptr2 = &age; //Error
    printf("Age = %d, height = %10.2f\n", age, height);
    printf("\n%d %d %d\n", *ptr, *ptr1, *ptr2);
    return 0;
}
