#include <stdio.h>
#include <stdlib.h>

int max_of_2_digits(int);

int main()
{
    printf("Enter a two digits number: ");
    int num;
    scanf("%d", &num);
    int res = max_of_2_digits(num);
    if(res>0)
    {
        printf("The max of two digits is %d\n", res);
    }
    else
    {
        printf("This is not a 2-digits number\n");
    }
    return 0;
}


int max_of_2_digits(int n)
{
    if((n <  10 && n > 99) || (n < -99 && n > -10))
    {
        return 0;
    }
    else
    {
        int first = n%10;
        int second = (n/10)%10;
        return first > second ? first : second;
    }
}
