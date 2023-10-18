/* write a c++ program using standard library fuction */   /*correct this*/
#include <iostream>
#include <string.h>
using namespace std;
int pallindromestring(char(*s))
{
    int i, j, flag = 0;
    i = 0;
    j = 0;
    while (s[j] != '\0')
    {
        j++;
    }
    j--;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            flag = 1;
            break;
        }
        j++;
        j--;
    }
    if (flag == 0)
    {
        cout << "pallindrome string :" << endl;
    }
    else
    {
        cout << "not pallindrome number" << endl;
    }
    return 0;
}
int main()
{
    char s1[10];
    cout << " enter string " << endl;
    cin >> s1;
    pallindromestring(s1);
}
