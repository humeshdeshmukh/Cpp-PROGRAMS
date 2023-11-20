/*fuction overload*/
#include <iostream>
using namespace std;

const double PI = 3.14159;

// Function to calculate the area of a circle
double area(int r)
{
    return PI * r * r;
}

// Function to calculate the area of a rectangle
int area(int l, int b)
{
    return l * b;
}

int main()
{
    int radius ;
    int length ;
    int breadth ;

    cout <<"Enter\n 1) Radius \n 2)Lenght  \n 3)Breadth"<<endl;
    cin>>radius>>length>>breadth;

    // Calculate area of a circle
    double circleArea = area(radius);
    cout << "Area of circle: " << circleArea <<endl;

    // Calculate area of a rectangle
    int rectangleArea = area(length, breadth);
    cout << "Area of rectangle: " << rectangleArea <<endl;

    return 0;
}
