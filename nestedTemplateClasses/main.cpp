//
//  main.cpp
//  nestedTemplateClasses
//
//  Created by Hrishikesh Chaudhari on 06/10/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include "ring.cpp"

int main(int argc, const char * argv[]) {
   
    ring<string> textring(3);
    
    textring.add("one");
    textring.add("two");
    textring.add("three");
    textring.add("four");
    
    for(int i=0; i<textring.size();i++)
        cout<<textring.get(i)<<endl;
    
}
