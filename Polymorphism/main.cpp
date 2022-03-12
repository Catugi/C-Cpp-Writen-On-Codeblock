#include <iostream>

using namespace std;

class Movie
{
public:
    Movie();
    ~Movie();
    string plot(){
        return "No plot here";
    }
protected:
private:
    std::string name;
};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
