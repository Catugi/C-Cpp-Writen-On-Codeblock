#include <stdio.h>
#include <stdlib.h>

int char_to_numbers(char, char, char);

int main()
{
    char char_1, char_2, char_3;
    printf("Enter the characters: ");
    scanf(" %c %c %c", &char_1, &char_2, &char_3);
    printf("The resulting number is: %d\n", char_to_numbers(char_1, char_2, char_3));
    return 0;
}

int char_to_numbers(char first, char second, char third)
{
    int num = 0;
    if ((first >= 48 && first <= 57) &&
            (second >= 48 && second <= 57) &&
            (third >= 48 && third <= 57))
    {
        num = (first - '0')*100 + (second - '0')*10 + (third - '0');
    }

    return num;
}
