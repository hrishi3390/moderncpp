//
//  account.hpp
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 18/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#ifndef account_hpp
#define account_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Account{
    string name;
    int acc_no;
    static int accNumGenerator;
protected:
    float balance;
public:
    Account(const string &name, float balance);
    Account(const Account &);
    
    Account();
    ~Account();
    string getName()const;
    int getAccoutNumber() const;
    float getBalance() const;
    
    void accumulateInterest();
    void withdraw(float amount);
    void deposit(float amount);
    float getInterestRate()const;
    
};

#endif /* account_hpp */
