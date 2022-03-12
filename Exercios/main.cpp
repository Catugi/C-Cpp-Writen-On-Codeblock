#include <iostream>

using namespace std;

int func1(int n);
void func2(int n);

int main()
{
    setlocale(LC_ALL, "pt-PT");
    int n = 0;
    cout << "Escreva um número"<< endl;
    cin>>n;
    cout<<func1(n)<<endl;
//    func2(n);
    return 0;
}

int func1( int n)
{
    int aux = 0;
    if(n == 0)
        return 1;
    if(n == 1)
        return 1;
    else
        {
            aux = (func1(n-1) + 2*func1(n-2));
            return aux;
        }
}
void func2( int n)
{
    if(n == 0)
        cout<<"Zero\n";
    else
        {
            cout <<n<<endl;
            cout <<n<<endl;
            func2(n-1);
        }
}
