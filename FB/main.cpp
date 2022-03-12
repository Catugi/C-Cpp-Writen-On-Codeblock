#include <iostream>

using namespace std;

void Insertion(int A[],int n)
{
    int i,j,x;
    for(i=1; i<n; i++)
    {
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}

int main()
{
    const int MAX = 30;
    int arr[MAX];
    int impares = 0, pares = 0;
    for(int i = 0; i < MAX; ++i)
    {
        int j;
        cout<<"Escreva o valor da posição "<<(i+1)<<" ";
        cin>>j;
        arr[i] = j;
    }
    Insertion(arr, MAX);
    for(int i = 0; i < MAX; ++i)
    {
        if(arr[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
