#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float b = 5 / 3.0;

    cout << setprecision(1) << b << endl;
    cout << setprecision(2) << b << endl;
    cout << setprecision(3) << b << endl;
    cout << setprecision(4) << b << endl;
    cout << setprecision(5) << b << endl;
    cout << setprecision(10) << b << endl;

    return 0;
}
