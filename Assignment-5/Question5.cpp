#include <iostream>
using namespace std;

class Maximum {
    public:
    int findMax(int a, int b) {
        if (a>b) {
            return a;
        }
        return b;
    }

    int findMax(int a, int b, int c) {
        if (a>b && a>c) {
            return a;
        }
        else if (b>a && b>c) {
            return b;
        }
        return c;
    }

    double findMax(double a, double b) {
        if (a>b) {
            return a;
        }
        return b;
    }
};

int main() {
    Maximum max;
    cout<<max.findMax(10, 2, 9)<<endl;
    cout<<max.findMax(32.6, 40.9);
}