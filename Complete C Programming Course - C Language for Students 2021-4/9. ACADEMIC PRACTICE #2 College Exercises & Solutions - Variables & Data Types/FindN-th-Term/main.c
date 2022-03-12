#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d, a1, an, sn;
    int n;
    printf("Enter the first term o sequence: ");
    scanf("%f", &a1);
    printf("Enter the diference: ");
    scanf("%f", &d);
    printf("Enter number of term: ");
    scanf("%d", &n);

    an = a1 + (n-1)*d;

    printf("The n-th term is: %.1f\n", an);

    sn = (a1 + an)*n/2.0;
    printf("The sum of sequence is %.1f\n", sn);

    return 0;
}
