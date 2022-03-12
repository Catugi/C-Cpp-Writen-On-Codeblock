#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, sum = 0, value;
    printf("Enter a number: ");
    scanf("%d", &num);
    //char name[10];
    //scanf("%9s", name);
    for(i = 1; i <= num; ++i)
    {
        printf("Enter a value: ");
        scanf("%d", &value);
        if(value % 2 != 0){
            sum += value;
        }
    }

    printf("The sum of the odds values is %d\n", sum);
    return 0;
}
