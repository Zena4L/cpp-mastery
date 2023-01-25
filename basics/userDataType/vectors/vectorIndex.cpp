#include <iostream>
#include <vector>

using namespace std;

/**
 * @d - count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100
*/
int main(void)
{
    vector<unsigned> scores(11,0);
    unsigned grade;
    while(cin >> grade){
        if(grade <= 100)
            ++scores[grade/100];
    }
    for(auto i:scores)
        cout<< i << " ";
        cout<<endl;

    return 0;
}