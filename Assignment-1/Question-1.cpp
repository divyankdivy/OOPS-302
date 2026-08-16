#include <iostream>
using namespace std;

// Write a program (WAP) to display "Hello World" on console display. WAP to
// implement the following control characters:
// ‘\n’ is for new line, or you can use endl – cout<<endl<<“message”;
// ‘\t’ is for tab ; ‘\a’ is an alarm sound; ‘\r’ is carriage return to go to the beginning of
// the current line

void display() {
    cout<<"Hello World";
}

int main() {
    display();
    cout<<endl;
    cout<<"This is the new line function, \nThis will be printed in a new line";
    cout<<endl;
    cout<<"This will not get printed.\rHi, this is div";
    cout<<endl;
    cout<<"this is the backslash t \t";
    cout<<endl;
    cout<<"\a";
    return 0;
}