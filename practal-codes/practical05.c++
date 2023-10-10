/*write a c++ program to check whether enter string is pallindrom or not  without usinh std function*/

#include <iostream>
#include <string.h>
using namespace std;

int string_length(char *s)
{
    int len, i;
    len = i = 0;
    while (s[i] != '\0')
    {
        len++;
        i++;
    }
    return len;
}

int isPalindrome(char *s)
{
    int len = string_length(s);
    int start = 0;
    int end = len - 1;

    while (start < end)
    {
        if (s[start] != s[end])
        {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}

int main()
{
    char s[10];
    cout << "\nName: Humesh Deshmukh\nRoll no: 34" << endl;
    cout << "\nEnter any string: ";
    cin >> s;
    cout << "\nLength of the string = " << string_length(s) << endl;

    if (isPalindrome(s))
    {
        cout << s << " is a palindrome." << endl;
    }
    else
    {
        cout << s << " is not a palindrome." << endl;
    }

    return 0;
}
