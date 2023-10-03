/* write a c++ program of to find the largest number from 2 number*/
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << " Enter any number :" << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << "A is gretest number :" << a << endl;
    }
    else
    {
        if (b > a)
        {
            cout << " B is gretest number :" << b << endl;
        }
        else
        {
            if (a == b)
            {
                cout << " both are equal:" << a << "=" << b << endl;
            }
        }
    }
}