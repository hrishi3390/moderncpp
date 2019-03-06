//
//  main.cpp
//  lamdaExpression
//
//  Created by Hrishikesh Chaudhari on 14/10/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>

using namespace std;


class Test{
private:
    int one{1};
    int two{2};
    
public:
    void run(){
        
        int three{3};
        int four{4};
        
        auto pLamda = [=](){
            
            cout<<one<<endl;
            cout<<two<<endl;
            cout<<three<<endl;
            cout<<four<<endl;
        };
        
        pLamda();
        
    }
    
};

void test(void (*pFunt)())
{
    pFunt();
}

void runDivide(double (*divide)(double, double))
{
    cout<<divide(19.2,34.3)<<endl;
    
}

int main(int argc, const char * argv[]) {
    
    int one = 1;
    int two = 2;
    int three =3;
    
    
    
     [one](){ cout<<one<<endl;}();
    
    [=](){ cout<<one<<" ,"<<two<<" ,"<<three<<endl;}();
    
   // test(funt);
    
    
    
    
    auto pDivide = [](double a, double b) -> double{
        if(b == 0)
            return 0;

        return a/b;
    };
    
    cout<< pDivide(10.5,5.0)<<endl;
    
    runDivide(pDivide);
    
    
    Test t1;
    t1.run();
    
    return 0;
}
