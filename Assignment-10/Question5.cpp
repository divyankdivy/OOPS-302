#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> students;
    int choice, rollNumber;
    string name;

    do {
        cout << "\n----- STUDENT RECORD MENU -----" << endl;
        cout << "1. Insert student record" << endl;
        cout << "2. Search by roll number" << endl;
        cout << "3. Display all records" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter roll number: ";
                cin >> rollNumber;
                cout << "Enter student name: ";
                getline(cin >> ws, name);

                students[rollNumber] = name;
                cout << "Student record inserted/updated." << endl;
                break;

            case 2: {
                cout << "Enter roll number to search: ";
                cin >> rollNumber;

                auto it = students.find(rollNumber);
                if (it != students.end()) {
                    cout << "Roll Number: " << it->first
                         << ", Name: " << it->second << endl;
                } else {
                    cout << "Student record not found." << endl;
                }
                break;
            }

            case 3:
                if (students.empty()) {
                    cout << "No student records available." << endl;
                } else {
                    cout << "\nStudent Records:" << endl;
                    for (const auto& record : students) {
                        cout << "Roll Number: " << record.first
                             << ", Name: " << record.second << endl;
                    }
                }
                break;

            case 0:
                cout << "Program terminated." << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
