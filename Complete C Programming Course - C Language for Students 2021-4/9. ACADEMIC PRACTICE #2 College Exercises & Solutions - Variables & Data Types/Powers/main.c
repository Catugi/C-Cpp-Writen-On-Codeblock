#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,
        x2, x4,
        x6, x8;
    printf("Enter a number: ");
    scanf("%d", &x);

    x2 = x * x;
    x4 = x2 * x2;
    x6 = x4 * x2;
    x8 = x4 * x4;
    printf("%d^2 = %d\n%d^4 = %d\n%d^6 = %d\n%d^8 = %d\n", x, x2, x, x4, x, x6, x, x8);
    return 0;
}
