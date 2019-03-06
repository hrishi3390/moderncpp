//
//  main.cpp
//  static
//
//  Created by Hrishikesh Chaudhari on 29/09/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
using namespace std;

class Person
{
private:
    int static count;
    int static const MAX =10;
    int id;

    
public:
    int getCount(){return id;}
    int getMax(){return MAX;}
    Person(){
        id = count++;
    }
};

int Person::count = 0;


int main(int argc, const char * argv[]) {
    Person p1;
    cout<<p1.getCount()<<endl;
    cout<<p1.getMax()<<endl;
    
    Person p2;
    cout<<p2.getCount()<<endl;
       return 0;
}
