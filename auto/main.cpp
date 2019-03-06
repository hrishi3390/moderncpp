//
//  main.cpp
//  auto
//
//  Created by Hrishikesh Chaudhari on 01/10/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
int main(int argc, const char * argv[]) {

    
    auto texts = {"one","two","three"};
    
    
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    
    for(auto t:numbers)
        cout<<t <<endl;
    
    for(auto text:texts)
        cout<<text<<endl;
    
    return 0;
}
