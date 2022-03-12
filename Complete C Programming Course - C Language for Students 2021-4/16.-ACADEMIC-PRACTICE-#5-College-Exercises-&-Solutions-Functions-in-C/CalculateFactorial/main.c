#include <stdio.h>
#include <stdlib.h>

int get_factorial(int);

int main()
{
    int num,
        factorial;
    printf("Enter a number: ");
    scanf("%d", &num);
    factorial = get_factorial(num);
    if(factorial > -1)
        printf("The fatorial of %d is %d\n", num, factorial);
    else
        printf("Cannot calculate the factorial of a negative number %d\n", num);
    return 0;
}

int get_factorial(int num)
{
    int factorial = 1;
    if(num < 0)
        return -1;
     for(int i = 1; i <= num; i++)
        factorial *= i;
    return factorial;
}
