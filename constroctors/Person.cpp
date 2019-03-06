//
//  Person.cpp
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 29/09/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include "Person.hpp"
#include <sstream>

string Person :: toString()
{
    stringstream ss;
    ss << "Name is ";
    ss<<name;
    ss<<"; Age is ";
    ss<<age;
    
    return ss.str();
    
}