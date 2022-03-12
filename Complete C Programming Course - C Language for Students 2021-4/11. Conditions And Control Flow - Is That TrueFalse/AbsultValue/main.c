//#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0)
    {
        number *= -1;
    }
    printf("Absulte value: %d\n", number);
    return 0;
}
