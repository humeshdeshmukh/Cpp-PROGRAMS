#include <iostream>
using namespace std;

class ABC
{
private:
    int a, b;

public:
    ABC() // Constructor
    {
        a = 120;
        b = 450;
    }

    void showab()
    {
        cout << endl << "A: " << a;
        cout << endl << "B: " << b;
    }

    void getab()
    {
        cout << endl << "Enter the value of A: ";
        cin >> a;
        cout << endl << "Enter the value of B: ";
        cin >> b;
    }
};

int main()
{
    ABC a1, a2;
    
    cout << "After object construction:" << endl;
    a1.showab();
    a2.showab();
    
    cout << "After calling a1.getab():" << endl;
    a1.getab();
    a1.showab();
    a2.showab();

    return 0;
}
