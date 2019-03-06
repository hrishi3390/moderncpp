//
//  main.cpp
//  structAndUnion
//
//  Created by Hrishikesh Chaudhari on 27/12/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>

using namespace std;

struct a{
    int a;
    char b;
};

union b{
    int a;
    char b;
};

int main(int argc, const char * argv[]) {
    
    a g;
    b d;
    char c;
   // cout<<sizeof(c)<<endl;
    
    d.b = 8;
    
    cout<<d.b<<endl;
    
    cout<< sizeof(g)<<"\t"<<sizeof(d)<<endl;
       return 0;
}
