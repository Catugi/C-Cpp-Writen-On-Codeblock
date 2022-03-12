#include <iostream>

using namespace std;

class Test
{
public:
    Test()
    {
        m_a = 10;
        m_count++;
    }
    static int getCount()
    {
        return  m_count;
    }
    ~Test(){}
protected:
private:
    static int m_count;
    int m_a, m_b;
};

int Test::m_count = 0;
int main()
{
    cout<<Test::getCount()<<endl;
    Test t1;
    Test t2;
    cout<<Test::getCount()<<endl;
    cout<<Test::getCount()<<endl;
    return 0;
}
