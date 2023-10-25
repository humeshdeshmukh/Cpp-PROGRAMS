/*write a c++ program of  default parametric  constructor program */

#include <iostream>
#include <cstring>
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
        age = 0;
        per = 0.0;
    }
    // Parametrized constructor
    student(char *n, int a, float p)
    {
        strcpy(name, n); // Use strcpy to copy the name
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

int main()
{
    student s1, s2("Humesh", 18, 92);

    cout << "After object creation:" << endl;
    s1.showstudent();
    s2.showstudent();

    cout << "After calling s1.getstudent()" << endl;
    s1.getstudent();
    s2.getstudent();

    cout << "Student 1:" << endl;
    s1.showstudent();
    cout << "Student 2:" << endl;
    s2.showstudent();

    return 0;
}
