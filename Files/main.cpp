#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str;
    int x;
    float y;
    ofstream outfile("My.txt", ios::app); //Só de saída para o arquivo. (Escrever no arquivo)
    if (outfile.bad())
    {
        cout<<"File cannot be created"<<endl;
    }
    outfile<<"Fernando"<<endl;
    outfile<<26<<endl;
    outfile<<2.23<<endl;
    outfile.close();

    ifstream ifs("My.txt");
    if (!ifs)
//    if(!ifs.is_open())
    {
        cout<<"Something wrong"<<endl;
    }
    ifs>>str>>x>>y;
    cout<<"Str: "<<str<<" int: "<<x<<" float: "<<y<<endl;
    return 0;
}
