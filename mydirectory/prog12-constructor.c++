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

    void getab()
    {
        cout  << "Enter the value of A: "<<endl;
        cin >> a;
        cout << "Enter the value of B: "<<endl;
        cin >> b;
    }

    void showab()
    {
        cout << "A: " << a << endl;
        cout << "B: " << b << endl;
    }

};

int main()
{
    ABC a1, a2;

    cout << "before object construction:" << endl;
    a1.showab();
    a2.showab();

    cout << "After calling a1.getab():" << endl;
    a1.getab();
    a1.showab();
    a2.showab();

    return 0;
}

/*#include <iostream>
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
        cout << "A: " << a << endl;
        cout << "B: " << b << endl;
    }

    void getab()
    {
        cout << "Enter the value of A: ";
        cin >> a;
        cout << "Enter the value of B: ";
        cin >> b;
    }
};

int main()
{
    const int numObjects = 2; // Change this to the number of objects you want
    ABC objects[numObjects];

    cout << "After object construction:" << endl;
    for (int i = 0; i < numObjects; ++i)
    {
        cout << "Object " << i + 1 << " details:" << endl;
        objects[i].showab();
    }

    cout << "\nEnter values for objects:" << endl;
    for (int i = 0; i < numObjects; ++i)
    {
        cout << "Enter details for object " << i + 1 << ":" << endl;
        objects[i].getab();
    }

    cout << "\nAfter calling getab() for each object:" << endl;
    for (int i = 0; i < numObjects; ++i)
    {
        cout << "Object " << i + 1 << " details:" << endl;
        objects[i].showab();
    }

    return 0;
}*/
