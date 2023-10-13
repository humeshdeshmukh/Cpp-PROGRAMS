/*write a c++ program  of class syntax*/
#include <iostream>

using namespace std;

// Class declaration
class MyClass
{
public:
    // Member variables
    int myVar; // Example integer member variable

    // Member functions (methods)
    void printMessage()
    {
        cout << "Hello from MyClass!" << endl;
    }
};

int main()
{
    cout << "Humesh Deshmukh \n roll.no:34" << endl;
    // Create an object of MyClass
    MyClass myObject;

    // Access member variable and call member function
    myObject.myVar = 42;
    myObject.printMessage();

    return 0;
}
