#include <stdio.h>
#include <stdlib.h>

void insert_sort(int *, int);

int main()
{
    int array[10] = {1,3, 11, 6, 4, 7, 9,8, -2, 5};

    insert_sort(array, 10);

    for(int i = 0; i < 10; i++)
        printf("%d\n", array[i]);
    return 0;
}

void insert_sort(int *p_array, int p_size)
{
    int i, j, key;
    for(i = 1; i < p_size; ++i)
    {
        key = p_array[i];
        j = i - 1;
        while (j >= 0 && p_array[j] > key)
        {
            p_array[j+1] = p_array[j];
            j--;
        }
        p_array[j+1] = key;
    }

}
