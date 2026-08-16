#include <iostream>
using namespace std;

// Write a C++ program that will ask for a temperature in Celsius and display it in
// degree Fahrenheit.[F=9C/5+32]

float celciusToFehrenhite(float c) {
    float f = ((9.0*c)/5.0)+32.0;
    return f;
}

int main() {
    float celcius;
    cin>>celcius;
    float deg = celciusToFehrenhite(celcius);
    cout<<deg;
    return 0;
}