#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
//    if (year % 400 == 0)
//
//        printf("%d is leap year\n",year);
//
//    else if (year % 100 == 0)
//
//        printf("%d year is NOT leap year\n", year);
//
//    else if(year % 4 == 0)
//
//        printf("%d year is leap year\n", year);
//    else
//        printf("%d year is NOT leap year\n",year);


    if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        printf("%d is leap year\n",year);
    else
        printf("%d year is NOT leap year\n",year);
    return 0;
}
