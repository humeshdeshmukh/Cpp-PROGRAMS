/*write a c++ program  of copy   constructor with using reference variable*/

#include <iostream>
using namespace std;

void sample(int &a, int &b)
{
    cout << "Inside sample" << endl;
    cout << "A=" << a << endl;
    cout << "B=" << b << endl;
    cout << "Address of A =" << a << endl; // Corrected address output
    cout << "Address of B=" << b << endl;  // Corrected address output
}

int main()
{
    int p = 100;
    int q = 200; // Corrected the declaration of variable q
    cout << "Inside main" << endl;
    cout << "p=" << p << endl;
    cout << "q=" << q << endl;             // Corrected variable name
    cout << "Address of p=" << p << endl; // Corrected address output
    cout << "Address of q=" << q << endl; // Corrected address output
    sample(p, q);
}
