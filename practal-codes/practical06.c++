/* write a c++ program to implemmnet all three types of constructor*/

#include <iostream>
#include <cstring> // instnt of string.h we use cstring
using namespace std;

class student
{
private:
    char name[10]; 
    int age;
    float per;

public:
    // Default constructor
    student()
    {
        name[0] = '\0'; // Initialize the name as an empty string
        age = 0;        // Initialize age to 0
        per = 0.0;      // Initialize per to 0.0
    }

    // Parameterized constructor
    student(char *n, int a, float p)
    {
        strcpy(name, n); 
        age = a;
        per = p;
    }

    void getstudent()
    {
        cout << "Enter name of student: ";
        cin >> name;
        cout << "Enter age of student: ";
        cin >> age;
        cout << "Enter percentage of student: ";
        cin >> per;
    }

    void showstudent()
    {
        cout << "Name of student: " << name << endl;
        cout << "Age of student: " << age << endl;
        cout << "Percentage of student: " << per << endl;
    }
};

int main() // Added the return type 'int' to main()
{
    student s1, s2("jone", 18, 92.71);
   

    cout << "After object creation" << endl;
    s1.showstudent();
    s2.showstudent();

    cout << "After calling s1.getstudent()" << endl;
    s1.getstudent();
    s2.getstudent();

    cout << "Student 1: ";
    s1.showstudent();
    cout << "Student 2: ";
    s2.showstudent();

    return 0;
}
