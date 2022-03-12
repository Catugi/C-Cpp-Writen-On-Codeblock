#include <iostream>
#include <vector>
#include <gsl/gsl>

using namespace std;

int main()
{
    int x = 10;
    gsl::owner<int *>pInt = &x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<pInt<<endl;
    cout<<&pInt<<endl;
    cout<<*pInt<<endl;

    int *p = new int[5];
    for(int i = 0; i < 5; ++i)
        cout<<*p+i<<endl;

    return 0;
}
