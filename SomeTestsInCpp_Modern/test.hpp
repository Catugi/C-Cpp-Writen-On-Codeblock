#ifndef TEST_HPP_INCLUDED
#define TEST_HPP_INCLUDED

bool is_power(int n)
{
    bool is_ = false;
    if(n && (!(n & (n-1))))
    {
        is_ = true;
    }
    return is_;

}

struct C
{
    int x = 0;
    double y = 0;
public:
    C(double y_) : y(y_)
    {}
    C(int x_): x(x_)
    {}
    explicit operator int()
    {
        return x;
    }

    explicit operator double()
    {
        return y;
    }
//    operator int(){return x;}
};


class myVector
{
public:
    explicit myVector(uint64_t size)
    {
        std::cout <<size<<std::endl;
    }
};

#endif // TEST_HPP_INCLUDED
