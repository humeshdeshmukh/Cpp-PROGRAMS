/*binary operater*/

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class complex
{
private:
    int real, img; // Corrected variable names

public:
    complex()
    {
        real = 0;
        img = 0;
    }

    complex(int m, int n)
    {
        real = m;
        img = n;
    }

    complex operator+(complex &I)
    { // Corrected the operator overload declaration
        complex temp;
        temp.real = real + I.real;
        temp.img = img + I.img;
        return temp;
    }

    void show()
    {
        if (img < 0)
            cout << endl
                 << real << "-i" << abs(img); // Corrected the display of negative imaginary part
        else
            cout << endl
                 << real << "+i" << img;
    }
};

int main()
{
    complex I1(8, -9), I2(5, 6);
    complex I3;
    I3 = I1 + I2;
    I1.show();
    I2.show();
    cout << endl
         << "-------------";
    I3.show();
    return 0;
}
