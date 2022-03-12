#include <stdio.h>
#include <stdlib.h>

int main()
{
    double celsius_degree, fahrenheit_degree;
    printf("Enter a celsiu degree: ");
    scanf("%lf", &celsius_degree);

    fahrenheit_degree = celsius_degree*1.8 + 32;

    system("clear");
    printf("%.2lf celsius degree is %.2lf fahrenheit degree\n", celsius_degree, fahrenheit_degree);

    printf("Enter a fahrenheit degree: ");
    scanf("%lf", &celsius_degree);

    celsius_degree = (fahrenheit_degree - 32)/1.8;

    printf("%.2lf fahrenheit degree is %.2lf celsius degree\n", fahrenheit_degree, celsius_degree);
    return 0;
}
