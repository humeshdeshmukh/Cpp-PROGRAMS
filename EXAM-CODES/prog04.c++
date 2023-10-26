/*16 Create a class student consists of student name, age and percentage as data members. Include
two member functions getstudent() and showstudent() which will accept and display the values of
students. Write a c++ program to declare two objects of the class and access the methods fuction.*/

#include <iostream>
using namespace std;
class Employee
{
private:
    string name;
    int age;
    int id;
    double salary;

public:
    void getEmployee()
    {
        cout << "Enter Employee name: ";
        cin >> name;
        cout << "Enter Employee age: ";
        cin >> age;
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee salary: ";
        cin >> salary;
    }
    void showEmployee()
    {
        cout << "Employee Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
    }
};
int main()
{
    Employee employee1, employee2;
    cout << "Enter details for Employee 1:" << endl;
    employee1.getEmployee();
    cout << "Enter details for Employee 2:" << endl;
    employee2.getEmployee();
    cout << "Details of Employee 1:" << endl;
    employee1.showEmployee();
    cout << "Details of Employee 2:" << endl;
    employee2.showEmployee();
    return 0;
}