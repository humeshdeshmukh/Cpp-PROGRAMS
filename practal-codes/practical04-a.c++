/*write a c++ program to find the length of string  using std library function*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    
    char s[10];
    cout << "\n enter any  string:  " << endl;
    cin >> s;
    cout << "Length of the string =" << strlen(s);
}
