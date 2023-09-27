/*write a c++ program  decimal to hexadecimal*/
#include <iostream>
using namespace std;

int main()
{
    int decimal;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    cout << "Hexadecimal equivalent: 0x" << hex << uppercase << decimal << endl;

    return 0;
}
