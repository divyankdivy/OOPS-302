#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee {
protected:
    string name;
    double basicSalary;

public:
    Employee(string n, double salary) : name(n), basicSalary(salary) {}

    virtual double calculateSalary() const {
        return basicSalary;
    }

    virtual ~Employee() = default;
};

class PermanentEmployee : public Employee {
public:
    PermanentEmployee(string n, double salary) : Employee(n, salary) {}

    double calculateSalary() const override {
        // Assumption: permanent employees receive a 20% allowance.
        return basicSalary + (0.20 * basicSalary);
    }
};

class ContractEmployee : public Employee {
public:
    ContractEmployee(string n, double salary) : Employee(n, salary) {}

    double calculateSalary() const override {
        // Assumption: contract employees receive a 10% contractual allowance.
        return basicSalary + (0.10 * basicSalary);
    }
};

int main() {
    PermanentEmployee permanent("Aarav", 50000);
    ContractEmployee contract("Riya", 50000);

    Employee* ptr;

    ptr = &permanent;
    cout << fixed << setprecision(2);
    cout << "Permanent Employee: " << "Aarav" << endl;
    cout << "Calculated Salary = " << ptr->calculateSalary() << endl;

    ptr = &contract;
    cout << "\nContract Employee: " << "Riya" << endl;
    cout << "Calculated Salary = " << ptr->calculateSalary() << endl;

    return 0;
}
