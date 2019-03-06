//
//  Integer.cpp
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 20/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include "Integer.hpp"
#include <iostream>

using namespace std;

//class Integer{
//    int *ptrInteger;
//public:
//    Integer();
//    
//    Integer(int);
//    
//    Integer(const Integer &);
//    
//    //Move constructor
//    Integer(Integer &&);
//    
//    int getValue();
//    
//    int setValue();
//};

Integer :: Integer(){
    cout<<"Integer() called"<<endl;
    ptrInteger = new int(0);
}

Integer :: Integer(int value){
    cout<<"Integer(int) called"<<endl;
    
    ptrInteger = new int(value);
}

Integer :: Integer(const Integer &other)
{
    cout<<"Integer(const Integer &) called"<<endl;
    
    ptrInteger = new int(*other.ptrInteger);
}

Integer :: Integer(Integer &&other)
{
    cout<<"Integer(Integer &&) called"<<endl;
    ptrInteger = other.ptrInteger; //copied the address -- shallow copy
    other.ptrInteger = nullptr;
}

Integer :: ~Integer(){
    cout<<" ~Integer() called"<<endl;
    delete ptrInteger;
}
