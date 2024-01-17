/*write  a c++ code to overload unary++ and
  unary-- operater such that it increment or decrement
   the values of the object by 1*/

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class integer
{
private:
    int a, b;

public:
    integer()
    {
        a = b = 20;
    }

    integer(int m, int n)
    {
        a = m;
        b = n;
    }

    void operator++()
    {
        a++;
        b++;
    }

    void operator--()
    {
        a--;
        b--;
    }

    void show()
    {
        cout << endl
             << "A: " << a;
        cout << endl
             << "B: " << b;
    }
};

int main()
{
    integer i1, i2(5, 6);
    i1.show();
    i2.show();

    ++i1;
    ++i2;

    i1.show();
    i2.show();

    i1.operator++();
    i2.operator++();

    i1.show();
    i2.show();

    return 0;
}
