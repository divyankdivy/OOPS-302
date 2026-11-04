#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers(5);
    int sum = 0;

    cout << "Enter five integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    cout << "Vector elements: ";
    for (int value : numbers) {
        cout << value << " ";
        sum += value;
    }

    cout << "\nSum = " << sum << endl;
    return 0;
}
