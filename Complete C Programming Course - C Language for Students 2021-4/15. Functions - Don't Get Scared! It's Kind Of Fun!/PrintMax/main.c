#include <stdio.h>
#include <stdlib.h>

void print_max(int, int);
int max_betwen_3(int, int, int);
float avg_betwen_3(int, int, int);

int main()
{
    int x, y, z;
    system("clear");
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    print_max(x, y);

    printf("Enter the third value: ");
    scanf("%d", &z);
    printf("The max betwen %d, %d and %d is %d\n", x, y, z, max_betwen_3(x, y, z));
    printf("The average is %.2f\n", avg_betwen_3(x, y, z));

    return 0;
}

void print_max(int x, int y)
{
    // printf("The max is %d\n", x > y ? x : y);
    if (x > y)
    {
        printf("The max is %d\n", x);
        printf("The min is %d\n", y);
    }
    else
    {
        printf("The max is %d\n", y);
        printf("The max is %d\n", x);
    }
}
int max_betwen_3(int x, int y, int z)
{
    int max = x;
    if (y > max)
    {
        max = y;
    }
    if (max < z)
    {
        max = z;
    }
    return max;
}

float avg_betwen_3(int x, int y, int z)
{
    float avg;
    avg = (x + y + z) / 3.0;
    return avg;
}