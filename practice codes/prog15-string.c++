/*write a c++ program of string */
#include <iostream>
#include <cstring>
using namespace std;

// fuction copy a string from s1 to s2

void copystring(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0')

    {
        s2[i] = s1[i];
        i++;
    }

    s2[i] = '\0'; // null-terminate the copy string
}

int main()
{
    char s1[10], s2[10];
    cout << "Enter string :" << endl;

    cin >> s1;

    cout << "original string =" << s1 << endl;

    copystring(s1, s2); // call the copystringh fuction to copy s1 to s2

    cout << "copied string =" << s2 << endl;

    return 0;
}