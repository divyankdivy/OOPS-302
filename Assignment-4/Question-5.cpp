#include <iostream>
using namespace std;

class College
{
public:
    string collegeName;

    College(string c)
    {
        collegeName = c;
        cout << "College constructor executed." << endl;
    }
};

class Department : public College
{
public:
    string departmentName;

    Department(string c, string d) : College(c)
    {
        departmentName = d;
        cout << "Department constructor executed." << endl;
    }

    void display()
    {
        cout << "\nCollege Name: " << collegeName;
        cout << "\nDepartment Name: " << departmentName;
    }
};

int main()
{
    Department d("ABC College", "Computer Science");

    d.display();

    return 0;
}