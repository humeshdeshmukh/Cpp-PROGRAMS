/*create a class student consiste of student name age & percentage as data mamber,
include two member fuction get show student & show student which will accept & display
the value of studentwrite  a c++ program to  declare two objects of the class &
access the method */

#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string name;
    int age;
    double percentage;

public:
    void getstudent()
    {
        cout << "Enter student name :";
        cin.ignore(); //  clear the inpute buffer
        getline(cin, name);

        cout << "Enter student age :";
        cin >> age;

        cout << "Enter student percentage :";
        cin >> percentage;
    }
    void showstudent()
    {
        cout << "student name:" << name << endl;
        cout << "student age:" << age << endl;
        cout << " student percentage :" << percentage << "%" << endl;
    }
};

int main()
{
    student  student1, student2;

    cout << "enter detail for student 1: " << endl;
    student1.getstudent();

    cout << "enter detail for student 2: " << endl;
    student2.getstudent();

    cout << "\n student 1 detail :" << endl;
    student1.showstudent();

    cout << "\n student 2 detail :" << endl;
    student2.showstudent();
    return 0;
}