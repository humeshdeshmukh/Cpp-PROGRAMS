/*write a c++ classes program content clg name,
branch ,year, percentage,marks*/

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string college_name;
    string branch;
    int year;
    int marks;
    float percentage;

public:
    void getStudent()
    {
        cout << "Enter college name: ";
        cin.ignore(); // clear buffer
        getline(cin, college_name);

        cout << "Enter branch: ";
        getline(cin, branch);

        cout << "Enter year: ";
        cin >> year;

        cout << "Enter student marks: ";
        cin >> marks;

        cout << "Enter student percentage: ";
        cin >> percentage;
    }

    // Member function to display student details
    void showStudent()
    {
        cout << "College name: " << college_name << endl;
        cout << "Branch: " << branch << endl;
        cout << "Year: " << year << endl;
        cout << "Marks: " << marks << endl;
        cout << "Student percentage: " << percentage << "%" << endl;
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
