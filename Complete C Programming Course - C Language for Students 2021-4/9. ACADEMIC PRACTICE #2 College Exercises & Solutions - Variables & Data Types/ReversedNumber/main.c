#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, reversed_num,
        units, tens, hundreds;

    printf("Enter a 3-digits number: ");
    scanf("%d", &num);

    units = num % 10;
    tens = (num / 10) % 10;
    hundreds = num / 100;
    reversed_num = 10*(10*units + tens) + hundreds;
    printf("The reversed number of %d is %d \n", num, reversed_num);

    return 0;
}
