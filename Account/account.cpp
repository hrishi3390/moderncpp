//
//  account.cpp
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 18/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//
//
//class Account{
//    string name;
//    float balance;
//    int acc_no;
//    static int accNumGenerator;
//public:
//    Account(string &name, float balance);
//    ~Account();
//    string getName()const;
//    int getAccoutNumber() const;
//    
//    void accumulateInterest();
//    void withdraw(float amount);
//    void deposit(float amount);
//    float getInterestRate()const;
//    
//};

#include "account.hpp"

//Account::Account(){
//    cout<<"Default constructor is invoked"<<endl;
//}

Account::Account(const string &name, float balance): name(name), balance(balance){
    acc_no = ++accNumGenerator;
}
Account::Account(const Account &obj){
    name = obj.name;
    balance = obj.balance;
    acc_no = obj.acc_no;
}
int Account::accNumGenerator = 0;

string Account::getName()const{
    return name;
}

int Account::getAccoutNumber() const{
    return acc_no;
}

void Account::deposit(float amount){
    balance += amount;
}

void Account::withdraw(float amount)
{
    balance -= amount;
}

float Account::getBalance() const {
    return balance;
}

void Account::accumulateInterest(){
    
}

float Account::getInterestRate() const{
    return 0.0f;
}

Account::~Account(){
}