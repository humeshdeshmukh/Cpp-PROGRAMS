/*virtual fuction a virtual fuction is member fuction of base class that is declared with the virtual keyword.
when a derived class overrides this virtual fuction the actual fuction called is determined at runtime based
 on the type of the object being feferred to */

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        // base class implementation
    }
};

class Derived : public Base
{
public:
    void display() override
    {
        // derived class implementation overrides base class
        Base::display(); // calling the base class's display function
    }
};

int main()
{
    Base *baseptr = new Derived();
    baseptr->display(); // call the overridden function in Derived
    delete baseptr;
    return 0;
}
