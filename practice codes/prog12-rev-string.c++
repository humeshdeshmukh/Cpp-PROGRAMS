/*write a c++ program to  reverse the string */

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[10];
    cout <<"\n enter any string :";
    cin >>s;
    cout <<"\n string entered :"<<s<<endl;
    strrev(s);
    cout <<"\n revier string ="<<s;

    return 0;
}