#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number, i = 2;
    printf("Enter a number: ");
    scanf("%d", &number);
    /*for (int i = 1; i <= number ; i++ )
    {
        printf("%d ", i*2);
    }
    printf("\n");*/
    while (number > 0)
    {
        printf("%d ", i);
        i += 2;
        number--;
    }
    printf("\n");

    return 0;
}
