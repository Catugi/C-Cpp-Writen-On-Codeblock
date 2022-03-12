#include <iostream>

using namespace std;
class Complex
{
public:
    Complex(int p_real = 0, int p_img = 0);

    friend Complex operator+(Complex lhs, Complex rhs);
    Complex add(Complex rhs);

    friend Complex operator-(Complex lhs, Complex rhs);
    Complex subtract(Complex rhs);

    friend Complex operator*(Complex lhs, Complex rhs);
    Complex multiply(Complex rhs);

    friend Complex operator/(Complex lhs, Complex rhs);
    Complex divide(Complex rhs);

    friend ostream & operator << (ostream & out, Complex &C);

    void print();

    ~Complex() {}
protected:
private:
    int m_real;
    int m_img;
};

int main()
{
    Complex C1(7,5);
    Complex C2(5, 7);
    auto C3 = C1 + C2;
    Complex C4 = C3 - C1;
    cout<<"==================================\n";
    C1.print();
    C2.print();
    C3.print();
    C4.print();
    cout<<"==================================\n";
    cout<<C2<<endl;
    return 0;
}


Complex::Complex(int p_real, int p_img)
{
    m_real = p_real;
    m_img = p_img;
}
Complex operator+(Complex lhs, Complex rhs)
{
    Complex temp;
    temp.m_real = lhs.m_real + rhs.m_real;
    temp.m_img = lhs.m_img + rhs.m_img;
    return temp;
}
Complex Complex::add(Complex rhs)
{
    Complex temp;
    temp.m_real = m_real + rhs.m_real;
    temp.m_img = m_img + rhs.m_img;
    return temp;
}
Complex operator-(Complex lhs, Complex rhs)
{
    Complex temp;
    temp.m_real = lhs.m_real - rhs.m_real;
    temp.m_img = lhs.m_img - rhs.m_img;
    return temp;
}
Complex Complex::subtract(Complex rhs)
{
    Complex temp;
    temp.m_real = m_real - rhs.m_real;
    temp.m_img = m_img - rhs.m_img;
    return temp;
}
Complex operator*(Complex lhs, Complex rhs)
{
    Complex temp;
    temp.m_real = lhs.m_real * rhs.m_real;
    temp.m_img = lhs.m_img * rhs.m_img;
    return temp;
}
Complex Complex::multiply(Complex rhs)
{
    Complex temp;
    temp.m_real = m_real * rhs.m_real;
    temp.m_img = m_img * rhs.m_img;
    return temp;
}
Complex operator/(Complex lhs, Complex rhs)
{
    Complex temp;
    if(rhs.m_real > 0 && rhs.m_img > 0)
    {
        temp.m_real = lhs.m_real / rhs.m_real;
        temp.m_img = lhs.m_img / rhs.m_img;
    }
    else
    {
        temp.m_real = lhs.m_real;
        temp.m_img = lhs.m_img;
    }
    return temp;
}
Complex Complex::divide(Complex rhs)
{
    Complex temp;
    if(rhs.m_real > 0 && rhs.m_img > 0)
    {
        temp.m_real = m_real / rhs.m_real;
        temp.m_img = m_img / rhs.m_img;
    }
    else
    {
        temp.m_real = m_real;
        temp.m_img = m_img;
    }
    return temp;
}

void Complex::print()
{
    cout<<"("<<m_real<< " +i"<<m_img<<")"<<endl;
}
ostream & operator << (ostream & out, Complex &C)
{
    out<<"("<<C.m_real<<"+i"<<C.m_img<<")";
    return out;
}
