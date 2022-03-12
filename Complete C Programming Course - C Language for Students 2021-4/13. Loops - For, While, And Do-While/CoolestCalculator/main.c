#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


double calculate(float first_number, float second_number, char _operator);

int main()
{
    float first_nb, second_nb;
    char _operator;
    bool _continue = true;
    char again;
    do
    {

        printf("Enter first number: ");
        scanf("%f", &first_nb);
        printf("Enter the operator: ");
        scanf(" %c", &_operator);
        printf("Enter the second number: ");
        scanf("%f", &second_nb);
        double result = calculate(first_nb, second_nb, _operator);
        printf("The result is %.2f\n", result);

        printf("Do again? ");
        scanf(" %c", &again);
        if(again == 'N' || again == 'n')
            _continue = false;
    }
    while (_continue == true);
    return 0;
}


double calculate(float first_number, float second_number, char _operator)
{
    double result;
    switch (_operator)
    {
    case '+':
        result = first_number + second_number;
        break;
    case '-':
        result = first_number - second_number;
        break;
    case '*':
        result = first_number * second_number;
        break;
    case '/':
        if(second_number == 0.0)
        {
            printf("Cannot divide by zero");
            result = -0.100;
        }
        else
            result = first_number/second_number;
        break;
    case '%':
        result = (int)first_number % (int)second_number;
        break;
    case '^':
        result = 1;
        //while(second_number > 0)
        //{
        //      result *= first_number;
        //      second_number--;
        //}
        for (int i = 1; i <= second_number; ++i)
        {
            result *= first_number;
        }
        break;
    default:
        printf("Enter a usable operator\n");
        break;
    }
    return result;
}
