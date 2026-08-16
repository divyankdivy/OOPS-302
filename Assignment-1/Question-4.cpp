#include <iostream>
#include <string>
using namespace std;

// Create a structure in C++ containing the details of Students as details below and a
// main function to execute the structure.
// Data Members(properties):
// Name
// Roll No
// Degree
// Hostel
// CurrentCGPA
// Member Function(behavior):
// addDetails();
// updateDetails();
// updateCGPA();
// updateHostel();
// displaydetails();

struct Students {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    void addDetails() {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your roll number: ";
        cin>>rollNo;
        cout<<"Enter your degree: ";
        cin>>degree;
        cout<<"Enter your hostel: ";
        cin>>hostel;
        cout<<"Enter your current CGPA: ";
        cin>>currentCGPA;
    }

    void updateDetails() {
        cout<<"Update your name: ";
        cin>>name;
        cout<<"Update your roll number: ";
        cin>>rollNo;
        cout<<"Update your degree: ";
        cin>>degree;
    }

    void updateCGPA() {
        cout<<"Update your CGPA";
        cin>>currentCGPA;
    }

    void updateHostel() {
        cout<<"Update your hostel Details";
        cin>>hostel;
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
    cout << "\nStudent Details:" << endl;

    student.displayDetails();
    cout << "\nUpdate CGPA:" << endl;

    student.updateCGPA();
    cout << "\nUpdate Hostel:" << endl;

    student.updateHostel();
    cout << "\nUpdated Student Details:" << endl;

    student.displayDetails();
    return 0;
}