#include <iostream>
#include <string>

class BankAccount {
public:
    std::string account_number;
    double balance;
    BankAccount(std::string n, double b) {
        account_number = n;
        balance = b;
    }
  void deposit(double amount) {
        balance += amount;
    }
   void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            std::cout << "ERR: Insufficient funds on " << account_number << std::endl;
   }
    }

    void display() const {
        std::cout << account_number << " (Bal: " << balance << ")" << std::endl;}
};
class SavingsAccount : public BankAccount {
public:
    double rate_of_interest;

    SavingsAccount(std::string n, double b, double r)
      : BankAccount(n, b) {
        rate_of_interest = r;
    }

    void calculateInterest() {
        double interest = balance * (rate_of_interest / 100.0);
        balance += interest;
        std::cout << "SAVINGS: Interest added (" << interest << ")." << std::endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    const double MIN_BALANCE = 1000.0;
    const double SERVICE_CHARGE = 50.0;

public:
    CurrentAccount(std::string n, double b)
        : BankAccount(n, b) {}

    void calculateServiceCharge() {
        if (balance < MIN_BALANCE) {
        balance -= SERVICE_CHARGE;
          std::cout << "CURRENT: Service charge ($" << SERVICE_CHARGE << ") applied." << std::endl;
        } else {
            std::cout << "CURRENT: No service charge." << std::endl;
    }
    }
};

int main() {
    std::cout << "--- Bank Account Demonstration ---" << std::endl;
    SavingsAccount s1("S001", 500.0, 2.0);
    std::cout << "\n[S001 - Savings]" << std::endl;
    s1.display();
    s1.deposit(100.0);
    s1.calculateInterest();
    s1.display();
    CurrentAccount c1("C002", 1500.0);
    std::cout << "\n[C002 - Current]" << std::endl;
    c1.display();
    c1.withdraw(600.0);
    c1.calculateServiceCharge(); 
    c1.display(); 
    return 0;
}
