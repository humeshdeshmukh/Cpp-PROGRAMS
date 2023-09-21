/*write a c++ code to find the largest number from the two numbers */
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << " enter two numbers ";
    cin >> a >> b;
    if (a > b)
    {
        cout << "largest number =" << a;
    }
    else
    {
        if (b > a)
        {
            cout << "largest number=" << b;
        }
    }
}
