#include "array.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void Swap(int *first, int *second)
{
    int tmp;
    tmp = *first;
    *first = *second;
    *second = tmp;
}

//void Populate(struct Array *arr)
//{
//    int n = 0;
//    fprintf(stdout, "Enter the size of an array: ");
//    scanf("%d", &arr->size);
//    arr->A = (int *)malloc(arr->size*sizeof(int));
//    arr->length = 0;
//
//    fprintf(stdout, "Enter the length of array: ");
//    fscanf(stdin, "%d", &n);
//    while (true)
//    {
//        if (n > arr->size)
//        {
//            fprintf(stderr, "Enter a lesser number please: ");
//            fscanf(stdin, "%d", &n);
//        }
//        else
//            break;
//    }
//    fprintf(stdout, "Enter the elements of array: ");
//    fprintf(stdout, "\n");
//
//    fprintf(stdout, "length of array %d\n", n);
//    for (int i = 0; i < n; ++i)
//    {
//        fprintf(stdout, "Enter the element %d: ", i);
//        fscanf(stdin, "%d", &arr->A[i]);
//    }
//    arr->length = n;
//}

void Display(struct Array arr)
{
    int i;
    fprintf(stdout, "\nElements are\n");

    for(i = 0; i<arr.length; i++)
        fprintf(stdout, "%d ",arr.A[i]);

    fprintf(stdout, "\n");
}

struct Array* Merge(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while(i<arr1->length && j < arr2->length)
    {
        if(arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for(; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    for(; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->length=arr1->length+arr2->length;
    arr3->size = 10;
    return arr3;

}


struct Array* Union(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while(i<arr1->length && j < arr2->length)
    {
        if(arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if(arr2->A[j] < arr1->A[i])
            arr3->A[k++] = arr2->A[j++];
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    for(; i<arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    for(; j<arr2->length; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->length = k;
    arr3->size = 10;
    return arr3;

}

struct Array* Intersection(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while(i<arr1->length && j < arr2->length)
    {
        if(arr1->A[i] < arr2->A[j])
            i++;
        else if(arr2->A[j] < arr1->A[i])
            j++;
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    arr3->length = k;
    arr3->size = 10;
    return arr3;

}

struct Array* Difference(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while(i<arr1->length && j < arr2->length)
    {
        if(arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];

        else if(arr2->A[j] < arr1->A[i])
            j++;
        else
        {
            i++;
            j++;
        }
    }

    for(; i<arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    arr3->length = k;
    arr3->size = 10;
    return arr3;

}

void InsertSort(struct Array *arr, int value)
{

    int i = arr->length - 1;

    if (arr->length == arr->size)
    {
        return;
    }
    while(i >= 0 && (arr->A[i] > value))
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = value;
    arr->length++;
}


void Rearrange(struct Array *arr)
{
    int i = 0, j = arr->length-1;
    while(i<j)
    {
        while(arr->A[i] < 0)i++;
        while(arr->A[j] >= 0) j--;
        if (i<j)
        {
            Swap(&arr->A[i], &arr->A[j]);
        }
    }

}
