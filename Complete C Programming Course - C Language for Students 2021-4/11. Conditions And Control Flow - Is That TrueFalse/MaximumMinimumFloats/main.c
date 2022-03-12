#include <stdio.h>
#include <stdlib.h>

void maximum_minimum_two(float, float, float *, float *);
void maximum_minimum_three(float, float, float, float *, float *);

int main()
{
    float num1, num2, num3,max, min;
    printf("Inform the values (spaces separeted): ");
    scanf("%f %f %f", &num1, &num2, &num3);
    maximum_minimum_two(num1, num2, &max, &min);
    printf("The max of the first two numbers is %.2f\nThe min of the firts two numbers is %.2f\n", max, min);
    //printf("Inform the third value: ");
    //scanf("%f", &num3);
    maximum_minimum_three(num1, num2, num3, &max, &min);
    printf("The max of all numbers is %.2f\nThe min of all numbers is %.2f\n", max, min);
    return 0;
}


void maximum_minimum_two(float p_first, float p_second, float *p_ptr_max, float *p_ptr_min )
{
    if (p_first > p_second)
    {
        *p_ptr_max = p_first;
        *p_ptr_min = p_second;
    }
    else
    {
        *p_ptr_min = p_first;
        *p_ptr_max = p_second;
    }
}

void maximum_minimum_three(float p_first, float p_second, float p_third, float *p_ptr_max, float *p_ptr_min)
{
    *p_ptr_max = p_first;
    *p_ptr_min = p_second;
    if (p_first < p_second)
    {
        *p_ptr_max = p_second;
        *p_ptr_min = p_first;
    }

    if (p_third> *p_ptr_max)
    {
        *p_ptr_max = p_third;
    }
    else if(p_third < *p_ptr_min)
    {
        *p_ptr_min = p_third;
    }


}
