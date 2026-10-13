#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
A pointer is a special variable that stores the memory address of another variable.

&x : get the address of x
int* p : declare a pointer to int
*p : access the contents pointed to by p (dereference)
p : the pointer itself (holds an address)
*/

int main()
{
    int savings = 10000;        // initialize 10000 -> savings; savings value 10000
    int savings2 = savings;     // initialize savings -> savings2; savings value 'savings'
    int *savingsPtr = &savings; // savingsPtr is a pointer to int that stores the address of savings (&savings)

    savings += 20000;
    *savingsPtr += 5000; // '*' is dereference operator

    cout << "savings " << savings << endl; //35000
    cout << "savings " << *savingsPtr << endl; // 35000
    cout << "savings " << savingsPtr << endl; // memory address ex: 0x7fffffffd9b8'
    cout << "savings2 " << savings2 << endl; // 10000 

    return 0;
}