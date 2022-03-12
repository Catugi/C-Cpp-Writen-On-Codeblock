#include <iostream>

using namespace std;

class Car
{
public:
    virtual void fun1()=0;
    virtual void fun2()=0;
    virtual ~Car() {}
protected:
private:
};

class Innova : public Car
{
public:
    Innova() {}
    void fun1()
    {
        cout<<"Fun1 from Innova"<<endl;
    }
    void fun2()
    {
        cout<<"Fun2 from Innova"<<endl;
    }
    virtual ~Innova() {}
protected:
private:
};

class Swift : public Car
{
public:
    Swift() {}
    void fun1()
    {
        cout<<"Fun1 from Swift"<<endl;
    }    void fun2()
    {
        cout<<"Fun2 from Swift"<<endl;
    }
    ~Swift() {}
protected:
private:
};

int main()
{
    Car *c = new Innova();
    c->fun1();
    c->fun2();
    delete c;
    c = new Swift();
    c->fun1();
    c->fun2();
    delete c;
    c = nullptr;
    return 0;
}
