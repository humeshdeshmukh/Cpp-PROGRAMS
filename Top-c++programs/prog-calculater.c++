/* write a c++ program of calculator*/
#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    char operation;
    cout << " Enter two number : " << endl;
    cin >> num1 >> num2;
    cout << "enter a operation (+,-,*,/)";
    cin >> operation;
    switch (operation)
    {
    case '+':
        cout << "Result :" << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result :" << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result:" << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
            cout << "Result" << num1 / num2 << endl;
        else
            cout << "Error : Division by Zero >" << endl;
        break;

    default:
        cout << "Invalid operation" << endl;
    }
    return 0;
}
