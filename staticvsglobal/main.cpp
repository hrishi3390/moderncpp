//
//  main.cpp
//  staticvsglobal
//
//  Created by Hrishikesh Chaudhari on 12/12/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include "another.h"

#include <stdio.h>

void staticDemo()
{
    static int i;
    {
        static int i = 1;
        printf("%d ", i);
        i++;
    }
    printf("%d\n", i);
    i++;
}


int global=1;
static int stat=0;
using namespace std;

void s1()
{
    cout<< "The value of global variable is "<<++global<<endl;
    cout<< "static a is: "<<sc.a  << endl;
}

void s2()
{
    static int s=0;
    cout<< "The value of static variable is "<<++s<<endl;
    cout<< "The value of stat variable is "<<++stat<<endl;
    
}
int main(int argc, const char * argv[]) {
    
  //  s1();
    
    staticDemo();
    staticDemo();

//    s2();
//    s2();
//    s2();
//    anotherP1();
    
    return 0;
}
