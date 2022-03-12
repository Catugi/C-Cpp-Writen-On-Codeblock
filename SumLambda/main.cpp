#include <iostream>

int main()
{
    const auto sumLambda = [](auto... args){
        std::cout<<"sum of: "<<sizeof...(args)<<" numbers\n";
        return (args + ... + 0);
    };

    std::cout<<sumLambda(1, 2, 3, 4, 5, 4.6, 7, 8, 9, 10, 11, 12, 13)<<std::endl;
    return 0;
}
