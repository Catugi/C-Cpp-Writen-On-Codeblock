#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    int *my_vect = NULL;
    int qtd;
    char res = 0;
    printf("Informe aquantidade de elementos do vector ");
    scanf("%d", &qtd);
    my_vect = calloc(qtd, sizeof(int));
    if(my_vect == NULL)
    {
        errno = ENOMEM;
        perror("Error");
        errno = 0;
        _exit(ENOMEM);
    }
    for(int i = 0; i < qtd; i++)
    {
        printf("Informe o valor da posição %d ", i);
        scanf("%d", &my_vect[i]);
    }
    printf("Pretende aumentar o tamanho? (S/N) :");
    fflush(stdin);
    fscanf(stdin, " %c", &res);
    if(res == 'S')
    {
        int new_qtd;
        printf("Informe a quantidae que pretende adicionar: ");
        scanf("%d", &new_qtd);
        my_vect = realloc(my_vect, (qtd+new_qtd)*sizeof(int));
        if(!my_vect)
        {
            errno = ENOMEM;
            perror("Error");
            errno = 0;
            _exit(ENOMEM);
        }
        for(int i = qtd; i < new_qtd; i++)
        {
            printf("Informe o valor da posição %d ", i);
            scanf("%d", &my_vect[i]);
        }
        for(int i = 0; i < (qtd+new_qtd); i++)
        {
            printf("Valor da posição %d ", my_vect[i]);
        }
        printf("%c",'\n');
    }
    free(my_vect);
    return 0;
}
