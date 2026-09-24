#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    void getName()
    {
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Employee : public Person
{
public:
    int empID;

    void getEmployee()
    {
        getName();

        cout << "Enter Employee ID: ";
        cin >> empID;
    }
};

class Manager : public Employee
{
public:
    string department;

    void getManager()
    {
        getEmployee();

        cout << "Enter Department: ";
        cin >> department;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nEmployee ID: " << empID;
        cout << "\nDepartment: " << department;
    }
};

int main()
{
    Manager m;

    m.getManager();
    m.display();

    return 0;
}