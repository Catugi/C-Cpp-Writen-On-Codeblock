#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salary_per_hour, total_salary;
    int days_worked_in_month;
    printf("Enter your salary on hour: ");
    scanf("%f", &salary_per_hour);
    printf("Enter how many days worked in month: ");
    scanf("%d", &days_worked_in_month);
    total_salary = salary_per_hour * days_worked_in_month;
    printf("The total salary is %.2f\n", total_salary);
    return 0;
}
