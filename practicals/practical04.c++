/* write a c++ program to convert binary binary number  to decimal number*/
#include <iostream>
using namespace std;

int main()
{
    string binary;

    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    int base = 1; // Represents the current power of 2

    // Convert binary to decimal
    for (int i = binary.length() - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            decimal += base;
        }
        base *= 2;
    }

    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}
