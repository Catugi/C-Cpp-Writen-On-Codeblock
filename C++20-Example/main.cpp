#include <algorithm>
#include <cstdio>
#include <filesystem>
#include <iostream>
//#include <string>
#include <string_view>
#include <utility>
#include <version>
#include <compare>

//GSL CppCoreGuideLines
#include <gsl/gsl>

//using namespace std;
using namespace std::string_literals;
namespace rg = std::ranges;

extern "C" {
    int soma(int, int);
    double divisao(double, double);
}

auto sum(auto a, auto b)
{
    return a + b;
}

int main()
{
    int a = 234;
    int first = 3, second = 5;
//    std::string_view str1{"String1 "}, str2{"String2"};
    std::string original = "Fernando Francisco";

    std::cout<<"Hello C++20"<<'\n'<<"This is a int "<<a<<std::endl;
    std::clog<<"User left"<<std::endl;
    if(false)
    {
        std::cerr<<"Error occurred in the program"<<std::endl;
    }
    std::cout<<std::max(123LL, 1234ll)<<std::endl;
    std::cout<< "First: "<<first<<" Second: "<<second<<std::endl;

    std::swap(first, second);
    rg::reverse(original);
    printf("%s\n", original.c_str());
    rg::sort(original);
    printf("%s\n", original.c_str());
    std::cout<< "First: "<<first<<" Second: "<<second<<std::endl;
    if (puts("Fernando is an engineer") == EOF)

        perror("Could not put string to stdout");

    std::cout<<sum(2, 4);
    std::printf("\n");
    std::cout<<sum("String1 "s, "String2"s);
    std::printf("\n");
    std::cout<<divisao(3,0)<<'\n';
    std::cout<<soma(3,5)<<'\n';
    return 0;
}

int soma(int a, int b)
{
    return a+b;
}

double divisao(double x, double y)
{
    if(y==0)
    {
        printf("Divisão por zero é impossível ");
        return 0.0; //Bad practice. Use exceptions
    }
    return x/y;
}

