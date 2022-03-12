#include <stdio.h>

/**
For clang13 and GCC 11.0.2, the default version of C is C17
**/

int main(int argc, char** argv)
{
#if __STDC_VERSION__ >= 201710L
    printf("Hello World from C17!\n");
#elif __STDC_VERSION__ >= 201112L
    printf("Hello World from C11!\n");
#elif __STDC_VERSION__ >= 199901L
    printf("Hello World from C99!\n");
#else
    printf("Hello World from C89/C90!\n");
#endif
    return 0;
}
