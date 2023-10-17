/*write a c++ program to show  the  importance of  this pointer in  oops*/

#include <iostream>
using namespace std;
class ABC
{
private:
    int a, b;

public:
    ABC()
    {
        a = b = 0;
    }
    ABC(int m)
    {
        a = b = m;
    }
    ABC(int a,int b)
    {
        this-> a=a;
        this->b=b;
    }
    void show()
    {
        cout <<"A="<<a<<endl;
        cout <<"B="<<b<<endl;
    }
};
int main()
{
    ABC A1,A2(100),A3;
    ABC AB(50,60);
    A1.show();
    A2.show();
    A3.show();
    return (0);

}