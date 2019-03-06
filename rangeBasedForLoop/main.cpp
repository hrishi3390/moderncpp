//
//  main.cpp
//  rangeBasedForLoop
//
//  Created by Hrishikesh Chaudhari on 17/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    
    int arr[] = {1,2,3,4,5};
    
    for(auto &i : arr)
    {
        cout<< i<<endl;
    }
    return 0;
}
