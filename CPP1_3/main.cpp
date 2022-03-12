#include <iostream>

using namespace std;

class Parent /*final*/ // Não pode ser herdado
{
public:
    Parent() {}
    //    virtual void show() final //Não pode ser sobrescrito
    //    {
    //    }
    ~Parent() {}

protected:
private:
};

class Child : public Parent
{
public:
    Child();
    void show()
    {
    }
    ~Child();

protected:
private:
};

int main()
{
    system("clear");
    cout << "Hello world!" << endl;
    return 0;
}
