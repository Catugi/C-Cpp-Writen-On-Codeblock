#include <stdio.h>
#include <stdlib.h>

int soma(int, int );
int maior_3(int, int, int);
void troca(int *, int *);

/*Erros frequentes*/
void function2(int **p2, int b2);
void function1(int *p1, int b1);
void function_2(int *p2, int b2);
void function_1(int *p2, int b1);

/*int *func(int a)
{
    a *= 2;
    int *c = &a;
    return c; //A variável que está sendo retornado terá sido destruída depois que a função termina e é removida do escopo
}*/

//Solução
int *func(int *a)
{
    *a *= 2;
    return a;
}
/*Erros frequentes*/

int main()
{
    int x, y, z, w = 10, q = 11;
    int t, *u = func(&w);
    printf("===============================\n");
    t = 2 * (*u);
    printf("%d\n", t);
    printf("===============================\n");
    printf("Informe os valores para comparar: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("O maior é: %d\n", maior_3(x, y, z));
    printf("A soma dos valores é: %d\n", soma(x, soma(y,z)));
    printf("Soma dos valores e 10 + 11: %d \n", soma(soma(x, y), soma(z, soma(w,q))));
    printf("X = %d e Y = %d\n", x, y);
    troca(&x, &y);
    printf("Trocando os valores: X = %d e Y = %d\n", x, y);

    printf("Valores de q w z: %d %d %d\n", q, w, z);
    function1(&w, 5);
    printf("Valores de q w z: %d %d %d\n", q, w, z);
    function_1(&z, 10);
    printf("Valores de q w z: %d %d %d\n", q, w, z);
    return 0;
}


int soma(int x, int y )
{
    return x + y;
}
int maior_3(int x, int y, int z)
{
    if((x > y) && (x > z))
        return x;
    else
        return (y > z)? y: z;
}

void troca(int *x, int *y)
{
    int aux = *x;
    *x = *y;
    *y = aux;
}

/*
Utilização incorrecta (desnecessária)
de referências múltiplas.
*/

void function2(int **p2, int b2)
{
    **p2 = b2*(-b2);
}
void function1(int *p1, int b1)
{
    b1++;
    function2(&p1, b1);
}

/*
Utilização correcta de uma passagem
por referência entre vários nı́veis
de funções.
*/
void function_2(int *p2, int b2)
{
    *p2 = b2*(-b2);
}
void function_1(int *p1, int b1)
{
    b1++;
    function_2(p1, b1);
}
