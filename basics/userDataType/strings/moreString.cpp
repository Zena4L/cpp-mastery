#include <iostream>
#include <string>

using namespace std;
/**
 * @d - Suppose that instead of counting punctuation, we wanted to convert a string to all uppercase letters
 * To do so we can use the library toupper function, which takes a character and returns the uppercase version of that character. 
 * To convert the whole string we need to call toupper on each character and put the result back in that character
*/

int main(void)
{
    // string s("Hello world!");
    // //convert to uppercase
    // for (auto &c : s) //we reference s
    //     c = toupper(c);
    // cout <<s<<endl;
    cout<<"Please Enter your name in all lower"<<endl;
    string name;
    cin >> name;

    cout<<"Old Name : "<<name<<endl;

    for(auto &n : name)
        n = toupper(n);
    cout <<"New name : " << name << endl;

    return 0;
}