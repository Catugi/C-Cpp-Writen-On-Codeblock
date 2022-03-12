#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    int numbers_of_rows, blank_spaces, current_value = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &numbers_of_rows);

    blank_spaces = numbers_of_rows - 1;

    for (i = 0; i < numbers_of_rows ; i++)
    {
        for(k = 0; k < blank_spaces; k++)
            printf(" ");
        for(j = 0; j < i; j++)
        {
            printf("%d ", current_value);
            current_value++;
        }
        printf("\n");
        blank_spaces--;

    }
    return 0;
}
