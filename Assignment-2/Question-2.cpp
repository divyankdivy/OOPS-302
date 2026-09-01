#include <iostream>
using namespace std;

class Rectangle {
    
    private:
    int length;
    int breadth;

    public:
    Rectangle(int length, int breadth) {
        this->length=length;
        this->breadth=breadth;
    }

    int calculateArea() {
        return this->length*this->breadth;
    }
};

int main() {
    Rectangle r1 = Rectangle(5, 10);
    cout<<"The area of rectangle is: "<<r1.calculateArea();
    return 0;
}