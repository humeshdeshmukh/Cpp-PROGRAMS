/*write a c++ code to find the largest number from the two numbers */
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "  Enter any 2 number " << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << " A is largest number =" << a << endl;
    }
    else
    {
        cout << " B is largest number=" << b << endl;
    }
}
