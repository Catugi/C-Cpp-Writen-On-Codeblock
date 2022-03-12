#include <iostream>

using namespace std;

class Car
{
public:
    Car() {}
    virtual void fun()
    {
        cout<<"Car started..."<<endl;
    }
    virtual ~Car() {}
protected:
private:
};

class Innova : public Car
{
public:
    Innova() {}
    void fun()
    {
        cout<<"Innova started"<<endl;
    }
    virtual ~Innova() {}
protected:
private:
};

class Swift : public Car
{
public:
    Swift() {}
    void fun()
    {
        cout<<"Swift started"<<endl;
    }
    ~Swift() {}
protected:
private:
};

int main()
{
    Car *c = new Innova();
    c->fun();
    delete c;
    c = new Swift();
    c->fun();
    delete c;
    return 0;
}
