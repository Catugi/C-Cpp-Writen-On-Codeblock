#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 1000 && number > -1000)
    {
        if(number > 99 || number < -99)
        {
            printf("The number has three digits\n");
        }
        else if(number > 10 || number < -10)
        {
            printf("The number has two digits\n");
        }
        else
            printf("It does not satisfy the conditions\n");
    }
    else
        printf("It does not satisfy the conditions\n");
    return 0;
}
