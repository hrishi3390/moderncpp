//
//  ring.hpp
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 06/10/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#ifndef ring_hpp
#define ring_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

template <class T>

class ring {
private:
    T text;
    int sizeOfBuffer;
    int pos;
    T *ringBuff;
    
public:
    ring(int size):sizeOfBuffer(size),pos(0){
        ringBuff = new T[sizeOfBuffer];
    }
    
    ~ring(){
        delete [] ringBuff;
    }
    
public:
    T get(int);
    void add(T text);
    
    int size(){
        return sizeOfBuffer;
    }
};

#endif /* ring_hpp */
