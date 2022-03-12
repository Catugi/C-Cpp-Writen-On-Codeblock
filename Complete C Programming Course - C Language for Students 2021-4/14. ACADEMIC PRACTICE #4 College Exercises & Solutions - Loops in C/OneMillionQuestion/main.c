#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//#define MILLION 1000000

int main()
{
    double /*quick_sum = 1000000,*/ total_amount = 0.01;

    for (int i = 1; i <= 30 ; ++i)
    {
        printf("Day %d: Amount %.2f\n",i, total_amount);
        total_amount *= 2;
    }

    printf("Total Amount of money after do days is: %.2f\n", total_amount);
    return 0;
}
