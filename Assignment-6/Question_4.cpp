// Unit 3 - Question 4: Multiple inheritance
#include <iostream>
using namespace std;

class Father {
public:
    void showFather() { cout << "Father "; }
};

class Mother {
public:
    void showMother() { cout << "Mother "; }
};

class Child : public Father, public Mother {
public:
    void showChild() { cout << "Child"; }
};

int main() {
    Child obj;
    obj.showFather();
    obj.showMother();
    obj.showChild();
    return 0;
}

// Expected output: Father Mother Child
