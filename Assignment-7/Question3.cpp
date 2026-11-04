#include <iostream>
#include <iomanip>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of shape is not defined." << endl;
    }

    virtual ~Shape() = default;
};

class Rectangle : public Shape {
private:
    double length, breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}

    void area() override {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void area() override {
        const double PI = 3.141592653589793;
        cout << "Area of Circle = " << PI * radius * radius << endl;
    }
};

int main() {
    Rectangle rectangle(10, 5);
    Circle circle(7);

    Shape* ptr;

    ptr = &rectangle;
    ptr->area();

    ptr = &circle;
    ptr->area();

    return 0;
}
