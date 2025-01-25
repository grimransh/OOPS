// Write a program to create a class account with the following data members:
// Name of the account holder
// Account number
// Account type
// Balance
// Password
// The class should have the following member functions:
// getdata() to get the data from the user
// deposit() to deposit an amount in the account
// withdraw() to withdraw an amount from the account
// display() to display the account details
#include<bits/stdc++.h>
using namespace std;
class account{
    public:
        string name;
        int account_number;
        string account_type;
        long int balance;
        string password;
        void getdata(){
            cout << "Enter the name of the account holder: ";
            cin >> name;
            cout << "Enter the account type: ";
            cin >> account_type;
            cout << "Enter the account number: ";
            cin >> account_number;
            cout << "Enter the password: ";
            cin >> password;
            cout << "Congratulation! Account has been created."<< endl <<"Enter the balance: ";
            cin >> balance;
        }
        void deposit(){
            int amount;
            cout << "Enter the amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Amount deposited successfully!" << endl;
        }
        void withdraw(){
            int amount;
            cout << "Enter the amount to withdraw: ";
            cin >> amount;
            if(balance < amount){
                cout << "Insufficient balance!" << endl;
            }
            else{
                balance -= amount;
                cout << "Amount withdrawn successfully!" << endl;
            }
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Account Number: " << account_number << endl;
            cout << "Account Type: " << account_type << endl;
            cout << "Balance: " << balance << endl;
        }
};
int main(){
    account a;
    a.getdata();
    cout << "For depositing " << endl;
    a.deposit();
    cout << "For withdrawing " << endl;
    a.withdraw();
    cout << "Account Details: " << endl;
    a.display();
    return 0;
}