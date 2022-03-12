#include <stdio.h>
#include <stdlib.h>

char to_lower(char);
char to_upper(char);

int main()
{
    char letter = 'D';
    char letter1 = 'a';
    if(to_lower(letter) != -1)
        printf("%c\n", to_lower(letter));

    if(to_upper(letter1))
        printf("%c\n", to_upper(letter1));
    return 0;
}


char to_lower(char letter)
{
    if(letter >= 'A' && letter <= 'Z')
        return letter - 'A' + 'a';
    else if(letter >= 'a' && letter <= 'z')
        return letter;

    return -1;
}

char to_upper(char letter)
{
    if(letter >= 'A' && letter <= 'Z')
        return letter;
    else if(letter >= 'a' && letter <= 'z')
        return letter + 'A' - 'a';

    return -1;
}
