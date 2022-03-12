#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
    for(int i = 0; i<= 10; ++i)
        cout<<i<<setw(10)<<left<<"A"<<endl;
    return 0;
}
