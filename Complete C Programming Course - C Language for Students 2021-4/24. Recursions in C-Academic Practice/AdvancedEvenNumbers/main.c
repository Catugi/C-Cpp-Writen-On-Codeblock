#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/***
    Uma função que recebe um inteiro n, e pede ao usuario informar n's inteiros,
    e retorna true se a soma for par ou false se a soma for ímpar
***/

bool digits_sum_even_iter(int);
bool digits_sum_even_recu(int);

int main()
{
    int num;
    printf("Enter the number of term in sequence: ");
    scanf("%d", &num);
    if(digits_sum_even_recu(num))
        printf("The sum is even\n");
    else
        printf("The sum is odd\n");
    return 0;
}


bool digits_sum_even_iter(int num)
{
    int sum = 0;

    while(num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    if(sum % 2 == 0)
        return true;
    return false;

}

bool digits_sum_even_recu(int num)
{
    bool result;
    if(num < 10)
    {
        return num % 2 == 0 ? true : false;
    }
    result = digits_sum_even_recu(num / 10);

    if((num % 10) % 2 == 0)
    {
        return result ? true : false;
    }
    else
    {
        return result ? false : true;
    }
}
