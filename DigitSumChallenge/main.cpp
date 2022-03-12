#include <iostream>

using namespace std;

int sumDigit(int number);
int stringToDigits(string numberAsString);

int main()
{
    int number;
    cin>>number;
    cout << "The sum of the digits of "<<number<<" is "<<sumDigit(number)<<endl;
    string numberAsSring = "42";
    int number_ = stringToDigits(numberAsSring);
    cout << "The number converted from string is "<<number_<<endl<<" Adding 1 it is "<<number_ + 1<<endl;

    return 0;
}
int sumDigit(int number)
{
    if(number < 10)

        return -1;

    int sum = 0;
    while(number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;

}

int stringToDigits(string numberAsString){
    return stoi(numberAsString);
}
