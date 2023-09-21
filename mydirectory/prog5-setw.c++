/*write a c++ program of setw*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int p = 100, q = 200;

    cout << setw(4) << p << setw(4) << q << endl;
    cout << setw(5) << p << setw(5) << q << endl;
    cout << setw(6) << p << setw(6) << q << endl;

    return 0;
}
