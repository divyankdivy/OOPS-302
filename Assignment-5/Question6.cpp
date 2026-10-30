#include <iostream>
using namespace std;

class Bill {
    public:
    double calculateBill(double price, int quant) {
        double total=price*quant;
        return total;
    }

    double calculateBill(double p1, int q1, double p2, int q2) {
        double total=(p1*q1)+(p2*q2);
        return total;
    }

    double calculateBill(double amount, double discount) {
        double total=amount-(amount*discount/100);
        return total;
    }
};

int main() {
    Bill b;
    double total=b.calculateBill(55, 2, 70, 3);
    cout<<total<<endl;
    double discountPrice =b.calculateBill(total, 10.0);
    cout<<discountPrice;
    return 0;
}