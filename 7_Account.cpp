#include <iostream>
using namespace std;

class Account {
    public:
        string accountNumber;
        double balance;
        string ownerName;
        double MinimumBalance;

       void deposit(double amount) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
       }
       
       void withdraw(double amount) {
            if (amount > balance) {
                cout << "Insufficient funds for withdrawal." << endl;
            } else if (balance - amount < MinimumBalance) {
                cout << "Withdrawal denied: balance would fall below the minimum required." << endl;
            } else {
                balance -= amount;
                cout << "Withdrew: " << amount << endl;
            }
        }

        void displayBalance() {
            cout << "Account Owner: " << ownerName << ". Current balance: " << balance << endl;
        }

        bool isBalnceSufficient(double amount) {
            return balance >= amount;
        }
    };

int main() {
    Account acc1;
    acc1.accountNumber = "123456789";
    acc1.balance = 1000.0;
    acc1.ownerName = "EnKay";
    acc1.MinimumBalance = 100.0;

    acc1.displayBalance();
    acc1.deposit(500.0);    
    acc1.displayBalance();
    acc1.withdraw(200.0);
    acc1.displayBalance();
    acc1.withdraw(1500.0); //Thử rút quá số dư
    acc1.displayBalance();

    return 0;
}
