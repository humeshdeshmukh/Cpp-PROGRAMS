#include <iostream>
#include <cstring> // Include the header for string manipulation functions
using namespace std;

int main()
{
    char s[10];
    bool continueReversing = true;

    while (continueReversing)
    {
        cout << "\nEnter any string (max 9 characters): ";
        cin >> s;
        cout << "String entered: " << s << endl;
        cout << "Reversed string: ";

        // Reversing the string manually (can use library function strrev if available)
        int length = strlen(s);
        for (int i = length - 1; i >= 0; --i)
        {
            cout << s[i];
        }
        cout << endl;

        char choice;
        cout << "\nDo you want to reverse another string? (Y/N): ";
        cin >> choice;
        if (choice != 'Y' && choice != 'y')
        {
            continueReversing = false;
        }
    }

    return 0;
}
