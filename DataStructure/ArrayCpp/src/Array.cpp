#include "Array.h"
#include <iostream>

Array::Array()
{
    size = 10;
    Initialize();
}

Array::Array(std::size_t size)
{
    this->size = size;
    Initialize();
}

void Array::Initialize()
{
    A = new int[size];
    length = 0;
}

void Array::Swap(int & first, int &second)
{
    int temp = first;
    first = second;
    second = temp;
}

void Array::Display()
{
    for(int i = 0; i < length; i++)
    {
        std::cout<< this->A[i]<<std::endl;
    }
    std::cout<<"\n";
}

void Array::Append(int value)
{
    if(length < size)
    {
        A[length] = value;
        length++;
    }
    else
    {
        std::cerr<<"Array is full"<<std::endl;
    }
}

void Array::Insert(int index, int newValue)
{
    if((index >= 0 and index <= length) and (!Full()))
    {
        for(int i = length; i > index; --i)
        {
            this->A[i] = this->A[i-1];
        }
        this->A[index] = newValue;
    }
}

int Array::Delete(int index)
{
    int deletedValue = 0, i;
    if(index >= 0 and index < length)
    {
        deletedValue = A[index];
        for(i = index; i < length; i++)
        {
            A[i] = A[i+1];
        }
        length--;
        return deletedValue;
    }
    else
    {
        std::cerr<<"Position "<<index<<" does not exist\n";
        return -1;
    }
}

void Array::Fill(int value)
{
    for(int i = 0; i < size; ++i)
    {
        A[i] = value;
    }
}

int Array::LinearSearch(int key)
{
    for(int i = 0; i < length; ++i)
    {
        if(key == A[i])
        {
            Swap(A[i], A[0]);
            return i;
        }
    }
    return -1;
}

int Array::BinarySearch(int key)
{
    int middle;
    int low = 0;
    int high = length;
    while(low <= high)
    {
        middle = (low + high)/2;
        if(key == A[middle])
            return middle;
        else if(key < A[middle])

            high = middle - 1;
        else
            low = middle + 1;
    }
    return -1;
}

int Array::BinarySearch_R(int low, int high, int key)
{
    int middle;

    if(low <= high)
    {
        middle = (low + high)/2;
        if(key == A[middle])
        {
            return middle;
        }
        else if(key < A[middle])
        {
            return BinarySearch_R((middle - 1), high, key);

        }
        else
        {
            return BinarySearch_R(low, (middle+1), key);
        }
    }
    return -1;
}

bool Array::Full()
{
    return this->length == this->size;
}

int Array::Get(int index)
{
    if(index <= 0 && index < length)
    {
        return A[index];
    }
    else
    {
        std::cerr<<"Out of bounds of array"<<std::endl;
        return -1;
    }
}

void Array::Set(int index, int value)
{
    if(index >= 0 && index < length)
    {
        A[index] = value;
    }
    return;
}

int Array::Max()
{
    int max = A[0];
    for(int i = 0; i < length; ++i)
    {
        if(A[i] > max)
            max = A[i];
    }
    return max;
}

int Array::Min()
{
    int min = A[0];
    for(int i = 0; i < length; ++i)
    {
        if(A[i] < min)
            min = A[i];
    }
    return min;
}

int Array::Sum()
{
    int sum = 0;
    for(int i = 0; i < length; ++i)
    {
        sum += A[i];
    }
    return sum;
}
//
//int Array::rSum(int length){
//    if(length < 0){
//        return 0;
//    }
//    return rSum(le
//}

void Array::ReverseBad()
{
    int *B;
    int i, j;
    B = new int[length];
    for(i = length, j = 0; i >= 0; i++, j++)
    {
        B[j] = A[i];
    }
    for(i = 0; i < length; ++i)
    {
        A[i] = B[i];
    }
    delete []B;
    B = nullptr;
}

void Array::Reverse()
{
    int j = length-1;
    for(int i = 0; i < length/2; ++i)
    {
        Swap(A[i], A[j]);
        j--;
    }
}

void Array::InsertSort(int value)
{
    int i = length-1;
    if(length == size)
    {
        return;
    }
    while(i >=0 and A[i] > value)
    {
        A[i + 1] = A[i];
        i--;
    }
    A[i+1] = value;
    length++;
}

void Array::Rearrange()
{
    int i = 0, j = length - 1;
    while(i < j)
    {
        while(A[i] < 0 ) i++;
        while(A[j] >= 0) j--;
        if(i<j)
        {
            Swap(A[i], A[j]);
        }
    }
}

float Array::Avg()
{
    return Sum()/length;
}

Array* Array::Merge(Array& lhs)
{
    int i = 0, j = 0, k = 0;
    Array *arr3 = new Array(lhs.length + length);
    while(i < lhs.length and j < length)
    {
        if(lhs.A[i] < A[j])
        {
            arr3->A[k++] = lhs.A[i++];
        }
        else
        {
            arr3->A[k++] = A[j++];
        }
    }
    for(; i < lhs.length; ++i)
    {
        arr3->A[k++] = lhs.A[i];
    }
    for(; j < length; ++j)
    {
        arr3->A[k++] = A[j];
    }
    arr3->length = k;
    return arr3;
}

Array::~Array()
{
    delete []A;
}
