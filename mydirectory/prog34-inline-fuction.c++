/*inline fuctions*
/*c ++ provide inline fuction to reduce the fuction call over head an inline fuction is a fuction that is expand 
in-line fuction is a fuction that is expanded in-inline when inline fuction gets inserted or substituted at the 
point of the inline fuction call this substitution is performed by the c++ compiler time an inline fuction
 may increse efficiency if it is small! */

#include<iostream>
#include<string.h>
using namespace std;
inline void printsum(int num1,int num2)
{
    cout <<num1+num2<<"\n";
}
int main()
{
    //call the inline fuction
    //first call
    printsum(10,20);
    //second call
    printsum(2,5);
    //third call
    printsum(100,400);
    return 0;
}
 