#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

ll get_pell_number_at_index_iter(int);
ll get_pell_number_at_index_recu(int);
void pell_number_sequence_printing(int);

int main()
{
    int num;
    printf("Enter a index (>= 0): ");
    scanf("%d", &num);
    if(num >= 0)
    {
        printf("The %dº term in pell sequence is: %lld\n", num,get_pell_number_at_index_recu(num));
        printf("Printing the sequence: ");
        pell_number_sequence_printing(num);
    }
    else
    {
        printf("Please enter a number >= 0\n");
    }
    return 0;
}


ll get_pell_number_at_index_iter(int num)
{
    ll first = 0,
       second = 1;
    size_t i;
    if(num == 0)
        return first;
    if(num == 1)
        return second;
    for(i = 2; i <= num; i++)
    {
        int temp = second;
        second = 2*second + first;
        first = temp;
    }
    return second;
}

ll get_pell_number_at_index_recu(int num)
{
    if(num == 0)
        return 0;
    if(num == 1)
        return 1;

    return (ll)get_pell_number_at_index_recu(num-1)*2 + get_pell_number_at_index_recu(num - 2);
}

void pell_number_sequence_printing(int num)
{
    int first = 0,
        second = 1, i = 0;
    do
    {
        printf("%d ", first);
        int temp = second;
        second = 2*second + first;
        first = temp;
        i++;
    }
    while(i <= num);
    printf("\n");
}
