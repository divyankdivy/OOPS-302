#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class Student {
private:
    double marks[5];

public:
    void inputMarks() {
        const string subjects[5] = {
            "Subject 1", "Subject 2", "Subject 3",
            "Subject 4", "Subject 5"
        };

        bool allValid = true;

        for (int i = 0; i < 5; i++) {
            cout << "Enter marks for " << subjects[i] << " (0-100): ";
            cin >> marks[i];

            try {
                if (marks[i] < 0 || marks[i] > 100) {
                    throw out_of_range(subjects[i] + " marks must be between 0 and 100.");
                }
            }
            catch (const out_of_range& e) {
                cout << "Invalid marks: " << e.what() << endl;
                allValid = false;
            }
        }

        if (allValid) {
            double sum = 0;
            for (int i = 0; i < 5; i++) {
                sum += marks[i];
            }

            cout << "Average marks = " << sum / 5.0 << endl;
        }
        else {
            cout << "Average cannot be calculated because one or more marks are invalid." << endl;
        }
    }
};

int main() {
    Student student;
    student.inputMarks();

    return 0;
}
