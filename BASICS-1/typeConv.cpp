#include <iostream>

using namespace std;
/**
 * @d - type conversion
*/

int main()
{
    bool b = 42; //truthy
    cout<< b <<endl;
    int i = b; //holds 1
    cout<<i<<endl;
    i = 3.14; //convert to int of 3
    cout<<i<<endl;
    double pi = i;
    cout<<pi<<endl;
    unsigned char c = i;
    cout<<c<<endl;
    signed char c2 = '225';
    cout<<c2<<endl;
    return 0;
}