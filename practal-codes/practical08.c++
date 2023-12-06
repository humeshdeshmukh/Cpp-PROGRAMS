/*write  a program in c++ to implement concept of constructor and disctructor*/

#include <iostream>
using namespace std;
class ABC
{
public:
    ABC(int id) : objectId(id)
    {
        cout << "Object " << objectId << " created" << endl;
    }

    ~ABC()
    {
        cout << "Object " << objectId << " destroyed" << endl;
    }

private:
    int objectId;
};

int main()
{
    
    ABC a1(1); // Object 1 created
    {
        ABC a2(2); // Object 2 created
        {
            ABC a3(3); // Object 3 created
        }              // Object 3 destroyed
        ABC a4(4);     // Object 4 created
    }                  // Object 2 and 4 destroyed
    ABC a5(5);         // Object 5 created

    return 0;
} // Object 5 and 1 destroyed
