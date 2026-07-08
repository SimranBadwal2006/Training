#include<iostream>
using namespace std;

class ATM{
private:
    int accountNo;
    double balance;

public:

    ATM(int acc, double bal){
        accountNo = acc;
        balance = bal;
    }

    void deposit(){
        double amt;
        cout << "Enter amount to Deposit: ";
        cin >> amt;
        if(amt > 0){
            balance += amt;
            cout << "Rs " << amt << " Deposited Successfully." << endl;
        } else {
            cout << "Invalid Amount!" << endl;
        }
    }

   
    void withdraw(){
        double amt;
        cout << "Enter amount to Withdraw: ";
        cin >> amt;
        if(amt > 0 && amt <= balance){
            balance -= amt;
            cout << "Rs " << amt << " Withdrawn Successfully." << endl;
        } else if(amt > balance){
            cout << "Insufficient Balance!" << endl;
        } else {
            cout << "Invalid Amount!" << endl;
        }
    }

    void showBalance(){
        cout << "Account No: " << accountNo << endl;
        cout << "Current Balance: Rs " << balance << endl;
    }
};

int main(){
    ATM user(1001, 5000.0); 
    int choice;

    do{
        cout << "\n------ ATM Menu ------" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1: user.deposit();
                    break;
            case 2: user.withdraw();
                    break;
            case 3: user.showBalance();
                    break;
            case 4: cout << "Thank you for using ATM. Bye!" << endl;
                    break;
            default: cout << "Invalid Choice!" << endl;
        }
    }while(choice != 4); 

    return 0;
}