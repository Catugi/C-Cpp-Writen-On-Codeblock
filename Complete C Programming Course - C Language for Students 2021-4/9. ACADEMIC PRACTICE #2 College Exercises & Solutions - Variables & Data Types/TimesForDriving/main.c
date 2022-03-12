#include <stdio.h>
#include <stdlib.h>

/*
    distance = speed * time
    time = distance / speed
*/

int main()
{
    int speed, //KM/H
        distance ;// H
    printf("Enter the distance: ");
    scanf("%d", &distance);
    printf("Enter the speed: ");
    scanf("%d", &speed);
    int hours = distance / speed;
    float speed_per_minute = speed/60.0;
    int remaining_minutes = (distance % speed)/speed_per_minute;
    printf("The time taken for complete the travel is %d hours and %d minutes\n", hours , remaining_minutes);
        return 0;
}
