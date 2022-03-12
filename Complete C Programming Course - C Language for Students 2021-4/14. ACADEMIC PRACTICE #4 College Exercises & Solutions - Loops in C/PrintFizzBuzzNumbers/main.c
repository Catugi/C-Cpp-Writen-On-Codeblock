#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long num, sum = 0;
    printf("Enter a number: ");
    scanf("%lld", &num);
    /*for(int i = 3; i <= num; ++i){
        if((i % 3 == 0) && (i % 5 == 0)){
            sum += i;
         //   printf("%d ", i);
        }
    }*/

    for(long long i = 15; i <= num; i += 15){
        if((i % 3 == 0) && (i % 5 == 0)){
            sum += i;
            printf("%lld can be divided both by 3 and 5\n", i);
        }
    }

    printf("The sum of all the numbers divisble by 3 and by 5 is %lld\n", sum);
}
