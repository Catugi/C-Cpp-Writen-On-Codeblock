#include <algorithm>
#include <iostream>
#include <list>
#include <numeric>
#include <random>
#include <ranges>
#include <vector>

namespace rg = std::ranges;

int main()
{
    std::list<int> l(10);
    std::iota(l.begin(), l.end(), -4);
	
    std::vector<std::list<int>::iterator> v(l.size());
    std::iota(v.begin(), v.end(), l.begin());
    
    std::random_device rd{};
	std::mt19937 g{rd()};
    //std::shuffle(v.begin(), v.end(),g);
    rg::shuffle(v, g);

    std::cout << "Contents of the list: ";
    for(auto item: l) std::cout << item << ' ';
    std::cout << '\n';

    std::cout << "Contents of the list, shuffled: ";
    for(auto item: v) std::cout << *item << ' ';
    std::cout << '\n';
}
