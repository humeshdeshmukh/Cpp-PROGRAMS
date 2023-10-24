/*write a c++ program of constructor*/
#include <iostream>
#include <iomanip>
using namespace std;

class ABC
{
private:
    int a, b;

public:
    void getab();
    void showab();
};

void ABC::getab()
{
    cout << "Enter any two values: " << endl;
    cin >> a >> b;
}

void ABC::showab()
{
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
}

int main()
{
    ABC a, b;
    cout << "Get values for a.abc" << endl;
    a.getab();
    cout << "Get values for b.abc" << endl;
    b.getab();
    cout << "a.abc values are:" << endl;
    a.showab();
    cout << "b.abc values are:" << endl;
    b.showab();

    return 0;
}
