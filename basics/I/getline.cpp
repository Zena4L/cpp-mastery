#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main(void)
{
    // string line;
    // //this is an auto type specifier
    // while(getline(cin, line))
    // {
    //     if(!line.empty() && line.size() > 3){
    //         cout << line << endl;
    //     }else{

    //     cout<<"Empty line or less than 3"<<endl;
    //     }
    //     break;
    // }
    char b = 'a', c = 'x';
    auto sum = c + b;

    cout<< typeid(sum).name()<<endl;


    

    return 0;
}