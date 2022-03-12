#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    //    Rectangle()
//        :length(0), breadth(0)
//    {}
    Rectangle(Rectangle &rhs)
    {
        length = rhs.length;
        breadth = rhs.breadth;
    }
    Rectangle(int p_length = 1, int p_breadth = 1) //Permite a não utilização do Non-Parameterized constructor
    {
        setLength(p_length);
        setBreadth(p_breadth);
    }
    ~Rectangle() {};
    void setLength(int p_length)
    {
        length = p_length > 0 ? p_length : 1;
    }
    void setBreadth(int p_breadth)
    {
        breadth = p_breadth > 0 ? p_breadth : 0;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(breadth+length);
    }
protected:
};


int main()
{
    //Criação na stck
    Rectangle r1(10, 5), r2, *ptrR2;
    //r1.setLength (10);
    //r1.setBreadth(5);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    cout<<"=================================\n";

    ptrR2 = &r2;
//    ptrR2->setBreadth(15);
//    ptrR2->setLength(15);
    cout<<ptrR2->area()<<endl;
    cout<<ptrR2->perimeter()<<endl;

    cout<<"=================================\n";
    //Criação na heap
    Rectangle *r3 = new Rectangle(25,5);
    //    r3->setBreadth(25);
//    r3->setLength(5);
    cout<<r3->area()<<endl;
    cout<<r3->perimeter()<<endl;
    cout<<"=================================\n";

    Rectangle r4(*r3);
    cout<<r4.area()<<endl;
    cout<<r4.perimeter()<<endl;
    return 0;
}
