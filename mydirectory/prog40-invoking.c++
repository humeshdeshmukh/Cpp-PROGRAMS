/*constructor invoking in inheritance*/

#include <iostream>
#include <cstring>
using namespace std;
class ABC
{
public:
    ABC()
    {
        cout << endl<< "I am ABC";
    }
};
class PQR : public ABC
{
public:
    PQR()
    {
        cout << endl<< "I am PQR";
    }
};
class XYZ : public PQR
{
public:
    XYZ()
    {
        cout << endl<< "I am XYZ";
    }
};
int main()
{
    XYZ x1;
    return 0;
}
