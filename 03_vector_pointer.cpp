#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
The arrow operator (->) is a shorthand for dereferencing a pointer and accessing a member.

p->member            : same as (*p).member
p->push_back(x)      : same as (*p).push_back(x)
p->operator[](i)     : same as (*p)[i]
*/


int main() {
    vector<string> courses = {"Water", "Soda", "Tea"};
    vector<string> *coursesPtr = &courses;

    // arrow operator (* ). = -> 
    coursesPtr->push_back("Coffe");

    for (size_t i = 0; i < courses.size(); i++)
    {
        cout << courses[i] << " "; // Water Soda Tea Coffee
    }
    cout << endl;

    for (size_t i = 0; i < coursesPtr->size(); i++) // coursesPtr->size() is the same as courses.size()   
    {
        cout << coursesPtr->operator[](i) << " "; // Water Soda Tea Coffee (same as (*coursesPtr)[i])
    }
    cout << endl;

}