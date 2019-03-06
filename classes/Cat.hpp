//
//  Cat.hpp
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 29/09/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>
#include <iostream>
using namespace std;


class Animal{
    int id;
public:
    Animal();
    virtual void speak(){}
};


class Cat : public Animal {
private:
    int i;
    void speak();
public:
    void jump();
    int cal(int&) const;
    Cat();
    ~Cat();
};

void check(Cat &other);
void check(Cat &&other);


#endif /* Cat_hpp */
