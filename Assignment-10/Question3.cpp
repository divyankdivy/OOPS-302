#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of elements must be positive." << endl;
        return 0;
    }

    vector<int> numbers(n);

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    cout << "Sorted vector: ";
    for (int item : numbers) {
        cout << item << " ";
    }
    cout << endl;

    cout << "Enter value to search: ";
    cin >> value;

    if (binary_search(numbers.begin(), numbers.end(), value)) {
        cout << value << " found in the vector." << endl;
    } else {
        cout << value << " not found in the vector." << endl;
    }

    return 0;
}
