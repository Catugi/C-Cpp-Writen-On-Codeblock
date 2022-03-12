#ifndef ARRAY_H
#define ARRAY_H
#include <type_traits>

class Array
{
public:
    Array();
    Array(std::size_t size);
    virtual ~Array();

    void Display();

    void Append(int value);

    void Insert(int index, int newValue);

    int Get(int index);

    void Set(int index, int value);

    int Max();

    int Min();

    int Sum();

    int rSum();

    float Avg();

    void ReverseBad();

    void Reverse();

    void InsertSort(int value);

    void Rearrange();

    Array* Merge(Array &lhs);
    friend Array operator + (Array &lhs, Array &rhs);

    Array* Union(Array &lhs, Array &rhs);
    friend Array* operator | (Array &lhs, Array &rhs);

    Array* Intersection(Array &lhs, Array &rhs);
    friend Array* operator & (Array &lhs, Array &rhs);

    Array* Difference(Array &lhs, Array &rhs);
    friend Array* operator - (Array &lhs, Array &rhs);

    bool MemberShip(int value);

    int Delete(int index);

    void Fill(int value);

    int BinarySearch(int key);
    int BinarySearch_R(int low, int high, int key);

    int LinearSearch(int key);



protected:

private:

    void Swap(int &first, int &second);
    bool Full();
    void Initialize();

    int *A;
    int size;
    int length;
};

#endif // ARRAY_H
