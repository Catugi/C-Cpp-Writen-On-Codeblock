#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_of_ateristics;
    printf("Enter the numbers of asterisitcs: ");
    scanf("%d", &number_of_ateristics);
    while (number_of_ateristics >= 1)
    {
        printf("*");
        number_of_ateristics--;
    }
    return 0;
}
