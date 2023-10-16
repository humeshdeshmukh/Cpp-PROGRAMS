/*write a c++ program  to convert any string into its equivalent lower case form*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[10];
    cout << "enter ant string " << endl;
    cin >> s;
    cout << "string entered =" << s << endl;
    strlwr(s);
    cout << "string in lowercase =" << s << endl;
}