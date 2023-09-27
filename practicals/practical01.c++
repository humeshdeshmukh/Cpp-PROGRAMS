/*write a c++ program to find number is even or odd*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the any number  : " << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << " number is even " << endl;
    }
    else
    {
        cout << " number is odd" << endl;
    }
}
