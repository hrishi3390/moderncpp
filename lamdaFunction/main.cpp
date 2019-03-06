//
//  main.cpp
//  lamdaFunction
//
//  Created by Hrishikesh Chaudhari on 21/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
using namespace std;

struct fucn{
    int operator()(int x, int y){
        return x + y;
    }
};
int main(int argc, const char * argv[]) {
    
    fucn f;
    cout<<"from function pointer "<<f(10,10)<<endl;
    int i = 100;
    auto fn = [=](){
        cout<<"Welcome to Lambda functions"<<endl;
        cout<<i<<endl;
    };
    
    fn();
    int a;
    
    
    //polymorphic lambda
    auto sum = [a](int  a , int b) noexcept(true){
        a++;
        int *f = new int(a);
        return a + b;
    };
    
    cout<<sum(2,4)<<endl;
    
    return 0;
}
