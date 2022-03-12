#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>

int greater_3(int, int, int);
void fizz_buzz(int n);

int main()
{
    int x = {1};
    int y;
    int z = y = ++x;
    double *pd;
    int i;
    int *pi;
    float f;
    int j, k;
    double d;
    int /*m,*/ *pi2;
    double *pd2, d2;
    i = 2450;
    f = 225.345;
    k = 113;
    d = 22.E145;
//    m = 9800;
    pd = &d;
    pi = &k;
    pd2 = pd;
    pi2 = pi;
    j = *pi;
    d = *pd;
    pd2 = &d2;
    *pd2 = *pd/10.0;
    pi2 = &i;
//    m = *pi2*10;
    printf("\n%d %f\n", j, f );
    printf("\n%d\n", greater_3(8, 7, 13));
    printf("\nx is assigned to %d z is assigned to %d\n", x, z);

//    fizz_buzz(100);
    return 0;
}


int greater_3(int x, int y, int z)
{
    if((x > y) & (x > z))
        return x;
    else
        return y > z? y:z;
}

//void fizz_buzz(int n){
//    for(int i = 1; i <= n; ++i){
//        if((i % 3 == 0 )& (i % 5== 0))
//            printf("\nFizz-Buzz\n");
//        else if(i % 3 == 0)
//            printf("Fizz\n");
//        else if(i % 5 == 0)
//            printf("Buzz\n");
//        else
//            printf("%d\n", i);
//    }
//
//}
