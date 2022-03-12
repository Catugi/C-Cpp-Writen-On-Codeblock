#include <iostream>

//using namespace std;
 const auto printer = [] (auto first, auto... args){
        std::cout<<first;
        ((std::cout<<", "<<args), ...);
        std::cout<<'\n';
    };

int main()
{

    printer(1,2,3,"hello", 4.5f, 3.45);
    return 0;
}
