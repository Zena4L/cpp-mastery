#include <iostream>
#include <string>
using namespace std;

/**
 * @d - this is for strings,vectors and arrays
 * to use string, we need to include string header i.e <string>
*/

int main(void)
{
    //this is a string declaration
    string name;
    cout<<"Name : "<<endl;
    cin >> name;
    cout<<"Name : "<<name<<endl;


    /**
     * Basic string operations
     * os << s - write s onto output stream os. return os
     * is >> s - Read white-space strong from is into s. return is
     * getline(is,s) - Read a line of input from s into is - return is
     * s.empty() - check if s is empty
     * s.size() -  return no of characters of s
     * s[n] - return character at location n
    */
    
    //unknow number of string
    string word;
    while (cin >> word)
    {
        cout<<word<<endl;
        break;
    }
    

    return 0;
}