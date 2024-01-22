/*write a c++ program of constructor*/
/*#include <iostream>
#include <iomanip>
using namespace std;

class ABC
{
private:
    int a, b;

public:
    void getab()

        void showab()
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
}*/

#include <iostream>
using namespace std;

class ABC
{
private:
    int abc;

public:
    void getab()
    {
        cout << "Enter value for abc: ";
        cin >> abc;
    }

    void showab()
    {
        cout << "abc value is: " << abc << endl;
    }
};

int main()
{
    int num;
    cout << "enter number of objects " << endl;
    cin >> num;
    const int numObjects = num; // Change this to the number of objects you want
    ABC objects[numObjects];

    for (int i = 0; i < numObjects; ++i)
    {
        cout << "Get values for object " << i + 1 << ".abc" << endl;
        objects[i].getab();
    }

    for (int i = 0; i < numObjects; ++i)
    {
        cout << "Object " << i + 1 << ".abc values are:" << endl;
        objects[i].showab();
    }

    return 0;
}
