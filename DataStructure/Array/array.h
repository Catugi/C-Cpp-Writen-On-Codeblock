#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

struct Array
{
    int A[10];
    int size;
    int length;
};

//void Populate(struct Array *arr);
void Display(struct Array arr);
struct Array* Merge(struct Array *arr1,struct Array *arr2);
struct Array* Union(struct Array *arr1,struct Array *arr2);
struct Array* Intersection(struct Array *arr1,struct Array *arr2);
struct Array* Difference(struct Array *arr1,struct Array *arr2);
void InsertSort(struct Array *arr, int value);
void Rearrange(struct Array *arr);

#endif // ARRAY_H_INCLUDED
