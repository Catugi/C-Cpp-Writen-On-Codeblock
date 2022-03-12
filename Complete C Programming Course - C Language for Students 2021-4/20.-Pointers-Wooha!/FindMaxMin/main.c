#include <stdio.h>
#include <stdlib.h>

void max_min(int, int, int *, int *);

int main()
{
    int first,
        second, min, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &first, &second);
    max_min(first, second, &min, &max);
    printf("The max value is: %d\nThe min value is: %d\b", max, min);
    return 0;
}

void max_min(int first, int second, int *ptr_min, int *ptr_max)
{
    if(first > second)
    {
        *ptr_max = first;
        *ptr_min = second;
    }
    else
    {
        *ptr_max = second;
        *ptr_min = first;
    }
}
