#include <iostream>
using namespace std;

class Employee {

    private:
    int id;
    string name;
    int salary;

    public:
    Employee(int id, string name, int salary) {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void showDetails() {
        cout<<"Employee Id: "<<id<<", Name: "<<name<<", Salary: "<<salary;
    }
};

int main() {
    Employee emp = Employee(101, "John", 240000);
    emp.showDetails();
}