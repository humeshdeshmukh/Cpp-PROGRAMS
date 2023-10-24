#include <iostream>
using namespace std;

class ABC
{
private:
    int a, b;

public:
    ABC() // constructor
    {
        a = 120;
        b = 450;
    }

    void showab()
    {
        cout << "A:" << a << endl;
        cout << "B:" << b << endl;
    }

    void getab()
    {
        cout << "enter the value of Ac:" << endl;
        cin >> a;
        cout << "enter the value of B:" << endl;
        cin >> b;
    }
};

int main()
{
    ABC a1, a2;

    cout << "After object construction :" << endl;
    a1.showab();
    a2.showab();

    cout << "After calling a1.getab():" << endl;
    a1.getab();
    a1.showab();
    a2.showab();

    return 0;
}