#include <iostream>
#include <string>

using namespace std::literals;

void swap_(auto &first, auto &second)
{
    auto temp{first};
    first = second;
    second = temp;
}

int main()
{
    int a{12}, b{24};
    double c{2.3}, d{4.5};

    auto first_name{"Fernando"s}, second_name{"Francisco"s};
    std::cout<<"Before swap : a = "<<a<<" b = "<<b<<'\n';
    swap_(a,b);

    std::cout<<"After swap : a = "<<a<<" b = "<<b<<'\n';

    std::cout<<"Before swap : c = "<<c<<" d = "<<d<<'\n';
    swap_(c,d);

    std::cout<<"After swap : c = "<<c<<" d = "<<d<<'\n';

    std::cout<<"Before swap : first_name = "<<first_name<<" second_name = "<<second_name<<'\n';
    swap_(first_name,second_name);

    std::cout<<"After swap : first_name = "<<first_name<<" second_name = "<<second_name<<'\n';
    return 0;
}
