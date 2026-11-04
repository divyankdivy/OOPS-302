#include <iostream>
#include <string>
using namespace std;

// Class template that stores two values of possibly different types.
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) : first(a), second(b) {}

    void display() const {
        cout << "First value: " << first << endl;
        cout << "Second value: " << second << endl;
    }
};

int main() {
    Pair<int, string> student(2026010038, "Divyank");

    cout << "Pair containing an integer and a string:" << endl;
    student.display();

    return 0;
}
