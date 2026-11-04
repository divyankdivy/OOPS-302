#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Current month is October" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Next month will be November" << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    cout << "Base class object:" << endl;
    baseObj.show();

    cout << "\nDerived class object:" << endl;
    derivedObj.show();

    return 0;
}
