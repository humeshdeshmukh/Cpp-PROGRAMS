/*implement a hierarchy of shape in a geometric  application.the base class 
should be a generic shape, and derived classes can include circle,rectangle ,and 
triangle .each derived class should inherit common properties from 
the base class and implement its own methods to calculate area and perimeter*/

#include <iostream>
#include <cmath>
using namespace std;

class shape {
public:
    virtual double calculatearea() = 0;
    virtual double calculateperimeter() = 0;
};

class circle : public shape {
private:
    double radius;

public:
    circle(double r) {
        radius = r;
    }

    double calculatearea() override {
        return 3.14159 * radius * radius;
    }

    double calculateperimeter() override {
        return 2 * 3.14159 * radius;
    }
};

class rectangle : public shape {
private:
    double length;
    double width;

public:
    rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double calculatearea() override {
        return length * width;
    }

    double calculateperimeter() override {
        return 2 * (length + width);
    }
};

class triangle : public shape {
private:
    double side1;
    double side2;
    double side3;

public:
    triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    double calculatearea() override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double calculateperimeter() override {
        return side1 + side2 + side3;
    }
};

int main() {
    circle c(4.0);
    rectangle r(4.0, 6.0);
    triangle t(3.0, 4.0, 5.0);

    cout << "Circle Area: " << c.calculatearea() << " Perimeter: " << c.calculateperimeter() << endl;
    cout << "Rectangle Area: " << r.calculatearea() << " Perimeter: " << r.calculateperimeter() << endl;
    cout << "Triangle Area: " << t.calculatearea() << " Perimeter: " << t.calculateperimeter() << endl;

    return 0;
}


