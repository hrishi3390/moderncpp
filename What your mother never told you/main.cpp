//
//  main.cpp
//  What your mother never told you
//
//  Created by Hrishikesh Chaudhari on 03/02/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

//extraction and insertion operator
#include <iostream>
using namespace std;


class A{
private:
    virtual void print(){
        cout<<"print in A"<<endl;
    }
    
public:
   virtual void pub(){
        cout<<"pub in A"<<endl;
    }
};

class B : public A{
private:
    void pub(){
        cout<<"pub in B"<<endl;
    }
    
public:
    void print(){
        cout<<"print in B"<<endl;
    }

};

int main(int argc, const char * argv[]) {
    
    
    B b;
    A *ptr = &b;
    
    ptr->pub();
   // ptr->print();
    

    
    return 0;
}
