#include <iostream>
using namespace std;

// Create a code snippet that illustrates the following:
// a. Calling of private member functions inside public member function
// b. Access private member functions inside public member function

class Demo {

private:
    void privateFunction1() {
        cout << "Private function 1" << endl;
    }

    void privateFunction2() {
        cout << "Private function 2" << endl;
    }

public:
    void publicFunction() {
        privateFunction1();
        privateFunction2();
    }

};

int main() {
    Demo obj;
    obj.publicFunction();
    return 0;

}