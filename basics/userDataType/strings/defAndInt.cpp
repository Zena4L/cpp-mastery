#include <iostream>
#include <string>
using namespace std;

/**
 * desc - String uses <string> header and part of namespace std (std::string);
 * strings can be defined and initialized in diff ways
*/
int main(void)
{
    string s1; //empty string
    string s2 = "Hello"; // copy of string literal
    string s3("Direct init"); //Direct initialization
    string s4(10,'H'); //direct initiaalization

    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;

}