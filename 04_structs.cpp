#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
A struct is a user-defined type that groups related data (member variables)
and functions (member functions) into one entity.

struct Name { ... }; : define a struct (note the semicolon at the end).
obj.member           : access a member variable or function (dot operator).
const string &x      : reference to a string, avoids copying and prevents modification.
return;              : exit a void function early.
*/

struct Student
{
    // Member variables 
    string name;
    int age;
    vector<string> courses;
    vector<string> assignments;

    void print_information()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;

        cout << "Courses: ";
        for (const string &course : courses) // range-based loop, read-only reference
        {
            cout << course << " ";
        }
        cout << endl;

        cout << "Assignments: ";
        for (const string &assignment : assignments)
        {
            cout << assignment << ", ";
        }
        cout << endl;

    }

    // Data validation
    void add_assignment(const string &newAssignment)
    {
        for (const string &assignment : assignments)
        {
            if(assignment == newAssignment) {
                cout << "You've assignment today! " << newAssignment << endl; //duplicate found
                return; // for  stopped loop
            }
        }
        assignments.push_back(newAssignment);
    }
};

int main()
{
    Student student1; // create (instantiate) a Student object

    //the dot operator(.) is to access a member of student variable
    student1.name = "Jhon";
    student1.age = 18;
    student1.courses.push_back("Linear Algebra");
    student1.courses.push_back("Calculus");
    student1.courses.push_back("Graph Theory");

    student1.add_assignment("01 Jun 2025"); // added
    student1.add_assignment("01 Jun 2025"); // duplicate
    student1.add_assignment("08 Jun 2025"); // added


    student1.print_information(); // Encapsulation
}