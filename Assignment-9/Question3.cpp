#include <iostream>
#include <stdexcept>
using namespace std;

// Class template storing two values and performing arithmetic operations.
template <typename T>
class Calculator {
private:
    T a, b;

public:
    Calculator(T first, T second) : a(first), b(second) {}

    T add() const {
        return a + b;
    }

    T subtract() const {
        return a - b;
    }

    T multiply() const {
        return a * b;
    }

    T divide() const {
        if (b == T{}) {
            throw runtime_error("Division by zero is not allowed.");
        }
        return a / b;
    }
};

int main() {
    double x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    Calculator<double> calc(x, y);

    cout << "Addition = " << calc.add() << endl;
    cout << "Subtraction = " << calc.subtract() << endl;
    cout << "Multiplication = " << calc.multiply() << endl;

    try {
        cout << "Division = " << calc.divide() << endl;
    }
    catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
