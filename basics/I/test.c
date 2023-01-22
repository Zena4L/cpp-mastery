#include <stdio.h>
#include <stdarg.h>

int sum (int x, ...);

int main(void)
{
    
    printf("\n%d",sum(2,3,4));
    return 0;
}
int sum(int x, ...)
{
    int i,result;

    va_list myList;
    va_start(myList,x);
    for (i=0;i<x;i++)
        result =+ va_arg(myList,int);
    va_end(myList);
    return result;

}