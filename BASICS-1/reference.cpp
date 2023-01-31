#include <iostream>

using namespace std;

/**
 * @d - reference type
*/

int main(void)
{
    int myAge = 17;
    int &refAge = myAge;
    
    cout<<refAge/2<<endl;
    return 0;
}