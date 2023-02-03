#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s = "Hello world!";

    for(auto c : s)
    {
        if(ispunct(c))
            cout<< c << endl;
    }
    
    
    return 0;
}