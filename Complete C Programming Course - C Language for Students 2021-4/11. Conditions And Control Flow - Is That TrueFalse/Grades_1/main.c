#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    if (grade >= 80)
    {
        printf("Excellent job!\n");
    }
    else if (grade >= 60)
    {
        printf("Not bad...\n");
    }
    else
    {
        printf("Oh.. You failed.. Do your best next time\n");
    }
    return 0;
}
