//
//  Integer.hpp
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 20/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#ifndef Integer_hpp
#define Integer_hpp

#include <stdio.h>

class Integer{
    int *ptrInteger;
public:
    Integer();
    
    Integer(int);
    
    Integer(const Integer &);
    
    Integer(Integer &&);
    
    ~Integer();
    
    int getValue();
    
    int setValue();
};

#endif /* Integer_hpp */
