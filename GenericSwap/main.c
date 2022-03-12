#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void GenericSwap(void *first, void *second, size_t size);

int main()
{
    int a = 23, b = 36;
    float c = 3.25, d = 2.55;

    printf("Antes da troca\na = %d b = %d\n", a, b);
    GenericSwap(&a, &b, sizeof(a));
    printf("Depois da troca\na = %d  b = %d\n", a, b);


    printf("Antes da troca\nc = %.2f d = %.2f\n", c, d);
    GenericSwap(&c, &d, sizeof(c));
    printf("Depois da troca\nc = %.2f  d = %.2f\n", c, d);

    return 0;
}

void GenericSwap(void *first, void *second, size_t size)
{
    void *temp = calloc(1, size);
    memcpy(temp, second, size);
    memcpy(second, first, size);
    memcpy(first, temp, size);
    free(temp);
}
