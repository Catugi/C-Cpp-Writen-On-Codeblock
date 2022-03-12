#include <iostream>
#include <concepts>
#include <ranges>
#include <array>

using namespace std;

int main()
{
    array<int, 6> a{1,2,3,4,5,6}, b{6,5,4,3,2,1};
    for(size_t i = 0; i<size(a); i++)
        cout<<a[i]<<' ';
    cout<<'\n';
    for (size_t i = 0; i<size(b); i++ )
        cout<<b[i]<<' ';
    ranges::swap(a,b);
    cout<<'\n';

    for(size_t i = 0; i<size(a); i++)
        cout<<a[i]<<' ';
    cout<<'\n';
    for (size_t i = 0; i<size(b); i++ )
        cout<<b[i]<<' ';
    return 0;
}
