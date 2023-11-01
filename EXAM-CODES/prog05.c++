/*24. Implement a code in C++ using hex, dec, oct, and setbase manipulators:*/

/*write a c++  program of hex  dex oct and setbase program */
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num = 255;
    // Hexadecimal
    cout << "Hexadecimal: " << hex << num << endl;
    // Decimal
    cout << "Decimal: " << dec << num << endl;
    // Octal
    cout << "Octal: " << oct << num << endl;
    // Set the base back to default (decimal)
    cout << "Back to Decimal: " << setbase(10) << num << endl;
    return 0;
}
