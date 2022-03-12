#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2;
    float dist;
    printf("Enter the first point (x, y): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the second point (x, y): ");
    scanf("%d %d", &x2, &y2);
    dist = sqrt(pow((x1 - x2), 2) + pow((y1-y2), 2));
    printf("The distance betwen (%d, %d) and (%d, %d) is %.2f\n", x1, y1, x2, y2, dist);
    return 0;
}
