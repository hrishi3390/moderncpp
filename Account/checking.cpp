//
//  checking.cpp
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 19/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include "checking.hpp"

//Checking :: Checking(const string &name, float amount):Account(name, amount)
//{}

Checking :: ~Checking(){
    
}
void Checking :: withdraw(float amount)
{
    if(balance - amount > 50)
        Account::withdraw(amount);
    else
        cout<< "You cannot withdraw the money"<<endl;

}

