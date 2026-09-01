#include <iostream>
using namespace std;

class Complex {

private:
    int real;
    int imaginary;

public:
    // Default Constructor
    Complex() {
        real = 0;
        imaginary = 0;
    }

    // Parameterized Constructor
    Complex(int real, int imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }

    // Display function
    void display() {
        cout<<"Complex Number: "<<real<<" + "<<imaginary<<"i"<<endl;
    }
};

int main() {

    // Object using default constructor
    Complex c1;

    // Object using parameterized constructor
    Complex c2(5, 3);

    // Display details
    c1.display();
    c2.display();

    return 0;
}