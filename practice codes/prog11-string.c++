/*write a c++ program to convert lowrcase to uppercase  using cctype*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char s[10];
    cout << "\n enter any string :" << endl;
    cin >> s;
    cout << "\n string entered :" << s << endl;

    // convert the string to uppercase using toupper function
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = toupper(s[i]);
    }
    cout << "string in uppercase :" << s << endl;

    return 0;
}