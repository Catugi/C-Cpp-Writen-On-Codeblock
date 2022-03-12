#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, reversed_num = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10;
        reversed_num = reversed_num*10 + digit;
        num = num / 10;
    }
    printf("The reversed number of %d is %d\n", num, reversed_num);
    return 0;
}
