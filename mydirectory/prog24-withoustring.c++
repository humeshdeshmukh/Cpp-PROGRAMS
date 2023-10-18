/* write a c++ program  by without using std library fuction*/ /*corect this */

#include <iostream>
#include <string.h>
using namespace std;
int stringconcatenation(char *s1, char *s2)
{
    int i, j;
    i = j = 0;
    while (s[2] != '\0')
    {
        j++;
    }
    while (s1[i] != '\0')
    {
        s2[j] = [s1][i];
        i++;
        j++;
    }
    s2[j] = '\0';
};
int main()
{
    char str1[20], str2[20];
    cout << "enter string" << endl;
    cin >> s1;
    cout << "enter another string";
    cin >> s2;

    cout << "string=" << s2 << endl;
    stringconcatenation(str2, str1)
}