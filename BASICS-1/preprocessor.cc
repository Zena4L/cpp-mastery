#include <iostream>
#include <string>

using namespace std;
#define METHOD "ABS"
#define ABS(val) ((val) < 0 ? -(val):(val) )
#define MAX_LENGTH 8
#define NEGATIVE_NUM -10
int main(void)
{
    char *str = METHOD;
    int arr[MAX_LENGTH];
    int i;

    cout<<"The original value in the array is" <<endl;
    for(i=0; i!=MAX_LENGTH;i++)
    {
        arr[i] = (i + 1)* NEGATIVE_NUM;
        printf("arr[%d] : %d\n", i , arr[i] );
    }

    cout<<"Applying the "<<  str  <<" macros " <<endl;
    for(i=0; i != MAX_LENGTH;i++)
    {
        printf("ABS(%d): %3d\n", arr[i], ABS(arr[i]));
        
    }
    return 0;
}