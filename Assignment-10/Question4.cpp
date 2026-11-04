#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    stack<int> s;
    queue<int> q;
    int n, value;

    cout << "How many values do you want to insert? ";
    cin >> n;

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> value;
        s.push(value);
        q.push(value);
    }

    // Demonstrate stack operations.
    cout << "\n--- STACK OPERATIONS ---" << endl;
    if (!s.empty()) {
        cout << "Top element: " << s.top() << endl;
        cout << "Popping top element: " << s.top() << endl;
        s.pop();
    }

    cout << "Stack elements (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    // Demonstrate queue operations.
    cout << "\n--- QUEUE OPERATIONS ---" << endl;
    if (!q.empty()) {
        cout << "Front element: " << q.front() << endl;
        cout << "Popping front element: " << q.front() << endl;
        q.pop();
    }

    cout << "Queue elements (front to back): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
