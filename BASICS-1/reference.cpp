#include <iostream>

using namespace std;

/**
 * @d - reference type
*/
int add(int x,int y);

int main(void)
{
    //using the auto type and reference
    auto myAge = 17;
    auto &refAge = myAge;
    
    struct newName
    {
        char name[20];
    };
    
    //alias ..can use typedef too
    using NA = struct newName;

    NA clement = {"clement"};
    cout<<clement.name<<endl;

    // add(2,3)
    decltype (add(2,3)) sum = 5;
    cout<<sum<<endl;

    cout<<refAge/2<<endl;
    return 0;
}
int add(int x,int y)
{
    return x+y;
}