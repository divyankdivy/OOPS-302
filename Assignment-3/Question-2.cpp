#include <iostream>
using namespace std;

class Number
{
private:
    int a, b;

public:
    Number(int x, int y)
    {
        a = x;
        b = y;
    }

    friend void sum(Number n);
};

void sum(Number n)
{
    cout << "Sum = " << n.a + n.b;
}

int main()
{
    Number n1(10, 20);

    sum(n1);

    return 0;
}