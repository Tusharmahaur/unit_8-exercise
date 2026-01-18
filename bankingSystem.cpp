#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class BankAccount{
    private:
        string accountHolderName;
        string panNumber;
        string aadhaarNumber;
        string mobileNumber;
        string email;
        string address;
        string dateOfBirth;
        //Additional fields for bank account
        string accountNumber;
        string accountType;
        string ifscCode;
        string micrCode;
        string accountBalance;
    public:
        string bankName;
        string branchName;
        
        BankAccount(string name, string pan, string aadhaar, string mobile, string emailAdd, string addr, string dob) {
            accountHolderName = name;
            panNumber = pan;
            aadhaarNumber = aadhaar;
            mobileNumber = mobile;
            email = emailAdd;
            address = addr;
            dateOfBirth = dob;
        }

        void displayAccountHolderInfo(){
            cout << "Account Holder Name : " << accountHolderName << endl;
            cout << "PAN Number : " << panNumber << endl;
            cout << "Aadhaar Number : " << aadhaarNumber << endl;
            cout << "Mobile Number : " << mobileNumber << endl;
            cout << "Email : " << email << endl;
            cout << "Address : " << address << endl;
            cout << "Date of Birth : " << dateOfBirth << endl;
        }

        void updateBalance(string newBalance){
            accountBalance = newBalance;
        }
        
        void displayBalance(){
            cout << "Account Balance : " << accountBalance << endl;
        }
};

class SavingsAccount : public BankAccount{
    public:
        // Call base class constructor


    
    void displayAccountType(){
        cout << "Account Type: Savings Account" << endl;
    }

};

class CurrentAccount : public BankAccount{
    
};

int main(){
    BankAccount savingsAccount("John Doe", "ABCDE1234F", "123456789012", "9876543210", "john.doe@example.com", "123 Main Street, City, State, ZIP Code", "01/01/1990");
    savingsAccount.displayAccountHolderInfo();
    // savingsAccount.displayAccountType();
    // savingsAccount.updateBalance("5000");
    // savingsAccount.displayBalance();
    return 0;
}