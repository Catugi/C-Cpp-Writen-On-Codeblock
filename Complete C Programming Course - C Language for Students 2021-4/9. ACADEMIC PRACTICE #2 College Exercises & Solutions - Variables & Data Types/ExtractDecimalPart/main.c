#include <stdio.h>
#include <stdlib.h>

int main()
{
    float data;
    printf("Enter a float point number: ");

    scanf("%f", &data);
    //int divisor = (int)data;
    //data = data - (int)data;
    printf("The decimal part is %.2f\n", (data - (int)data));
    return 0;
}
