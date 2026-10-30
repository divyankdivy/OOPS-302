#include <iostream>
using namespace std;

class Print {
    public:
    void display(int x) {
        cout<<x;
    }

    void display(double x) {
        cout<<x;
    }
    void display(string y) {
        cout<<y;
    }
};

int main() {
    Print p;
    p.display(23);
    cout<<endl;
    p.display(4.5);
    cout<<endl;
    p.display("hehehehehehe");
}