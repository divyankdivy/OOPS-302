// Unit 3 - Question 1: Constructor and destructor order
#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "A "; }
    ~Base() { cout << "B "; }
};

class Derived : public Base {
public:
    Derived() { cout << "C "; }
    ~Derived() { cout << "D "; }
};

int main() {
    Derived obj;
    return 0;
}

// Expected output: A C D B
