#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string college_name;
    string branch;
    int year;
    int marks[5]; // Use an array to store marks for 5 subjects
    float percentage;
    float average;

public:
    void getStudent()
    {
        cout << "Enter college name: ";
        cin >> college_name;

        cout << "Enter branch: ";
        cin.ignore();
        getline(cin, branch);

        cout << "Enter year: ";
        cin >> year;

        cout << "Enter marks for 5 subjects:" << endl;
        for (int i = 0; i < 5; ++i)
        {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }

        // Calculate percentage based on the sum of marks and the total possible marks
        int totalMarks = 500; // Assuming each subject is out of 100
        int sum = 0;
        for (int i = 0; i < 5; ++i)
        {
            sum += marks[i];
        }
        percentage = static_cast<float>(sum) / totalMarks * 100;
        average = sum / 5;
    }

    void showStudent()
    {
        cout << "College Name: " << college_name << endl;
        cout << "Branch: " << branch << endl;
        cout << "Year: " << year << endl;
        cout << "Marks for 5 subjects:" << endl;
        for (int i = 0; i < 5; ++i)
        {
            cout << "Subject " << i + 1 << " marks: " << marks[i] << endl;
        }
        cout << "Student Percentage: " << percentage << "%" << endl;
        cout << "student average : " << average << endl;
    }
};

int main()
{
    Student student1;

    cout << "Enter details for student 1:" << endl;
    student1.getStudent();

    cout << "\nStudent 1 details:" << endl;
    student1.showStudent();

    return 0;
}
