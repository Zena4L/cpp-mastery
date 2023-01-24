#include <iostream>
#include <string>
using namespace std;

int main(void)
{

    string name = "Clement Owireku-Bogyah";

    for(auto l : name)
        cout<<l<<endl;
    
    //string manipulations
    if(isalnum(name))
        printf("This is alpha");
    return 0;
}