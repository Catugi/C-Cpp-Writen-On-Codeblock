#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <Python.h>

void error(const char *s);

int main()
{
    int n, m;
    int **x;
    printf("Informe a quantidade de linhas da matriz: ");
    scanf("%d",&n);
    printf("Informe a quantidade de colunas da matriz: ");
    scanf("%d",&m);

    x = calloc(n, sizeof(int *));

    if(!x)
    {
        error("Error");
    }
    for(int i = 0; i < n; i++)
    {
        x[i] = (int *)calloc(m, sizeof(int));
        if(!x[i])
        {
            error("Error");
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            x[i][j] = 10*(i+1) + j;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(x[i][j] >= 10)
                printf("%d ",x[i][j]);
            else
                printf("0%d ",x[i][j]);
        }
        putc('\n', stdout);
    }
    for(int i = 0; i < m; i++)
    {
        free(x[i]);
    }
    free(x);

    return 0;
}
void error(const char *s)
{
    errno = ENOMEM;
    perror(s);
    errno = 0;
    exit(ENOMEM);
}
