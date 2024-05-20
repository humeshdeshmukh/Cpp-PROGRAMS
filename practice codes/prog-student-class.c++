#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string collage_name;
    string branch;
    int year;
    int marks[5]; // use a arry to store marks for  5 subject
    float percentage;
    float average;


public:
    void getstudent()
    {
        cout << " Enter collage name:" << endl;
        cin >> collage_name;
        cout << "Enter branch:" << endl;
        cin.ignore();
        getline(cin, branch);

        cout << " Enter year :"<<endl;
        cin >> year;

        cout << " Enter marks for 5 subject :" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << " Enter marks for subject " << i + 1 << ":" << endl;
            cin >> marks[i];
        }

        // calculate percentage based on the sum of marks and total
        // possible  marks
        int totalmarks = 500; // assuming each subject is out 100
        int sum = 0;
        for (int i = 0; i < 5; ++i)
        {
            sum += marks[i];
        }
        percentage = static_cast<float>(sum) / totalmarks * 100;
        
        average = sum / 5.0;
    }
    void showstudent()
    {
        cout << "student name:" << collage_name << endl;
        cout << " Branch :" << branch << endl;
        cout << " Year :" << year << endl;
        cout << " Marks for 5 subject :" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << " subject " << i + 1 << "marks:" << marks[i] << endl;
        }
        cout << "student  sum :" <<average*5 <<"/500" << endl;
        cout << "student  average :" << average<<"/100" << endl;
        cout << "student  percentage :" << percentage<<"%" << endl;
    }
};
int main()
{
    student student1;
    cout << "Enter detail for student 1:" << endl;
    student1.getstudent();

    cout << "student 1 detail :" << endl;
    student1.showstudent();

    return 0;
}
