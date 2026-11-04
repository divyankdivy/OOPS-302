#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    try {
        if (number < 0) {
            throw invalid_argument("Number cannot be negative.");
        }
        else if (number > 100) {
            throw out_of_range("Number cannot be greater than 100.");
        }

        cout << "Valid number: " << number << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Invalid argument exception: " << e.what() << endl;
    }
    catch (const out_of_range& e) {
        cout << "Out of range exception: " << e.what() << endl;
    }

    return 0;
}
