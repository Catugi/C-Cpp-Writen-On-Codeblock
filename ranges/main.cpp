#include <algorithm>
#include <iostream>
#include <string>
#include <ranges>


auto main()->int
{
    std::string nome ="Fernando";
    std::ranges::sort(nome);
    std::cout<<nome<<std::endl;
}
