//
//  main.cpp
//  Account
//
//  Created by Hrishikesh Chaudhari on 18/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include "account.hpp"
#include "checking.hpp"

int main(int argc, const char * argv[]) {
   
    Checking a("hrishi", 1000);
    
    //a.deposit(200);
    a.withdraw(980);
    
    cout<<a.getBalance()<<endl;
    
    return 0;
}
