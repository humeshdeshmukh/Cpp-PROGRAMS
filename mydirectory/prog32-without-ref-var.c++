/*without using refrence variabel*/
#include <iostream>
using namespace std;
void modify (int &a)
{
    a=a+10;

}
int main ()
{
    int a=100;
    cout <<endl<<"before ="<<a;
    modify(a);
    cout <<endl<<"after ="<<a;
}