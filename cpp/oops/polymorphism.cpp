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