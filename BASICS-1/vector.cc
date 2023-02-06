#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    string name("something");
    
    for(auto it = name.begin();it != name.end() && !isspace(*it);++it)
    {
        *it = toupper(*it);
        cout << *it <<endl;
    }

    /**
    // iterator types
    vector<int> :: iterator it1; //read and write
    string::iterator it2; // read and write
    vector<int>::const_iterator it3; //read only
    string::const_iterator it4; //read only
    */

   const vector<int> ivec ;
   ivec = {1,2,3,4};
    // for(int i = 0; i != 10; ++i)
    // {
    //     ivec.push_back(i);
    // }
   auto ci = ivec.cbegin(); //const_iterator type
   cout << *ci << endl;


    return 0;
}