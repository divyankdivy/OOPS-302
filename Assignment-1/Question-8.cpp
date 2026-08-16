#include <iostream>

using namespace std;

// Implement namespace in a program to illustrate the use of same name variables and
// functions in different sections/libraries of the code.

namespace First {
    int value = 10;
    void display() {
        cout << "First namespace: " << value << endl;
    }
}

namespace Second {
    int value = 20;
    void display() {
        cout << "Second namespace: " << value << endl;
    }
}

int main() {

    First::display();
    Second::display();
    cout << First::value << endl;
    cout << Second::value << endl;
    return 0;
}