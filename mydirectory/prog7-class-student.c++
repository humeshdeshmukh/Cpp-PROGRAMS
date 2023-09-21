/* greate  a class student consist of student name age & percentage as data members.
inclue two member fuction get student & show student which will accept & display 
the value of studentwrite a c++ program  to declare two objects of the class &
 accessed the method*/

 #include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;
    double percentage;

public:
    void getStudent()
    {
        cout << "Enter student name: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, name);
        
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
