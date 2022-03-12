#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout<<"Sizeof bool "<<sizeof(bool)<<endl;
    cout<<"Sizeof char "<<sizeof(char)<<endl;
    cout<<"Sizeof char16_t "<<sizeof(char16_t)<<endl;
    cout<<"Sizeof char32_t "<<sizeof(char32_t)<<endl;
    cout<<"Sizeof wchar_t "<<sizeof(wchar_t)<<endl;

    cout<<"Sizeof short "<<sizeof(short)<<endl;
    cout<<"Sizeof int "<<sizeof(int)<<endl;
    cout<<"Sizeof long "<<sizeof(long)<<endl;
    cout<<"Sizeof long long "<<sizeof(long long)<<endl;
    cout<<"Sizeof int16_t "<<sizeof(int16_t)<<endl;
    cout<<"Sizeof int32_t "<<sizeof(int32_t)<<endl;
    cout<<"Sizeof int64_t "<<sizeof(int64_t)<<endl;
    cout<<"Sizeof int8_t "<<sizeof(int8_t)<<endl;


    cout<<"Sizeof float "<<sizeof(float)<<endl;
    cout<<"Sizeof double "<<sizeof(double)<<endl;
    cout<<"Sizeof long double "<<sizeof(long double)<<endl;
    cout<<"Size of NULL "<<sizeof(nullptr)<<endl;

    cout<<numeric_limits<long long int>::max()<<endl;
    cout<<numeric_limits<long long int>::min()<<endl;


    return 0;
}
