#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class ABC
{
private:
    void showa()
    {
        cout << endl
             << "I am in show a";
    }

    void showp()
    {
        cout << endl
             << "I am in show p";
    }

public:
    void showb()
    {
        cout << endl
             << "I am in showb";
        showa(); // Accessing private member function from a public member function
    }

    void showq()
    {
        cout << endl
             << "I am in showq";
        showp(); // Accessing private member function from a public member function
    }
};

int main()
{
    ABC p1;
    // p1.showa();  // This line will cause a compilation error since showa is private
    p1.showb();
    // p1.showp();  // This line will cause a compilation error since showp is private
    p1.showq();

    return 0;
}
