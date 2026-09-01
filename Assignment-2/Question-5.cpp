#include <iostream>
using namespace std;

class Student {
    private:
    int rollNo;
    string name;
    float cgpa;

    public:
    // Default Constructor
    Student() {
        rollNo = 0;
        name = "Unknown";
        cgpa = 0.0;
    }

    // a constructor accepting name and roll number,
    Student(int rollNo, string name) {
        this->rollNo = rollNo;
        this->name = name;
        this->cgpa = 0.0;
    }

    // a constructor accepting name, roll number, and CGPA.
    Student(int rollNo, string name, float cgpa) {
        this->rollNo = rollNo;
        this->name = name;
        this->cgpa = cgpa;
    }

    void display() {
        cout <<"Name: "<<name<<endl;
        cout <<"Roll Number: "<<rollNo<<endl;
        cout <<"CGPA: "<<cgpa<<endl;
        cout <<endl;
    }
};

int main() {
    // Object using default constructor
    Student s1;
    // Object using name and roll number constructor
    Student s2(101, "John");
    // Object using name, roll number and CGPA constructor
    Student s3(102, "Alice",8.5);

    // Display details
    s1.display();
    s2.display();
    s3.display();
}