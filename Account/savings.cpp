//
//  savings.cpp
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 19/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

//
//class Savings : public Account{
//    float m_rate;
//    
//public:
//    Savings();
//    Savings(float rate);
//    float getInterestRate()const;
//    void accumulateInterest();
//    
//};

#include "savings.hpp"

Savings::Savings(const string &name, float balance, float rate): Account(name,balance){
    
}

void Savings::accumulateInterest(){
    balance += balance*m_rate;
}

float Savings::getInterestRate() const{
    return m_rate;
}