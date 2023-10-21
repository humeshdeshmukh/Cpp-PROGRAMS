/*write a c++ program of this pointer */

#include <iostream>
using namespace std;

class ABC
{
private:
    int a, b;

public:
    ABC()
    {
        a = b = 0;
    }

    ABC(int m)
    {
        a = b = m;
    }

    ABC(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void show()
    {
        cout << "A=" << a << endl;
        cout << "B=" << b << endl;
    }
};

int main()
{ // Changed the return type of main to int
    ABC A1, A2(100);
    ABC A3(50, 60); // Corrected A3 declaration

    A1.show();
    A2.show();
    A3.show();

    return 0; // Return an integer to indicate successful execution
}
