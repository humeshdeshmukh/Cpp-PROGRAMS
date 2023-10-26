/* Write a C++ Program to check whether entered number is an odd number or even number ?*/

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << number << " is an even number." << endl;
    }
    else
    {
        cout << number << " is an odd number." << endl;
    }
    return 0;
}
