#include <iostream>
#include "test.hpp"
#include "teste.h"
#include <cstdio>

using namespace std;

int main()
{
    int a = 0;
//
//    auto bad_counter = [a]()
//    {
//        return ++a;
//    };

    auto good_counter = [a] (int x, int y) mutable ->int
    {
        if(a == 0)
            return a + x + y;
        return (a++) * (x + y);
    };

    C c1(42);
    C c2(0.000050008002);
//    int x = c;
    cout <<"===========================\n";
    cout <<good_counter(2, 3)<<endl;
    cout <<good_counter(3, 4)<<endl;
    cout <<good_counter(4, 5)<<endl;
    cout <<good_counter(5, 6)<<endl;
    cout <<"===========================\n";
    int x = static_cast<int>(c1);
    double d = static_cast<double>(c2);
    cout << x << endl;
    cout << d <<endl;
    printf("%.10f", d);

    myVector mv{100};
    myVector mv3(100.0);
    uint64_t ui = 1000;
    myVector mv1{ui};
    int i = 10000;
    myVector mv2{static_cast<uint64_t>(i)};

    cout << "Testing is power_of_2\n";
    int number;
    while(true)
        {
            cin>>number;
            if(number == 0)
                break;
            if(is_power(number))
                cout << number <<" is power of 2\n";
            else
                cout << number <<" is not power of 2\n";
        }
    cout << "Finishing testing\n";

    cout <<  (4096 and (!m))<< endl;
    cout <<  m << endl;
    return 0;
}
