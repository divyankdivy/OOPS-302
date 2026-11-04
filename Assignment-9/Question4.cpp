#include <iostream>
using namespace std;

// Class template to display an array and find its largest element.
template <typename T, int SIZE>
class ArrayOperations {
private:
    T arr[SIZE];

public:
    void input() {
        cout << "Enter " << SIZE << " elements: ";
        for (int i = 0; i < SIZE; i++) {
            cin >> arr[i];
        }
    }

    void display() const {
        cout << "Array elements: ";
        for (int i = 0; i < SIZE; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    T largest() const {
        T maxElement = arr[0];
        for (int i = 1; i < SIZE; i++) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }
        return maxElement;
    }
};

int main() {
    ArrayOperations<int, 5> numbers;

    numbers.input();
    numbers.display();

    cout << "Largest element = " << numbers.largest() << endl;

    return 0;
}
