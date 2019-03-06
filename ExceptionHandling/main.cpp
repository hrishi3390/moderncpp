//
//  main.cpp
//  ExceptionHandling
//
//  Created by Hrishikesh Chaudhari on 19/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Test {
    
public:
    Test(){
        cout<<"Test() called"<<endl;
    }
    
    ~Test(){
        cout<< "~Test() called"<<endl;
    }
    
    
};

int processRecords(int count){
    
    unique_ptr<Test> t (new Test());
    
    if(count < 10)
        throw out_of_range("Memory allocation needs more that 10 elements");
   
    vector<int> p;
    p.reserve(count);
  
    
    vector<int> pArray;
    pArray.reserve(count);

    
    for(int i =0 ;i<count ; i++)
        pArray.push_back(i);
    
   
    
    return 0;
    
}


int main(int argc, const char * argv[]) {
   
    try{
        processRecords(5);
    }
    catch(exception &ex)
    {
        cout<<"Excpetion: "<<ex.what()<<endl;
    }
    
    
    
    
    return 0;
}
