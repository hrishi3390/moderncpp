//
//  Person.hpp
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 29/09/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Person{
private:
    string name;
    int age;
public:
    Person():name("undefined"),age(0){}
    Person(string name):name(name), age(0){}
    Person(string name, int age):name(name), age(age){}
    string toString();
};


#endif /* Person_hpp */
