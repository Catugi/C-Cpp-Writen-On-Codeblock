#include <stdio.h>
#include <stdlib.h>

/*
    1st Quadrant x and y > 0
    2nd Quadrant x < 0 and y > 0
    3th Quadrant x and y < 0
    4th Quadrant x > 0 and y < 0
*/
int main()
{
    int x, y;
    system("clear");
    printf("Enter x and y (comma separete): ");
    scanf("%d %d", &x, &y);
    if(x > 0 && y > 0)
        printf("The point (%d, %d) is located in 1st Quadrant\n", x, y);
    else if(x < 0 && y < 0)
        printf("The point (%d, %d) is located in 3th Quadrant\n", x, y);
    else if(x < 0 && y < 0)
        printf("The point (%d, %d) is located in 3th Quadrant\n", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%d, %d) is located in 3th Quadrant\n", x, y);
    else
        printf("The point (%d, %d) is located in the Center\n", x, y);

    return 0;
}
