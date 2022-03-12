#include <stdio.h>
#include <stdlib.h>

int get_total_evens_and_theirs_sum(int *);
int get_sun_of_evens();

int main()
{
    int sum;
    int total_evens = get_total_evens_and_theirs_sum(&sum);
    printf("The total evens in given sequence numbers are %d\nAnd their sum is %d\n", total_evens, sum);
    return 0;
}


int get_total_evens_and_theirs_sum(int *ptr_sum)
{
    int num;
    static int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num == -1)
        return 0;
    if(num % 2 == 0)
    {
        sum += num;
        *ptr_sum = sum;
        return get_total_evens_and_theirs_sum(ptr_sum) + 1;
    }
    return get_total_evens_and_theirs_sum(ptr_sum);
}

int get_sun_of_evens()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num == -1)
        return 0;
    if(num % 2 == 0)
    {
        return get_sun_of_evens() + num;
    }
    return get_sun_of_evens();

}
