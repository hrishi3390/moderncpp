//
//  main.cpp
//  template
//
//  Created by Hrishikesh Chaudhari on 19/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>

using namespace std;

//int ArraySum(int *pArr, int arrSize); //Returns the sum of array elements
template<typename T, int size>
T ArraySum(T (&pArr)[size])
{
    int sum = 0;
    cout<<typeid(T).name()<<endl;
    for(int i = 0 ;i< size;i++)
        sum +=pArr[i];
    return sum;
}

template <typename T>
T max1(T a , T b){
    return a > b ? a : b;
}

template <> const char * max1(const char *x , const char *y){
    return strcmp(x, y)> 0 ? x: y;
}

int main(int argc, const char * argv[]) {
    
    auto m = max1(15.3,3.3);
    float a[] = {1,3,4,5,6,7};
    cout<< ArraySum(a)<<endl;
    
 //   float (&sr)[6] = a;
    
    
    const char *c1 {"B"};
    const char *c2 {"A"};
    
    auto c  = max1(c1, c2);
    
    
    cout<< c <<endl;
    
    
    
//    int (*fntr)(int, int) = max1;
//    fntr(3,4);
//    cout<< m <<endl;
    return 0;
}

