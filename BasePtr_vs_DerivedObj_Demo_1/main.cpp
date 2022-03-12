#include <iostream>

using namespace std;
class Base
{
public:
    Base() {}

    void fun1()
    {
        cout<<"fun of Base class"<<endl;
    }

    ~Base() {}
protected:
private:
};

class Derived : public Base
{
public:
    Derived() {}

    void fun2()
    {
        cout<<"fun2 of Derived class"<<endl;
    }

    ~Derived() {}
protected:
private:
};

int main()
{
    Base *ptrB = new Derived();
//    Derived *ptrD = new reinterpret_cast< Base()>;
    ptrB->fun1();
    return 0;
}
