//
//  main.cpp
//  prefixpostfix
//
//  Created by Hrishikesh Chaudhari on 19/02/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
//        int arr[] = {10, 20};
//        int *p = arr;
//        ++*p;
//        printf("arr[0] = %d, arr[1] = %d, *p = %d",
//               arr[0], arr[1], *p);
    
//    int arr[] = {10, 20};
//    int *p = arr;
//    *p++;
//    printf("arr[0] = %d, arr[1] = %d, *p = %d",
//           arr[0], arr[1], *p);
    
        int arr[] = {10, 20};
        int *p = arr;
        *++p;
        printf("arr[0] = %d, arr[1] = %d, *p = %d",
               arr[0], arr[1], *p);
    
    return 0;
}

