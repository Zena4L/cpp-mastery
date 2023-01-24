#include <iostream>
using namespace std;
/**
 * iostream is the standard Input and Output libraryo 
 * namespaces allow us to eliminate prefixes
 * std::cout - cout - ostream - for output
 * std::cin - cin - istream - for input
 * std::cerr - cin - ostream - for error output
 * std::clog - clog - ostream - for executable info
 * typedef - for creating alias
 * struct - structures - for creating user defined types
*/


int main(void)
{
    //standard output
    cout << "Hello, welcome c++ " <<endl;
    cout << "Enter your pin \n" << endl;

    //alias with typedef
    typedef int integer;

    // variable declaration
    integer pin;
    //standard input
    cin >> pin;
    cout<< "Your pin is " << pin <<"\nWelcome"<<endl;

    //user defined type with structs
    struct Details
    {
        /* data */
        char fname[20];
        char mname[20];
        char lname[20];
        int id;
        int age;
    };

    typedef struct Details SD;
    //intializing structures
    SD zena = {"Clement","Owireku","Bogyah",1666,24};
    cout<<"Details ---------" <<endl;
    cout<< "first Name : " << zena.fname<<endl;
    cout<< "middle Name : " << zena.mname<<endl;
    cout<< "last Name : " << zena.lname<<endl;
    cout<< "id : " << zena.id<<endl;
    cout<< "age  : " << zena.age<<endl;

    int number;
    while (cin >> number)
    {
        cout << "number is :" << number<<endl;
        break;
    }
    


}