#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    int temp = number;
    while (temp > 0)
    {
        sum += temp;
        temp--;
    }

    /*for (int i = 1; i <= number ; ++i)
    {
        sum += i;
    }

    sum = number*(number + 1)/2;
    */
    printf("The sum from 1 up to %d is %d\n", number, sum);
    return 0;
}
