//
//  vectorImpl.cpp
//  CaveOfPrograming
//
//  Created by Hrishikesh Chaudhari on 27/09/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include "vectorImpl.hpp"
using namespace std;

void basicVectorImpl(){
   
    vector<string> strings;
    
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    
    vector<string>::iterator it;
    
    for(auto it: strings)
        cout<<it<<endl;
    
}