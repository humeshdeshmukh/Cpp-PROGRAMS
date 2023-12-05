/*write a c++ program to find the length of string  without using std library function*/

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
    return (len);
}
int main()
{
    char s[10];
    cout << "\nName:Humesh Deshmukh\nRoll no:34" << endl;
    cout << "\nEnter any string :";
    cin >> s;
    cout << "\nLength of the string=" << string_length(s) << endl;
}