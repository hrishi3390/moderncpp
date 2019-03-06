//
//  main.cpp
//  test
//
//  Created by Hrishikesh Chaudhari on 02/02/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>

char *merge(char *a, char *b, int lenA, int lenB)
{
    
    char* mergeString = (char *) malloc(lenA + lenB);
    
    int j = 0;
    int k = 0;
    int i = 0;
    int l = 0;
    for( i =0 ; i< lenA*2; i++)
    {
        if(i%2 == 0)
            mergeString[l++] = a[j++];
        else
            mergeString[l++] = b[k++];
    }
    
    for( int m =0 ; m< lenB - lenA ; m++)
        mergeString[l++] = b[k++];
    
    return  mergeString;
}

char* mergeStrings(char* a, char* b) {
    
    int lengthA = (int)strlen(a);
    int lengthB = (int)strlen(b);
    
    char *mergedString;
    
   // if(lengthA <= lengthB)
   // {
        mergedString = merge(a, b, lengthA, lengthB);
   // }
   // else
    //    mergedString = merge(b, a, lengthB, lengthA);
    
    return mergedString;
}

int main(int argc, const char * argv[]) {
    
    char a[] = "abeerwer";
    char b[] = "zsd";
    
    std::cout<< mergeStrings(a,b);
    
    

}


