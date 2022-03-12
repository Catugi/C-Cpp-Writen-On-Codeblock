#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    while(i <= number)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    for (int i = number; i >= 1; --i)
    {
        printf("%d ", i);
    }
    return 0;
}
