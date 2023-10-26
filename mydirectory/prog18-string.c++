#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char *s)
{
    int i = 0;
    int j = strlen(s) - 1; // Use strlen to find the length of the string

    while (i < j)
    {
        // Swap characters at positions i and j
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
    cout << "\nEnter any string: ";
    cin.getline(s, sizeof(s)); // Use getline to read the whole line

    cout << "String entered: " << s << endl;

    reverseString(s); // Call the reverseString function to reverse the string

    cout << "Reversed string: " << s << endl;

    return 0;
}
