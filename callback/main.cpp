//
//  main.cpp
//  callback
//
//  Created by Hrishikesh Chaudhari on 20/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
using namespace std;

using comparator = bool (*)(int, int);

template<typename T, int size>
void sort(T (&pArr)[size], comparator comp){
    for(int i =0 ;i < size -1; i++){
        for(int j = 0 ; j< size -1; j++)
        {
            if(comp(pArr[j] ,pArr[j+1]))
            {
                T temp = move(pArr[j]);
                pArr[j] = move(pArr[j+1]);
                pArr[j+1] = move(temp);
            }
        }
    }
}

bool comp(int a , int b){
    return  a > b ? a : b;
}

bool comp1(int a , int b){
    return  a < b ? a : b;
}

int main(int argc, const char * argv[]) {
   
    int a[] = {6,4,3,2,1};
    sort(a,comp1);
    
    for(auto &element: a)
        cout<< element<<"\t";
    
    return 0;
}
