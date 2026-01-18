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
        

};

class SavingsAccount : public BankAccount{
    
};

class CurrentAccount : public BankAccount{
    
};

class RecurringDepositAccount : public BankAccount{
    
};

class FixedDepositAccount : public BankAccount{
    
};



int main(){
    
    return 0;
}