/* Write a C++ program to check whether an entered number is an odd or even number:*/

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