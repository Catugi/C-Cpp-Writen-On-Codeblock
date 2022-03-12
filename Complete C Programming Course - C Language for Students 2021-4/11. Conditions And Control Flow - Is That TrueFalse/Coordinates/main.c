#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Enter x and y (comma separete): ");
    scanf("%d %d", &x, &y);
    if(x > 0)
    {
        if (y > 0)
        {
            printf("1st Quadrant\n");
        }
        else
        {
            printf("4th Quadrant\n");
        }
    }
    else
    {
        if (y > 0)
        {
            printf("2nd Quadrant\n");
        }
        else
        {
            printf("3th Quadrant\n");
        }
    }
    return 0;
}
