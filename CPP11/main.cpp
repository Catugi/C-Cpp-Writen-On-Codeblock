#include <iostream>
#include <typeinfo>

using namespace std;

float fun()
{
    return 2.43f;
}
template<typename T>
void fun1(T p)
{
    p();
}

int main()
{
    auto x = 2*5.7+'a';
    //cout<<x<<endl;
	cout<<"The type of "<<x<<" is "<<typeid(x).name()<<endl;
    auto y = fun();
    cout<<y<<endl;
    decltype(y) z = 2.345;
    cout<<z<<endl;
    [](int b, int a)->auto{cout<<"Sum "<<(a+b)<<endl;}(19, 5);

    //[x ,y]()->auto{cout<<x<<" "<<y<<endl;}(); //Não pode modificar as variáveis capturadas
    [&x ,&y]()->auto{cout<<(++x)<<" "<<(++y)<<endl;}(); //Pode modificar as variáveis capturadas


    auto f = [&]()->auto{cout<<(++x)<<" "<<(++y)<<endl;}; //Pode modificar todas variáveis no escopo actual
    fun1(f);
    return 0;
}
