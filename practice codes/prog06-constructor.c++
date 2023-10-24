/*this code to get garbage value*/

#include <iostream>
using namespace std;

class ABC
{
private:
    int a, b;

public:
    void showab()
    {
        cout << "A:" << a << endl;
        cout << "B:" << b << endl;
    }
};

int main()
{
    ABC a1, a2; // create a1 and a2 objects without initializing  a or b

    cout << "a1 values :" << endl;
    a1.showab();

    cout << "a2 values:" << endl;
    a2.showab();

    return 0;
}