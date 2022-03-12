#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_palindrome(char *);
size_t strlen_(char *);


int main()
{
    char str[10];
    printf("Enter a text: ");
    fscanf(stdin, "%9s", str);
    if(is_palindrome(str) == true)
        printf("This text is palindrome\n");
    else
        printf("This text is not palindrome\n");
    //printf("Length of %s is %zu\n", str, strlen_(str));
    //printf("Sizeof size_t %zu\n", sizeof(size_t));
    return 0;
}

bool is_palindrome(char *str)
{
    bool is_ = true;
    int i = 0, len = (int)strlen_(str);
    int loop_size = len/2;
    while(/*str[i] != '\0' &&*/ i <= loop_size)
    {
        if(str[i] != str[len-1-i])
        {
            is_ = false;
            break;
        }
        i++;
    }
    return is_;
}

size_t strlen_(char *str)
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}
