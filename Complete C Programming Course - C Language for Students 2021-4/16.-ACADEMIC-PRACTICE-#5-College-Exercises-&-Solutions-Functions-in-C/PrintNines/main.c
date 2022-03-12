#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef long long ll;

ll sequences(int);

ll nines_numbers(int);


int main()
{
    int length;
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Result = %lld\n", sequences(length));
//    printf("%d\n", INT_MAX);
    return 0;
}


ll nines_numbers(int length)
{
    ll nines = 0;
    if(length < 0)
        return -1;
    for(int i = 0; i < length; i++)
    {
        nines = nines*10 + 9;
    }
    return nines;
}


ll sequences(int length)
{
    ll num = 0;
    if(length < 0)
        return -1;
    if(length <= 9)
    {
        for(int i = 1;i <= length; ++i)
        {
            num = num*10 + i;
        }
    }
    else
    {
        num = nines_numbers(length);
    }
    return num;
}
