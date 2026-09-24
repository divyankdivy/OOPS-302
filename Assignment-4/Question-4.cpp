#include <iostream>
using namespace std;

class Vehicle
{
public:
    string brand;
    string model;

    void getVehicle()
    {
        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter Model: ";
        cin >> model;
    }
};

class Car : public Vehicle
{
public:
    int doors;

    void getCar()
    {
        getVehicle();

        cout << "Enter Number of Doors: ";
        cin >> doors;
    }

    void displayCar()
    {
        cout << "\nBrand: " << brand;
        cout << "\nModel: " << model;
        cout << "\nNumber of Doors: " << doors;
    }
};

class Bike : public Vehicle
{
public:
    int engineCapacity;

    void getBike()
    {
        getVehicle();

        cout << "Enter Engine Capacity: ";
        cin >> engineCapacity;
    }

    void displayBike()
    {
        cout << "\nBrand: " << brand;
        cout << "\nModel: " << model;
        cout << "\nEngine Capacity: " << engineCapacity << " cc";
    }
};

int main()
{
    Car c;
    Bike b;

    cout << "Enter Car Details:\n";
    c.getCar();

    cout << "\nCar Details:";
    c.displayCar();

    cout << "\n\nEnter Bike Details:\n";
    b.getBike();

    cout << "\nBike Details:";
    b.displayBike();

    return 0;
}