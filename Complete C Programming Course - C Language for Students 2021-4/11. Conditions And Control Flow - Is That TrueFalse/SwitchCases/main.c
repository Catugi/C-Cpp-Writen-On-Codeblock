#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("Enter your grade (A-F): ");
    scanf(" %c", &grade);
    switch (grade)
    {
    case 'A':
        printf("Your grade is betwen 90-100\n");
        break;
    case 'B':
        printf("Your grade is betwen 80-89\n");
        break;
    case 'C':
        printf("Your grade is betwen 70-79\n");
        break;
    case 'D':
        printf("Your grade is betwen 60-69\n");
        break;
    case 'F':
        printf("Your grade is less than 60\n");
        break;
    default:
        printf("ERROR... Try again! \n");
        break;
    }

    return 0;
}
