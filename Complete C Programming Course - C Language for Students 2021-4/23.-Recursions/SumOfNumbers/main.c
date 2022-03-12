#include <stdio.h>
#include <stdlib.h>

int sum_of_numbers_recu(int );
int sum_of_numbers_iter(int );
int sum_of_numbers_gauss(int );

int factorial_of_number_iter(int );
int factorial_of_number_recu(int );

int fibonacci(int);
void fibonacci_serie(int);

int sum_of_digits_recu(int);
int sum_of_digits_iter(int);

int count_digits_recu(int);
int count_digits_iter(int);

int main()
{
    int num = 10;
    int sum = sum_of_numbers_recu(num);
    printf("The sum of first %d numbers is %d\n", num, sum);
    printf("The factorial of %d is %d\n",num, factorial_of_number_recu(num));

    printf("\n%d\n", fibonacci(11));
    fibonacci_serie(12);
    num = 9531;
    printf("Sum of digits of %d is %d\n", num, sum_of_digits_recu(num));
    printf("%d has %d digits\n", num, count_digits_recu(num));

    return 0;
}

int sum_of_numbers_recu(int num)
{
    /*if(num == 1)
        return 1;
    return sum_of_numbers_recu(num-1) + num;*/
    if(num > 1)
        return num + sum_of_numbers_recu(num- 1);

    return 1;
}

int sum_of_numbers_iter(int num)
{
    int sum = 0, i;
    for(i = 1; i <= num; i++)
    {
        sum += i;
    }
    return sum;
}

int sum_of_numbers_gauss(int num)
{
    return num * (num + 1)/2;
}

int factorial_of_number_iter(int num)
{
    int factorial = 1, i;
    for(i = 2; i <= num; i++)
        factorial *= i;
    return factorial;
}

int factorial_of_number_recu(int num)
{
    if(num > 1)
        return num * factorial_of_number_recu(num -1);
    return 1;
}

int fibonacci(int num)
{
    if (num == 0)
        return 0;
    if(num == 1)
        return 1;
    return fibonacci(num - 2 ) + fibonacci(num - 1);
}

void fibonacci_serie(int num)
{
    int first = 0,
        second = 1,
        current, i;
    printf("%d %d ", first, second);
    for(i = 2; i < num; i++)
    {
        current = first + second;
        printf("%d ", current);
        first = second;
        second = current;
    }
    printf("\n");

}

int sum_of_digits_recu(int num)
{
    if(num > 9)
        return num % 10 + sum_of_digits_recu(num/10);
    return num;
}

int sum_of_digits_iter(int num)
{
    int sum = 0;
    while(num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}

int count_digits_recu(int num)
{
    if(num <= 9 )
        return 1;
    return 1 + count_digits_recu(num/10);
}

int count_digits_iter(int num)
{
    int total_digits = 1;
    while(num > 9)
    {
        total_digits++;
        num = num / 10;
    }
    return total_digits;
}
