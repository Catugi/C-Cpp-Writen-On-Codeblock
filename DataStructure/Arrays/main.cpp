#include <cstdio>
#include <cstdlib>

auto main()->int
{

//    int A[5] = {2, 4, 6, 8, 10};
//    int *P = (int *)calloc(5, sizeof(int));
//
//    P[0] = 3;
//    P[1] = 5;
//    P[2] = 7;
//    P[3] = 9;
//    P[4] = 11;
//
//    for (int i = 0; i< 5 ; ++i )
//        fprintf(stdout, "%d ", A[i]);
//
//    fprintf(stdout, "\n");
//
//    for (int i = 0; i< 5 ; ++i )
//
//        fprintf(stdout, "%d ", P[i]);
    int *p, *q;
    p = (int *)calloc(5, sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    q = (int *)calloc(10, sizeof(int));
    for (int i = 0; i < 5; ++i)
    {
        q[i] = p[i];
    }
    free(p);
    p = q;
    q = NULL;
    for (int i = 0; i < 5; ++i)
    {
        fprintf(stdout, "%d ", p[i]);
    }
    fprintf(stdout, "\n" );

    return 0;

}
