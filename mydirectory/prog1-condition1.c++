/* write a c++ program to check whethered entered number is odd number or even number */
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << " enter any number :";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "\n number is even ";
    }
    else
    {
        cout << "\n number is is odd";
    }
}