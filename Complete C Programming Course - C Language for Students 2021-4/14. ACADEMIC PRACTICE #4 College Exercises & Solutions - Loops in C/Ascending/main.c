#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void read_value(int *, int );

int main(void)
{
    int sequence_size, last_term, next_term, i = 1;
    bool very_ascending = true;
    do
    {
        printf("Enter the sequence size of sequences: ");
        scanf("%d", &sequence_size);
    }
    while (sequence_size <= 0);

    read_value(&next_term, i);

    last_term = next_term;

    for(i = 2; i <= sequence_size; ++i)
    {
        read_value(&next_term, i);

        if(next_term < last_term)
        {
            very_ascending = false;
            break;
        }
        last_term = next_term;
    }
    if(very_ascending)
    {
        printf("Very ascending sequence\n");
    }
    else
    {
        printf("NOT Very Ascending Sequence\n");
    }
    return 0;
}

void read_value(int *value, int id)
{
    printf("Enter the term %d: ", id);
    scanf("%d", value);
}
