#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int number;
    bool exit = false;
    char res;
    do
    {

        printf("Enter a number: ");
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            printf("Number %d is even\n", number);
        }
        else
        {
            printf("Number %d is odd\n", number);
        }
        printf("Continue? (Y/N) ");
        scanf(" %c", &res);
        if (res == 'N' || res == 'n')
        {
            exit = true;
        }

    }
    while (exit != true);
    return 0;
}
