#include <iostream>
#include <string>

using namespace std;
/**
 * @d - basic string manipulations
*/

int main(void)
{

    //Reading an unknown number of strings
    string word;

    while (cin >> word) //read till end-of-flie
        if(word == "stop")
            break;
        else
            cout<< word <<endl;
        
    //using getline for input
    string l;
    while (getline(cin,l))
    {
        if(l.empty())
            cout<<"empty line"<<endl;
        else
            cout<<l<<endl;
        break;
    }

    //Proccessing characters
    string str("Hello world!");
    for( auto c : str)
        cout<<c<<endl;
        
    return 0;

}
