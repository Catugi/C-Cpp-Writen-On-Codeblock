#include <iostream>
#include <vector>
#include <cassert>
#include <initializer_list>
#include <queue>
#include <termios.h>
#include <arpa/inet.h>
#include <array>

using namespace std;

void foo();
char a[10]= {"abcdefg"};
void* b = a;
int main()
{

    array<int, 3> my_array;
    my_array.fill(2);
    for(auto i: my_array)
    {
        cout<<i<<endl;
    }
//
//    double dou = 3.141592;
//    int a = dou;
//    int b (dou);
//    int c{dou};
//    vector<int> my_Vec;
//    my_Vec.resize(1);
//    //if(my_Vec[0])
//    my_Vec.push_back(2);
//
//    assert(my_Vec.size() == 2);
//
//
//    for(auto& elem: my_Vec)
//    {
//        cout<<elem<<endl;
//    }
//
//    foo();

    return 0;
}

void foo()
{
    char* c = (char*)b;
    char* d = reinterpret_cast<char*>(b);
    cout<<c<<endl;
    cout<<d<<endl;
}
