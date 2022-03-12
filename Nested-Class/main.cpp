#include <iostream>

using namespace std;

class Outer
{
public:
    Outer() {}
    void func()
    {
        i.display();
    }
    ~Outer() {}
private:
    class Inner
    {
    public:
        Inner() {}
        void display()
        {
            cout<<"Display of inner"<<endl;
        }
        ~Inner() {}
    protected:
    private:
    };
    Inner i;
protected:

};


int main()
{
    Outer out;
    out.func();
//    Outer::Inner i;
//    i.display();
    return 0;
}
