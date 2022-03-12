#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    if (grade >= 50)
    {
        printf("Congratulations - You passed\n");
    }else{
        printf("You failed! Please try again\n");
    }
    return 0;
}
