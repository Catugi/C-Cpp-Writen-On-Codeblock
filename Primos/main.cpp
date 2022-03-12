#include <iostream>
#include <cmath>

using namespace std;

bool prime(int n)
{
    for(int i = 2; i<= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int perfect(int n)
{
    int sum = 0;
    const int LENGTH= n/2;;
    for(int i = 1; i <= LENGTH; i++)
    {
        if(n % i == 0)
            sum += i;
    }
    if(sum == n)
        return true;
    else
        return false;
}

int main()
{
    const int MAX = 1000;
    for(int i = 2; i <= MAX; i++)
    {
        if(perfect(i))
//        if(prime(i) && perfect(i) && (i % 2 == 1) && (i % 3 == 0))
        {
            for(int j = 1 ; j <= 12; j++)
            {
                cout<<i<<" x "<<j<<" = "<<i*j<<'\n';
            }
        }
    }

    return 0;
}
