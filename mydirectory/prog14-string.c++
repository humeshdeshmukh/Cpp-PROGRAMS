#include <iostream>
#include <cstring> 
using namespace std;

int main() 
{
    char s[10];
    cout << "Enter any string: "; 
    cin >> s;
    cout << "Entered string = " << s << endl;
    
    cout << "s[2] = " << s[2] << endl;
    cout << "s[0] = " << s[0] << endl; 
    cout << "s[4] = " << s[4] << endl;

    return 0; // Properly return 0 to indicate successful program execution
}
