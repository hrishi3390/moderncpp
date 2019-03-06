//
//  Cat.cpp
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 29/09/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include "Cat.hpp"
#include <iostream>

using namespace std;

Animal :: Animal()
{
    cout<< "The base is Animal: "<<endl;
}

void Cat::speak(){
        cout<<"cat says meewww.."<<endl;
}

Cat::Cat(){
    cout<<"cat constructor is called"<<endl;
}

void Cat::jump(){
    cout<<"Jumping of boook shelvs"<<endl;
}

Cat::~Cat(){
    cout<<"cat destroyed"<<endl;
}

void check(Cat &other)
{
    cout<<"This is lvalue reference"<<endl;
}

void check(Cat &&other)
{
    cout<<"This is rvalue reference"<<endl;
}