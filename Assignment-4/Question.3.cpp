#include <iostream>
using namespace std;

class Academic
{
public:
    int marks;

    void getMarks()
    {
        cout << "Enter Academic Marks: ";
        cin >> marks;
    }
};

class Sports
{
public:
    int sportsScore;

    void getSportsScore()
    {
        cout << "Enter Sports Score: ";
        cin >> sportsScore;
    }
};

class Result : public Academic, public Sports
{
public:
    void display()
    {
        int total = marks + sportsScore;

        cout << "\nAcademic Marks: " << marks;
        cout << "\nSports Score: " << sportsScore;
        cout << "\nTotal Score: " << total;
    }
};

int main()
{
    Result r;

    r.getMarks();
    r.getSportsScore();
    r.display();

    return 0;
}