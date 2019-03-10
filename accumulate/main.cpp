//
//  main.cpp
//  accumulate
//
//  Created by Hrishikesh Chaudhari on 10/03/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    
    vector<int> v1 {1,2,3,4,5,6,7,8};
    
    int sum = accumulate(v1.begin(), v1.end(),0);
    
    cout<<sum<<endl;
    
    int product = accumulate(v1.begin(), v1.end(), 1, multiplies<int>());
    
    cout<<product<<endl;
    
    auto dash_fold = [](string a, int b){
        
        return move(a) + "-" + to_string(b);
    };
    
    string s = accumulate(next(v1.begin()), v1.end(), to_string(v1[0]),dash_fold);
    
    cout<<s<<endl;
 
    return 0;
}
