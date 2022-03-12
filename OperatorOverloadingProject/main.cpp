#include <iostream>

using namespace std;
class RationalNumber
{
public:
    RationalNumber(int p_numerator = 1, int p_denominator = 1);
    RationalNumber(RationalNumber &rhs);

    void setNumerator(int p_numerator);
    void setDenominator(int p_denominator);

    int getNumerator() const;
    int getDenominator() const;

    friend ostream & operator<<(ostream &out, RationalNumber &r);
    friend istream & operator>>(istream &ist, RationalNumber &r);
    friend RationalNumber operator+(RationalNumber lhs, RationalNumber rhs);
    friend RationalNumber operator-(RationalNumber lhs, RationalNumber rhs);
    friend RationalNumber operator*(RationalNumber lhs, RationalNumber rhs);
    friend RationalNumber operator/(RationalNumber lhs, RationalNumber rhs);
    friend RationalNumber operator++(RationalNumber &lhs);
    ~RationalNumber() {}
protected:
private:
    int gcd(int, int);
    int m_numerator;
    int m_denominator;
};

int main()
{
    RationalNumber r1(1,2);
    RationalNumber r2(r1);
    RationalNumber r3 = r1 + r2;
    RationalNumber r4 = r1/r3;
    RationalNumber r5;
    cout<<"Informe o numerador e denominador: ";
    cin>>r5;
    cout<<"r1 = "<<r1;
    cout<<"r3 = "<<r3;
    ++r1;
//    ++r1;
    cout<<"r4 = r1/r3 = "<<r4;
    cout<<"r1 = "<<r1;
    cout<<"r5 = "<<r5;
    system("pause");
    return 0;
}

RationalNumber::RationalNumber(int p_numerator, int p_denominator)
{
    setNumerator(p_numerator);
    setDenominator(p_denominator);
}
RationalNumber::RationalNumber(RationalNumber &rhs)
{
    m_numerator = rhs.m_numerator;
    m_denominator = rhs.m_denominator;
}

void RationalNumber::setNumerator(int p_numerator)
{
    m_numerator = p_numerator;
}
void RationalNumber::setDenominator(int p_denominator)
{
    if(p_denominator != 0)
        m_denominator = p_denominator;
    else
        m_denominator = 1;
}

int RationalNumber::getNumerator() const
{
    return m_numerator;
}
int RationalNumber::getDenominator() const
{
    return m_denominator;
}



ostream & operator<<(ostream &out, RationalNumber &r)
{
    if(r.m_numerator == r.m_denominator)
        out<<1<<endl;
    else if(r.m_denominator % r.m_numerator == 0)
        out<<1<<"/"<<r.m_denominator/r.m_numerator<<endl;
    else
        out<<r.m_numerator/r.gcd(r.m_numerator, r.m_denominator)<<"/"<<r.m_denominator/r.gcd(r.m_numerator, r.m_denominator)<<endl;

    return out;
}
istream & operator>>(istream &ist, RationalNumber &r)
{
    ist>>r.m_numerator>>r.m_denominator;
    return ist;
}
RationalNumber operator+(RationalNumber lhs, RationalNumber rhs)
{
    RationalNumber temp;

    temp.m_numerator = lhs.m_numerator*rhs.m_denominator + lhs.m_denominator*rhs.m_numerator;
    temp.m_denominator = lhs.m_denominator*rhs.m_denominator;
    return temp;
}
RationalNumber operator-(RationalNumber lhs, RationalNumber rhs)
{
    RationalNumber temp;

    temp.m_numerator = lhs.m_numerator*rhs.m_denominator - lhs.m_denominator*rhs.m_numerator;
    temp.m_denominator = lhs.m_denominator*rhs.m_denominator;
    return temp;
}
RationalNumber operator*(RationalNumber lhs, RationalNumber rhs)
{
    RationalNumber temp;

    temp.m_numerator = lhs.m_numerator*rhs.m_numerator;
    temp.m_denominator = lhs.m_denominator*rhs.m_denominator;
    return temp;
}
RationalNumber operator/(RationalNumber lhs, RationalNumber rhs)
{
    RationalNumber temp;

    temp.m_numerator = lhs.m_numerator*rhs.m_denominator;
    temp.m_denominator = lhs.m_denominator*rhs.m_numerator;
    if(temp.m_denominator % temp.m_numerator == 0)
    {
        temp.m_denominator /= temp.m_numerator;
        temp.m_numerator = 1;
    }
    return temp;
}
RationalNumber operator++(RationalNumber &lhs)
{

    lhs.m_numerator++;
    return lhs;
}

int RationalNumber::gcd(int m, int n)
{
    m = (m > 0) ? m : -m;
    n = (n > 0) ? n : -n;
    while(m != n)
    {

        if(m > n)
            m = m - n;
        else
            n = n - m;
    }
    return n;
}
