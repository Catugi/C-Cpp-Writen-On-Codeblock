#include <iostream>

using namespace std;
class Your;

class My
{
public:
    My(){}
    ~My(){}
    int a;
protected: int b;
private: int c;
    friend Your;
};

class Your
{
public:
    My m;
    Your(){}
    ~Your(){}
    void func()
    {
        m.a = 10;
        m.b = 15;
        m.c = 5;
    }
protected:
private:
};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
