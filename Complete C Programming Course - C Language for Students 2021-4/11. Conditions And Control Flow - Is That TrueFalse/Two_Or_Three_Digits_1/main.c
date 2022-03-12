#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if ((number >= 10 && number <= 99) || (number >= -99 && number <= -10))
    {
        printf("The number is two digits\n");
    }
    else if ((number >= 100 && number <= 999) || (number >= -999 && number <= -100))
    {
        printf("The number is three digits\n");
    }
    else
    {
        printf("The number is neither 'two-digits' nor 'three-digits'\n");
    }
    return 0;
}
