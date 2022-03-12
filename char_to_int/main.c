#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[] = "abcdefghijklmnopqrstuvxwyz";
    size_t len = strlen(nome);
    char arrayint[len];
    int i = 0;
    printf("%zu\n", len);
    while(i < len)
    {
        arrayint[i] = nome[i];
        i++;
    }

    printf("%s\n", nome);
    for(int i = 0; i < len; i++)
    printf("%d ", arrayint[i]);
    putchar('\n');
    return 0;
}
