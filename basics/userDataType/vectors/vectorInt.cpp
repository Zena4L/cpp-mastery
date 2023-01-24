#include <iostream>
#include <vector>
using namespace std;

/**
 * vector uses vector header.
*/

int main(void)
{
    //declaring a vector
    vector <int> ivec;
  
    // for (int i = 0; i <100;++i)
    // {
    //     ivec.push_back(i);
    //     cout<<ivec.at(i)<<endl;
    // }

    vector<string> svec;
    string words;
    cout<<"Enter letter or stop to terminate"<<endl;
    while (cin >> words)
    {
        if (words == "stop")
            break;
        else
            svec.push_back(words);
    };
    for(int i = 0; i < svec.size(); i++)
        cout<<svec.at(i)<<endl;
 

    
   
        
    return 0;
}