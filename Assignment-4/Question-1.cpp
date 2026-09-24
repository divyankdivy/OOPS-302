#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void getPerson()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }
};

class Student : public Person
{
public:
    int rollNo;
    string course;

    void getStudent()
    {
        getPerson();

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Course: ";
        cin >> course;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nRoll Number: " << rollNo;
        cout << "\nCourse: " << course;
    }
};

int main()
{
    Student s;

    s.getStudent();
    s.display();

    return 0;
}