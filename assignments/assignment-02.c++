#include <iostream>
using namespace std;
class Complex
{
private:
    double real, imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    Complex add(const Complex &other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex subtract(const Complex &other) const
    {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex multiply(const Complex &other) const
    {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    void display() const
    {
        cout << real << " + " << imag << "i";
    }
};

int main()
{
    double r1, i1, r2, i2;
    cout << "Enter first complex number (real and imaginary parts): ";
    cin >> r1 >> i1;
    cout << "Enter second complex number (real and imaginary parts): ";
    cin >> r2 >> i2;

    Complex c1(r1, i1), c2(r2, i2);
    Complex sum = c1.add(c2), diff = c1.subtract(c2), product = c1.multiply(c2);

    cout << "Sum: ";
    sum.display();
    cout << endl
         << "Difference: ";
    diff.display();
    cout << endl
         << "Product: ";
    product.display();
    cout << endl;

    return 0;
}
