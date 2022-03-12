#include <stdio.h>
#include <stdlib.h>

#define SIZE 9

int find_max(int *, int, int *);
int get_localion_of_max(int *, int);

int main()
{
    int i = 0, numbers[SIZE], _max, index;
    for(; i < SIZE; i++)
    {
        printf("Enter the %dº element: ", (i+1));
        scanf("%d", &numbers[i]);
    }
    _max = find_max(numbers, SIZE, &index);
    printf("The max element of given array is %d\n", _max);
    printf("The index of the max element is %d\n", index);
    printf("The index of the max element is %d\n", get_localion_of_max(numbers, SIZE));
    return 0;
}


int find_max(int *numbers, int size, int *index)
{
    int _max = numbers[0];
    *index = 0;
    for(int i = 1; i < size; i++)
        if(numbers[i] > _max)
        {
            _max = numbers[i];
            *index = i;
        }
    return _max;
}


int get_localion_of_max(int *numbers, int size)
{   int max_index = 0;
    for(int i = 1; i < size; i++)
        if(numbers[i] > numbers[max_index])
            max_index = i;
    return max_index;
}
