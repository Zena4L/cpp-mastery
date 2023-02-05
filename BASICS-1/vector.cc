#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    vector<string> name;
    string word;

    while (cin >> word)
    {
        name.push_back(word);
        break;
    }
    
    auto first = name.begin();

    cout << *first <<endl;
    return 0;
}