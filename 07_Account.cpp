#include <iostream>
using namespace std;

class Account {
    private:
        string accountNumber;
        double balance;
        string ownerName;
        double MinimumBalance;
    public:
        Account () {}

        void setAccNumber(string num) {accountNumber = num;}
        void setBalance(double b) {balance = b;}
        void setOwnName(string n) {ownerName = n;}
        void setMin(double m) {MinimumBalance = m;}

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
    acc1.setAccNumber("123456789");
    acc1.setBalance(1000.0);
    acc1.setOwnName("Enkay");
    acc1.setMin(500.0);

    acc1.displayBalance();
    acc1.deposit(500.0);    
    acc1.displayBalance();
    acc1.withdraw(200.0);
    acc1.displayBalance();
    acc1.withdraw(1500.0); //Thử rút quá số dư
    acc1.displayBalance();
    acc1.withdraw(801);  //Thử rút quá số dư tối thiểu
    acc1.displayBalance();

    return 0;
}
