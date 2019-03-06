//
//  savings.hpp
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 19/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#ifndef savings_hpp
#define savings_hpp

#include <stdio.h>
#include "account.hpp"


class Savings : public Account{
    float m_rate;
    
public:
    Savings();
    Savings(const string &name, float balance, float rate);
    float getInterestRate()const;
    void accumulateInterest();
    
};


#endif /* savings_hpp */
