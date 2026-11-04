#include <iostream>
using namespace std;

// Class template for a stack implemented using an array.
template <typename T, int SIZE>
class Stack {
private:
    T arr[SIZE];
    int topIndex;

public:
    Stack() : topIndex(-1) {}

    void push(T value) {
        if (topIndex == SIZE - 1) {
            cout << "Stack Overflow! Cannot push " << value << "." << endl;
            return;
        }

        arr[++topIndex] = value;
        cout << value << " pushed into the stack." << endl;
    }

    void pop() {
        if (topIndex == -1) {
            cout << "Stack Underflow! Stack is empty." << endl;
            return;
        }

        cout << arr[topIndex--] << " popped from the stack." << endl;
    }

    void display() const {
        if (topIndex == -1) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack elements (top to bottom): ";
        for (int i = topIndex; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack<int, 5> s;
    int choice, value;

    do {
        cout << "\n----- STACK MENU -----" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.display();
                break;

            case 0:
                cout << "Program terminated." << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
