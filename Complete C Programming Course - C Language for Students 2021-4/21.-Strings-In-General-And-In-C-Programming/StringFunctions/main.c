#include <stdio.h>
#include <stdlib.h>

size_t strlen_(char *);
size_t number_of_words(char *);

int main()
{
    char text[50];
    //char name[25];
    //printf("Enter a name: ");
    //fgets(name, 19, stdin);
    //printf("The length of your name is: %zu\n", strlen_(name));
    //printf("Name given: %s\n", name);

    printf("Enter a long text with spaces: ");
    fgets(text, 49, stdin);
    //gets(text);
    printf("The word entered has %zu words\n", number_of_words(text));
    return 0;
}


size_t strlen_(char *str)
{
    size_t len = 0;
    while(*str++ != '\0')
    {
        len++;
    }

    return len;
}


size_t number_of_words(char *str)
{
    size_t words = 1;
    int i = 0;
//    size_t len = strlen_(str) - 1;
    while(str[i] != '\0')
    {

        if(str[i] == ' ' && (i != 0 && str[i-1] != ' '))
            words++;
        i++;
    }
    return words;
}
