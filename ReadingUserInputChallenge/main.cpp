#include <iostream>
#include <any>

using namespace std;

void readAndSumUserInpu();

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}


void readAndSumUserInpu()
{
    int sum = 0, counter = 0;
    int order = counter + 1;
    while(counter < 10){
        cout<<"Enter number # "<<order<<" ";
        any anyvalue;
        auto value;
        cin>>value;
        anyvalue = value;
        if(value.has_value() && any_cast<int>(&anyvalue))
        {
            sum += value;
            counter++;
        }else{
            cout << "Invalid number"<<endl;
        }
    }

    cout <<"Sum = "<<sum<<endl;
}
