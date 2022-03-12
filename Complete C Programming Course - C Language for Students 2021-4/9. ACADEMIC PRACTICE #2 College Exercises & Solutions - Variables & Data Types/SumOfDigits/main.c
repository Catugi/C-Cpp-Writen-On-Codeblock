#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,
        sum=0, units, tens, hundreds;
    printf("Enter a 3-digits number: ");
    scanf("%d", &num);
    units = num % 10;
    tens = (num / 10)%10;
    hundreds = num / 100;
    sum = units + tens + hundreds;
    printf("The sum of digits is %d\n", sum);
    return 0;
}
