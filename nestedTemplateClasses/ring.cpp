//
//  ring.cpp
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 06/10/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include "ring.hpp"
template <class T>

void ring<T>::add(T value)
{
    ringBuff[pos++] = value;
    
    if(pos == sizeOfBuffer)
        pos = 0;
    
}

template <class T>
T ring<T>::get(int pos)
{
    return ringBuff[pos];
}

