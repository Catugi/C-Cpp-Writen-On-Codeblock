#include <iostream>

using namespace std;
class IShape
{
public:
    virtual float area()=0;
    virtual float perimeter()=0;
    virtual ~IShape() {}
protected:
private:

};
/*================================================*/
class Rectangle : public IShape
{
public:
    Rectangle(int p_length = 1, int p_breadth = 1);

    void setLength(int );
    void setBreadh(int);
    void set_values(int, int);
    int getLength() const;
    int getBreadh() const;

    float area() override;
    float perimeter() override;
    ~Rectangle() {}
protected:
private:
    int m_length;
    int m_breadth;
};

/*==================================================*/

class Circle : public IShape
{
public:
    Circle(float p_radius = 0.0f);

    void setRadius(float p_radius);
    float getRadius() const;

    float area() override;
    float perimeter() override;
    ~Circle() {}
protected:
private:
    float m_radius;
    const float m_PI = 3.141592f;
};

/**/

int main()
{
    IShape *ptr = new Rectangle(10, 5);
    //ptr->setLength(15); //O ponteiro é IShape no entanto do Rectangle só tiramos o que IShape pode fazer
    cout<<"Area of rectange: "<<ptr->area()<<endl;
    cout<<"Perimeter of rectange: "<<ptr->perimeter()<<endl;
    //cout<<"Length: "<<ptr->getLength()<<endl; //O ponteiro é IShape no entanto do Rectangle só tiramos o que IShape pode fazer
    delete ptr;
    ptr = new Circle(10);
    cout<<"Area of circle: "<<ptr->area()<<endl;
    cout<<"Perimeter of circle: "<<ptr->perimeter()<<endl;
    return 0;
}


/*Rectangle class starts here*/
Rectangle::Rectangle(int p_length,  int p_breadth )
{
    setLength(p_length);
    setBreadh(p_breadth);
}

void Rectangle::setLength(int p_length)
{
    if(p_length > 0)
        m_length = p_length;
    else
        m_length = 0;
}

void Rectangle::setBreadh(int p_breadth)
{
    if(p_breadth > 0)
        m_breadth = p_breadth;
    else
        m_breadth = 0;
}

void Rectangle::set_values(int p_length, int p_breadth)
{
    setLength(p_length);
    setBreadh(p_breadth);
}

int Rectangle::getBreadh() const
{
    return m_breadth;
}

int Rectangle::getLength() const
{
    return m_length;
}

float Rectangle::area()
{
    return m_length * m_breadth;
}

float Rectangle::perimeter()
{
    return 2*( m_length + m_breadth);
}
/*Rectangle class ends here*/

/*Circle class starts here*/
Circle::Circle(float p_radius)
{
    setRadius(p_radius);
}

void Circle::setRadius(float p_radius)
{
    if(p_radius > 0)
        m_radius = p_radius;
    else
        m_radius = p_radius * (-1);
}
float Circle::getRadius() const
{
    return m_radius;
}

float Circle::area()
{
    return m_PI * m_radius* m_radius;
}
float Circle::perimeter()
{
    return m_PI*2*m_radius;
}
/*Circle class ends here*/

