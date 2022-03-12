#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first, second;
    printf("Enter two numbers: ");
    scanf("%d %d", &first, &second);

    printf("Before swap:\nFirst = %d Second = %d\n", first, second);

    int temp = first;
    first = second;
    second = temp;
    printf("Before swap:\nFirst = %d Second = %d\n", first, second);
    return 0;
}
