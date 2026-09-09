#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    friend void display(Student s);
};

void display(Student s)
{
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main()
{
    Student s1("Rahul", 85);

    display(s1);

    return 0;
}