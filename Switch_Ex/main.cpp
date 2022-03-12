#include <iostream>
#include <threads.h>

using namespace std;

void three_five_challenge();

int main()
{
    int switch_value = 3;
    switch (switch_value)
    {
    case 1:
        cout << "Value was 1"<<endl;
        break;
    case 2:
        cout<< "Value was 2"<<endl;
        break;
    case 3:
    case 4:
    case 5:
        cout<< "Value was 3, 4 or 5"<<endl;
        cout << "Currently it was "<<switch_value<<endl;
        break;

    default:
        cout << "It was none of that specified"<<endl;
        break;
    }

    int16_t str_test {'A'};
    switch (str_test)
    {
    case 'A':
        cout <<"it was "<<static_cast<char>( str_test)<<endl;
        break;

    default:
        break;
    }
    cout <<"\n\n";
    three_five_challenge();

    return 0;
}


void three_five_challenge()
{
    long sum = 0;
    int m_count = 0;
    for (int i = 1; i <= 1000 ; i++ )
    {
        if((i % 3 == 0 ) && (i % 5 == 0))
        {
            m_count++;
            sum += i;
            cout <<i<< " is fuzzy-buzz number"<<endl;

        }
        if(m_count == 5)
            break;
    }
    cout << "The sum of the number is "<<sum<<endl;
}
