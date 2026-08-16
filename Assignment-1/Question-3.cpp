#include <iostream>
using namespace std;

// WAP to demonstrate for, while, do-while (with all possible variations), like for loop
// can be demonstrated without giving initialization in for construct or without giving
// increment in for construct.

static void NormalforLoop() {
    for (int i=0; i<10; i++) {
        cout<<i<<" ";
    }
}

static void forNoInitialize() {
    int i=0;
    for (;i<10; i++) {
        cout<<i<<" ";
    }
}

static void forNoIncreament() {
    int i=0;
    for (;i<10;) {
        cout<<i<<" ";
        i++;
    }
}

static void whileLoop() {
    int i=0;
    while (i<10) {
        cout<<i<<" ";
        i++;
    }
}

static void doWhileLoop() {
    int i=0;
    do {
        cout<<i<<" ";
        i++;
    } while (i<10);
}


int main() {
    NormalforLoop();
    cout<<endl;

    forNoInitialize();
    cout<<endl;

    forNoIncreament();
    cout<<endl;

    whileLoop();
    cout<<endl;
    
    doWhileLoop();

    return 0;
}