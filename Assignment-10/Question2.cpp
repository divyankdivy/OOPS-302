#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<int> numbers;
    int value;

    cout << "Enter an element to insert at the beginning: ";
    cin >> value;
    numbers.push_front(value);

    cout << "Enter an element to insert at the end: ";
    cin >> value;
    numbers.push_back(value);

    cout << "Enter another element to insert at the beginning: ";
    cin >> value;
    numbers.push_front(value);

    cout << "Enter another element to insert at the end: ";
    cin >> value;
    numbers.push_back(value);

    cout << "List: ";
    for (int item : numbers) {
        cout << item << " ";
    }

    cout << "\nEnter the value to remove: ";
    cin >> value;

    auto it = find(numbers.begin(), numbers.end(), value);
    if (it != numbers.end()) {
        numbers.erase(it);  // Removes the first occurrence.
        cout << value << " removed from the list." << endl;
    } else {
        cout << value << " was not found in the list." << endl;
    }

    cout << "Updated list: ";
    for (int item : numbers) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
