/* write  a c++ program to check whether entered  string is pallindrome string or not*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s1[10], s2[10];
    cout << "enter string " << endl;
    cin >> s1;
    strcpy(s1, s2);
    strrev(s1);
    if (strcpy(s1, s2) == 0)
        
    {
        cout << "pallindrom string" << endl;
    }
    else
    {
        cout << "Not pallindrome string " << endl;
    }
    return 0;
}