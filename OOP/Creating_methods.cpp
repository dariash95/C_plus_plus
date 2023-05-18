#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Account::setName(string n){
    name = n;
}

string Account::getName(){
    return name;
}

bool Account::deposit(double amount){
    balance += amount;
    return true;
}

bool Account::withdwar(double amount){
    if (balance >= 0) {
        balance -= amount;
            return true;
    } else {
        return false;
    }
}

class Account {
    private:
        // Attributes
        string name;
        double balance;

    public:
        // Methods
        void setBlance(double bal){
            balance = bal;
        }

        double getBalance() {
            return balance;
        }

        void setName(string n);
        string getName();

        bool deposit(double amount);
        bool withdraw(double amount);
};

int main (){

    Accout frank_account;
    frank_account.setName("Frank");
    frank_account.setBalance(1000.0);

    return 0;
}