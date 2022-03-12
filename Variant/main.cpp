#include <variant>
#include <string>
#include <iostream>
#include <cassert>
#include <algorithm>
#include <ranges>
#include <array>

namespace rg = std::ranges;

int main()
{
    std::variant<int, float> v, w;
    v = 12; // v contains int
    [[maybe_unused]] int i = std::get<int>(v);
    w = std::get<int>(v);
    w = std::get<0>(v); // same effect as the previous line
    w = v;              // same effect as the previous line

    //  std::get<double>(v); // error: no double in [int, float]
    //  std::get<3>(v);      // error: valid index values are 0 and 1
    std::cout << std::get<int>(v) << " " << std::get<int>(w) << std::endl;

    try
    {
        std::get<float>(w); // w contains int, not float: will throw
    }
    catch (const std::bad_variant_access &e)
    {
        std::cerr<<e.what();
    }

    using namespace std::literals;

    std::variant<std::string> x("abc");
    // converting constructors work when unambiguous
    x = "def"; // converting assignment also works when unambiguous

    std::variant<std::string, void const *> y("abc");
    // casts to void const * when passed a char const *
    assert(std::holds_alternative<void const *>(y)); // succeeds
    y = "xyz"s;
    assert(std::holds_alternative<std::string>(y)); // succeeds
    //    [[maybe_unused]] std::array<int, 6> marr{2,5,1,9,-3,8};
//    rg::sort(marr);
//    for(auto x: marr)
//    {
//        std::cout<<x<<'\n';
//    }

}
