#include <iostream>
using namespace std;

class BankAccount {
    private:
        double balance;
        void updateBalance(double amount);

    public:
        BankAccount();
        void deposit(double amount);
        double getBalance();
};
