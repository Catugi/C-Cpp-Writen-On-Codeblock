#include <stdio.h>
#include <stdlib.h>

void print_from_1_up_until_n(int);
void print_from_n_up_until_1(int);
void print_from_n_up_until_1_vice_versa(int );

int main()
{
    int num;
    printf("Informe um número: ");
    scanf("%d", &num);
//    printf("De 1 a até %d: ", num);
//    print_from_1_up_until_n(num);
//    printf("\n");
//    printf("De %d a até 1: ", num);
//    print_from_n_up_until_1(num);
//    printf("\n");
    print_from_n_up_until_1_vice_versa(num);
    printf("\n");
    return 0;
}

void print_from_1_up_until_n(int num)
{
    if(num > 0)
    {
        print_from_1_up_until_n(num-1);
        printf("%d ", num);
    }
}

void print_from_n_up_until_1(int num)
{
    if(num > 0)
    {
        printf("%d ", num);
        print_from_n_up_until_1(num-1);
    }
}


void print_from_n_up_until_1_vice_versa(int num)
{
    if(num == 1)
        printf("%d ", num);
    else
    {
        printf("%d ", num);
        print_from_n_up_until_1_vice_versa(num-1);
        printf("%d ", num);
    }
}
