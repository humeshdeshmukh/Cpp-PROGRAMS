/*write a c++ program  to find the even odd number */
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << " Enter the number " << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << " The number is even :" << num << endl;
    }
    else
    {
        cout << " The number is odd :" << num << endl;
    }
}