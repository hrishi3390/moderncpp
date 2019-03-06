//
//  main.cpp
//  typecasting
//
//  Created by Hrishikesh Chaudhari on 22/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int a = 10;
    int b =3;
    
    char *p = static_cast<char*>(b);
    //static cast checks if its valid casting or not
    float c = static_cast<float>(a)/b;
    cout<<c<<endl;
    return 0;
}
