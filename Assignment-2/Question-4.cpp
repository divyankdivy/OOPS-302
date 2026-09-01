#include <iostream>
using namespace std;

class Box {

    private:
    int length, width, height;

    public:
    Box(){}

    Box(int length, int width, int height) {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    int volume() {
        return length*width*height;
    }

};

int main() {
    Box b = Box(5, 5, 5);
    cout<<b.volume();
    return 0;
}