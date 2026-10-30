// Unit 3 - Question 5: Hierarchical inheritance
#include <iostream>
using namespace std;

class Shape {
public:
    void display() { cout << "This is a shape "; }
};

class Circle : public Shape {
public:
    void circleInfo() { cout << "Circle"; }
};

class Rectangle : public Shape {
public:
    void rectangleInfo() { cout << "Rectangle"; }
};

int main() {
    Circle c;
    Rectangle r;

    c.display();
    c.circleInfo();
    cout << endl;

    r.display();
    r.rectangleInfo();

    return 0;
}

// Expected output:
// This is a shape Circle
// This is a shape Rectangle
