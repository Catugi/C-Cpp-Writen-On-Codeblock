#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float get_derivative(float, float, int);


int main()
{
    float c, x;
    int n;
    printf("Enter the x-value: ");
    scanf("%f", &x);
    printf("Enter the constant value: ");
    scanf("%f", &c);
    printf("Enter the exponent of x: ");
    scanf("%d", &n);
    printf("The derivative value is %.2f\n", get_derivative(c,x,n));
    return 0;
}


float get_derivative(float c, float x, int n)
{
    float powervalue = pow(x, (n-1));
    float res = c*(n-1)*powervalue;
    return res;
}
