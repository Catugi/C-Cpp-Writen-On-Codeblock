#include <stdio.h>
#include <stdlib.h>

float findArea(float, float);

int main()
{
    float height, width,
        area;
    system("clear");
    printf("Enter the height: ");
    scanf("%f", &height);
    printf("Enter the width: ");
    scanf("%f", &width);

    area = findArea(height, width);
    printf("The area is %.2f\n", area);
    return 0;
}

float findArea(float height, float width)
{
    float area = height * width;
    return area;
}