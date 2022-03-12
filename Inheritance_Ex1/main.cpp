#include <iostream>

using namespace std;

//======================Begin Rectangle class =======================
class Rectangle
{
public:
    Rectangle(int p_length = 0, int p_bradth = 0);
    Rectangle( Rectangle &p_rhs);

    void setLength(int );
    void setBreadth(int );
    void set_values(int, int);

    int getLength() const;
    int getBreadth() const;

    int area() const;
    int perimeter() const;
    ~Rectangle() {}
protected:
private:
    int length;
    int breadth;
};

Rectangle::Rectangle(int p_length, int p_bradth)
{
    setLength(p_length);
    setBreadth(p_bradth);
}
Rectangle::Rectangle( Rectangle &p_rhs)
{
    length = p_rhs.length;
    breadth = p_rhs.breadth;
}
void Rectangle::setLength(int p_length)
{
    if(p_length > 0)
    {
        length = p_length;
        return;
    }

    length = 1;

}
void Rectangle::setBreadth(int p_bradth)
{
    if(p_bradth > 0)
    {
        breadth = p_bradth;
        return;
    }

    breadth = 1;


}

int Rectangle::getLength() const
{
    return length;
}
int Rectangle::getBreadth() const
{
    return breadth;
}

int Rectangle::area() const
{
    return length*breadth;
}
int Rectangle::perimeter() const
{
    return 2*(length + breadth);
}

void Rectangle::set_values(int p_length, int p_bradth)
{
    setLength(p_length);
    setBreadth(p_bradth);
}
//========================End Rectangle class ===================================

//======================Begin Cube class =======================

class Cube : public Rectangle
{
public:
    Cube(int p_length = 0, int p_breadth = 0, int p_height = 0);

    void setHeight(int);
    void set_values(int p_length, int p_bradth, int p_height);
    int getHeight() const;

    int volume() const;

    ~Cube() {}
protected:
private:
    int height;
};

Cube::Cube(int p_length, int p_breadth, int p_height )
{
    setLength(p_length);
    setBreadth(p_breadth);
    setHeight(p_height);
}

void Cube::setHeight(int p_height)
{
    if(p_height > 0)
    {
        height = p_height;
        return;
    }
    height = 1;
}

int Cube::getHeight() const
{
    return height;
}

int Cube::volume() const
{
    return getLength() * getBreadth() * height;
}

void Cube::set_values(int p_length, int p_bradth, int p_height)
{
    setLength(p_length);
    setBreadth(p_bradth);
    setHeight(p_height);
}
//======================End Cube class =======================
int main()
{
    Rectangle r1(15,10);
    Rectangle r2(r1);
    Cube c1(10, 7, 15);
    cout<<"Area of r1 "<<r1.area()<<endl;
    cout<<"Perimeter of r1 "<<r1.perimeter()<<endl;
    cout<<"========================================"<<endl;
    cout<<"Area of r2 "<<r2.area()<<endl;
    cout<<"Perimeter of r2 "<<r2.perimeter()<<endl;
    cout<<"========================================"<<endl;
    cout<<"Volume of c1 "<<c1.volume()<<endl;
    return 0;
}
