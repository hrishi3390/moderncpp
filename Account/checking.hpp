//
//  checking.hpp
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 19/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#ifndef checking_hpp
#define checking_hpp

#include <stdio.h>
#include "account.hpp"

class Checking : public Account{
public:
//Checking(const string &name, float amount);
    using Account::Account;  //oohh my my ...this is great
    ~Checking();
    void withdraw(float amount);
};

#endif /* checking_hpp */
