#include <stdio.h>
#include <stdlib.h>

int main()
{
    char first_name[10], fullname[20];
    printf("Enter your name: ");
    fgets(fullname, 19, stdin); //For reading a line until enter is pressed
    fflush(stdin);
    printf("Enter just a name: ");
    scanf("%9s", first_name); //Limit to reading only 9 chars
    printf("Name: %s\n", fullname);
//    puts(first_name);
    puts(fullname);
    return 0;
}
