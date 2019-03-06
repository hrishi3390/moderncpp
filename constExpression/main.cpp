//
//  main.cpp
//  constExpression
//
//  Created by Hrishikesh Chaudhari on 21/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
using namespace  std;

constexpr int Add(int x, int y) {
    return x + y;
}

inline int Add1(int a, int b){
    return a + b;
}

int main(int argc, const char * argv[]) {
    
    cout<<Add(2,3)<<endl;
    cout<<Add1(3,5)<<endl;
    return 0;
}
