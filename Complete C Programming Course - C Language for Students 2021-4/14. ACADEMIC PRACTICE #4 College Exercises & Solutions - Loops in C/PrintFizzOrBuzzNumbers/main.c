#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum = 0, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    /*for(i = 3; i <= num; ++i)
    {
        if((i % 3 == 0) || (i % 5 == 0))
        {
            printf("%d can be divided by 3 or by 5\n", i);
            sum += i;
        }

    }*/

    //Best solution
    //Use two loops. One for 3 divisibles
    for (i = 3; i <= num; i += 3)
    {
        sum += i;
    }
    //Another for 5 divisibles
    for(i = 5; i <= num; i += 5)
    {
        if(i % 3 != 0)
            sum += i;
    }
    printf("The sum is %d\n", sum);
    return 0;
}
