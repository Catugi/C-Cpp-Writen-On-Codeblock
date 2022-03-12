#include <iostream>

class Movies
{
public:
    Movies();
    ~Movies();
protected:
private:
};

class Matrix: public Movies
{
public:
    Matrix();
    ~Matrix();
protected:
private:
};


int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}
