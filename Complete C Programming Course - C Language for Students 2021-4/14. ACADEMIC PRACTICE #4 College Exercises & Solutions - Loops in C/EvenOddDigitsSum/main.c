#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value, sum_even_digits = 0, sum_odd_digits = 0;
    printf("Enter a number: ");
    scanf("%d", &value);

    int temp;

    while (value > 0)
    {
        temp = value % 10;
        if(temp % 2 == 0)
            sum_even_digits += temp;
        else
            sum_odd_digits += temp;
        value = value/10;
        //printf("%d ", temp);

    }
    printf("\n");
    printf("Even sum = %d Odd Sum = %d\nThe diference is %d - %d = %d\n",sum_even_digits,
           sum_odd_digits,
           sum_even_digits,
           sum_odd_digits,
           (sum_even_digits - sum_odd_digits));

    return 0;
}
