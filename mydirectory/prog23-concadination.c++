/* write a c++ program od concadination*/

#include <iostream>
#include <cstring> // Include the <cstring> header for C-style string functions

using namespace std;

int main()
{                        // Corrected the function name and added the return type 'int'
    char s1[20], s2[40]; // Make sure s2 has enough space for both strings
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    strcat(s2, s1); // Concatenate s1 to s2

    cout << "Resulting string: " << s2 << endl;

    return 0; // Return an integer to indicate a successful execution
}
