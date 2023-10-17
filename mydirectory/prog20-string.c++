#include <iostream>
#include <cstring>
using namespace std;

// Function to copy a string from s1 to s2
void copyString(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0'; // Null-terminate the copied string
}

int main()
{
    char s1[10], s2[10];

    cout << "Enter any string: ";
    cin >> s1;

    cout << "Original string = " << s1 << endl;

    copyString(s1, s2); // Call the copyString function to copy s1 to s2

    cout << "Copied string = " << s2 << endl;

    return 0;
}
