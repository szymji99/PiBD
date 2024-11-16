// BankAccount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class BankAccount {
    static int counter;
    int accountNumber;
    double balance;

public:
    BankAccount(int bal = 0) {
        balance = bal;
        counter += 1;
        accountNumber = counter;
    }
    //  ~BankAccount();

    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        balance -= amount;
    }
    int getaccountNumber() const;
    void setaccountNumber(int accnum);
    int getbalance() const;
    void setbalance(double bal);
};

int BankAccount::getaccountNumber() const{
    return accountNumber;
}

void BankAccount::setaccountNumber(int accnum) {
    accountNumber = accnum;
}

int BankAccount::getbalance() const{
    return balance;
}

void BankAccount::setbalance(double bal) {
    balance = bal;
}

int BankAccount::counter = 0;

int main()
{

    BankAccount b;
    BankAccount c;


    std::cout << b.getaccountNumber() << ':' << b.getbalance()<<'\n';
    b.setbalance(100);
    std::cout << b.getaccountNumber() << ':' << b.getbalance()<<'\n';
    b.withdraw(50);
    std::cout << b.getaccountNumber() << ':' << b.getbalance()<<'\n';
    b.deposit(10);
    std::cout << b.getaccountNumber() << ':' << b.getbalance()<<'\n';
    std::cout << c.getaccountNumber() << ':' << c.getbalance()<<'\n';


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
