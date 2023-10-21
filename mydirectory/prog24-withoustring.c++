/* write a c++ program  by without using std library fuction*/ 

#include <iostream>
#include <cstring> // Include the <cstring> header for C-style string functions

using namespace std;

void stringconcatenation(char *s1, char *s2)
{
    int i, j;
    i = j = 0;

    while (s2[j] != '\0')
    { // Use s2 for getting the length
        j++;
    }

    while (s1[i] != '\0')
    {
        s2[j] = s1[i]; // Correct the assignment
        i++;
        j++;
    }
    s2[j] = '\0'; // Terminate the concatenated string
}

int main()
{
    char str1[20], str2[40]; // Make sure str2 has enough space for concatenation
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    stringconcatenation(str1, str2);

    cout << "Concatenated string: " << str2 << endl;

    return 0;
}
