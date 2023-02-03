#include <iostream>
#include <string>

using namespace std;
/**
 * to use a string, we need the header <string>
*/

int main(void)
{
    //defining and initializing a string
    string s1 ;
    string s2 = s1;
    string s3 = "Hello";
    string s4(10,'c');

    cout<<s3 << " " <<s4 << " ";
    cout<<endl;

    if(s1.empty())
    {
        cout<<" s1 is empty" << endl;
        cout<<s1.size()<<endl;
    }else
    {
        cout<<s1<<endl;
    }
    //this line print unknown number of input
    cout<<" Type a word " <<endl;
    while (cin >> s1)
    {
        cout<< s1 << endl;
        break;
    }
    
    return 0;
}