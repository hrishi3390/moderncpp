//
//  main.cpp
//  maps
//
//  Created by Hrishikesh Chaudhari on 28/09/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
   
//    map<string, int> ages;
//    vector<bool> v{false, false, false};
//    
//    ages["b"] = 27;
//    ages["c"] = 31;
//    ages.insert(make_pair("a", 43));
//    ages.insert(pair<string, int>("g",23));
//    ages.insert(pair<string, int>("g",23));
//    
//    map<string, int> age;
//    age["didi"] = 33;
//    age["hrishi"] = 29;
//     age["didi"] = 35;
//
//    age.insert(make_pair("h", 23));
//    int max = INT_MIN;
//    
//    string
//    for(auto it = age.begin(); it!= age.end();it++)
//    {
//        if(it->second > max)
//        {
//            max = it->second;
//            
//        }
//    }
//    
    char a[] = "sdfsfsfffsfsfs";
    
    int n = (int)strlen(a);
    sort(a,a+n);
    
    printf("%s",a);
//    
//    for(const auto x : v)
//    {
//        //x = true;
//       
//    }
//    
    
    
//    if(ages.find("Vicky") != ages.end())
//        cout<<ages["Vicky"]<<endl;
//    else
//        cout<<"Vicky not found"<<endl;
//    
//    for(map<string, int>::iterator it= ages.begin(); it!= ages.end();it++)
//        cout<<it->first<<":"<<it->second<<endl;
    
    return 0;
}
