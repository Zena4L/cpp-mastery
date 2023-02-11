#include <iostream>
#include <string>

using namespace std;

#define UPPERCASE 0
#define NO_ERROR 0

int main(void)
{
    #ifdef UPPERCASE
        cout<<"This line is printed out" <<endl;
        cout<<"because UPPERCASE is define" <<endl;
    #endif

    #ifndef LOWERCASE
        cout<<"This line is printed out" <<endl;
        cout<<"because LOWERCASE is defined" <<endl;
    #endif

    return NO_ERROR;

}