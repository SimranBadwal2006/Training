#include <iostream>
using namespace std;

class BankAccount {
private:
    long int account_no;
    double balance;

public:
    void setData(long int ac, double bal) {
        this->account_no = ac;
        this->balance = bal;
    }

    long int get_account_no() {
        return this->account_no;
    }

    double deposit(double amount) {
        this->balance += amount;
        return this->balance;
    }

    double withdraw(double amount) {
        if (this->balance >= amount) {
            this->balance -= amount;
            return this->balance;
        } else {
            cout << "Insufficient balance" << endl;
            return this->balance;
        }
    }
};

int main() {
    BankAccount *user1 = new BankAccount();
    user1->setData(1234567, 10000);  
    
    double newBalance = user1->deposit(1000);
    
    cout << "A/C - " << user1->get_account_no() << endl;
    cout << "Balance: " << newBalance << endl;
    
    delete user1; // free memory
    return 0;
}