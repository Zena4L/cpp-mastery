#include <iostream>

using namespace std;
/**
 * factorial program
 * val = val * (val - 1) *(val -2)* ... *(val -n);
*/

int fact(int n);
int main(void)
{
    int j = fact(5);
    cout<<"5! is "<< j <<endl;
    
   
}

int fact(int n)
{
    int res = 1; //this hold our calculated results
    while (n > 1)
    {
        res *= n--;
    }
    return res;
    
}