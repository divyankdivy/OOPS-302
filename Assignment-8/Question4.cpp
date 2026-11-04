#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter " << SIZE << " array elements: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    int index;
    cout << "Enter index to access (0 to " << SIZE - 1 << "): ";
    cin >> index;

    try {
        if (index < 0 || index >= SIZE) {
            throw out_of_range("Array index is outside the valid range.");
        }

        cout << "Element at index " << index << " = " << arr[index] << endl;
    }
    catch (const out_of_range& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
