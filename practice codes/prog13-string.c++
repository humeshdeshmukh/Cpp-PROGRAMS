#include <iostream>
#include <cstring>
using namespace std;

void reversestring(char *s)
{
    int i = 0;
    int j = strlen(s) - 1;

    while (i < j)
    {
        // swap characters at position i and j
        char t = s[i];
        s[i] = s[j];
        s[j] = t;

        i++;
        j--;
    }
}

int main()
{
    char s[50];

    cout << "\n enter any string :";

    cin.getline(s, sizeof(s)); // use it to rread the whole line

    cout << "string entered :" << s << endl;

    reversestring(s); // call the reverstring fuction to reverse the string

    cout << "Reversed string :" << s << endl;

    return 0;
}