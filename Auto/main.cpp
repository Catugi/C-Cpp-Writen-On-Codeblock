#include <iostream>
#include <numbers>
#include <numeric>

using namespace std;
using namespace std::literals;

class Teste
{
public:
    Teste() {}
    ~Teste() {}
    auto add(auto x, auto y);
protected:
private:
};
auto Teste::add(auto x, auto y)
{
    return x + y;
}


struct  mstr
{
    int a;
    auto operator <=> (const mstr &) const = default;
};

//template <typename T, typename U>
//T add(T t, U u)
//{
//    return t + u;
//}

int main()
{
    Teste ts;
    mstr ms;
    ms.a = 10;
    mstr ms1 = ms;
    //ms1.a=12;
    if(ms1 == ms)
    {
        cout<<"These are the same"<<endl;
        cout<<"The value is "<<ms1.a<<'\n';
    }
    cout << ts.add(12, 23)<< endl;
    cout << ts.add('a', 'b')<< endl;
    cout << ts.add("Fernando "s, "Francisco"s)<< endl;
    cout << ts.add(12, 23.5)<< endl;
    cout << ts.add(12.5, 23.6)<< endl;
    cout <<gcd(12,2)<<'\n';
    cout<<lcm(1,10)<<'\n';
    cout<<numbers::phi<<'\n';
    cout<<midpoint(0, 10)<<'\n';
    return 0;
}
