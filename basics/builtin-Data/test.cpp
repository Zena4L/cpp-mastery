#include <iostream>
#include <stdarg.h>

using namespace std;

int sum (int x, ...);

int main(void)
{
    int d1 = 2;
    int d2 = 3;
    cout<<"Result = "<<sum(2,d1,d2)<<endl;
    return 0;
}
int sum(int x,...)
{
    va_list myNumb;
    va_start(myNumb,x);

    int i;
    int result;

    for(i = 0; i<*myNumb;i++)
        result =+ va_arg(myNumb,int);
    va_end(myNumb);
    
    return result;
    
}