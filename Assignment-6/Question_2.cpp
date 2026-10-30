// Unit 3 - Question 2: Private inheritance and accessibility
#include <iostream>
using namespace std;

class Base {
public:
    int x = 10;
protected:
    int y = 20;
};

class Derived : private Base {
public:
    void show() {
        cout << x << " " << y;
    }
};

int main() {
    Derived d;
    d.show();
    return 0;
}

// Expected output: 10 20
// Derived can access inherited public/protected members internally.
// Private inheritance makes them private when viewed from outside Derived.
