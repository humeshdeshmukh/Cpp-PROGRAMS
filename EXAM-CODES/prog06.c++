/*28. Write a C++ program to find the length of a string:*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int length = str.length();

    cout << "Length of the string is: " << length << endl;

    return 0;
}

