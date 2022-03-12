#include <iostream>

using namespace std;
class Car
{
public:
    virtual void start()=0;
    virtual void stop()=0;
    virtual ~Car() {}
protected:
private:
};

class Innova: public Car
{
public:
    Innova() {}
    void start()
    {
        cout<<"Innova started..."<<endl;
    }
    void stop()
    {
        cout<<"Innova stoped..."<<endl;
    }
    virtual ~Innova(){};
protected:
private:
};
class Swift: public Car
{
public:
    Swift() {}
    void start()
    {
        cout<<"Swift started..."<<endl;
    }
    void stop()
    {
        cout<<"Swift stoped..."<<endl;
    }
    virtual ~Swift() {}
protected:
private:
};

int main()
{
    /*Alcan�ando o polimorfismo atrav�s da mudan�a do objecto apontado pelo ponteiro
    Isso permite alcan�ar o polimorfismo em tempo de execu��o*/
    Car *ptr = new Innova();
    ptr->start();
    ptr->stop();
    delete ptr;
    ptr = new Swift();
    ptr->start();
    ptr->stop();
    delete ptr;
    ptr = nullptr;
    return 0;
}
