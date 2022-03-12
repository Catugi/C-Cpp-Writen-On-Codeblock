#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int number;
    bool exit_ = false;
    char res;
    do
    {
        system("clear");
        printf("Enter the number (1-12): ");
        scanf("%d", &number);

        switch (number)
        {
        case 1:
            printf("January\n");
            break;

        case 2:
            printf("February\n");
            break;

        case 3:
            printf("March\n");
            break;

        case 4:
            printf("January\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("Outubre\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("Dece,ber\n");
        default:
            printf("Enter e valid month number\n");
            break;
        }

        printf("Again ? ");
        scanf(" %c", &res);
        if(res == 'N' || res == 'n')
            exit_ = true;
    }
    while (exit_ == false);

    return 0;
}
