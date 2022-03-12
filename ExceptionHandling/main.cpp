#include <iostream>
#include <typeinfo>

using namespace std;

int division(int a, int b)
{
    if(b == 0)
        throw 1;
    return a / b;
}

double division1(float n1, float n2) noexcept
{
    if(n2 != 0)
        return n1/n2;
    return -0.010f;
}

int main()
{
    int a = 10, b = 0, c;
    try
    {
        //if(b == 0)
        //  throw 1;
        //c = a / b;
        c = division(a,b);
        cout<<c<<endl;
    }
    catch(int error)
    {
        cout<<"Division by zero "<<error<<endl;
    }
    return 0;
}
