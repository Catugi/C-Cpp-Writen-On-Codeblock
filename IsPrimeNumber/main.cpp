#include <cmath>
#include <concepts>
#include <chrono>
#include <iostream>

using namespace std;
auto get_time()
{
    return std::chrono::high_resolution_clock::now();
}

[[nodiscard("Use the result if is prime or note")]]
bool IsPrime(std::integral auto number)
{
    for (auto i{2}; i <= sqrt(number); i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

[[nodiscard("Use the result if is prime or note")]]
bool _IsPrime(std::integral auto number)
{
    if (number <= 3)
        return (number > 1);
    if (number % 2 == 0 || number % 3 == 0)
        return false;


    for (decltype(number) i{5}; i * i <= number; i += 6)
    {
        if ((number % i == 0) || (number % (i + 2) == 0))
            return false;
    }
    return true;

}

[[nodiscard("Use the result if is prime or note")]]
bool IsPrime_(std::integral auto number)
{
    if (number < 2) return false;

    for (decltype(number) i{2}; i * i <= number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}


int main()
{
    auto start = get_time();
    for (auto i{2ull}; i <= 1111111ull; i++)
    {
        if (_IsPrime(i))
            cout << i << " is prime\n";
    }
    auto finish = get_time();

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    std::cout<<"Time : "<<duration.count()<<"ms\n";

    /*start = std::chrono::steady_clock::now();

    for (auto i{2ull}; i <= 1000000ull; i++)
    {
        if (IsPrime_(i));
        // cout << i << " is prime\n";
    }

    end = std::chrono::steady_clock::now();
    elapsed_time = end-start;
    std::cout<<"Time : "<<elapsed_time.count()<<std::endl;

    start = std::chrono::steady_clock::now();

    for (auto i{2ull}; i <= 1000000ull; i++)
    {
        if (IsPrime(i));
        // cout << i << " is prime\n";
    }

    end = std::chrono::steady_clock::now();
    elapsed_time = end-start;
    std::cout<<"Time : "<<elapsed_time.count()<<std::endl;*/
    return 0;
}
