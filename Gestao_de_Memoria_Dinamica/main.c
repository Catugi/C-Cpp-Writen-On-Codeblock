#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main()
{
    int x, *y;
    printf("Indique a quantidade de valores que pretende armazenar na lista: ");
    scanf("%d", &x);
    y = calloc(x, sizeof(int));
    for(int i = 0; i < x; ++i){
        fprintf(stdout, "Informe o valor da posição %d: ",i);
        fscanf(stdin, "%d", &y[i]);
    }
    for(int i = 0; i < x; ++i){
        printf("Valor da posição %d = %d\n", i, y[i]);
    }
    free(y);
    return 0;
}
