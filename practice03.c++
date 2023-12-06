/*write a c++ code to overload unary --operator such that it converts all the members of the object to negative numbers.*/

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
class integer
{
private:
    int a, b;

public:
    integer() // default constructor
    {
        a = 10;
        b = 20;
    }
    integer(int m, int n) // parameterized constructor
    {
        a = m;
        b = n;
    }
    void operator-()
    {
        a = -1 * abs(a);
        b = -1 * abs(b);
    }
    void show()
    {
        cout << "A:" << a << endl;
        cout << "B:" << b << endl;
    }
};
int main()
{
    integer i1(-8, -9), i2(-5, 6);
    i1.show();
    i2.show();
    -i1;
    -i2;
    i1.show();
    i2.show();
}