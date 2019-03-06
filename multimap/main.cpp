//
//  main.cpp
//  multimap
//
//  Created by Hrishikesh Chaudhari on 30/09/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <map>
#include <unistd.h>

using namespace std;

int main(int argc, const char * argv[]) {
   
    sleep(10);
    multimap<int, string> lookup;
    
    lookup.insert(make_pair(10, "hrishi"));
    lookup.insert(make_pair(10, "Bob"));
    lookup.insert(make_pair(12, "Ross"));
    
    
    for(multimap<int, string> :: iterator it = lookup.begin(); it != lookup.end(); it++)
        cout<<it->first<<":"<<it->second<<endl;
    
    
    cout<<"__________________________"<<endl;
    
    auto its = lookup.equal_range(10);
    
    for(multimap<int, string> :: iterator it = its.first; it != its.second; it++)
        cout<<it->first<<":"<<it->second<<endl;
    
    return 0;
}
