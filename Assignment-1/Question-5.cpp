#include <iostream>
#include <string>
using namespace std;

// Differentiate between private and public access/scope. Perform the question no. 4
// with class instead of structure with having the data members private and some
// member functions in private scope and some in public scope.

class Students {
    private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    void updateDetails() {
        cout << "Update your name: ";
        cin >> name;

        cout << "Update your roll number: ";
        cin >> rollNo;

        cout << "Update your degree: ";
        cin >> degree;
    }

    void updateCGPA() {
        cout << "Update your CGPA: ";
        cin >> currentCGPA;
    }

    public:

    void addDetails() {

        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter your roll number: ";
        cin >> rollNo;

        cout << "Enter your degree: ";
        cin >> degree;

        cout << "Enter your hostel: ";
        cin >> hostel;

        cout << "Enter your current CGPA: ";
        cin >> currentCGPA;

    }

    void updateHostel() {
        cout << "Update your hostel: ";
        cin >> hostel;
    }

    void displayDetails() {

        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;

    }
};

int main() {

    Students student;
    student.addDetails();
    student.displayDetails();
    return 0;
}