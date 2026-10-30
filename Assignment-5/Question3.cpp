#include <iostream>
using namespace std;

class Calculator {
    public:
    void sum(int a, int b) {
        cout<<a+b;
    }

    void sum(int a, int b, int c) {
        cout<<a+b+c;
    }

    void sum(double a, double b) {
        cout<<a+b;
    }
};

int main() {
    Calculator c;
    c.sum(5, 7);
    cout<<endl;
    c.sum(3, 6, 1);
    cout<<endl;
    c.sum(3.5, 9.6);
    
    return 0;
}