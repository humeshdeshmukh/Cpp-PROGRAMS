/*write a c++ program of class abc content private public sets*/

#include <iostream>
using namespace std;

class ABC
{
private:
    int a;

public:
    void get()
    {
        cout << "Enter any value: ";
        cin >> a;
    }
    void show()
    {
        cout << "A = " << a << endl;
    }
};

int main()
{
    ABC A1, A2; // Create two objects of the ABC class, A1 and A2

    A1.get(); // Call the get() function for A1 to input a value
    A2.get(); // Call the get() function for A2 to input a value

    A1.show(); // Call the show() function for A1 to display its value
    A2.show(); // Call the show() function for A2 to display its value

    return 0;
}
