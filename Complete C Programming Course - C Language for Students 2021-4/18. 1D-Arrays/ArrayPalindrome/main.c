#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 6

bool is_palindrome(int *, int );

int main()
{
    int arr[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        printf("Enter the %dº element ", (i+1));
        scanf("%d", &arr[i]);
    }

    if(is_palindrome(arr, SIZE))
    {
        printf("The given array is palidrome\n");
    }
    else
    {
        printf("The given array is not palidrome\n");
    }
    return 0;
}


bool is_palindrome(int *arr, int size)
{
    bool is_pali = true;
    int i = 0;
    //int length = size - 1;
    for(; i <= size/2; i++)
    {
        if(arr[i] != arr[size-1-i])
        {
            is_pali = false;
            break;
        }
        //length--;
    }
    return is_pali;
}
