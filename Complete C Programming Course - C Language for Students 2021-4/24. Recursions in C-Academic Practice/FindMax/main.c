#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int find_max(int);
int find_min(int);

int main()
{
    int num;
    printf("Enter th qtd of sequence: ");
    scanf("%d", &num);
    int max = find_max(num);
    printf("The max of the sequence is %d\n", max);

    int min = find_min(num);
    printf("The min of the sequence is %d\n", min);
    return 0;
}

int find_max(int num)
{
    int x;
    int max ;
    printf("Enter a number: ");
    scanf("%d", &x);

    if(num > 1)
    {
        max = find_max(num - 1);
        if(x > max)
            return x;
        return max;
    }
    return x;
}

int find_min(int num)
{
    int x, min;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(num > 1)
    {
        min = find_min(num - 1);
        if(x < min)
            return x;
        return min;
    }
    return x;
}
