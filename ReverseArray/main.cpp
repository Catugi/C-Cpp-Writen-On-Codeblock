#include <iostream>
#include <vector>

using namespace std;

//vector reverse_array(vector<auto> );

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    for(auto i: vec)
    {
        cout << i<<" ";
    }
    cout<<endl;
    vec
    for(auto i: vec)
    {
        cout << i<<" ";
    }
    return 0;
}

/*vector reverse_array(vector<auto> vec)
{
    int maxIndex = vec.size();
    int halfSize = vec.size()/2;
    vector<auto> reversed(vec.size());
    for (int i = 0; i< halfSize ; ++i)
    {
        int temp = vec[i];
        vec[i] = vec[maxIndex-i];
        vec[maxIndex-i] = temp;
    }
}
*/
