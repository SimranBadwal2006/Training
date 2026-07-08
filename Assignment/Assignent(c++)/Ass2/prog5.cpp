#include<iostream>
using namespace std;

class BankAccount{
private: 
    int accountNo;
    double balance; 

public:
 
    BankAccount(int accNo, double bal){
        accountNo = accNo;
        balance = bal;
    }

  
    void deposit(double amount){
        if(amount > 0){
            balance = balance + amount;
            cout << "Deposited: Rs " << amount << endl;
        } else {
            cout << "Invalid amount" << endl;
        }
    }

   
    void withdraw(double amount){
        if(amount > 0 && amount <= balance){
            balance = balance - amount;
            cout << "Withdrawn: Rs " << amount << endl;
        } else if(amount > balance){
            cout << "Insufficient Balance!" << endl;
        } else {
            cout << "Invalid amount" << endl;
        }
    }

    void displayBalance(){
        cout << "Account No: " << accountNo << endl;
        cout << "Current Balance: Rs " << balance << endl;
    }
};

int main(){
    BankAccount acc1(101, 5000.0);
    acc1.displayBalance();

    acc1.deposit(1500.50);
    acc1.displayBalance();

    acc1.withdraw(2000);
    acc1.displayBalance();
  

    acc1.withdraw(6000);

    return 0;
}