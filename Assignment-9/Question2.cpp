#include <iostream>
using namespace std;

// Function template to exchange two values.
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping:  x = " << x << ", y = " << y << endl;

    char first, second;
    cout << "\nEnter two characters: ";
    cin >> first >> second;

    cout << "Before swapping: first = " << first
         << ", second = " << second << endl;
    swapValues(first, second);
    cout << "After swapping:  first = " << first
         << ", second = " << second << endl;

    return 0;
}
