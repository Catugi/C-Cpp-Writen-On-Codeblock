#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

ll lucas_sequence_iter(int );
ll lucas_sequence_recu(int);

void lucas_sequence_printing(int);

int main()
{
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    lucas_sequence_printing(num);

    printf("The term of index %d is: %lld", num, lucas_sequence_iter(num));
    return 0;
}

void lucas_sequence_printing(int num)
{
    ll first = 2,
       second = 1, temp;
    size_t i = 0;
    do
    {
        printf("%lld ", first);
        temp = second;
        second += first;
        first = temp;
        i++;
    }
    while(i <= num);
    printf("\n");
}

ll lucas_sequence_recu(int num)
{
    if(num  == 0)
        return 2;
    if (num == 1)
        return 1;
    return lucas_sequence_recu(num-1) + lucas_sequence_recu(num - 2);
}

ll lucas_sequence_iter(int num)
{
    ll first = 2,
       second = 1, next;
    size_t i;
    if(num == 0)
        return first;
    if(num == 1)
        return second;
    for(i = 2; i <= num; ++i)
    {
        next = first + second;
        first = second;
        second = next;
    }
    return next;
}
