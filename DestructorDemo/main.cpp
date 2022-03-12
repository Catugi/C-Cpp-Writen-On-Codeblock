#include <iostream>

using namespace std;

class Demo
{
public:
    Demo()
    {
        p = new int[10];
        cout<<"Constructor of Demo"<<endl;
    }
    ~Demo()
    {
        delete []p;
        cout<<"Destructor of Demo"<<endl;
    }
protected:
private:
    int *p;
};

class Base
{
public:
    Base()
    {
        cout<<"Base Constructor"<<endl;
    }
    ~Base()
    {
        cout<<"Base Destructor"<<endl;
    }
protected:
private:
};

class Derived : public Base
{
public:
    Derived()
    {
        cout<<"Derived Constructor"<<endl;
    }
    ~Derived()
    {
        cout<<"Derived Destructor"<<endl;
    }
protected:
private:
};


int main()
{
    Demo d;
    cout<<"========================\n";
    Demo *p = new Demo();
    delete p;

    Derived de;
    return 0;
}
