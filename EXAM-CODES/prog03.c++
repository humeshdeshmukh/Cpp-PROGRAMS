/*15 Create a class employee consist of employee name, age, ID and salary as member variable
include the member function getemployee() to scan the values from the user and showemployee()
to display the content of employee object. Write a c++ programme to create 2 objects of employee
class and use the various member function. */

#include <iostream>
using namespace std;
class Employee
{
private:
    string name;
    int age;
    int ID;
    double salary;

public:
    void getEmployee()
    {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter employee ID: ";
        cin >> ID;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void showEmployee()
    {
        cout << "Employee Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << ID << endl;
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

