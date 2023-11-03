/*write a c++ program of destructor */
#include <iostream>
#include <string.h>
using namespace std;

class ABC
{
public:
    ABC()
    { // Default constructor
        cout << "Object created" << endl;
    }
    ~ABC()
    { // Destructor
        cout << "Object destroyed" << endl;
    }
};

int main()
{
    ABC a1; // Object created
    {
        ABC a2; // Object created
        {
            ABC a3; // Object created
        }           // Object destroyed
        ABC a4;     // Object created
    }               // Object destroyed
    ABC a5;         // Object created

    return 0;
} // Object destroyed
