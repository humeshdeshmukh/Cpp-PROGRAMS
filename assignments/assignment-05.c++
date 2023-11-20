/*fuction overload*/
#include <iostream>

using namespace std;

// Function to swap two integer values
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two character values
void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

// Function to swap two floating-point values
void swap(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

int main()
{
    int int1, int2;
    cout << "enter two integer values" << endl;
    cin >> int1 >> int2;
    char char1, char2;
    cout << "enter two character values" << endl;
    cin >> char1 >> char2;
    float float1, float2;
    cout << "enter two character values" << endl;
    cin >> float1 >> float2;

    // Swap integers
    swap(int1, int2);
    cout << "Swapped integers: " << int1 << " " << int2 << endl;

    // Swap characters
    swap(char1, char2);
    cout << "Swapped characters: " << char1 << " " << char2 << endl;

    // Swap floating-point values
    swap(float1, float2);
    cout << "Swapped floats: " << float1 << " " << float2 << endl;

    return 0;
}
