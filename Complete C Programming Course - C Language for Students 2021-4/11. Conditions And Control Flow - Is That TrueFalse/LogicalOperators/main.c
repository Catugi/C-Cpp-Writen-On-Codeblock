#include <stdio.h>
#include <stdlib.h>

int main()
{
    int money, grade;
    printf("Enter your money and grade: ");
    scanf("%d%d", &money, &grade);

    if (money < 50 && grade > 90)
    {
        printf("Give me more money\n");
    }

    if(money < 50 || grade > 90)
    {
        printf("Give me some money any way\n");
    }

    if(grade > 80)
    {
        printf("Good job...\n");
    }
    if(!(grade > 80))
    {
        printf("Study more...\n");
    }
    return 0;

}
