#include <iostream>
#include <sstream>
#include <ranges>

using namespace std;

int main()
{
    if(cout.good())
    {
        cout << "Hello world!";
        cout.flush();
        cout << "def";
        cout<<endl;
    }
    cout.flush();
    if(cout.fail())
    {
        cerr <<"Erro fatal\n";
        return -1;
    }
    cout.exceptions(ios::failbit | ios::badbit | ios::eofbit);

    bool myBool = true;
    cout << "This is the default "<<myBool<<endl;
    cout << "This should be true "<<boolalpha<<myBool<<endl;
    cout << "This should be 1 "<<noboolalpha<<myBool<<endl;
//    time_t t_t = time(nullptr);
//    tm* t = localtime(&t_t);

    cout << "Enter tokens Control-D to end"<<endl;
    ostringstream outStream;
    while(cin)
    {
        string nextToken;
        cout << "Next token ";
        cin>> nextToken;
        if(nextToken == "done")
            break;
        outStream<<nextToken<<"\t";

    }
    cout << "The result is "<<outStream.str();

    return 0;
}
