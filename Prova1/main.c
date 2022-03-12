#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool Primo(int n)
{
    for(int i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool Perfeito(int n)
{
    int soma = 0;
    for(int i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
            soma += i;
    }
    if(soma == n)
    {
        return true;
    }

    return false;
}

int main()
{
//    for(int i = 1; i <= 1000; ++i)
//    {
//        if(Perfeito(i) && Primo(i) && (i % 2 == 1) && (i % 3 == 0))
//        {
//            for(int j = 1; j <= 12; j++)
//            {
//                printf("%d x %d = %d\n", i, j, i*j );
//            }
//        }
//    }
    for (int i = 2; i<= 1000; i++)
    {
        if(Primo(i))
        {
            printf("%d é Primo\n", i);
        }
        else if(Perfeito(i))
        {
            printf("%d é Perfetio\n",i);
        }
    }
    return 0;
}
