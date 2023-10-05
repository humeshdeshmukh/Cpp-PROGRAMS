#include <iostream>
using namespace std;
class Area
{
private:
    double length;
    double breadth;

public:
    // Function to set the dimensions of the rectangle
    void setDim(double l, double b)
    {
        length = l;
        breadth = b;
    }

    // Function to calculate and return the area of the rectangle
    double getArea()
    {
        return length * breadth;
    }
};

int main()
{
    double length, breadth;

    // Create an object of the Area class
    Area rectangle;

    // Prompt the user for the length and breadth
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    // Set the dimensions of the rectangle
    rectangle.setDim(length, breadth);

    // Calculate and display the area
    double area = rectangle.getArea();
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
