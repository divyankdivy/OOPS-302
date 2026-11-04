#include <iostream>
#include <stdexcept>
using namespace std;

class LibraryAccount {
private:
    int availableBooks;

public:
    LibraryAccount(int books) {
        availableBooks = books;
    }

    void issueBook(int requestedBooks) {
        if (requestedBooks > availableBooks) {
            throw runtime_error("Requested books exceed available books.");
        }

        if (requestedBooks <= 0) {
            throw invalid_argument("Number of books must be positive.");
        }

        availableBooks -= requestedBooks;
        cout << requestedBooks << " book(s) issued successfully." << endl;
        cout << "Books remaining: " << availableBooks << endl;
    }
};

int main() {
    int available, request;

    cout << "Enter number of available books: ";
    cin >> available;

    cout << "Enter number of books to issue: ";
    cin >> request;

    try {
        if (available < 0) {
            throw invalid_argument("Available books cannot be negative.");
        }

        LibraryAccount account(available);
        account.issueBook(request);
    }
    catch (const invalid_argument& e) {
        cout << "Invalid input: " << e.what() << endl;
    }
    catch (const runtime_error& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
