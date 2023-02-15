#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{

    // string name;

    if(argc > 0)
    {
        if(atoi(*argv[1]) == "upper")
        {
            cout<<"upper"<<endl;
        }else if(atoi(*argv[1]) == "lower"){
           cout<<"lower"<<endl;
        }else{
            cout<<"no arg" <<endl;
        }
    }



    return 0;

}