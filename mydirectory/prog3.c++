#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Hello world" << endl;
    int a = 10;

    cout << "Decimal equivalent of 10 using dec: " << dec << setw(2) << a << endl;
    cout << "Octal equivalent of 10 using oct: " << oct << setw(2) << a << endl;
    cout << "Hexadecimal equivalent of 10 using hex: " << hex << setw(2) << a << endl;

    // Set the base back to decimal
    cout << "Decimal equivalent of 10 using setbase(10): " << setbase(10) << setw(2) << a << endl;

    cout << "Octal equivalent of 10 using setbase(8): " << setbase(8) << setw(2) << a << endl;
    cout << "Hexadecimal equivalent of 10 using setbase(16): " << setbase(16) << setw(2) << a << endl;

    return 0;
}
