#include <iostream>
#include <list>
#include <set>

using namespace std;

int main()
{
    list<int> cont= {2,4,6,8,10};
    set<int> my_set = {2,4,6,8,10,10};
    cont.push_back(20);
    cont.push_back(30);
    auto itr = cont.begin();
    for(auto &x: cont)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for(; itr != cont.end(); itr++)
    {
        cout<<++(*itr)<<" ";
    }
    cout<<endl;

    cont.pus

    my_set.insert(20);
    my_set.insert(30);
    for(auto &x : my_set)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}
