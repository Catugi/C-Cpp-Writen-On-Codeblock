#include <iostream>
#include <string>

using namespace std;

auto foo  = []() -> std::string
{
    int x = 5555;
    return to_string(x);
};

int main()
{
    int x = stoi(foo()) + 6;
    cout << x << endl;
    return 0;
}
