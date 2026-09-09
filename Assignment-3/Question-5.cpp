#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    int balance;
    static int totalAccounts;

public:
    BankAccount(int a, int b)
    {
        accountNo = a;
        balance = b;
        totalAccounts++;
    }

    friend void display(BankAccount b);

    static void showTotal()
    {
        cout << "Total Accounts = " << totalAccounts << endl;
    }
};

int BankAccount::totalAccounts = 0;

void display(BankAccount b)
{
    cout << "Account No: " << b.accountNo << endl;
    cout << "Balance: " << b.balance << endl;
}

int main()
{
    BankAccount b1(101, 5000);
    BankAccount b2(102, 7000);
    BankAccount b3(103, 9000);

    display(b1);
    display(b2);
    display(b3);

    BankAccount::showTotal();

    return 0;
}