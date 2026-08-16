#include <iostream>
using namespace std;

// Define a class named Complex with properties (real and imaginary) and methods as
// per following details.
// void set () to initialize object values.
// void display () to display complex number.
// Complex sum (Complex) or void sum (Complex) to add two complex numbers
// (objects of Complex class) and return complex_number (object of Complex
// class) as result.

class Complex {
private:
    float real;
    float imaginary;

public:
    void set() {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }

    Complex sum(Complex c) {
        Complex result;

        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;

        return result;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:" << endl;
    c1.set();

    cout << "Enter second complex number:" << endl;
    c2.set();

    c3 = c1.sum(c2);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    return 0;
}