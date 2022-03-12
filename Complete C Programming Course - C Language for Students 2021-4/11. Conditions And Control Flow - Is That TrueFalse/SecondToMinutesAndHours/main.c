#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seconds, hours, minutes, remaining_seconds;
    printf("Enter the number in seconds: ");
    scanf("%d", &seconds);
    hours = seconds/3600;
    minutes = (seconds - hours*3600)/60;
    remaining_seconds = (seconds - hours*3600)%60;
    {
        if(hours < 10)
            printf("0");
        printf("%d : ", hours);
        if(minutes < 10)
            printf("0");
        printf("%d : ", minutes);
        if(remaining_seconds< 10)
            printf("0");
        printf("%d\n", remaining_seconds);
    }

    return 0;
}
