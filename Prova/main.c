#include <stdio.h>
#include <stdlib.h>


static int mod(int, int );

int main()
{
    printf("%d\n", mod(20,6));
    return 0;
}

static int mod(int x, int y)
{
    if(x == y)
        return 0;
    if(x < y)
        return x;
    return mod(x-y, y);
}
