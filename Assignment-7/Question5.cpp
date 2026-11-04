#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    virtual void displayInfo() {
        cout << "Vehicle details." << endl;
    }

    virtual ~Vehicle() = default;
};

class Car : public Vehicle {
public:
    void displayInfo() override {
        cout << "Car: Four wheels, suitable for family travel." << endl;
    }
};

class Bike : public Vehicle {
public:
    void displayInfo() override {
        cout << "Bike: Two wheels, suitable for individual travel." << endl;
    }
};

class Bus : public Vehicle {
public:
    void displayInfo() override {
        cout << "Bus: Large passenger vehicle used for public transport." << endl;
    }
};

int main() {
    Car car;
    Bike bike;
    Bus bus;

    Vehicle* ptr;

    ptr = &car;
    ptr->displayInfo();

    ptr = &bike;
    ptr->displayInfo();

    ptr = &bus;
    ptr->displayInfo();

    return 0;
}
