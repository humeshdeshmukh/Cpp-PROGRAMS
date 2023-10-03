/* write a c++ program of student pass or fail on baise on their
 5 subject marks , min passing of each subject  is  45 marks out of  100 */
#include <iostream>

using namespace std;
int main()
{
    int s1, s2, s3, s4, s5, total;
    float percentage;

    cout << " Enter  5 subject marks" << endl;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    if (s1 >= 45 && s2 >= 45 && s3 >= 45 && s4 >= 45 && s5 >= 45)
    {
        cout << "student is pass :" << endl;

        total = s1 + s2 + s3 + s4 + s5;
        percentage = total / 5.0;
        cout << "student total marks is :" << total << endl;
        cout << "percentage of student is " << percentage << "%" << endl;
    }
    else
    {
        cout << "student is fail " << endl;
        total = s1 + s2 + s3 + s4 + s5;
        percentage = total / 5.0;
        cout << "student total marks is :" << total << endl;
        cout << "percentage of student is " << percentage << "%" << endl;
    }
    return 0;
}