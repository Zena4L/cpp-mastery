#include <iostream>
#include <array>
#include <string>

using namespace std;
/**
 * arrays - they have fixed size and their size must be stated
 * can't use auto in arrays
 * arrays can be copy into each other
*/
int main(void)
{

    // unsigned cnt = 42; //not a constant
    // const unsigned cz = 42; //const expression

    // int arr[10]; //array of 10 int
    // int *parr[cz]; //array of 42 pointers of int
    // string bad[cnt]; //error "cnt" is not a const expressin
    // string strs[get_size()] ; //no error if get_size() is a const express;
    // int myArr[] = {1,2,3,4,5};

    // cout<< myArr[1]<<endl;
    // char arr[3] = {'a','b','c'};
    

    // for (auto i :arr)

    //     cout<< i << " ";
    //     cout<<endl;
    // cout<<arr[2]<<endl;

    // int arr[5] = {1,2,3,4,5};
    // int *parr;
    // parr = arr;

    // cout<< *(parr + 1) << endl;

    // int ai[] = {0,1,2,3,4,5,6,7,8,9};
    // int *beg = begin(ai);
    // int *lst = end(ai);

    //finding the first negative number
    int arr[] = {20,3,4,-4,3,-2};

    int *pbeg = begin(arr), *pend = end(arr);

    while (pbeg != pend && *pbeg >= 0)
    {
        if(*pbeg >= 0)
            cout<<*pbeg<<endl;
        ++pbeg;
    }
    
    return 0;
}