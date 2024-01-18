/*the virtual keyword is used to decalare a member fuction in a base class
as virtual this indicates that the fuction can be  overriden by derived class.
when a virtual fuction is called through a pointer or reference to a base class,
the actual fuction called is determined at runtime based on the type of the object*/

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void foo()
    {
        // virtual function
    }
};

class Derived : public Base
{
public:
    void foo() override
    {
        // overridden function in the derived class
    }
};

int main()
{
    Base *baseptr = new Derived();
    baseptr->foo(); // call the overridden function in Derived
    delete baseptr;
    return 0;
}
