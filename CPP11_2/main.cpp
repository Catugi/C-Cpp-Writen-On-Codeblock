#include <coroutine>
#include <iostream>
#include <memory>

/*Smart pointers*/
using namespace std;

class Rectangle
{
public:
    Rectangle(int p_length, int p_breadth)
    {
        m_length = p_length;
        m_breadth = p_breadth;
    }

    int area()
    {
        return m_length * m_breadth;
    }
    int perimeter()
    {
        return 2*(m_length + m_breadth);
    }

    ~Rectangle()
    {
        cout<<"Object deleted\n";
    }
protected:
private:
    int m_length, m_breadth;
};


int main()
{
    unique_ptr<Rectangle> ptr (new Rectangle(10, 5));
    cout<<ptr->area()<<endl;
    unique_ptr<Rectangle> ptr2= move(ptr);
    cout<<ptr2->area()<<endl;

    //==============================================
    shared_ptr<Rectangle> ptr3(new Rectangle(15, 25));
    shared_ptr<Rectangle> ptr4 = ptr3;

    cout<<"Ptr3 "<<ptr3->area()<<endl;
    cout<<"Ptr4 "<<ptr4->area()<<endl;
    cout<<ptr3.use_count()<<endl;
    return 0;
}
