#include <iostream>
using namespace std;

class Demo {

public:
    // Constructor
    Demo() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

void createObject() {

    // Object created inside separate function
    Demo d2;

    cout << "Inside separate function" << endl;
}

int main() {

    // Object created inside main()
    Demo d1;

    cout << "Inside main()" << endl;

    createObject();

    cout << "Back in main()" << endl;

    return 0;
}