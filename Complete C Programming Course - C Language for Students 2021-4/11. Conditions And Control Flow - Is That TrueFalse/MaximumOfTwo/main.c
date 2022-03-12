#include <stdio.h>
#include <stdlib.h>

int maximum(int x, int y)
{
    return x > y ? x : y;
 }

int main()
{
    int first_number, second_number;
    printf("Enter two numbers: ");
    scanf("%d %d", &first_number, &second_number);
    printf("Maximum is %d\n", maximum(first_number, second_number));
    return 0;
}
