/* create  a class student consist of student name age & percentage as data members.
inclue two member fuction get student & show student which will accept & display
the value of student write a c++ program  to declare two objects of the class &
 accessed the method*/

#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    char name[10];
    int age;
    double percentage;

public:
    student()
    {
        name[0] = '\0';   // Initialize the name as an empty string
        age = 0;          // Initialize age to 0
        percentage = 0.0; // Initialize per to 0.0
    }

    void getStudent()
    {
        cout << "Enter student name: ";
        cin >> name;
        /*cin.ignore(); // Clear the input buffer
        getline(cin,name);*/

        cout << "Enter student age: ";
        cin >> age;

        cout << "Enter student percentage: ";
        cin >> percentage;
    }

    void showStudent()
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "Student Percentage: " << percentage << "%" << endl;
    }
};

 int main()
{
    Student student1, student2;

    cout << "Enter details for student 1:" << endl;
    student1.getStudent();

    cout << "Enter details for student 2:" << endl;
    student2.getStudent();

    cout << "\nStudent 1 details:" << endl;
    student1.showStudent();

    cout << "\nStudent 2 details:" << endl;
    student2.showStudent();

    return 0;
}

/*int main()
{
    char choice;
    Student student;
    bool continueEntering = true;

    while (continueEntering)
    {
        cout << "Enter details for a student:" << endl;
        student.getStudent();

        cout << "\nStudent details:" << endl;
        student.showStudent();

        cout << "\nDo you want to enter details for another student? (Y/N): ";
        cin >> choice;

        if (choice != 'Y' && choice != 'y')
        {
            continueEntering = false;
        }
    }

    return 0;
}*/
