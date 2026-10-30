#include <iostream>
using namespace std;

class AvMarks {
    public:
    void result(int x) {
        cout<<x;
    }

    void result(int x, int y) {
        double avg=(double)(x+y)/2;
        cout<<avg;
    }

    void result(int x, int y, int z) {
        double avg=(double)(x+y+z)/3;
        cout<<avg;
    }
};

int main() {
    AvMarks a;
    a.result(80);
    cout<<endl;
    a.result(80,72);
    cout<<endl;
    a.result(65, 57, 91);
}