#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, current_year;
    printf("Enter the current year: ");
    scanf("%d", &current_year);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You were born in %d\n", (current_year - age));
    return 0;
}
