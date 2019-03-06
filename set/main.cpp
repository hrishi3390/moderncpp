//
//  main.cpp
//  set
//
//  Created by Hrishikesh Chaudhari on 30/09/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <set>
#include <map>
#include <unordered_set>
using namespace std;


int main(int argc, const char * argv[]) {
   
    cout<<"Hello world"<<endl;
    
    unordered_set <int> numbers;
    multiset<int> g;
    
    g.insert(1);
     g.insert(5);
     g.insert(1);
     g.insert(4);
     g.insert(1);
     g.insert(2);
    
    auto it = g.equal_range(1);
    
    while(it.first != it.second)
        cout<< *it.first++;
    
    cout<<endl;
    numbers.insert(40);
    numbers.insert(30);
    numbers.insert(20);
    numbers.insert(10);
    
    for(auto &n : numbers)
        cout<<n<<endl;
    int num = 10;
    
    if(numbers.find(num) == numbers.end())
    {
        numbers.insert(10);
    }
    else
        cout<<"Number already present"<<endl;

        
    return 0;
}
