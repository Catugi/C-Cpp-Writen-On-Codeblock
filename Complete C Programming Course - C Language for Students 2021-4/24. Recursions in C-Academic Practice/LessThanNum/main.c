#include <stdio.h>
#include <stdlib.h>

int numbers_less_than_num(int);

int appearances(char);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int less_than = numbers_less_than_num(num);
    printf("The total numbers less than %d in given numbers are %d\n", num, less_than);

    printf("\'a\' appears %d times in give sequence\n", appearances('a'));
    return 0;
}

int numbers_less_than_num(int num)
{
    int n;
    printf("Enter a num to the series: ");
    scanf("%d", &n);
    if( n == -1)
        return 0;
    /*return n < num ?
           numbers_less_than_num(num) + 1:
           numbers_less_than_num(num);*/
    if(n < num)
        return 1 + numbers_less_than_num(num);

    return numbers_less_than_num(num);
}

int appearances(char c)
{
    char next_c;
    printf("Enter a char \"$\" to stop: ");
    scanf(" %c", &next_c); // Or use getchar(); after this scanf for avoiding space
    //getchar();
    if(next_c == '$')
        return 0;
    if(next_c == c)
        return appearances(c) + 1;
    return appearances(c);
}
