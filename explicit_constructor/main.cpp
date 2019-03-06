//
//  main.cpp
//  explicit_constructor
//
//  Created by Hrishikesh Chaudhari on 03/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
using namespace std;


class c{
    int value{0};
    c();
public:
    //explicit c(const int & value) : value(value) {}
    c(const int & value) : value(value) {}
    void setValue(const int &value) { this->value = value; }
    int getValue() const {return value;}
    
};

void func(const c &o){
    cout<<"The value is "<<o.getValue()<<endl;
}
int main(int argc, const char * argv[]) {
    c c1 = 'x';
    
    cout<<c1.getValue()<<endl;
    
    func('x');
    
    return 0;
}
