#include <iostream>
#include <stdarg.h>

using namespace std;

int sum (int x, ...);

int main(void)
{
    cout<<"Result = "<<sum(2,4,5)<<endl;
    return 0;
}
int sum(int x,...)
{
    va_list myNumb;
    va_start(myNumb,x);

    int i;
    int result;

    for(i = 0; i<x;i++)
        result += va_arg(myNumb,int);
    
    return result;
    
}