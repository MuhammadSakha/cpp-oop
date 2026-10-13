#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
Pointer can also point to a vector, not only to an int

&courses            : get the address of the courses
vector<string>* p   : declare a pointer to a vector of strings
(*p.member)         : derefrence first, then access a member of the vector
p->member           : shorthand for (*p).member
*/


int main()
{
    vector<string> courses = {"Chemistry", "Physics", "Math"};
    vector<string> *coursesPtr = &courses; 

    (*coursesPtr).push_back("French");

    for (size_t i = 0; i < courses.size(); i++)
    {
        cout << courses[i] << " "; //chemistry, physics, math, french
    }
    cout << endl;

    for (size_t i = 0; i < (*coursesPtr).size(); i++)
    {
        cout << (*coursesPtr)[i] << " "; //chemistry, physics, math, french (same vector, same output)
    }
    cout << endl;
}