#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char first[] = "This the first string ";
    char second[] = "This the second string\n";
    size_t len = strlen(second);
    size_t total_len = len + strlen(first);
    char third[len];
    char forth[total_len];
    strcpy(third, second);

    strcpy(forth, first);
    strcat(forth, second);

    printf("\n%s\n", third);
    printf("\n%zu\n",len);
    printf("\n%s\n", forth);
    return 0;
}
