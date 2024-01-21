/*write a c++ program  to copy a string */

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[10], s2[10];
    cout << "enter any string: ";
    cin >> s1;
    strcpy(s2, s1);
    cout << "origined string =" << s1 << endl;
    cout << "copied string =" << s2 << endl;
    return 0;
}