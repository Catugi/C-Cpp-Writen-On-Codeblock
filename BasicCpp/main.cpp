#include <iostream>
#include <array>
//#include <typeinfo>
#include <utility>
#include <semaphore.h>


//std::visit();
using namespace std::string_literals;

const int r{12};
int b = r;
auto qualquer(int d)
{
    std::pair myPair{42, "World"s};
    b = d;
    std::cout << b <<" " << d <<std::endl;
}

//consteval int add(int a, int b){
//    return a + b;
//}

auto main() -> int
{
    std::array<int, 5> myarray {42,43, 44};
    std::cout <<myarray.front()<<"\n";
    std::cout <<myarray.back()<<"\n";
    for(auto i: myarray)
        std::cout<< i<<"\n";
    auto a{124};
    auto b{0.0};
    auto c{""s};
    auto i{0};
    qualquer(a);
    auto str{"111111111111111111111111111111111111111"s};
    a = 100;
    b = 12.99;
    c = "Fernando  Amado pelas Pessoas";

    std::cout<<typeid(str).name()<<std::endl;
    //static_assert(a == b);
    std::cout << str.length() <<"\n";
    for(i = 0; i < 100; i++) {}
    std::cout << "Hello "<<c <<" "<<a<<" "<<b<< std::endl;
    sort(c.begin(), c.end());
    std::cout << c << std::endl;
    return 0;
}
