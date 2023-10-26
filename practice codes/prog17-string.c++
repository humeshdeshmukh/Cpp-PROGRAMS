/*write a c++ program using standard library fuction */

#include <iostream>
#include <cstring>
using namespace std;

int pallindromestring(char s[])
{
    // use char array as in the original code

    int i = 0;
    int j = strlen(s) - 1;

    int flag = 0;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }

    if (flag == 0)
    {
        cout << "pallindrome string :" << endl;
    }
    else
    {
        cout << "Not a pallindrome string :" << endl;
    }
    return 0;
}

int main()
{
    char s1[10];
    cout << "Enter string :";
    cin >> s1;

    pallindromestring(s1);
    return 0;
}