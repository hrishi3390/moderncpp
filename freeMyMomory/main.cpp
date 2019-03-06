//
//  main.cpp
//  freeMyMomory
//
//  Created by Hrishikesh Chaudhari on 05/02/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>

using namespace std;

void freeMyPointer(int **ptr)
{
    
    free(*ptr);
    *ptr = nullptr;
}

int main(int argc, const char * argv[]) {
   
    
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    
    freeMyPointer(&ptr);
   // ptr = NULL;
    
    cout<<*ptr<<endl;
    return 0;
}
