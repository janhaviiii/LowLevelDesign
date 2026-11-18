// 1. Create a parent class: Payment
// Requirements:
// - A method processPayment() that prints "Generic payment processing".
// - Make this method virtual.
// 2. Create two child classes
// UPIPayment
// - Inherits from Payment.
// - Overrides processPayment().
// - Prints "Processing payment through UPI".
// CardPayment
// - Inherits from Payment.
// - Overrides processPayment().
// - Prints "Processing payment through Card".
// 3. Implement main()
// - Create one UPIPayment object.
// - Create one CardPayment object.
// - Create a Payment& reference for each object.
// - Call processPayment() using those references.

#include <iostream>
using namespace std;

class Payment{
    public:
    virtual void processPayment(){
        cout<< "Generic payment processing"<< endl;
    }

};
class UPIPayment : public Payment{
    public:
    void processPayment() override {
        cout<< "Processing payment through UPI"<< endl;
    }
};

class CardPayment:public Payment{
    public:
    void processPayment() override {
        cout<< "Processing payment through Card"<< endl;
    }
};

int main(){
    UPIPayment upi;
    CardPayment card;
    Payment& p1 = upi;
    Payment& p2 = card;

    p1.processPayment();
    p2.processPayment();

}