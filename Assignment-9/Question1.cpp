#include <iostream>
using namespace std;

// Function template to return the greater of two values.
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Maximum integer = " << maximum(num1, num2) << endl;

    double value1, value2;
    cout << "\nEnter two floating-point numbers: ";
    cin >> value1 >> value2;
    cout << "Maximum floating-point number = "
         << maximum(value1, value2) << endl;

    return 0;
}
