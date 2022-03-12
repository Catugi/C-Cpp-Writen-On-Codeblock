#include <iostream>

using namespace std;

class Demo
{
public:
    Demo() {}
    void Display() const
    {
        //x++;
        cout<<x<<" "<<y<<endl;
    }
    ~Demo() {}
protected:
private:
    int x = 10;
    int y = 20;
};

void fun(const int &a, int &b)
{
    //a++;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int y = 20, x = 10;
    //x = 30;
    fun(x,y);
    const    int *ptr = &x;
    int * const ptr1 = &x;
    ++(*ptr1);
    //ptr1 = &y;
    //++(*ptr);

    const int * const ptr2 = &y;
    //*ptr2++;
    //ptr2 = &x;
    cout<<x<<" "<<*ptr<<endl;
    ptr = &y;
    cout<<y<<" "<<*ptr<<endl;
    return 0;
}
