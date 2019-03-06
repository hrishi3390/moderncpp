//
//  main.cpp
//  newOperator
//
//  Created by Hrishikesh Chaudhari on 29/09/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
using namespace std;

class Person
{
private:
    string name;
public:
    
    Person(){cout<<"constructor called"<<endl;}
    
    ~Person(){cout << "destructor called"<<endl;}
    
    void setName(string name){this->name = name;}
    
    void sayName(){cout<<"Your name is "<<name<<endl;}
    
};

int main(int argc, const char * argv[]) {
   

    Person *pValue = new Person[10];
    pValue->setName("Bob");
    pValue->sayName();
    
    delete [] pValue;
    
    return 0;
}
