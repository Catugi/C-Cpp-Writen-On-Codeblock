#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade1, grade2, grade3;
    double avg;
    printf("Enter the grade1: ");
    scanf("%d", &grade1);

    printf("Enter the grade2: ");
    scanf("%d", &grade2);

    printf("Enter the grade3: ");
    scanf("%d", &grade3);

    avg = (double)(grade1 + grade2 + grade3)/3;
    printf("The average is %.2lf\n", avg);
    return 0;
}
