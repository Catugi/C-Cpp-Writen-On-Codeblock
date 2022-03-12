#include <stdio.h>
#include <stdlib.h>

#define NAMX 10

void func1();
void func2();
void set(int x[], int n);
void set_(int *x, int n);
int contar(const char *s);
int *solution(int *x);

int main()
{
    int x [5] = {123, 234, 456, 567, 678};
    double d[5] = {200.1, 200.2, 200.3, 200.4, 200.5};
    int *pi = &(x[2]);
    double *pd = &(d[1]);
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n====================Operações com ponteiros====================\n");
    printf("=Valor de pi = %p\n", pi);
    printf("Valor apontado por pi = %d\n", *pi);
    printf("=Valor de pi + 2 = %p\n", (pi+2));
    printf("Valor apontado por pi + 2 = %d\n", *(pi+2));
    printf("=Valor de pd = %pd\n", pd);
    printf("Valor apontado por pd = %f\n", *pd);
    printf("=Valor de pi - 2 = %p\n", pi-2);
    printf("Valor apontado por pd - 1= %f\n", *(pd-1));
    printf("=Valor apontado por pi-2 = %d\n", *(pi-2));
    printf("Valor de pd - 1 = %p\n", pd-1);
    printf("====================Operações com ponteiros====================\n");
    putchar('\n');
    double a = d[1] + x[3];
    printf("%.2f\n", a);
    func1();
    func2();
    printf("A palavra 'Fernando' tem %d caracteres\n", contar("Fernando"));
    int mm = 2;
    printf("%d", *(solution(&mm)));
    return 0;
}

void func1()
{
    int array[NAMX];
    for(int i = 0 ; i < NAMX; i++)
    {
        array[i] = i*(i+1);
    }
    for(int i = 0; i < NAMX; i++)
        printf("%d ", array[i]);
    putchar('\n');
}

void func2()
{
    int x[5] = {123,234,345,456,567};
    double y[3] = {200.0,200.1,200.2};
    const int TAM = 10;
    int arr[TAM];
    set(arr, TAM);
    set_(arr, TAM);
    int *pi1, *pi2, di;
    double *pd1, *pd2, dd;
    pi1 = &x[2]; //pi1 aponta para o endereço de &x[2]
    pi2 = &x[0]; //pi2 aponta para ondereço de &x[0]
    di = pi1 - pi2; //di recebe a diferença dos ponteiros pi1 e pi2 ou seja Quantas indices tem entre os endereços
    pd1 = &y[1]; //pd1 aponta para o endereço &y[1]
    pd2 = &y[3]; //pd2 aponta para um enderço inexistente. O valor é um lixo de memória
    dd = pd1 - pd2;
    printf("%d\n", di);
    printf("%f\n", dd);

}

void set(int x[], int n)
{
    for(int i = 0; i < n; i ++)
    {
        x[i] = i+1;
    }
}
void set_(int *x, int n)
{
    for (int i = 0; i < n; i++)
    {
        *x++ = i + 1;;
    }
}
int contar(const char *s)
{
    int cont = 0;
    while(*s++ != '\0')
        cont++;
    return cont;
}
 int *solution(int *x){
    int y = 234;
    *x = y*(*x)*2;
    return x;
 }
