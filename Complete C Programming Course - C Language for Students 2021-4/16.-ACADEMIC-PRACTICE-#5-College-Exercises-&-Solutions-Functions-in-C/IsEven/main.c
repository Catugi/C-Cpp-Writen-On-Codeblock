#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool is_even(int );
bool is_odd(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(is_odd(num))
        printf("The number %d is odd\n", num);
    else
        printf("The number %d is even\n", num);
    return 0;
}


bool is_even(int num)
{
    bool is_even_ = true;
    if(num % 2 != 0)
        is_even_ = false;
    return is_even_;
}
bool is_odd(int num)
{
    return !is_even(num);
}
