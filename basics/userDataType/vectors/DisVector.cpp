#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * @d - displaying vector members
 * size() and empty() -  size returns number of elements and empty return a bool
*/
int main(void)
{
    vector<int> v1(10,1);

    for (auto &i : v1)
        i *= i;
    for ( auto i : v1)
        cout<<i << " ";
        cout<< endl;
    cout<< v1.size() <<endl;
    cout<< v1.empty()<<endl;
    return 0;
}