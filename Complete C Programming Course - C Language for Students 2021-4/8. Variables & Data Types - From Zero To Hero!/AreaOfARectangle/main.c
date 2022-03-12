#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area, length, width;
    printf("%-18s", "Enter the length: ");
    scanf("%lf", &length);
    printf("%-18s", "Enter the width: ");
    scanf("%lf", &width);
    area = length * width;
    printf("The area of this rectangle is %0.2lf\n", area);
    return 0;
}
