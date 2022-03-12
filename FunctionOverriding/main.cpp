#include <iostream>

using namespace std;
class Parent
{
public:
    Parent(){}
    void display(){cout<<"Display of Parent"<<endl;}
    ~Parent(){}
protected:
private:
};

class Child : public Parent
{
public:
    Child(){}
    void display(){cout<<"Display of Child"<<endl;}
    ~Child(){}
protected:
private:
};

int main()
{
    Parent p;
    Child c;
    p.display();
    c.display();
    return 0;
}
