#include <iostream>
#include <string>

// Base class for payment processing
class PaymentProcessor {
public:
    virtual void processPayment(double amount) = 0; // Pure virtual function
};

// Credit card payment processor
class CreditCardPaymentProcessor : public PaymentProcessor {
public:
    void processPayment(double amount) override {
        std::cout << "Processing credit card payment of $" << amount << std::endl;
    }
};

//Extended Functionality
// PayPal payment processor
class PayPalPaymentProcessor : public PaymentProcessor {
public:
    void processPayment(double amount) override {
        std::cout << "Processing PayPal payment of $" << amount << std::endl;
    }
};

//Usage
void processPayment(PaymentProcessor* processor, double amount) {
    processor->processPayment(amount);
}

int main() {
    CreditCardPaymentProcessor creditCardProcessor;
    PayPalPaymentProcessor payPalProcessor;

    processPayment(&creditCardProcessor, 100.00); // Processing credit card payment
    processPayment(&payPalProcessor, 150.00);     // Processing PayPal payment

    return 0;
}

// Base Class (PaymentProcessor): This is an abstract base class with a pure virtual function processPayment(). It defines a common interface for all payment processors.
// CreditCardPaymentProcessor: This class implements the payment processing logic for credit card payments.
// PayPalPaymentProcessor: This new class extends the functionality by implementing the payment processing for PayPal payments.
// Main Function: The processPayment function takes a pointer to a PaymentProcessor and calls the processPayment() method. This allows you to use any processor that implements the PaymentProcessor interface without changing existing code.
