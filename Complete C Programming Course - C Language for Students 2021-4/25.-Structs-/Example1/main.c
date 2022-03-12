#include <stdio.h>
#include <stdlib.h>

typedef struct date
{
    int8_t day ;
    int8_t month;
    int16_t year;
} Date ;

typedef struct point
{
    int x : 13;
    int y : 13;
} Point;

typedef struct address
{
    char province[20];
    char city[10];
    char street[50];
    int number;
} Address;

void print_date(Date);
Date read_date();
void print_next_date(Date date)
{
    date.day += 1;
    if(date.day > 31)
    {
        date.day = 1;
        date.month += 1;
        if(date.month > 12)
            date.year += 1;
    }
    printf("\nNext date: %d/%d/%d\n", date.day, date.month, date.year);
}

int main()
{
    Date date1, *date2;
    Point *point1;
    Address address1;
    date1.day = 31;
    date1.month = 12;
    date1.year = 2021;

    date2 = malloc(sizeof(Date));
    date2->day = 30;
    date2->month = 5;
    date2->year = 1995;

    point1 = malloc(sizeof(*point1));

    printf("=Size of Date: %zu\n=Size of Point: %zu\n=Size of Address %zu\n", sizeof date1, sizeof (*point1), sizeof address1);
    printf("%d/%d/%d\n", date2->day, date2->month, date2->year);
    printf("Address of date1: %p", &date1);

    printf("Enter the points x and y: ");
    int x, y;
    scanf("%d %d", &x, &y);
    point1->x = x;
    point1->y = y;
    printf("The given point is (%d, %d)\n", point1->x, point1->y);

    date1 = read_date();
    print_date(date1);
    print_next_date(date1);
    free(date2);
    free(point1);
    return 0;
}


void print_date(Date dt)
{
    printf("Given date is: %d/%d/%d\n", dt.day, dt.month, dt.year);
}

Date read_date()
{
    Date dt;
    printf("Enter the day (1-31): ");
    scanf("%hhd", &dt.day);
    printf("Enter the month (1-12): ");
    scanf("%hhd", &dt.month);
    printf("Enter the year (0-4096): ");
    scanf("%hd", &dt.year);
    return dt;
}
