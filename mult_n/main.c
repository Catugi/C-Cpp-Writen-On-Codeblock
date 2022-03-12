#include <stdio.h>

void mult_n(int n, int m);

int main()
{
    int n, m;
    printf("Digite os números (divisor e limite dos múltiplos: ");
    scanf("%d %d", &n, &m);
    mult_n(n, m);
    return 0;
}

void mult_n(int n, int m)
{
    for(int i = n; i <= m; i++)
    {
        if(i % n == 0)
        {
            printf("%d é múltiplo de %d\n", i, n);
        }
    }
}
