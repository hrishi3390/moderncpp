//
//  main.cpp
//  constroctors
//
//  Created by Hrishikesh Chaudhari on 29/09/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include "Person.hpp"

class Integer{
public:
    int *ptr;
    int a;
    
public:
    Integer() = default;
    Integer(int value)
    {
        cout<<"constructor with value"<<endl;
        ptr = new int(value);
    }
    Integer(const Integer &other){
        cout<<"copy constructor is called"<<endl;
        ptr = new int(*other.ptr);
        this->a = 16;
    }
    
    int getValue(){
        
    return *ptr;
    }
    
    
};
void process(Integer ptr)
{
    cout<<"process is starged"<<endl;
    }


int main(int argc, const char * argv[]) {
    
   
    Integer a(10);
    cout<<"Before process"<<endl;
    //process(a);
    
    cout<< a.getValue();
    
    return 0;
}
