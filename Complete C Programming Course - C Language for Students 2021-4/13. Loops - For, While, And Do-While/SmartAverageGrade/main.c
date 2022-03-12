#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade, totalSumOfGrades = 0, gradeCount = 0;
    float average = 0.0;
//    printf("Enter the grade (-1 to finish): ");
//    scanf("%d", &grade);
//
//    while (grade != -1)
//    {
//        totalSumOfGrades += grade;
//        gradeCount++;
//        printf("Enter the grade (-1 to finish): ");
//        scanf("%d", &grade);
//    }

    do
    {
        //system("clear");
        printf("Enter the grade (-1 to finish) nº %d: ", (gradeCount+1));
        scanf("%d", &grade);
        if (grade >= 0 && grade <= 20)
        {
            totalSumOfGrades += grade;
            gradeCount++;
        }
        else if (grade != -1)
        {
            printf("Please enter a valid grade. Try again\n");
        }

    }
    while (grade != -1);

    if (gradeCount > 0)
    {
        average = (float)totalSumOfGrades/gradeCount;
    }
    printf("You've entered %d grades!\n", gradeCount);
    printf("The average is: %.2f\n", average);

    return 0;
}
