#include <iostream>
#include <vector>
using namespace std;

/**
 * vector uses vector header.
 * .push_back() - to append
 * .at(index) - to print and can also use for range
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

    // vector<string> svec;
    // string words;
    // cout<<"Enter letter or stop to terminate"<<endl;
    // while (cin >> words)
    // {
    //     if (words == "stop")
    //         break;
    //     else
    //         svec.push_back(words);
    // };
    // for(int i = 0; i < svec.size(); i++)
    //     cout<<svec.at(i)<<endl; 

    int num;
    while (cin >> num)
    {
        if(num != 0)
            ivec.push_back(num);
        else
            break;
            
    }
    cout<<"-----------------------"<<endl;
    // for (int i =0; i < ivec.size(); i++)
    //     cout << ivec.at(i)<<endl;
    for(auto i : ivec)
        cout<<i<<endl;
    return 0;
}