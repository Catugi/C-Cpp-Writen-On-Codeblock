#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_num, second_num, third_num;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &first_num, &second_num, &third_num);
    if((first_num==0)||(second_num==0)||(third_num==0))
        printf("Cannot divide numbers by zero\n");
    else if ( ( (first_num % second_num == 0) || (second_num % first_num == 0)) &&
              ((first_num % third_num == 0) || (third_num % first_num == 0)) &&
              ((second_num % third_num == 0) || (third_num % second_num == 0)))
    {
        printf("The Numbers are Divisible\n");
    }

    else
    {
        printf("Not divibles\n");
    }
    return 0;
}
