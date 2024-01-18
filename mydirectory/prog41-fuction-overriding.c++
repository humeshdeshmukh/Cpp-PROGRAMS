/*fuction overriding*/

#include <iostream>
using namespace std;

class ABC
{
public:
    void show()
    {
        cout << endl
             << "i am in base class ABC";
    }
};

class PQR : public ABC
{
public:
    void show()
    {
        ABC::show(); // Call the show function from the base class
        cout << endl
             << "i am in derived class PQR";
    }
};
int main()
{
    PQR p;
    p.show();
    return 0;
}
