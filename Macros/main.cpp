#include <iostream>

using namespace std;
#define PI 3.141592
#define SQR(x)(x*x)
#define MSG(x) #x
int main()
{
    cout << PI<<endl;
    cout<< SQR(5)<<endl;
    cout<< MSG(Hello)<<endl;
    return 0;
}
