#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Default of Base"<<endl;
    }
    Base(int x)
    {
        cout<<"Param of Base "<<x<<endl;
    }
    ~Base() {}
protected:
private:
};

class Derived : public Base
{
public:
    Derived()
    {
        cout<<"Default in Derived"<<endl;
    }
    Derived(int x, int y)
        :Base(y)
    {
        cout<<"Param of Derived "<<x<<endl;
    }
    ~Derived() {}
protected:
private:
};



int main()
{
    Derived d;
    cout<<"======================================"<<endl;
    Derived d2(3,4);
    return 0;
}
