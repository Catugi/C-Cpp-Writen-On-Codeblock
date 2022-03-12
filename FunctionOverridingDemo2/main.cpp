#include <iostream>

using namespace std;

class BasicCar
{
public:
    BasicCar() {}
    virtual void start()
    {
        cout<<"Basic car started..."<<endl;
    }
    ~BasicCar() {}
protected:
private:
};

class AdvancedCar : public BasicCar
{
public:
    AdvancedCar() {}
    void start()
    {
        cout<<"Advanced car started..."<<endl;
    }
    ~AdvancedCar() {}
protected:
private:
};


int main()
{
    BasicCar *ptr = new AdvancedCar();
    ptr->start();
    return 0;
}
