#include <iostream>
#include <vector>
using namespace std;

/**
 * @d - iterators
 * this program capitalize the first letter
 * 
 * 
*/

int main(void)
{
    string str("Here is a string");
    if(str.begin() != str.end()){ //make sure str is not empty
        auto i = str.begin(); //it denote the first character in str
        *i = toupper(*i); //make the character uppercase
    };
    cout<<str<<endl;

    vector<int> ivec;
    ivec.push_back(10);
    ivec.push_back(15);
    ivec.push_back(20);
    ivec.push_back(25);

    if(ivec.begin() != ivec.end()){
        auto m = ivec.begin();
        auto n = ivec.end();
        *m = *m * 5;
        *n = *n * 5;
    }
    for (auto i : ivec)
        cout<< i << " ";
        cout << endl;

    return 0;
}