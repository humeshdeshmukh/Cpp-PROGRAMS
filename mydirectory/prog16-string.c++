#include <iostream>
#include <cstring>
#include <cctype> // Include the cctype header for toupper function

using namespace std;

int main()
{
    char s[10];
    cout << "\nEnter any string: " << endl;
    cin >> s;
    cout << "\nString entered: " << s << endl;

    // Convert the string to uppercase using toupper function
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = toupper(s[i]);
    }

    cout << "String in uppercase: " << s << endl;

    return 0;
}
