#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;
    m.insert(pair<int, string>(1, "Fernando"));
    m.insert(pair<int, string>(3, "Marcelina"));
    m.insert(pair<int, string>(7, "My Girl"));
    m.insert(pair<int, string>(4, "Angelino"));
    m.insert(pair<int, string>(2, "Débora"));
    m.insert(pair<int, string>(5, "Francisco"));
    m.insert(pair<int, string>(6, "My Life is"));

    auto itr_found = m.find(7);

    auto itr{m.begin()};
    for(; itr != m.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    cout<<"Found "<<itr_found->first<<": "<<itr_found->second<<endl;
    return 0;
}
