//
//  main.cpp
//  const
//
//  Created by Hrishikesh Chaudhari on 29/09/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//
#include <iostream>

using namespace std;

class Person{
private:
    string name;
public:
    Person(){cout<<"Constructor called"<<endl;}
    Person(Person& other):name(other.name){cout<<"Copy Constructor called"<<endl;}
    void setName(string name){this->name = name;}
    void speak() const{cout<<"My name is " <<name <<endl;}
};

#include <iostream>

int main(int argc, const char * argv[]) {
    
    Person p1;
    p1.setName("hrishi");
    
    Person p2 = p1;
    
    p1.speak();
    p2.speak();
    
    p2.setName("Bob");
    p2.speak();
    
    
    
    return 0;
}
