/* Implement a hierarchy of shapes in a geometric application. The
base class should be a generic Shape, and derived classes can include Circle,
Rectangle, and Triangle. Each derived class should inherit common properties from
the base class and implement its own methods to calculate area and perimeter*/

#include <iostream>
#include <cmath> // Instead of <math.h>

using namespace std; // Add this line to use elements from the std namespace

class Shape
{
public:
    virtual double calculateArea() = 0;      // Pure virtual function
    virtual double calculatePerimeter() = 0; // Pure virtual function
};

// Derived class for Circle
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double calculateArea() override
    {
        return 3.14159 * radius * radius;
    }

    double calculatePerimeter() override
    {
        return 2 * 3.14159 * radius;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double calculateArea() override
    {
        return length * width;
    }

    double calculatePerimeter() override
    {
        return 2 * (length + width);
    }
};

// Derived class for Triangle
class Triangle : public Shape
{
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3)
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    double calculateArea() override
    {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double calculatePerimeter() override
    {
        return side1 + side2 + side3;
    }
};

int main()
{
    Circle circle(4.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 4.0, 5.0);
    cout << "Name=HUMESH DESHMUKH \n roll no = 34" << endl;
    cout << "Circle - Area: " << circle.calculateArea() << ", Perimeter: " << circle.calculatePerimeter() << "\n";
    cout << "Rectangle - Area: " << rectangle.calculateArea() << ", Perimeter: " << rectangle.calculatePerimeter() << "\n";
    cout << "Triangle - Area: " << triangle.calculateArea() << ", Perimeter: " << triangle.calculatePerimeter() << "\n";
    return 0;
}
