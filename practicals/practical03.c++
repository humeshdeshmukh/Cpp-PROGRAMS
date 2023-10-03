/*write a c++ program of student marks*/
#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3, s4, s5, total;
    float percentage;

    cout << "Enter marks of 5 subjects: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    if (s1 >= 40 && s2 >= 40 && s3 >= 40 && s4 >= 40 && s5 >= 40)
    {
        cout << "\nStudent is pass" << endl;

        total = s1 + s2 + s3 + s4 + s5;
        percentage = total / 5.0;

        cout << "Total is " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
    else
    {
        cout << "\nStudent is fail" << endl;

        total = s1 + s2 + s3 + s4 + s5;
        percentage = total / 5.0;

        cout << "Total is " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }

    return 0;
}
