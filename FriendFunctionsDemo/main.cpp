#include <iostream>

using namespace std;
class Test
{
public:
    Test() {}
    ~Test() {}
    int a;
protected:
    int b;
private:
    int c;
    friend void func(); //Sem esta linha, ...
};

void func()
{
    Test t;
    t.a = 10;
    t.b = 15; //Esta linha acusaria erro
    t.c = 5; //Esta linha acusaria erro
    cout<<t.a<<" "<<t.b<<" "<<t.c<<endl; //Tal como esta linha
}
int main()
{
    func();
    return 0;
}
