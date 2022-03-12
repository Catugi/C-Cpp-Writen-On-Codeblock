#include <iostream>
#include <cmath>
#include "Array.h"

using namespace std;

int main()
{
    cout<<(true and false)<<endl;
    Array arr1(10);
    Array arr2(10);

    arr1.Append(12);
    arr1.Append(23);
    arr1.Append(25);
    arr1.Append(26);
    arr1.Display();

    arr2.Append(24);
    arr2.Append(27);
    arr2.Append(56);
    arr2.Append(59);
    arr2.Display();

    Array *arr3 = arr1.Merge(arr2);
    arr3->Display();
    return 0;
}
