/*write  a c++ code to overload unary ++ and unary -- operator such that it increment or decrement the values of the object by 1*/

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
        cout << "A:" << a << endl;
        cout << "B" << b << endl;
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
    cout << "..................." << endl;
    --i1;
    --i2;
    i1.show();
    i2.show();
    i1.operator--();
    i2.operator--();
    i1.show();
    i2.show();
}

/*
#include <iostream>
using namespace std;

class integer
{
private:
    int a, b;

public:
    integer() : a(10), b(20) {} // Use initializer list

    integer(int m, int n) : a(m), b(n) {} // Parameterized constructor

    // Prefix increment operator overloading
    integer &operator++()
    {
        ++a;
        ++b;
        return *this;
    }

    // Prefix decrement operator overloading
    integer &operator--()
    {
        --a;
        --b;
        return *this;
    }

    // Postfix increment operator overloading
    integer operator++(int)
    {
        integer temp = *this;
        ++(*this);
        return temp;
    }

    // Postfix decrement operator overloading
    integer operator--(int)
    {
        integer temp = *this;
        --(*this);
        return temp;
    }

    void show()
    {
        cout << "A: " << a << endl;
        cout << "B: " << b << endl;
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

    cout << endl
         << "..................." << endl;

    --i1;
    --i2;
    i1.show();
    i2.show();

    i1.operator--();
    i2.operator--();
    i1.show();
    i2.show();

    return 0;
}*/
