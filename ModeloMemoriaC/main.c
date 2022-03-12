#include <stdio.h>
#include <stdlib.h>

void ponteiros(void);
void ponteiros_(void);

int main()
{
    //Timpos elementares
    int i = 2450, i2,
        j = 11331,
        k = 113,
        m = 9800;
    float f = 225.345;
    double d = 22.5E+145, d2;
    //Tipos ponteiros
    double *pd, *pd2;
    int *pi, *pi2;
    pd = &d;
    pi = &k;
    pd2 = pd;
    pi2 = pi;
    i2 = *pi+(*pi2);

    j = *pi;
    d2 = *pd;
    pd2 = &d2;
    *pd2 = *pd / 10.0;
    pi2 = &i;
    m = *pi2 * 10;
    printf("%f %d %d %d\n", f, m, j, i2);
    ponteiros();
    ponteiros_();
//    system("gcc -v");

    return 0;
}

void ponteiros(void)
{
    int i1, i2, *pi1, **pi2, ***pi3;
    int k1, k2, *pk1, **pk2;
    //Se
    i1 = 3;
    i2 = 4;
    pi1 = &i1;
    pi2 = &pi1;
    pi3 = &pi2;
    k1 = 10;
    pk1 = &k1;
    pk2 = pi2;
    k2 = i1 + (***pi3) + (*pi1) + i2 + (**pk2) * (*pk1);
    printf("%d\n", k2);
    printf("%d\n", (**pk2 * (*pk1)));
}
void ponteiros_(void)
{
    int *p, k, i = 0;
    k = 4;
    p = &i;
    *p = k * 2;
    printf("%d\n", *p);
}
