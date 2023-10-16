#include <iostream>
#include <cstring> // Include the correct header for string functions
using namespace std;

int main() // Use int as the return type for the main function
{
    char s[10];
    cout << "Enter any string: "; // Fixed the syntax, added the missing '<<'
    cin >> s;
    cout << "Entered string = " << s << endl;
    
    cout << "s[2] = " << s[2] << endl;
    cout << "s[0] = " << s[0] << endl; // Fixed the syntax, added '<<'
    cout << "s[4] = " << s[4] << endl;

    return 0; // Properly return 0 to indicate successful program execution
}
