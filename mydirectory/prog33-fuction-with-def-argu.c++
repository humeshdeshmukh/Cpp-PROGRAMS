/*fuction with default argument*/
/*a default argument is a value provided in a fuction declaration that is
automatically a assigned by the compiler if the calling fuction doesn't provide
a avalue is passed the default value is overriden*/

#include <iostream>
#include <cstring>
using namespace std;

int add(int a = 0, int b = 0, int c = 0)
{
    return (a + b + c);
}

int main()
{
    cout << endl
         << add(10, 20, 30);
    cout << endl
         << add(50);
    cout << endl
         << add(34, 56);
    cout << endl
         << add(add(20), add(30, 80, 90));

    return 0; // Added a return statement for main
}
