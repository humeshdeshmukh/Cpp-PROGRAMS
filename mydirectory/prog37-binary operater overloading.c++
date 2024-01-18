/*Binary operater  overloading*/

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class integer
{
private:
    int a, b;

public:
    // Default constructor should be used to initialize members.
    integer()
    {
        a = 0;
        b = 0;
    }

    integer(int m, int n)
    {
        a = m;
        b = n;
    }

    integer Add(integer &I)
    {
        integer temp;
        temp.a = a + I.a;
        temp.b = b + I.b;
        return temp; // Corrected the return statement
    }

    void show()
    {
        cout << endl
             << "A=" << a << "\t B=" << b;
    }
};

int main()
{
    integer i1(8, 9), i2(-5, 6);
    integer i3;
    i3 = i1.Add(i2);
    i1.show();
    i2.show();
    cout << endl
         << "-------------";
    i3.show();

    return 0;
}
