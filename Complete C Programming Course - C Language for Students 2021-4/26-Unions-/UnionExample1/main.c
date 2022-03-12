#include <stdio.h>
#include <stdlib.h>

typedef union
{
    int m1,
        m2;
} MyUnion;

typedef union
{
    char first_name[20];
    int age;
} Info;

int main()
{
    MyUnion myu;
    myu.m1 = 3;
    printf("%d\n", myu.m2);
    myu.m2 = 2;
    printf("%d\n", myu.m1);
    printf("Address of m1 = %p\n", &myu.m1);
    printf("Address of m2 = %p\n", &myu.m2);
    printf("Size of MyUnion = %zu\n", sizeof(myu));
   // printf("%d", (int)('1'-'0'));
    return 0;
}
