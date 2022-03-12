#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Perfeito(int n)
{
    bool perfeito = false;
    int soma = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            soma += i;
        }
    }
    if (soma == n)
        perfeito = true;
    return perfeito;
}

int somatoria(int n)
{
    int soma = 0;
    for(int i = 1; i<=n; i++)
    {
        soma+=i;
    }
    return soma;
}

void Leitura()
{
    int n;
    do
    {
        scanf("%d", &n);
        if(n>10)
        {
            printf("%d é maior que 10\n", n);
        }
        else if(n<10)
        {
            printf("%d é menor que 10\n", n);
        }
        else
        {
            printf("10 é igual 10\n");
        }
    }
    while (n > 0);
}
int main()
{
    //    int n = 100;
    //    for(int x = 2; x <=n; x++)
    //    {
    //        bool pr = true;
    //        for(int i = 2; i < x; ++i)
    //        {
    //            if(x%i == 0)
    //            {
    //                pr=false;
    //                break;
    //            }
    //        }
    //        if(pr==true)
    //        {
    //            printf("%d é primo\n",x);
    //        }
    //    }
//    for (int i = 2; i <= 100; i++)
//    {
//        if (Perfeito(i))
//        {
//            printf("%d é perfeito\n", i);
//        }
//    }
    Leitura();

}
