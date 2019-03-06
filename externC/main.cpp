//
//  main.cpp
//  externC
//
//  Created by Hrishikesh Chaudhari on 03/02/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
extern "C" {
#include "add.h"
}
#include "stat.hpp"
using namespace std;

int g = 12;

class A{
    int a, b;
    
public:
    
    A(int a, int b): a(a), b(b){
        
    }
    int getA(){
        return a;
    }
    
    virtual void print(int a){
        cout<<"class A: "<<a<<endl;
    }
    
    int getB(){
        return b;
    }
    
    
    
    
};

class B : public A{
private:
    int d;
    
public:
    B(int a, int b, int d):A(a,b), d(d){}
    int getD(){
        return d;
    }
    
    void print(int b){
        cout<<"Class B: d "<<d<<endl;
    }
    
};

//static int st;
int main(int argc, const char * argv[]) {
    
    static int c;
    
    A *a = new B(5,3,5);
    
    
    a->print(3);
    
    
   // int a =10, b = 19;
    
//    run();
//    run1();
    
    //std::cout<< add(a,b);
    return 0;
}
