#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * @d - displaying vector members
*/
int main(void)
{
    vector<int> v1(10,1);

    for (auto &i : v1)
        i *= i;
    for ( auto i : v1)
        cout<<i << " ";
        cout<< endl;
    return 0;
}