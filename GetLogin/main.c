#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    char *name = getlogin();
    printf("\n%s\n", name);
    return 0;
}
