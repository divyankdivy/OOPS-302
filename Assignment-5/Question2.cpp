#include <iostream>
using namespace std;

class Area {
    public:
    void calculate(int x) {
        cout<<x*x;
    }
    
    void calculate(int x, int y) {
        cout<<x*y;
    }

    void calculate(double r) {
        cout<<3.14*(r*r);
    }
};

int main() {
    Area a;
    a.calculate(2,5);
    return 0;
}