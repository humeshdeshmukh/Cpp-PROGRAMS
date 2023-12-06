/*write a c++ code to overload unary ++ operater such that it convert all the members of the object to the positive members*/

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
class integer
{
private:
    int a, b;

public:
    integer() // default constroctor
    {
        a = 10;
        a = 20;
    }
    integer(int m, int n) // parameterized constroctor
    {
        a = m;
        b = n;
    }
    void operator+()
    {
        a = abs(a);
        b = abs(b);
    }
    void show()
    {
        cout << endl
             << "A:" << a;
        cout << endl
             << "B:" << b;
    }
};
int main()
{
    integer i1(-8,-9),i2(-5,6);
    i1.show();
    i2.show();
    +i1;
    +i2;
    i1.show();
    i2.show();
}


/*
#include <iostream>
#include <cmath>
using namespace std;

class integer {
private:
    int a, b;

public:
    integer() : a(10), b(20) {} // Initialize a and b in default constructor

    integer(int m, int n) : a(m), b(n) {} // Parameterized constructor

    // Unary plus operator overloading
    integer operator+() {
        integer temp(*this); // Create a copy of the current object
        temp.a = abs(temp.a); // Take absolute value of 'a'
        temp.b = abs(temp.b); // Take absolute value of 'b'
        return temp;
    }

    void show() {
        cout << "A: " << a << endl;
        cout << "B: " << b << endl;
    }
};

int main() {
    integer i1(-8, -9), i2(-5, 6);
    i1.show();
    i2.show();

    +i1; // Applying unary plus operator
    +i2; // Applying unary plus operator

    i1.show();
*/