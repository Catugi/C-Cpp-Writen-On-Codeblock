#include <stdio.h>
#include <stdlib.h>

float get_amount_and_avg_of(int, int);

int main()
{
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit: ");
    scanf("%d", &digit);
    float avg = get_amount_and_avg_of(num, digit);
    if(avg != -1.0)
        printf("The avg of digits less than %d in %d is: %.2f\n", digit, num, avg);
    else
        printf("Bad data passed. Try again later\n");
    return 0;
}

float get_amount_and_avg_of(int num, int digit)
{
    float avg;
    int sum = 0, counter = 0, _digit;
    if (digit <= 0)
    {
        printf("The digits cannot be less or equal than zero\n");
        return -1.0;
    }
    if (num == 0)
    {
        printf("The number cannot be equal to zero\n");
        return -1.0;
    }
    else if (num < 0)
        num *= -1;
    else
    {
        int temp = num;
        while (num > 0)
        {
            _digit = num % 10;
            if (_digit < digit)
            {
                counter++;
                sum += _digit;
            }
            num = num / 10;
        }
        if(counter > 0)
            avg = sum / (float)counter;
        else
          avg = 0.0;
        printf("The digts less than %d in %d are %d\n", digit, temp, counter);
    }
    return avg;
}
