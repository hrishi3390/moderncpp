//
//  another.h
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 12/12/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#ifndef another_h
#define another_h
#include <iostream>
using namespace std;
static int count;
int z;
struct staticClass{
    int a;
    staticClass(int a): a(a){
        cout<<"staticclass is called "<<" a ="<<a<<" add: "<<&a<<endl;
    }
};
extern int global;

static staticClass sc(10);
//static int a;
void anotherP1();

#endif /* another_h */
