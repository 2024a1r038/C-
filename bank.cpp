#include "bank.h"
BankAccount::BankAccount() {
    balance = 0;
}

void BankAccount::updateBalance(double amount) {
    balance += amount;
}

void BankAccount::deposit(double amount) {
    updateBalance(amount);
}

double BankAccount::getBalance(){
    return balance;
}
