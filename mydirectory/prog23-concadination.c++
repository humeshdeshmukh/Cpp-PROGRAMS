/* write a c++ program od concadination*/  /*codect thsi*/

#include <iostream>
#include <string.h>
using namespace std;
int mian()
{
    char s1[20], s2[20];
    cout << " enter string" << endl;
    cin >> s1;
    cout << " enter on other string" << endl;
    cin >> s2;
    strcat(s2, s1);
    cout << "Resulting string " << s2 << endl;
    
}