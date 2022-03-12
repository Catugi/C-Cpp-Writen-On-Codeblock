#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_seconds, hours, minutes, remaining_seconds;
    printf("Enter the total of seconds: ");
    scanf("%d", &total_seconds);
    hours = total_seconds / 3600;
    minutes = (total_seconds - hours * 3600)/60;
    remaining_seconds = (total_seconds - hours*3600)%60;

    printf("There are: %d hours, %d minutes and %d seconds\n", hours, minutes, remaining_seconds);
    return 0;
}
