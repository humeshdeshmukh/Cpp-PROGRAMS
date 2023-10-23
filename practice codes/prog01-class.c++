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
        cout << "enter any value :";
        cin >> a;
    }
    void show()
    {
        cout << "A=" << a << endl;
    }
};

int main()
{
    ABC A1,A2;

    A1.get();
    A2.get();

    A1.show();
    A2.show();

    return 0;
}