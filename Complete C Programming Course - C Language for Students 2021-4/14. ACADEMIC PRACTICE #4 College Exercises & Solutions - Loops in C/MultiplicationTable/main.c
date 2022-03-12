#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, multiplicator;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter the multiplicator: ");
    scanf("%d", &multiplicator);
    for (int i = 1; i <= multiplicator ; i++)
    {
        printf("%d x %2d = %-3d\n", number, i, number*i);
    }
    return 0;
}
