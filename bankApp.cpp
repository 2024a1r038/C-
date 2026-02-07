#include <iostream>
#include "bank.h"

using namespace std;

int main() {
    BankAccount account;
    account.deposit(1000);
    cout << "Current Balance: " << account.getBalance() << endl;

    return 0;
}
