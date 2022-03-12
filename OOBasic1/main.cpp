#include <iostream>

using namespace std;
class Teste
{
    int a;
    int *p;
public:
    Teste(int x = 0)
    {
        a = x;
        p = new int [a];
    }
    Teste(Teste &t)
    {
        a = t.a;
        //p = t.p; //Erro neste caso pois se trata de ponteiro e isso leva que seja apontado o mesmo endereço
        p = new int[a]; //Correto. E isso se chama Deep Copy Constructor
    }
    ~Teste() {}
protected:
private:
};
class Rectangle
{
private:
    int length;
    int breadth;
public:
    //    Rectangle()
//        :length(0), breadth(0)
//    {}
    Rectangle(Rectangle &rhs);
    Rectangle(int p_length = 1, int p_breadth = 1);

    void setLength(int p_length);
    void setBreadth(int p_breadth);

    int getLength();
    int getBreadth();


    int area();
    int perimeter();

    bool isSquare();
    ~Rectangle();

};
Rectangle::Rectangle(Rectangle &rhs)
{
    length = rhs.length;
    breadth = rhs.breadth;
}
Rectangle::Rectangle(int p_length, int p_breadth)
{
    setLength(p_length);
    setBreadth(p_breadth);
}

void Rectangle::setLength(int p_length)
{
    length = p_length > 0 ? p_length : 1;
}
void Rectangle::setBreadth(int p_breadth)
{
    breadth = p_breadth > 0 ? p_breadth : 0;
}

int Rectangle::getLength()
{
    return length;
}
int Rectangle::getBreadth()
{
    return breadth;
}


int Rectangle::area()
{
    return length*breadth;

}
int Rectangle::perimeter()
{
    return 2*(breadth+length);
}

bool Rectangle::isSquare()
{
    return length == breadth;
}
Rectangle::~Rectangle()
{}

int main()
{
    Teste t;
    Teste t1(t);
    return 0;
}
