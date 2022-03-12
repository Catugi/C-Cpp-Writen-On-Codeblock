#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
    Recebe um valor "num" e retorna "true" se todos os valores na posição ímpar têm valores ímpares e os da posição par
    têm valores par. Em outro caso retorna "false"
*/

bool even_odd_func(int);

int main()
{
    bool result = even_odd_func(466);
    if(result)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}

bool even_odd_func(int num)
{
    if(num < 10)
        return num % 2 == 0 ? true : false;
    if(num < 100)
    {
        if((num % 10) % 2 == 0 && (num / 10) % 2 == 1)
            return true;
        else return false;
    }
    if(((num % 10) % 2 == 0) && (((num /10 ) % 10) % 2 == 1))
        return even_odd_func(num/100);
    else return false;
}
