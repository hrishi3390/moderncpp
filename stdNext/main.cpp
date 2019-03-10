//
//  main.cpp
//  stdNext
//
//  Created by Hrishikesh Chaudhari on 10/03/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <iterator>
#include <deque>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    

    
    deque<int> v1 = { 1, 2, 3, 4, 5, 6, 7 };
    
    // Declaring another container
    deque<int> v2 = { 8, 9, 10 };
    
    // Declaring an iterator
    deque<int>::iterator i1;
    
    // i1 points to 1
    i1 = v1.begin();
    
    // Declaring another iterator to store return
    // value and using std::next
    deque<int>::iterator i2;
    i2 = std::next(i1);
    
    cout<<*i2;
    return 0;
}
